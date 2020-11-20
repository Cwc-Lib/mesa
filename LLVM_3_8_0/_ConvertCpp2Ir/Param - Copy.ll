
target triple = "i686-pc-windows-gnu"

@_ZZ4fAddiiE3sds = internal global i32 54, align 4

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
  %2 = load i32, i32* @_ZZ4fAddiiE3sds, align 4
  %add1 = add nsw i32 %add, %2
  ret i32 %add1
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


