#include <iostream>

using namespace std;

#include <windows.h>
#include <imagehlp.h>
#include <stdio.h>
#include <signal.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int  divide_by_zero();
void cause_segfault();
void stack_overflow();
void infinite_loop();
void illegal_instruction();
void cause_calamity();

LONG WINAPI windows_exception_handler(EXCEPTION_POINTERS * ExceptionInfo);


char const * icky_global_program_name;

void set_signal_handler()
{
  SetUnhandledExceptionFilter(windows_exception_handler);
}

/*
int main(int argc, char * argv[])
{
  (void)argc;

 //store off program path so we can use it later
  icky_global_program_name = argv[0];

  set_signal_handler();

  cause_calamity();

  puts("OMG! Nothing bad happend!");
  return 0;
}*/

void cause_calamity()
{
  // uncomment one of the following error conditions to cause a calamity of your choosing!

  // (void)divide_by_zero();
  // cause_segfault();
  // assert(false);
  // infinite_loop();
  // illegal_instruction();
 // stack_overflow();
}

int divide_by_zero()
{
  int a = 1;
  int b = 0;
  return a / b;
}

void cause_segfault()
{
  int * p = (int*)0x12345678;
  *p = 0;
}

void stack_overflow();
void stack_overflow()
{
  int foo[1000]; //allocate something big on the stack
  (void)foo;
  stack_overflow();
}

/* break out with ctrl+c to test SIGINT handling */
void infinite_loop()
{
  while(1) {};
}

void illegal_instruction()
{
  // I couldn't find an easy way to cause this one, so I'm cheating
  raise(SIGILL);
}



// Resolve symbol name and source location given the path to the executable and an address
int addr2line(char const * const program_name, void const * const addr)
{
  char addr2line_cmd[512] = {0};

  /* have addr2line map the address to the relent line in the code */
  #ifdef __APPLE__
    /* apple does things differently... */
    sprintf(addr2line_cmd,"atos -o %.256s %p", program_name, addr);
  #else
    printf("\nAdr: %p  ",addr);
    sprintf(addr2line_cmd,"addr2line -f -p -e %.256s %p", program_name, addr);
  #endif

  // This will print a nicely formatted string specifying the function and source line of the address
  return system(addr2line_cmd);
}



void windows_print_stacktrace(CONTEXT* context){
  SymInitialize(GetCurrentProcess(), 0, true);

  STACKFRAME frame = { 0 };

  /* setup initial stack frame */

  frame.AddrPC.Offset         = context->Eip;
  frame.AddrPC.Mode           = AddrModeFlat;
  frame.AddrStack.Offset      = context->Esp;
  frame.AddrStack.Mode        = AddrModeFlat;
  frame.AddrFrame.Offset      = context->Ebp;
  frame.AddrFrame.Mode        = AddrModeFlat;

/*
  frame.AddrPC.Offset         = context->Rip;
  frame.AddrPC.Mode           = AddrModeFlat;
  frame.AddrStack.Offset      = context->Rsp;
  frame.AddrStack.Mode        = AddrModeFlat;
  frame.AddrFrame.Offset      = context->Rbp;
  frame.AddrFrame.Mode        = AddrModeFlat;
*/

  while (StackWalk(IMAGE_FILE_MACHINE_I386 ,
                   GetCurrentProcess(),
                   GetCurrentThread(),
                   &frame,
                   context,
                   0,
                   SymFunctionTableAccess,
                   SymGetModuleBase,
                   0 ) )
  {
    addr2line(icky_global_program_name, (void*)frame.AddrPC.Offset);
  }

  SymCleanup( GetCurrentProcess() );
}


LONG WINAPI windows_exception_handler(EXCEPTION_POINTERS * ExceptionInfo)
{
  switch(ExceptionInfo->ExceptionRecord->ExceptionCode)
  {
    case EXCEPTION_ACCESS_VIOLATION:
      fputs("Error: EXCEPTION_ACCESS_VIOLATION\n", stderr);
      break;
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:
      fputs("Error: EXCEPTION_ARRAY_BOUNDS_EXCEEDED\n", stderr);
      break;
    case EXCEPTION_BREAKPOINT:
      fputs("Error: EXCEPTION_BREAKPOINT\n", stderr);
      break;
    case EXCEPTION_DATATYPE_MISALIGNMENT:
      fputs("Error: EXCEPTION_DATATYPE_MISALIGNMENT\n", stderr);
      break;
    case EXCEPTION_FLT_DENORMAL_OPERAND:
      fputs("Error: EXCEPTION_FLT_DENORMAL_OPERAND\n", stderr);
      break;
    case EXCEPTION_FLT_DIVIDE_BY_ZERO:
      fputs("Error: EXCEPTION_FLT_DIVIDE_BY_ZERO\n", stderr);
      break;
    case EXCEPTION_FLT_INEXACT_RESULT:
      fputs("Error: EXCEPTION_FLT_INEXACT_RESULT\n", stderr);
      break;
    case EXCEPTION_FLT_INVALID_OPERATION:
      fputs("Error: EXCEPTION_FLT_INVALID_OPERATION\n", stderr);
      break;
    case EXCEPTION_FLT_OVERFLOW:
      fputs("Error: EXCEPTION_FLT_OVERFLOW\n", stderr);
      break;
    case EXCEPTION_FLT_STACK_CHECK:
      fputs("Error: EXCEPTION_FLT_STACK_CHECK\n", stderr);
      break;
    case EXCEPTION_FLT_UNDERFLOW:
      fputs("Error: EXCEPTION_FLT_UNDERFLOW\n", stderr);
      break;
    case EXCEPTION_ILLEGAL_INSTRUCTION:
      fputs("Error: EXCEPTION_ILLEGAL_INSTRUCTION\n", stderr);
      break;
    case EXCEPTION_IN_PAGE_ERROR:
      fputs("Error: EXCEPTION_IN_PAGE_ERROR\n", stderr);
      break;
    case EXCEPTION_INT_DIVIDE_BY_ZERO:
      fputs("Error: EXCEPTION_INT_DIVIDE_BY_ZERO\n", stderr);
      break;
    case EXCEPTION_INT_OVERFLOW:
      fputs("Error: EXCEPTION_INT_OVERFLOW\n", stderr);
      break;
    case EXCEPTION_INVALID_DISPOSITION:
      fputs("Error: EXCEPTION_INVALID_DISPOSITION\n", stderr);
      break;
    case EXCEPTION_NONCONTINUABLE_EXCEPTION:
      fputs("Error: EXCEPTION_NONCONTINUABLE_EXCEPTION\n", stderr);
      break;
    case EXCEPTION_PRIV_INSTRUCTION:
      fputs("Error: EXCEPTION_PRIV_INSTRUCTION\n", stderr);
      break;
    case EXCEPTION_SINGLE_STEP:
      fputs("Error: EXCEPTION_SINGLE_STEP\n", stderr);
      break;
    case EXCEPTION_STACK_OVERFLOW:
      fputs("Error: EXCEPTION_STACK_OVERFLOW\n", stderr);
      break;
    default:
      fputs("Error: Unrecognized Exception\n", stderr);
      break;
  }
  fflush(stderr);
  // If this is a stack overflow then we can't walk the stack, so just show where the error happened
  if (EXCEPTION_STACK_OVERFLOW != ExceptionInfo->ExceptionRecord->ExceptionCode){
      windows_print_stacktrace(ExceptionInfo->ContextRecord);
  }
  else
  {
      addr2line(icky_global_program_name, (void*)ExceptionInfo->ContextRecord->Eip);
    //  addr2line(icky_global_program_name, (void*)ExceptionInfo->ContextRecord->Rip);
  }

  return EXCEPTION_EXECUTE_HANDLER;
}


