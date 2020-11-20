; ModuleID = 'Param.cpp'
target datalayout = "e-m:e-p:32:32-i64:64-f80:32-n8:16:32-a:0:32-S32"
target triple = "i686-pc-windows-gnu-elf"

$_Z6fAddIdv = comdat any

$_ZZ6fAddIdvE4_nId = comdat any

@nGood2 = global i32 0, align 4
@nGood = global i32 0, align 4
@.str = private unnamed_addr constant [15 x i8] c"\0AMy malloc %s \00", align 1
@.str.2 = private unnamed_addr constant [20 x i8] c"\0ATest goood yes %d \00", align 1
@_nGlobal = global i32 565, align 4
@_ZL5_nAss = internal global i32 6, align 4
@_ZL5myStr = internal constant [18 x i8] c"A Fuckin g string\00", align 1
@_ZZ6fAddIdvE4_nId = linkonce_odr global i32 0, comdat, align 4
@.str.3 = private unnamed_addr constant [12 x i8] c"\0AAdd id %d \00", align 1
@llvm.global_ctors = appending global [1 x { i32, void ()*, i8* }] [{ i32, void ()*, i8* } { i32 65535, void ()* @_GLOBAL__sub_I_Param.cpp, i8* null }]

; Function Attrs: nounwind
define internal void @__cxx_global_var_init() #0 {
entry:
  %call = call i32 @_Z6fAddIdv()
  store i32 %call, i32* @nGood2, align 4
  ret void
}

; Function Attrs: inlinehint nounwind
define linkonce_odr i32 @_Z6fAddIdv() #1 comdat {
entry:
  %0 = load i32, i32* @_ZZ6fAddIdvE4_nId, align 4
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.3, i32 0, i32 0), i32 %0)
  %1 = load i32, i32* @_ZZ6fAddIdvE4_nId, align 4
  %inc = add nsw i32 %1, 1
  store i32 %inc, i32* @_ZZ6fAddIdvE4_nId, align 4
  ret i32 %1
}

; Function Attrs: nounwind
define internal void @__cxx_global_var_init.1() #0 {
entry:
  %call = call i32 @_Z6fAddIdv()
  store i32 %call, i32* @nGood, align 4
  ret void
}

; Function Attrs: nounwind
define i32 @Jit_Main(i32 (i32)* %_dTest) #0 {
entry:
  %_dTest.addr = alloca i32 (i32)*, align 4
  %buffer = alloca i8*, align 4
  store i32 (i32)* %_dTest, i32 (i32)** %_dTest.addr, align 4
  %call = call i8* @malloc(i32 50)
  store i8* %call, i8** %buffer, align 4
  %0 = load i8*, i8** %buffer, align 4
  %arrayidx = getelementptr inbounds i8, i8* %0, i32 0
  store i8 65, i8* %arrayidx, align 1
  %1 = load i8*, i8** %buffer, align 4
  %arrayidx1 = getelementptr inbounds i8, i8* %1, i32 1
  store i8 66, i8* %arrayidx1, align 1
  %2 = load i8*, i8** %buffer, align 4
  %arrayidx2 = getelementptr inbounds i8, i8* %2, i32 2
  store i8 67, i8* %arrayidx2, align 1
  %3 = load i8*, i8** %buffer, align 4
  %arrayidx3 = getelementptr inbounds i8, i8* %3, i32 3
  store i8 0, i8* %arrayidx3, align 1
  %4 = load i8*, i8** %buffer, align 4
  %call4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @.str, i32 0, i32 0), i8* %4)
  %5 = load i32, i32* @nGood, align 4
  %call5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @.str.2, i32 0, i32 0), i32 %5)
  %6 = load i8*, i8** %buffer, align 4
  call void @free(i8* %6)
  %call6 = call i32 @outsideFunc(i32 8)
  ret i32 %call6
}

declare i8* @malloc(i32) #2

declare i32 @printf(i8*, ...) #2

declare void @free(i8*) #2

declare i32 @outsideFunc(i32) #2

; Function Attrs: nounwind
define i32 @_Z11my_func_ptri(i32 %x) #0 {
entry:
  %x.addr = alloca i32, align 4
  store i32 %x, i32* %x.addr, align 4
  %0 = load i32, i32* %x.addr, align 4
  %div = sdiv i32 %0, 2
  ret i32 %div
}

; Function Attrs: nounwind
define i32 @_Z11testFuncPtri(i32 %_nVal) #0 {
entry:
  %_nVal.addr = alloca i32, align 4
  %foo = alloca i32 (i32)*, align 4
  store i32 %_nVal, i32* %_nVal.addr, align 4
  store i32 (i32)* @_Z11my_func_ptri, i32 (i32)** %foo, align 4
  %0 = load i32 (i32)*, i32 (i32)** %foo, align 4
  %1 = load i32, i32* %_nVal.addr, align 4
  %call = call i32 %0(i32 %1)
  ret i32 %call
}

; Function Attrs: nounwind
define i32 @_Z4fAddiPFiiE(i32 %_nLeft, i32 (i32)* %_dTest) #0 {
entry:
  %_nLeft.addr = alloca i32, align 4
  %_dTest.addr = alloca i32 (i32)*, align 4
  %_nTest = alloca i32, align 4
  store i32 %_nLeft, i32* %_nLeft.addr, align 4
  store i32 (i32)* %_dTest, i32 (i32)** %_dTest.addr, align 4
  %0 = load i32, i32* @_ZL5_nAss, align 4
  %add = add nsw i32 54, %0
  %1 = load i8, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @_ZL5myStr, i32 0, i32 2), align 1
  %conv = sext i8 %1 to i32
  %add1 = add nsw i32 %add, %conv
  store i32 %add1, i32* %_nTest, align 4
  %2 = load i32 (i32)*, i32 (i32)** %_dTest.addr, align 4
  %call = call i32 %2(i32 ptrtoint (i32* @_nGlobal to i32))
  ret i32 %call
}

; Function Attrs: nounwind
define internal void @_GLOBAL__sub_I_Param.cpp() #0 {
entry:
  call void @__cxx_global_var_init()
  call void @__cxx_global_var_init.1()
  ret void
}

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { inlinehint nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.0 (branches/release_38)"}
