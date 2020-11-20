; ModuleID = 'test.c'
target triple = "i686-pc-mingw32"

declare i32 @outsideFunc(i32)

define i32 @test_func() {
entry:
  %call = call i32 @outsideFunc(i32 156)
  ret i32 %call
}

