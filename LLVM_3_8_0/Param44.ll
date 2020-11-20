; ModuleID = 'Param.cpp'
target datalayout = "e-m:e-p:32:32-i64:64-f80:32-n8:16:32-a:0:32-S32"
target triple = "i686-pc-windows-gnu-elf"

; Function Attrs: nounwind
define i32 @_Z4fAddii(i32 %_nLeft, i32 %_nRight) #0 {
entry:
  %_nLeft.addr = alloca i32, align 4
  %_nRight.addr = alloca i32, align 4
  store i32 %_nLeft, i32* %_nLeft.addr, align 4
  store i32 %_nRight, i32* %_nRight.addr, align 4
  %0 = load i32, i32* %_nLeft.addr, align 4
  %1 = load i32, i32* %_nRight.addr, align 4
  %add = add nsw i32 %0, %1
  ret i32 %add
}

; Function Attrs: nounwind
define i32 @test_func() #0 {
entry:
  %_nTotal = alloca i32, align 4
  %call = call i32 @_Z4fAddii(i32 5, i32 8)
  store i32 %call, i32* %_nTotal, align 4
  %0 = load i32, i32* %_nTotal, align 4
  %call1 = call i32 @outsideFunc(i32 %0)
  ret i32 %call1
}

declare i32 @outsideFunc(i32) #1

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.7.1 (tags/RELEASE_371/final)"}

