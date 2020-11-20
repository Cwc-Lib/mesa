; ModuleID = 'Param.cpp'
target datalayout = "e-m:e-p:32:32-i64:64-f80:32-n8:16:32-a:0:32-S32"
target triple = "i686-pc-windows-gnu-elf"

@nGood = global i32 5, align 4
@.str = private unnamed_addr constant [20 x i8] c"\0ATest goood yes %d \00", align 1
@_nGlobal = global i32 565, align 4
@_ZL5_nAss = internal global i32 6, align 4
@_ZL5myStr = internal constant [18 x i8] c"A Fuckin g string\00", align 1

; Function Attrs: nounwind
define i32 @test_func(i32 (i32)* %_dTest) #0 {
entry:
  %_dTest.addr = alloca i32 (i32)*, align 4
  store i32 (i32)* %_dTest, i32 (i32)** %_dTest.addr, align 4
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @.str, i32 0, i32 0), i32 55)
  %0 = load i32 (i32)*, i32 (i32)** %_dTest.addr, align 4
  %call1 = call i32 @_Z4fAddiPFiiE(i32 5, i32 (i32)* %0)
  ret i32 %call1
}

declare i32 @printf(i8*, ...) #1

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

; Function Attrs: norecurse nounwind
define i32 @main() #2 {
entry:
  %call = call i32 @test_func(i32 (i32)* null)
  ret i32 0
}

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

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { norecurse nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.0 (branches/release_38)"}
