; ModuleID = 'Param.c'
target datalayout = "e-m:e-p:32:32-i64:64-f80:32-n8:16:32-a:0:32-S32"
target triple = "i686-pc-windows-gnu-elf"

; Function Attrs: nounwind
define i32 @test_func() #0 {
entry:
  %call = call i32 @outsideFunc(i32 54)
  ret i32 %call
}

declare i32 @outsideFunc(i32) #1

; Function Attrs: nounwind
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  store i32 0, i32* %retval, align 4
  %call = call i32 @outsideFunc(i32 54)
  ret i32 %call
}

attributes #0 = { nounwind "disable-tail-calls"="false"  }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.0 (branches/release_38)"}
