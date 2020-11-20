; ModuleID = 'HelloWorld.cpp'
target datalayout = "e-m:e-p:32:32-i64:64-f80:32-n8:16:32-a:0:32-S32"
target triple = "i686-pc-windows-gnu-elf"

@nMainIsAlive = global i32 1, align 4
@nMainUpdateMs = global i32 16, align 4
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@.str.1 = private unnamed_addr constant [13 x i8] c"Hello World\0A\00", align 1
@_ZZ6UpdatefE7_nCount = internal global i32 0, align 4
@.str.2 = private unnamed_addr constant [12 x i8] c"Update: %d\0D\00", align 1

; Function Attrs: nounwind
define i32 @Jit_Main(i8* %_dTest) #0 {
entry:
  %_dTest.addr = alloca i8*, align 4
  store i8* %_dTest, i8** %_dTest.addr, align 4
  %call = call i32 @_Z4MainPKcji(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0)
  store i32 %call, i32* @nMainIsAlive, align 4
  %0 = load i32, i32* @nMainIsAlive, align 4
  ret i32 %0
}

; Function Attrs: nounwind
define i32 @_Z4MainPKcji(i8* %_sArg, i32 %_nId, i32 %_nCmd) #0 {
entry:
  %_sArg.addr = alloca i8*, align 4
  %_nId.addr = alloca i32, align 4
  %_nCmd.addr = alloca i32, align 4
  store i8* %_sArg, i8** %_sArg.addr, align 4
  store i32 %_nId, i32* %_nId.addr, align 4
  store i32 %_nCmd, i32* %_nCmd.addr, align 4
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.1, i32 0, i32 0))
  ret i32 1
}

; Function Attrs: nounwind
define i32 @Jit_Update() #0 {
entry:
  %0 = load i32, i32* @nMainIsAlive, align 4
  %tobool = icmp ne i32 %0, 0
  br i1 %tobool, label %if.then, label %if.end

if.then:                                          ; preds = %entry
  %call = call i32 @_Z6Updatef(float 0.000000e+00)
  store i32 %call, i32* @nMainIsAlive, align 4
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  %1 = load i32, i32* @nMainIsAlive, align 4
  ret i32 %1
}

; Function Attrs: nounwind
define i32 @_Z6Updatef(float %_nDelta) #0 {
entry:
  %_nDelta.addr = alloca float, align 4
  store float %_nDelta, float* %_nDelta.addr, align 4
  %0 = load i32, i32* @_ZZ6UpdatefE7_nCount, align 4
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.2, i32 0, i32 0), i32 %0)
  %1 = load i32, i32* @_ZZ6UpdatefE7_nCount, align 4
  %inc = add nsw i32 %1, 1
  store i32 %inc, i32* @_ZZ6UpdatefE7_nCount, align 4
  ret i32 1
}

declare i32 @printf(i8*, ...) #1

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.0 (branches/release_38)"}
