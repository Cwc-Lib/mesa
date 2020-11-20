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
define i32 @Jit_Main(i8* %_dTest) #0 !dbg !4 {
entry:
  %_dTest.addr = alloca i8*, align 4
  store i8* %_dTest, i8** %_dTest.addr, align 4
  call void @llvm.dbg.declare(metadata i8** %_dTest.addr, metadata !36, metadata !37), !dbg !38
  %call = call i32 @_Z4MainPKcji(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0), !dbg !39
  store i32 %call, i32* @nMainIsAlive, align 4, !dbg !40
  %0 = load i32, i32* @nMainIsAlive, align 4, !dbg !41
  ret i32 %0, !dbg !42
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind
define i32 @_Z4MainPKcji(i8* %_sArg, i32 %_nId, i32 %_nCmd) #0 !dbg !13 {
entry:
  %_sArg.addr = alloca i8*, align 4
  %_nId.addr = alloca i32, align 4
  %_nCmd.addr = alloca i32, align 4
  store i8* %_sArg, i8** %_sArg.addr, align 4
  call void @llvm.dbg.declare(metadata i8** %_sArg.addr, metadata !43, metadata !37), !dbg !44
  store i32 %_nId, i32* %_nId.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %_nId.addr, metadata !45, metadata !37), !dbg !46
  store i32 %_nCmd, i32* %_nCmd.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %_nCmd.addr, metadata !47, metadata !37), !dbg !48
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.1, i32 0, i32 0)), !dbg !49
  ret i32 1, !dbg !50
}

; Function Attrs: nounwind
define i32 @Jit_Update() #0 !dbg !10 {
entry:
  %0 = load i32, i32* @nMainIsAlive, align 4, !dbg !51
  %tobool = icmp ne i32 %0, 0, !dbg !51
  br i1 %tobool, label %if.then, label %if.end, !dbg !53

if.then:                                          ; preds = %entry
  %call = call i32 @_Z6Updatef(float 0.000000e+00), !dbg !54
  store i32 %call, i32* @nMainIsAlive, align 4, !dbg !56
  br label %if.end, !dbg !57

if.end:                                           ; preds = %if.then, %entry
  %1 = load i32, i32* @nMainIsAlive, align 4, !dbg !58
  ret i32 %1, !dbg !59
}

; Function Attrs: nounwind
define i32 @_Z6Updatef(float %_nDelta) #0 !dbg !24 {
entry:
  %_nDelta.addr = alloca float, align 4
  store float %_nDelta, float* %_nDelta.addr, align 4
  call void @llvm.dbg.declare(metadata float* %_nDelta.addr, metadata !60, metadata !37), !dbg !61
  %0 = load i32, i32* @_ZZ6UpdatefE7_nCount, align 4, !dbg !62
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.2, i32 0, i32 0), i32 %0), !dbg !63
  %1 = load i32, i32* @_ZZ6UpdatefE7_nCount, align 4, !dbg !64
  %inc = add nsw i32 %1, 1, !dbg !64
  store i32 %inc, i32* @_ZZ6UpdatefE7_nCount, align 4, !dbg !64
  ret i32 1, !dbg !65
}

declare i32 @printf(i8*, ...) #2

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="pentium4" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!33, !34}
!llvm.ident = !{!35}

!0 = distinct !DICompileUnit(language: DW_LANG_C_plus_plus, file: !1, producer: "clang version 3.8.0 (branches/release_38)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, subprograms: !3, globals: !29)
!1 = !DIFile(filename: "HelloWorld.cpp", directory: "E:\5CFlashDev\5CModules\5CDemo\5C01_HelloWorld")
!2 = !{}
!3 = !{!4, !10, !13, !24}
!4 = distinct !DISubprogram(name: "Jit_Main", scope: !5, file: !5, line: 20, type: !6, isLocal: false, isDefinition: true, scopeLine: 20, flags: DIFlagPrototyped, isOptimized: false, variables: !2)
!5 = !DIFile(filename: "E:\5CFlashDev\5CModules\5CLibRT_x64\5Cinclude\5CMain", directory: "E:\5CFlashDev\5CModules\5CDemo\5C01_HelloWorld")
!6 = !DISubroutineType(types: !7)
!7 = !{!8, !9}
!8 = !DIBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!9 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 32, align: 32)
!10 = distinct !DISubprogram(name: "Jit_Update", scope: !5, file: !5, line: 25, type: !11, isLocal: false, isDefinition: true, scopeLine: 25, flags: DIFlagPrototyped, isOptimized: false, variables: !2)
!11 = !DISubroutineType(types: !12)
!12 = !{!8}
!13 = distinct !DISubprogram(name: "Main", linkageName: "_Z4MainPKcji", scope: !1, file: !1, line: 5, type: !14, isLocal: false, isDefinition: true, scopeLine: 5, flags: DIFlagPrototyped, isOptimized: false, variables: !2)
!14 = !DISubroutineType(types: !15)
!15 = !{!16, !18, !22, !16}
!16 = !DIDerivedType(tag: DW_TAG_typedef, name: "gzInt", file: !17, line: 110, baseType: !8)
!17 = !DIFile(filename: "E:\5CFlashDev\5CModules\5CLibRT_x64\5Cinclude/GzTypes.h", directory: "E:\5CFlashDev\5CModules\5CDemo\5C01_HelloWorld")
!18 = !DIDerivedType(tag: DW_TAG_typedef, name: "gzText8", file: !17, line: 47, baseType: !19)
!19 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 32, align: 32)
!20 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !21)
!21 = !DIBasicType(name: "char", size: 8, align: 8, encoding: DW_ATE_signed_char)
!22 = !DIDerivedType(tag: DW_TAG_typedef, name: "gzUIntX", file: !17, line: 71, baseType: !23)
!23 = !DIBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!24 = distinct !DISubprogram(name: "Update", linkageName: "_Z6Updatef", scope: !1, file: !1, line: 9, type: !25, isLocal: false, isDefinition: true, scopeLine: 9, flags: DIFlagPrototyped, isOptimized: false, variables: !2)
!25 = !DISubroutineType(types: !26)
!26 = !{!16, !27}
!27 = !DIDerivedType(tag: DW_TAG_typedef, name: "gzFloat", file: !17, line: 115, baseType: !28)
!28 = !DIBasicType(name: "float", size: 32, align: 32, encoding: DW_ATE_float)
!29 = !{!30, !31, !32}
!30 = !DIGlobalVariable(name: "nMainIsAlive", scope: !0, file: !5, line: 12, type: !16, isLocal: false, isDefinition: true, variable: i32* @nMainIsAlive)
!31 = !DIGlobalVariable(name: "nMainUpdateMs", scope: !0, file: !5, line: 13, type: !16, isLocal: false, isDefinition: true, variable: i32* @nMainUpdateMs)
!32 = !DIGlobalVariable(name: "_nCount", scope: !24, file: !1, line: 10, type: !16, isLocal: true, isDefinition: true, variable: i32* @_ZZ6UpdatefE7_nCount)
!33 = !{i32 2, !"CodeView", i32 1}
!34 = !{i32 2, !"Debug Info Version", i32 3}
!35 = !{!"clang version 3.8.0 (branches/release_38)"}
!36 = !DILocalVariable(name: "_dTest", arg: 1, scope: !4, file: !5, line: 20, type: !9)
!37 = !DIExpression()
!38 = !DILocation(line: 20, column: 32, scope: !4)
!39 = !DILocation(line: 21, column: 18, scope: !4)
!40 = !DILocation(line: 21, column: 16, scope: !4)
!41 = !DILocation(line: 22, column: 10, scope: !4)
!42 = !DILocation(line: 22, column: 3, scope: !4)
!43 = !DILocalVariable(name: "_sArg", arg: 1, scope: !13, file: !1, line: 5, type: !18)
!44 = !DILocation(line: 5, column: 20, scope: !13)
!45 = !DILocalVariable(name: "_nId", arg: 2, scope: !13, file: !1, line: 5, type: !22)
!46 = !DILocation(line: 5, column: 35, scope: !13)
!47 = !DILocalVariable(name: "_nCmd", arg: 3, scope: !13, file: !1, line: 5, type: !16)
!48 = !DILocation(line: 5, column: 47, scope: !13)
!49 = !DILocation(line: 6, column: 2, scope: !13)
!50 = !DILocation(line: 7, column: 2, scope: !13)
!51 = !DILocation(line: 26, column: 7, scope: !52)
!52 = distinct !DILexicalBlock(scope: !10, file: !5, line: 26, column: 7)
!53 = !DILocation(line: 26, column: 7, scope: !10)
!54 = !DILocation(line: 27, column: 19, scope: !55)
!55 = distinct !DILexicalBlock(scope: !52, file: !5, line: 26, column: 20)
!56 = !DILocation(line: 27, column: 17, scope: !55)
!57 = !DILocation(line: 28, column: 3, scope: !55)
!58 = !DILocation(line: 29, column: 10, scope: !10)
!59 = !DILocation(line: 29, column: 3, scope: !10)
!60 = !DILocalVariable(name: "_nDelta", arg: 1, scope: !24, file: !1, line: 9, type: !27)
!61 = !DILocation(line: 9, column: 22, scope: !24)
!62 = !DILocation(line: 11, column: 25, scope: !24)
!63 = !DILocation(line: 11, column: 2, scope: !24)
!64 = !DILocation(line: 12, column: 9, scope: !24)
!65 = !DILocation(line: 13, column: 2, scope: !24)
