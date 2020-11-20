
C:\LLVM\_MyLLVM_3_8_0>gpp @a -c demoExt.cpp -o r\demoExt.o
demoExt.cpp: In function 'int main(int, char**)':
demoExt.cpp:57:20: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
     char* _sName = "test.ll";
                    ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\AliasAnalysis.cpp -o r\src\lib\An\AliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\AliasAnalysisEvaluator.cpp -o r\src\lib\An\AliasAnalysisEvaluator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\AliasSetTracker.cpp -o r\src\lib\An\AliasSetTracker.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Analysis.cpp -o r\src\lib\An\Analysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\AssumptionCache.cpp -o r\src\lib\An\AssumptionCache.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\BasicAliasAnalysis.cpp -o r\src\lib\An\BasicAliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\BlockFrequencyInfo.cpp -o r\src\lib\An\BlockFrequencyInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\BlockFrequencyInfoImpl.cpp -o r\src\lib\An\BlockFrequencyInfoImpl.o
In file included from src\include/llvm/Analysis/BlockFrequencyInfoImpl.h:25:0,
                 from src\lib\An\BlockFrequencyInfoImpl.cpp:14:
src\include/llvm/Support/ScaledNumber.h: In instantiation of 'IntT llvm::ScaledNumber<DigitsT>::toInt() const [with IntT = long long unsigned int; DigitsT = long long unsigned int]':
src\lib\An\BlockFrequencyInfoImpl.cpp:457:77:   required from here
src\include/llvm/Support/ScaledNumber.h:783:13: error: ambiguous overload for 'operator<' (operand types are 'const llvm::ScaledNumber<long long unsigned int>' and 'int')
   if (*this < 1)
             ^
src\include/llvm/Support/ScaledNumber.h:749:8: note: candidate: bool llvm::operator<(const llvm::ScaledNumber<DigitsT>&, uint64_t) [with DigitsT = long long unsigned int; uint64_t = long long unsigned int]
   bool operator op(const ScaledNumber<DigitsT> &L, T1 R) {
        ^
src\include/llvm/Support/ScaledNumber.h:757:3: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO_TYPE'
   SCALED_NUMBER_COMPARE_TO_TYPE(op, uint64_t, uint64_t)
   ^
src\include/llvm/Support/ScaledNumber.h:761:1: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO'
 SCALED_NUMBER_COMPARE_TO(< )
 ^
src\include/llvm/Support/ScaledNumber.h:749:8: note: candidate: bool llvm::operator<(const llvm::ScaledNumber<DigitsT>&, uint32_t) [with DigitsT = long long unsigned int; uint32_t = long unsigned int]
   bool operator op(const ScaledNumber<DigitsT> &L, T1 R) {
        ^
src\include/llvm/Support/ScaledNumber.h:758:3: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO_TYPE'
   SCALED_NUMBER_COMPARE_TO_TYPE(op, uint32_t, uint64_t)
   ^
src\include/llvm/Support/ScaledNumber.h:761:1: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO'
 SCALED_NUMBER_COMPARE_TO(< )
 ^
src\include/llvm/Support/ScaledNumber.h:749:8: note: candidate: bool llvm::operator<(const llvm::ScaledNumber<DigitsT>&, int64_t) [with DigitsT = long long unsigned int; int64_t = long long int]
   bool operator op(const ScaledNumber<DigitsT> &L, T1 R) {
        ^
src\include/llvm/Support/ScaledNumber.h:759:3: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO_TYPE'
   SCALED_NUMBER_COMPARE_TO_TYPE(op, int64_t, int64_t)
   ^
src\include/llvm/Support/ScaledNumber.h:761:1: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO'
 SCALED_NUMBER_COMPARE_TO(< )
 ^
src\include/llvm/Support/ScaledNumber.h:749:8: note: candidate: bool llvm::operator<(const llvm::ScaledNumber<DigitsT>&, int32_t) [with DigitsT = long long unsigned int; int32_t = long int]
   bool operator op(const ScaledNumber<DigitsT> &L, T1 R) {
        ^
src\include/llvm/Support/ScaledNumber.h:760:3: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO_TYPE'
   SCALED_NUMBER_COMPARE_TO_TYPE(op, int32_t, int64_t)
   ^
src\include/llvm/Support/ScaledNumber.h:761:1: note: in expansion of macro 'SCALED_NUMBER_COMPARE_TO'
 SCALED_NUMBER_COMPARE_TO(< )
 ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\BranchProbabilityInfo.cpp -o r\src\lib\An\BranchProbabilityInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CallGraph.cpp -o r\src\lib\An\CallGraph.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CallGraphSCCPass.cpp -o r\src\lib\An\CallGraphSCCPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CallPrinter.cpp -o r\src\lib\An\CallPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CaptureTracking.cpp -o r\src\lib\An\CaptureTracking.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CFG.cpp -o r\src\lib\An\CFG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CFGPrinter.cpp -o r\src\lib\An\CFGPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CFLAliasAnalysis.cpp -o r\src\lib\An\CFLAliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CGSCCPassManager.cpp -o r\src\lib\An\CGSCCPassManager.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CodeMetrics.cpp -o r\src\lib\An\CodeMetrics.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ConstantFolding.cpp -o r\src\lib\An\ConstantFolding.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\CostModel.cpp -o r\src\lib\An\CostModel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Delinearization.cpp -o r\src\lib\An\Delinearization.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\DemandedBits.cpp -o r\src\lib\An\DemandedBits.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\DependenceAnalysis.cpp -o r\src\lib\An\DependenceAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\DivergenceAnalysis.cpp -o r\src\lib\An\DivergenceAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\DominanceFrontier.cpp -o r\src\lib\An\DominanceFrontier.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\DomPrinter.cpp -o r\src\lib\An\DomPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\EHPersonalities.cpp -o r\src\lib\An\EHPersonalities.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\GlobalsModRef.cpp -o r\src\lib\An\GlobalsModRef.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\InlineCost.cpp -o r\src\lib\An\InlineCost.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\InstCount.cpp -o r\src\lib\An\InstCount.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\InstructionSimplify.cpp -o r\src\lib\An\InstructionSimplify.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Interval.cpp -o r\src\lib\An\Interval.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\IntervalPartition.cpp -o r\src\lib\An\IntervalPartition.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\IteratedDominanceFrontier.cpp -o r\src\lib\An\IteratedDominanceFrontier.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\IVUsers.cpp -o r\src\lib\An\IVUsers.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\LazyCallGraph.cpp -o r\src\lib\An\LazyCallGraph.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\LazyValueInfo.cpp -o r\src\lib\An\LazyValueInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Lint.cpp -o r\src\lib\An\Lint.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Loads.cpp -o r\src\lib\An\Loads.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\LoopAccessAnalysis.cpp -o r\src\lib\An\LoopAccessAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\LoopInfo.cpp -o r\src\lib\An\LoopInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\LoopPass.cpp -o r\src\lib\An\LoopPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\MemDepPrinter.cpp -o r\src\lib\An\MemDepPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\MemDerefPrinter.cpp -o r\src\lib\An\MemDerefPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\MemoryBuiltins.cpp -o r\src\lib\An\MemoryBuiltins.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\MemoryDependenceAnalysis.cpp -o r\src\lib\An\MemoryDependenceAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\MemoryLocation.cpp -o r\src\lib\An\MemoryLocation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ModuleDebugInfoPrinter.cpp -o r\src\lib\An\ModuleDebugInfoPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ObjCARCAliasAnalysis.cpp -o r\src\lib\An\ObjCARCAliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ObjCARCAnalysisUtils.cpp -o r\src\lib\An\ObjCARCAnalysisUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ObjCARCInstKind.cpp -o r\src\lib\An\ObjCARCInstKind.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\OrderedBasicBlock.cpp -o r\src\lib\An\OrderedBasicBlock.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\PHITransAddr.cpp -o r\src\lib\An\PHITransAddr.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\PostDominators.cpp -o r\src\lib\An\PostDominators.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\PtrUseVisitor.cpp -o r\src\lib\An\PtrUseVisitor.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\RegionInfo.cpp -o r\src\lib\An\RegionInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\RegionPass.cpp -o r\src\lib\An\RegionPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\RegionPrinter.cpp -o r\src\lib\An\RegionPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ScalarEvolution.cpp -o r\src\lib\An\ScalarEvolution.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ScalarEvolutionAliasAnalysis.cpp -o r\src\lib\An\ScalarEvolutionAliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ScalarEvolutionExpander.cpp -o r\src\lib\An\ScalarEvolutionExpander.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ScalarEvolutionNormalization.cpp -o r\src\lib\An\ScalarEvolutionNormalization.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ScopedNoAliasAA.cpp -o r\src\lib\An\ScopedNoAliasAA.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\SparsePropagation.cpp -o r\src\lib\An\SparsePropagation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\TargetLibraryInfo.cpp -o r\src\lib\An\TargetLibraryInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\TargetTransformInfo.cpp -o r\src\lib\An\TargetTransformInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\Trace.cpp -o r\src\lib\An\Trace.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\TypeBasedAliasAnalysis.cpp -o r\src\lib\An\TypeBasedAliasAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\ValueTracking.cpp -o r\src\lib\An\ValueTracking.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\An\VectorUtils.cpp -o r\src\lib\An\VectorUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\AsmParser\LLLexer.cpp -o r\src\lib\AsmParser\LLLexer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\AsmParser\LLParser.cpp -o r\src\lib\AsmParser\LLParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\AsmParser\Parser.cpp -o r\src\lib\AsmParser\Parser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Reader\BitcodeReader.cpp -o r\src\lib\Bitcode\Reader\BitcodeReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Reader\BitReader.cpp -o r\src\lib\Bitcode\Reader\BitReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Reader\BitstreamReader.cpp -o r\src\lib\Bitcode\Reader\BitstreamReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Writer\BitcodeWriter.cpp -o r\src\lib\Bitcode\Writer\BitcodeWriter.o
src\lib\Bitcode\Writer\BitcodeWriter.cpp: In function 'void EmitDarwinBCHeaderAndTrailer(llvm::SmallVectorImpl<char>&, const llvm::Triple&)':
src\lib\Bitcode\Writer\BitcodeWriter.cpp:3015:51: error: invalid initialization of non-const reference of type 'uint32_t& {aka long unsigned int&}' from an rvalue of type 'uint32_t {aka long unsigned int}'
   WriteInt32ToBuffer(0x0B17C0DE , Buffer, Position);
                                                   ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:2974:13: note:   initializing argument 3 of 'void WriteInt32ToBuffer(uint32_t, llvm::SmallVectorImpl<char>&, uint32_t&)'
 static void WriteInt32ToBuffer(uint32_t Value, SmallVectorImpl<char> &Buffer,
             ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:3016:51: error: invalid initialization of non-const reference of type 'uint32_t& {aka long unsigned int&}' from an rvalue of type 'uint32_t {aka long unsigned int}'
   WriteInt32ToBuffer(0          , Buffer, Position); // Version.
                                                   ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:2974:13: note:   initializing argument 3 of 'void WriteInt32ToBuffer(uint32_t, llvm::SmallVectorImpl<char>&, uint32_t&)'
 static void WriteInt32ToBuffer(uint32_t Value, SmallVectorImpl<char> &Buffer,
             ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:3017:51: error: invalid initialization of non-const reference of type 'uint32_t& {aka long unsigned int&}' from an rvalue of type 'uint32_t {aka long unsigned int}'
   WriteInt32ToBuffer(BCOffset   , Buffer, Position);
                                                   ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:2974:13: note:   initializing argument 3 of 'void WriteInt32ToBuffer(uint32_t, llvm::SmallVectorImpl<char>&, uint32_t&)'
 static void WriteInt32ToBuffer(uint32_t Value, SmallVectorImpl<char> &Buffer,
             ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:3018:51: error: invalid initialization of non-const reference of type 'uint32_t& {aka long unsigned int&}' from an rvalue of type 'uint32_t {aka long unsigned int}'
   WriteInt32ToBuffer(BCSize     , Buffer, Position);
                                                   ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:2974:13: note:   initializing argument 3 of 'void WriteInt32ToBuffer(uint32_t, llvm::SmallVectorImpl<char>&, uint32_t&)'
 static void WriteInt32ToBuffer(uint32_t Value, SmallVectorImpl<char> &Buffer,
             ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:3019:51: error: invalid initialization of non-const reference of type 'uint32_t& {aka long unsigned int&}' from an rvalue of type 'uint32_t {aka long unsigned int}'
   WriteInt32ToBuffer(CPUType    , Buffer, Position);
                                                   ^
src\lib\Bitcode\Writer\BitcodeWriter.cpp:2974:13: note:   initializing argument 3 of 'void WriteInt32ToBuffer(uint32_t, llvm::SmallVectorImpl<char>&, uint32_t&)'
 static void WriteInt32ToBuffer(uint32_t Value, SmallVectorImpl<char> &Buffer,
             ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Writer\BitcodeWriterPass.cpp -o r\src\lib\Bitcode\Writer\BitcodeWriterPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Writer\BitWriter.cpp -o r\src\lib\Bitcode\Writer\BitWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Bitcode\Writer\ValueEnumerator.cpp -o r\src\lib\Bitcode\Writer\ValueEnumerator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AggressiveAntiDepBreaker.cpp -o r\src\lib\CG\AggressiveAntiDepBreaker.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AllocationOrder.cpp -o r\src\lib\CG\AllocationOrder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\Analysis.cpp -o r\src\lib\CG\Analysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\AddressPool.cpp -o r\src\lib\CG\AsmPrinter\AddressPool.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\ARMException.cpp -o r\src\lib\CG\AsmPrinter\ARMException.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\AsmPrinter.cpp -o r\src\lib\CG\AsmPrinter\AsmPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\AsmPrinterDwarf.cpp -o r\src\lib\CG\AsmPrinter\AsmPrinterDwarf.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\AsmPrinterInlineAsm.cpp -o r\src\lib\CG\AsmPrinter\AsmPrinterInlineAsm.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DbgValueHistoryCalculator.cpp -o r\src\lib\CG\AsmPrinter\DbgValueHistoryCalculator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DebugLocStream.cpp -o r\src\lib\CG\AsmPrinter\DebugLocStream.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DIE.cpp -o r\src\lib\CG\AsmPrinter\DIE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DIEHash.cpp -o r\src\lib\CG\AsmPrinter\DIEHash.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfAccelTable.cpp -o r\src\lib\CG\AsmPrinter\DwarfAccelTable.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfCFIException.cpp -o r\src\lib\CG\AsmPrinter\DwarfCFIException.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfCompileUnit.cpp -o r\src\lib\CG\AsmPrinter\DwarfCompileUnit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfDebug.cpp -o r\src\lib\CG\AsmPrinter\DwarfDebug.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfExpression.cpp -o r\src\lib\CG\AsmPrinter\DwarfExpression.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfFile.cpp -o r\src\lib\CG\AsmPrinter\DwarfFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfStringPool.cpp -o r\src\lib\CG\AsmPrinter\DwarfStringPool.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\DwarfUnit.cpp -o r\src\lib\CG\AsmPrinter\DwarfUnit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\EHStreamer.cpp -o r\src\lib\CG\AsmPrinter\EHStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\ErlangGCPrinter.cpp -o r\src\lib\CG\AsmPrinter\ErlangGCPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\OcamlGCPrinter.cpp -o r\src\lib\CG\AsmPrinter\OcamlGCPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\WinCodeViewLineTables.cpp -o r\src\lib\CG\AsmPrinter\WinCodeViewLineTables.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AsmPrinter\WinException.cpp -o r\src\lib\CG\AsmPrinter\WinException.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\AtomicExpandPass.cpp -o r\src\lib\CG\AtomicExpandPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\BasicTargetTransformInfo.cpp -o r\src\lib\CG\BasicTargetTransformInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\BranchFolding.cpp -o r\src\lib\CG\BranchFolding.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CalcSpillWeights.cpp -o r\src\lib\CG\CalcSpillWeights.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CallingConvLower.cpp -o r\src\lib\CG\CallingConvLower.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CodeGen.cpp -o r\src\lib\CG\CodeGen.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CodeGenPrepare.cpp -o r\src\lib\CG\CodeGenPrepare.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CoreCLRGC.cpp -o r\src\lib\CG\CoreCLRGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\CriticalAntiDepBreaker.cpp -o r\src\lib\CG\CriticalAntiDepBreaker.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\DeadMachineInstructionElim.cpp -o r\src\lib\CG\DeadMachineInstructionElim.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\DFAPacketizer.cpp -o r\src\lib\CG\DFAPacketizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\DwarfEHPrepare.cpp -o r\src\lib\CG\DwarfEHPrepare.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\EarlyIfConversion.cpp -o r\src\lib\CG\EarlyIfConversion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\EdgeBundles.cpp -o r\src\lib\CG\EdgeBundles.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ErlangGC.cpp -o r\src\lib\CG\ErlangGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ExecutionDepsFix.cpp -o r\src\lib\CG\ExecutionDepsFix.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ExpandISelPseudos.cpp -o r\src\lib\CG\ExpandISelPseudos.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ExpandPostRAPseudos.cpp -o r\src\lib\CG\ExpandPostRAPseudos.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\FaultMaps.cpp -o r\src\lib\CG\FaultMaps.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\FuncletLayout.cpp -o r\src\lib\CG\FuncletLayout.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\GCMetadata.cpp -o r\src\lib\CG\GCMetadata.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\GCMetadataPrinter.cpp -o r\src\lib\CG\GCMetadataPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\GCRootLowering.cpp -o r\src\lib\CG\GCRootLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\GCStrategy.cpp -o r\src\lib\CG\GCStrategy.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\GlobalMerge.cpp -o r\src\lib\CG\GlobalMerge.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\IfConversion.cpp -o r\src\lib\CG\IfConversion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ImplicitNullChecks.cpp -o r\src\lib\CG\ImplicitNullChecks.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\InlineSpiller.cpp -o r\src\lib\CG\InlineSpiller.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\InterferenceCache.cpp -o r\src\lib\CG\InterferenceCache.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\InterleavedAccessPass.cpp -o r\src\lib\CG\InterleavedAccessPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\IntrinsicLowering.cpp -o r\src\lib\CG\IntrinsicLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LatencyPriorityQueue.cpp -o r\src\lib\CG\LatencyPriorityQueue.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LexicalScopes.cpp -o r\src\lib\CG\LexicalScopes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveDebugValues.cpp -o r\src\lib\CG\LiveDebugValues.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveDebugVariables.cpp -o r\src\lib\CG\LiveDebugVariables.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveInterval.cpp -o r\src\lib\CG\LiveInterval.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveIntervalAnalysis.cpp -o r\src\lib\CG\LiveIntervalAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveIntervalUnion.cpp -o r\src\lib\CG\LiveIntervalUnion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LivePhysRegs.cpp -o r\src\lib\CG\LivePhysRegs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveRangeCalc.cpp -o r\src\lib\CG\LiveRangeCalc.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveRangeEdit.cpp -o r\src\lib\CG\LiveRangeEdit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveRegMatrix.cpp -o r\src\lib\CG\LiveRegMatrix.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveStackAnalysis.cpp -o r\src\lib\CG\LiveStackAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LiveVariables.cpp -o r\src\lib\CG\LiveVariables.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LLVMTargetMachine.cpp -o r\src\lib\CG\LLVMTargetMachine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\LocalStackSlotAllocation.cpp -o r\src\lib\CG\LocalStackSlotAllocation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineBasicBlock.cpp -o r\src\lib\CG\MachineBasicBlock.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineBlockFrequencyInfo.cpp -o r\src\lib\CG\MachineBlockFrequencyInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineBlockPlacement.cpp -o r\src\lib\CG\MachineBlockPlacement.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineBranchProbabilityInfo.cpp -o r\src\lib\CG\MachineBranchProbabilityInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineCombiner.cpp -o r\src\lib\CG\MachineCombiner.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineCopyPropagation.cpp -o r\src\lib\CG\MachineCopyPropagation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineCSE.cpp -o r\src\lib\CG\MachineCSE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineDominanceFrontier.cpp -o r\src\lib\CG\MachineDominanceFrontier.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineDominators.cpp -o r\src\lib\CG\MachineDominators.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineFunction.cpp -o r\src\lib\CG\MachineFunction.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineFunctionAnalysis.cpp -o r\src\lib\CG\MachineFunctionAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineFunctionPass.cpp -o r\src\lib\CG\MachineFunctionPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineFunctionPrinterPass.cpp -o r\src\lib\CG\MachineFunctionPrinterPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineInstr.cpp -o r\src\lib\CG\MachineInstr.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineInstrBundle.cpp -o r\src\lib\CG\MachineInstrBundle.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineLICM.cpp -o r\src\lib\CG\MachineLICM.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineLoopInfo.cpp -o r\src\lib\CG\MachineLoopInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineModuleInfo.cpp -o r\src\lib\CG\MachineModuleInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineModuleInfoImpls.cpp -o r\src\lib\CG\MachineModuleInfoImpls.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachinePassRegistry.cpp -o r\src\lib\CG\MachinePassRegistry.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachinePostDominators.cpp -o r\src\lib\CG\MachinePostDominators.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineRegionInfo.cpp -o r\src\lib\CG\MachineRegionInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineRegisterInfo.cpp -o r\src\lib\CG\MachineRegisterInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineScheduler.cpp -o r\src\lib\CG\MachineScheduler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineSink.cpp -o r\src\lib\CG\MachineSink.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineSSAUpdater.cpp -o r\src\lib\CG\MachineSSAUpdater.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineTraceMetrics.cpp -o r\src\lib\CG\MachineTraceMetrics.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MachineVerifier.cpp -o r\src\lib\CG\MachineVerifier.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MIRParser\MILexer.cpp -o r\src\lib\CG\MIRParser\MILexer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MIRParser\MIParser.cpp -o r\src\lib\CG\MIRParser\MIParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MIRParser\MIRParser.cpp -o r\src\lib\CG\MIRParser\MIRParser.o
In file included from src\lib\CG\MIRParser\MIRParser.cpp:28:0:
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static void llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::output(const llvm::yaml::UnsignedValue&, void*, llvm::raw_ostream&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:106:12: error: 'output' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h:106:63: warning: return-statement with a value, in function returning 'void' [-fpermissive]
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
                                                               ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static llvm::StringRef llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::input(llvm::StringRef, void*, llvm::yaml::UnsignedValue&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:113:12: error: 'input' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::input(Scalar, Ctx, Value.Value);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static bool llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::mustQuote(llvm::StringRef)':
src\include/llvm/CodeGen/MIRYamlMapping.h:117:12: error: 'mustQuote' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::mustQuote(Scalar);
            ^
In file included from src\include/llvm/CodeGen/MIRYamlMapping.h:23:0,
                 from src\lib\CG\MIRParser\MIRParser.cpp:28:
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = unsigned int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = unsigned int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = unsigned int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = voi
d]'
src\include/llvm/CodeGen/MIRYamlMapping.h:223:53:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<unsigned int>'
   char missing_yaml_trait_for_type[sizeof(MissingTrait<T>)];
                                          ^
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = void]'
src\include/llvm/CodeGen/MIRYamlMapping.h:366:64:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<int>'

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MIRPrinter.cpp -o r\src\lib\CG\MIRPrinter.o
In file included from src\lib\CG\MIRPrinter.cpp:23:0:
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static void llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::output(const llvm::yaml::UnsignedValue&, void*, llvm::raw_ostream&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:106:12: error: 'output' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h:106:63: warning: return-statement with a value, in function returning 'void' [-fpermissive]
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
                                                               ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static llvm::StringRef llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::input(llvm::StringRef, void*, llvm::yaml::UnsignedValue&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:113:12: error: 'input' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::input(Scalar, Ctx, Value.Value);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static bool llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::mustQuote(llvm::StringRef)':
src\include/llvm/CodeGen/MIRYamlMapping.h:117:12: error: 'mustQuote' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::mustQuote(Scalar);
            ^
In file included from src\include/llvm/CodeGen/MIRYamlMapping.h:23:0,
                 from src\lib\CG\MIRPrinter.cpp:23:
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = unsigned int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = unsigned int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = unsigned int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = voi
d]'
src\include/llvm/CodeGen/MIRYamlMapping.h:223:53:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<unsigned int>'
   char missing_yaml_trait_for_type[sizeof(MissingTrait<T>)];
                                          ^
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = void]'
src\include/llvm/CodeGen/MIRYamlMapping.h:366:64:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<int>'

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\MIRPrintingPass.cpp -o r\src\lib\CG\MIRPrintingPass.o
In file included from src\lib\CG\MIRPrintingPass.cpp:18:0:
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static void llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::output(const llvm::yaml::UnsignedValue&, void*, llvm::raw_ostream&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:106:12: error: 'output' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h:106:63: warning: return-statement with a value, in function returning 'void' [-fpermissive]
     return ScalarTraits<unsigned>::output(Value.Value, Ctx, OS);
                                                               ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static llvm::StringRef llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::input(llvm::StringRef, void*, llvm::yaml::UnsignedValue&)':
src\include/llvm/CodeGen/MIRYamlMapping.h:113:12: error: 'input' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::input(Scalar, Ctx, Value.Value);
            ^
src\include/llvm/CodeGen/MIRYamlMapping.h: In static member function 'static bool llvm::yaml::ScalarTraits<llvm::yaml::UnsignedValue>::mustQuote(llvm::StringRef)':
src\include/llvm/CodeGen/MIRYamlMapping.h:117:12: error: 'mustQuote' is not a member of 'llvm::yaml::ScalarTraits<unsigned int>'
     return ScalarTraits<unsigned>::mustQuote(Scalar);
            ^
In file included from src\include/llvm/CodeGen/MIRYamlMapping.h:23:0,
                 from src\lib\CG\MIRPrintingPass.cpp:18:
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = unsigned int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = unsigned int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = unsigned int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = voi
d]'
src\include/llvm/CodeGen/MIRYamlMapping.h:223:53:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<unsigned int>'
   char missing_yaml_trait_for_type[sizeof(MissingTrait<T>)];
                                          ^
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = void]'
src\include/llvm/CodeGen/MIRYamlMapping.h:366:64:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<int>'

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\OcamlGC.cpp -o r\src\lib\CG\OcamlGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\OptimizePHIs.cpp -o r\src\lib\CG\OptimizePHIs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ParallelCG.cpp -o r\src\lib\CG\ParallelCG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\Passes.cpp -o r\src\lib\CG\Passes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PeepholeOptimizer.cpp -o r\src\lib\CG\PeepholeOptimizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PHIElimination.cpp -o r\src\lib\CG\PHIElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PHIEliminationUtils.cpp -o r\src\lib\CG\PHIEliminationUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PostRASchedulerList.cpp -o r\src\lib\CG\PostRASchedulerList.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ProcessImplicitDefs.cpp -o r\src\lib\CG\ProcessImplicitDefs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PrologEpilogInserter.cpp -o r\src\lib\CG\PrologEpilogInserter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\PseudoSourceValue.cpp -o r\src\lib\CG\PseudoSourceValue.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegAllocBase.cpp -o r\src\lib\CG\RegAllocBase.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegAllocBasic.cpp -o r\src\lib\CG\RegAllocBasic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegAllocFast.cpp -o r\src\lib\CG\RegAllocFast.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegAllocGreedy.cpp -o r\src\lib\CG\RegAllocGreedy.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegAllocPBQP.cpp -o r\src\lib\CG\RegAllocPBQP.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegisterClassInfo.cpp -o r\src\lib\CG\RegisterClassInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegisterCoalescer.cpp -o r\src\lib\CG\RegisterCoalescer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegisterPressure.cpp -o r\src\lib\CG\RegisterPressure.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\RegisterScavenging.cpp -o r\src\lib\CG\RegisterScavenging.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ScheduleDAG.cpp -o r\src\lib\CG\ScheduleDAG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ScheduleDAGInstrs.cpp -o r\src\lib\CG\ScheduleDAGInstrs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ScheduleDAGPrinter.cpp -o r\src\lib\CG\ScheduleDAGPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ScoreboardHazardRecognizer.cpp -o r\src\lib\CG\ScoreboardHazardRecognizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\DAGCombiner.cpp -o r\src\lib\CG\SelectionDAG\DAGCombiner.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\FastISel.cpp -o r\src\lib\CG\SelectionDAG\FastISel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\FunctionLoweringInfo.cpp -o r\src\lib\CG\SelectionDAG\FunctionLoweringInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\InstrEmitter.cpp -o r\src\lib\CG\SelectionDAG\InstrEmitter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeDAG.cpp -o r\src\lib\CG\SelectionDAG\LegalizeDAG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeFloatTypes.cpp -o r\src\lib\CG\SelectionDAG\LegalizeFloatTypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeIntegerTypes.cpp -o r\src\lib\CG\SelectionDAG\LegalizeIntegerTypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeTypes.cpp -o r\src\lib\CG\SelectionDAG\LegalizeTypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeTypesGeneric.cpp -o r\src\lib\CG\SelectionDAG\LegalizeTypesGeneric.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeVectorOps.cpp -o r\src\lib\CG\SelectionDAG\LegalizeVectorOps.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\LegalizeVectorTypes.cpp -o r\src\lib\CG\SelectionDAG\LegalizeVectorTypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\ResourcePriorityQueue.cpp -o r\src\lib\CG\SelectionDAG\ResourcePriorityQueue.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\ScheduleDAGFast.cpp -o r\src\lib\CG\SelectionDAG\ScheduleDAGFast.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\ScheduleDAGRRList.cpp -o r\src\lib\CG\SelectionDAG\ScheduleDAGRRList.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\ScheduleDAGSDNodes.cpp -o r\src\lib\CG\SelectionDAG\ScheduleDAGSDNodes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\ScheduleDAGVLIW.cpp -o r\src\lib\CG\SelectionDAG\ScheduleDAGVLIW.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\SelectionDAG.cpp -o r\src\lib\CG\SelectionDAG\SelectionDAG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\SelectionDAGBuilder.cpp -o r\src\lib\CG\SelectionDAG\SelectionDAGBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\SelectionDAGDumper.cpp -o r\src\lib\CG\SelectionDAG\SelectionDAGDumper.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\SelectionDAGISel.cpp -o r\src\lib\CG\SelectionDAG\SelectionDAGISel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\SelectionDAGPrinter.cpp -o r\src\lib\CG\SelectionDAG\SelectionDAGPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\StatepointLowering.cpp -o r\src\lib\CG\SelectionDAG\StatepointLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\TargetLowering.cpp -o r\src\lib\CG\SelectionDAG\TargetLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SelectionDAG\TargetSelectionDAGInfo.cpp -o r\src\lib\CG\SelectionDAG\TargetSelectionDAGInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ShadowStackGC.cpp -o r\src\lib\CG\ShadowStackGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ShadowStackGCLowering.cpp -o r\src\lib\CG\ShadowStackGCLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\ShrinkWrap.cpp -o r\src\lib\CG\ShrinkWrap.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SjLjEHPrepare.cpp -o r\src\lib\CG\SjLjEHPrepare.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SlotIndexes.cpp -o r\src\lib\CG\SlotIndexes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SpillPlacement.cpp -o r\src\lib\CG\SpillPlacement.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\SplitKit.cpp -o r\src\lib\CG\SplitKit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StackColoring.cpp -o r\src\lib\CG\StackColoring.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StackMapLivenessAnalysis.cpp -o r\src\lib\CG\StackMapLivenessAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StackMaps.cpp -o r\src\lib\CG\StackMaps.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StackProtector.cpp -o r\src\lib\CG\StackProtector.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StackSlotColoring.cpp -o r\src\lib\CG\StackSlotColoring.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\StatepointExampleGC.cpp -o r\src\lib\CG\StatepointExampleGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TailDuplication.cpp -o r\src\lib\CG\TailDuplication.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetFrameLoweringImpl.cpp -o r\src\lib\CG\TargetFrameLoweringImpl.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetInstrInfo.cpp -o r\src\lib\CG\TargetInstrInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetLoweringBase.cpp -o r\src\lib\CG\TargetLoweringBase.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetLoweringObjectFileImpl.cpp -o r\src\lib\CG\TargetLoweringObjectFileImpl.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetOptionsImpl.cpp -o r\src\lib\CG\TargetOptionsImpl.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetRegisterInfo.cpp -o r\src\lib\CG\TargetRegisterInfo.o
src\lib\CG\TargetRegisterInfo.cpp: In member function 'const llvm::TargetRegisterClass* llvm::TargetRegisterInfo::getAllocatableClass(const llvm::TargetRegisterClass*) const':
src\lib\CG\TargetRegisterInfo.cpp:115:49: warning: invalid conversion from 'const uint32_t* {aka const long unsigned int*}' to 'const unsigned int*' [-fpermissive]
   const unsigned *SubClass = RC->getSubClassMask();
                                                 ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TargetSchedule.cpp -o r\src\lib\CG\TargetSchedule.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\TwoAddressInstructionPass.cpp -o r\src\lib\CG\TwoAddressInstructionPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\UnreachableBlockElim.cpp -o r\src\lib\CG\UnreachableBlockElim.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\VirtRegMap.cpp -o r\src\lib\CG\VirtRegMap.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\CG\WinEHPrepare.cpp -o r\src\lib\CG\WinEHPrepare.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\FieldListRecordBuilder.cpp -o r\src\lib\Dbg\CodeView\FieldListRecordBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\Line.cpp -o r\src\lib\Dbg\CodeView\Line.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\ListRecordBuilder.cpp -o r\src\lib\Dbg\CodeView\ListRecordBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\MemoryTypeTableBuilder.cpp -o r\src\lib\Dbg\CodeView\MemoryTypeTableBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\MethodListRecordBuilder.cpp -o r\src\lib\Dbg\CodeView\MethodListRecordBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\TypeRecordBuilder.cpp -o r\src\lib\Dbg\CodeView\TypeRecordBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\CodeView\TypeTableBuilder.cpp -o r\src\lib\Dbg\CodeView\TypeTableBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFAbbreviationDeclaration.cpp -o r\src\lib\Dbg\DWARF\DWARFAbbreviationDeclaration.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp -o r\src\lib\Dbg\DWARF\DWARFAcceleratorTable.o
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp: In member function 'void llvm::DWARFAcceleratorTable::dump(llvm::raw_ostream&) const':
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:94:54: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
       uint32_t Hash = AccelSection.getU32(&HashOffset);
                                                      ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:15:0,
                 from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/Support/DataExtractor.h:231:12: note:   initializing argument 1 of 'uint32_t llvm::DataExtractor::getU32(uint32_t*) const'
   uint32_t getU32(uint32_t *offset_ptr) const;
            ^
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:99:63: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
       unsigned DataOffset = AccelSection.getU32(&OffsetsOffset);
                                                               ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:15:0,
                 from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/Support/DataExtractor.h:231:12: note:   initializing argument 1 of 'uint32_t llvm::DataExtractor::getU32(uint32_t*) const'
   uint32_t getU32(uint32_t *offset_ptr) const;
            ^
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:106:64: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
         unsigned StringOffset = AccelSection.getU32(&DataOffset);
                                                                ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:15:0,
                 from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/Support/DataExtractor.h:231:12: note:   initializing argument 1 of 'uint32_t llvm::DataExtractor::getU32(uint32_t*) const'
   uint32_t getU32(uint32_t *offset_ptr) const;
            ^
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:113:57: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
                      StringSection.getCStr(&StringOffset));
                                                         ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:15:0,
                 from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/Support/DataExtractor.h:59:15: note:   initializing argument 1 of 'const char* llvm::DataExtractor::getCStr(uint32_t*) const'
   const char *getCStr(uint32_t *offset_ptr) const;
               ^
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:114:59: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
         unsigned NumData = AccelSection.getU32(&DataOffset);
                                                           ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:15:0,
                 from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/Support/DataExtractor.h:231:12: note:   initializing argument 1 of 'uint32_t llvm::DataExtractor::getU32(uint32_t*) const'
   uint32_t getU32(uint32_t *offset_ptr) const;
            ^
src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:120:69: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
             if (Atom.extractValue(AccelSection, &DataOffset, nullptr))
                                                                     ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFAcceleratorTable.h:14:0,
                 from src\lib\Dbg\DWARF\DWARFAcceleratorTable.cpp:10:
src\include/llvm/DebugInfo/DWARF/DWARFFormValue.h:67:8: note:   initializing argument 2 of 'bool llvm::DWARFFormValue::extractValue(llvm::DataExtractor, uint32_t*, const llvm::DWARFUnit*)'
   bool extractValue(DataExtractor data, uint32_t *offset_ptr,
        ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFCompileUnit.cpp -o r\src\lib\Dbg\DWARF\DWARFCompileUnit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFContext.cpp -o r\src\lib\Dbg\DWARF\DWARFContext.o
src\lib\Dbg\DWARF\DWARFContext.cpp: In member function 'virtual void llvm::DWARFContext::dump(llvm::raw_ostream&, llvm::DIDumpType)':
src\lib\Dbg\DWARF\DWARFContext.cpp:158:72: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
         LineTable.parse(lineData, &getLineSection().Relocs, &stmtOffset);
                                                                        ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFContext.h:19:0,
                 from src\lib\Dbg\DWARF\DWARFContext.cpp:10:
src\include/llvm/DebugInfo/DWARF/DWARFDebugLine.h:207:10: note:   initializing argument 3 of 'bool llvm::DWARFDebugLine::LineTable::parse(llvm::DataExtractor, const RelocAddrMap*, uint32_t*)'
     bool parse(DataExtractor debug_line_data, const RelocAddrMap *RMap,
          ^
src\lib\Dbg\DWARF\DWARFContext.cpp:180:58: warning: invalid conversion from 'unsigned int*' to 'uint32_t* {aka long unsigned int*}' [-fpermissive]
     while (LineTable.Prologue.parse(lineData, &stmtOffset)) {
                                                          ^
In file included from src\include/llvm/DebugInfo/DWARF/DWARFContext.h:19:0,
                 from src\lib\Dbg\DWARF\DWARFContext.cpp:10:
src\include/llvm/DebugInfo/DWARF/DWARFDebugLine.h:89:10: note:   initializing argument 2 of 'bool llvm::DWARFDebugLine::Prologue::parse(llvm::DataExtractor, uint32_t*)'
     bool parse(DataExtractor debug_line_data, uint32_t *offset_ptr);
          ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugAbbrev.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugAbbrev.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugAranges.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugAranges.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugArangeSet.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugArangeSet.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugFrame.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugFrame.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugInfoEntry.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugInfoEntry.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugLine.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugLine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugLoc.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugLoc.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugMacro.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugMacro.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFDebugRangeList.cpp -o r\src\lib\Dbg\DWARF\DWARFDebugRangeList.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFFormValue.cpp -o r\src\lib\Dbg\DWARF\DWARFFormValue.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFTypeUnit.cpp -o r\src\lib\Dbg\DWARF\DWARFTypeUnit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFUnit.cpp -o r\src\lib\Dbg\DWARF\DWARFUnit.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\DWARFUnitIndex.cpp -o r\src\lib\Dbg\DWARF\DWARFUnitIndex.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\DWARF\SyntaxHighlighting.cpp -o r\src\lib\Dbg\DWARF\SyntaxHighlighting.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\IPDBSourceFile.cpp -o r\src\lib\Dbg\PDB\IPDBSourceFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDB.cpp -o r\src\lib\Dbg\PDB\PDB.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBContext.cpp -o r\src\lib\Dbg\PDB\PDBContext.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBExtras.cpp -o r\src\lib\Dbg\PDB\PDBExtras.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBInterfaceAnchors.cpp -o r\src\lib\Dbg\PDB\PDBInterfaceAnchors.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbol.cpp -o r\src\lib\Dbg\PDB\PDBSymbol.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolAnnotation.cpp -o r\src\lib\Dbg\PDB\PDBSymbolAnnotation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolBlock.cpp -o r\src\lib\Dbg\PDB\PDBSymbolBlock.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolCompiland.cpp -o r\src\lib\Dbg\PDB\PDBSymbolCompiland.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolCompilandDetails.cpp -o r\src\lib\Dbg\PDB\PDBSymbolCompilandDetails.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolCompilandEnv.cpp -o r\src\lib\Dbg\PDB\PDBSymbolCompilandEnv.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolCustom.cpp -o r\src\lib\Dbg\PDB\PDBSymbolCustom.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolData.cpp -o r\src\lib\Dbg\PDB\PDBSymbolData.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolExe.cpp -o r\src\lib\Dbg\PDB\PDBSymbolExe.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolFunc.cpp -o r\src\lib\Dbg\PDB\PDBSymbolFunc.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolFuncDebugEnd.cpp -o r\src\lib\Dbg\PDB\PDBSymbolFuncDebugEnd.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolFuncDebugStart.cpp -o r\src\lib\Dbg\PDB\PDBSymbolFuncDebugStart.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolLabel.cpp -o r\src\lib\Dbg\PDB\PDBSymbolLabel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolPublicSymbol.cpp -o r\src\lib\Dbg\PDB\PDBSymbolPublicSymbol.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolThunk.cpp -o r\src\lib\Dbg\PDB\PDBSymbolThunk.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeArray.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeArray.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeBaseClass.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeBaseClass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeBuiltin.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeBuiltin.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeCustom.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeCustom.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeDimension.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeDimension.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeEnum.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeEnum.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeFriend.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeFriend.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeFunctionArg.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeFunctionArg.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeFunctionSig.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeFunctionSig.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeManaged.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeManaged.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypePointer.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypePointer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeTypedef.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeTypedef.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeUDT.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeUDT.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeVTable.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeVTable.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolTypeVTableShape.cpp -o r\src\lib\Dbg\PDB\PDBSymbolTypeVTableShape.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolUnknown.cpp -o r\src\lib\Dbg\PDB\PDBSymbolUnknown.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymbolUsingNamespace.cpp -o r\src\lib\Dbg\PDB\PDBSymbolUsingNamespace.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\PDB\PDBSymDumper.cpp -o r\src\lib\Dbg\PDB\PDBSymDumper.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\Symbolize\DIPrinter.cpp -o r\src\lib\Dbg\Symbolize\DIPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\Symbolize\SymbolizableObjectFile.cpp -o r\src\lib\Dbg\Symbolize\SymbolizableObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Dbg\Symbolize\Symbolize.cpp -o r\src\lib\Dbg\Symbolize\Symbolize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\ExecutionEngine.cpp -o r\src\lib\EE\ExecutionEngine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\ExecutionEngineBindings.cpp -o r\src\lib\EE\ExecutionEngineBindings.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\GDBRegistrationListener.cpp -o r\src\lib\EE\GDBRegistrationListener.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Interpreter\Execution.cpp -o r\src\lib\EE\Interpreter\Execution.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Interpreter\ExternalFunctions.cpp -o r\src\lib\EE\Interpreter\ExternalFunctions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Interpreter\Interpreter.cpp -o r\src\lib\EE\Interpreter\Interpreter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\MCJIT\MCJIT.cpp -o r\src\lib\EE\MCJIT\MCJIT.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\ExecutionUtils.cpp -o r\src\lib\EE\Orc\ExecutionUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\IndirectionUtils.cpp -o r\src\lib\EE\Orc\IndirectionUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\NullResolver.cpp -o r\src\lib\EE\Orc\NullResolver.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcArchitectureSupport.cpp -o r\src\lib\EE\Orc\OrcArchitectureSupport.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcCBindings.cpp -o r\src\lib\EE\Orc\OrcCBindings.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcCBindingsStack.cpp -o r\src\lib\EE\Orc\OrcCBindingsStack.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcError.cpp -o r\src\lib\EE\Orc\OrcError.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcMCJITReplacement.cpp -o r\src\lib\EE\Orc\OrcMCJITReplacement.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\Orc\OrcRemoteTargetRPCAPI.cpp -o r\src\lib\EE\Orc\OrcRemoteTargetRPCAPI.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RTDyldMemoryManager.cpp -o r\src\lib\EE\RuntimeDyld\RTDyldMemoryManager.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RuntimeDyld.cpp -o r\src\lib\EE\RuntimeDyld\RuntimeDyld.o
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp: In member function 'void llvm::RuntimeDyldImpl::computeTotalAllocSize(const llvm::object::ObjectFile&, uint64_t&, uint32_t&, uint64_t&, uint32_t&, uint64_t&, uint32_t&)':
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:384:50: error: no matching function for call to 'max(uint32_t&, unsigned int&)'
         CodeAlign = std::max(CodeAlign, Alignment);
                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note: candidate: template<class _Tp> const _Tp& std::max(const _Tp&, const _Tp&)
     max(const _Tp& __a, const _Tp& __b)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:384:50: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         CodeAlign = std::max(CodeAlign, Alignment);
                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note: candidate: template<class _Tp, class _Compare> const _Tp& std::max(const _Tp&, const _Tp&, _Compare)
     max(const _Tp& __a, const _Tp& __b, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:384:50: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         CodeAlign = std::max(CodeAlign, Alignment);
                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note: candidate: template<class _Tp> _Tp std::max(std::initializer_list<_Tp>)
     max(initializer_list<_Tp> __l)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:384:50: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         CodeAlign = std::max(CodeAlign, Alignment);
                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note: candidate: template<class _Tp, class _Compare> _Tp std::max(std::initializer_list<_Tp>, _Compare)
     max(initializer_list<_Tp> __l, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:384:50: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         CodeAlign = std::max(CodeAlign, Alignment);
                                                  ^
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:387:54: error: no matching function for call to 'max(uint32_t&, unsigned int&)'
         RODataAlign = std::max(RODataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note: candidate: template<class _Tp> const _Tp& std::max(const _Tp&, const _Tp&)
     max(const _Tp& __a, const _Tp& __b)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:387:54: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         RODataAlign = std::max(RODataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note: candidate: template<class _Tp, class _Compare> const _Tp& std::max(const _Tp&, const _Tp&, _Compare)
     max(const _Tp& __a, const _Tp& __b, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:387:54: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         RODataAlign = std::max(RODataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note: candidate: template<class _Tp> _Tp std::max(std::initializer_list<_Tp>)
     max(initializer_list<_Tp> __l)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:387:54: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         RODataAlign = std::max(RODataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note: candidate: template<class _Tp, class _Compare> _Tp std::max(std::initializer_list<_Tp>, _Compare)
     max(initializer_list<_Tp> __l, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:387:54: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         RODataAlign = std::max(RODataAlign, Alignment);
                                                      ^
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:390:54: error: no matching function for call to 'max(uint32_t&, unsigned int&)'
         RWDataAlign = std::max(RWDataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note: candidate: template<class _Tp> const _Tp& std::max(const _Tp&, const _Tp&)
     max(const _Tp& __a, const _Tp& __b)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:390:54: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         RWDataAlign = std::max(RWDataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note: candidate: template<class _Tp, class _Compare> const _Tp& std::max(const _Tp&, const _Tp&, _Compare)
     max(const _Tp& __a, const _Tp& __b, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:390:54: note:   deduced conflicting types for parameter 'const _Tp' ('long unsigned int' and 'unsigned int')
         RWDataAlign = std::max(RWDataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note: candidate: template<class _Tp> _Tp std::max(std::initializer_list<_Tp>)
     max(initializer_list<_Tp> __l)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:390:54: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         RWDataAlign = std::max(RWDataAlign, Alignment);
                                                      ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/ADT/StringMap.h:17,
                 from src\include/llvm/Support/Host.h:17,
                 from src\include/llvm/ADT/Hashing.h:49,
                 from src\include/llvm/ADT/ArrayRef.h:13,
                 from src\include/llvm/IR/User.h:22,
                 from src\include/llvm/IR/Constant.h:17,
                 from src\include/llvm/IR/GlobalValue.h:21,
                 from src\include/llvm/ExecutionEngine/JITSymbolFlags.h:17,
                 from src\include/llvm/ExecutionEngine/RuntimeDyld.h:17,
                 from src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note: candidate: template<class _Tp, class _Compare> _Tp std::max(std::initializer_list<_Tp>, _Compare)
     max(initializer_list<_Tp> __l, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note:   template argument deduction/substitution failed:
src\lib\EE\RuntimeDyld\RuntimeDyld.cpp:390:54: note:   mismatched types 'std::initializer_list<_Tp>' and 'long unsigned int'
         RWDataAlign = std::max(RWDataAlign, Alignment);
                                                      ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RuntimeDyldChecker.cpp -o r\src\lib\EE\RuntimeDyld\RuntimeDyldChecker.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RuntimeDyldCOFF.cpp -o r\src\lib\EE\RuntimeDyld\RuntimeDyldCOFF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RuntimeDyldELF.cpp -o r\src\lib\EE\RuntimeDyld\RuntimeDyldELF.o
src\lib\EE\RuntimeDyld\RuntimeDyldELF.cpp:1787:17: error: prototype for 'llvm::RelocationEntry llvm::RuntimeDyldELF::computeGOTOffsetRE(unsigned int, uint64_t, uint64_t, uint32_t)' does not match any in class 'llvm::RuntimeDyldELF'
 RelocationEntry RuntimeDyldELF::computeGOTOffsetRE(unsigned SectionID, uint64_t
                 ^
In file included from src\lib\EE\RuntimeDyld\RuntimeDyldELF.cpp:14:0:
src\lib\EE\RuntimeDyld\RuntimeDyldELF.h:114:19: error: candidate is: llvm::RelocationEntry llvm::RuntimeDyldELF::computeGOTOffsetRE(unsigned int, uint64_t, uint64_t, unsigned int)
   RelocationEntry computeGOTOffsetRE(unsigned SectionID,
                   ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\RuntimeDyld\RuntimeDyldMachO.cpp -o r\src\lib\EE\RuntimeDyld\RuntimeDyldMachO.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\SectionMemoryManager.cpp -o r\src\lib\EE\SectionMemoryManager.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\EE\TargetSelect.cpp -o r\src\lib\EE\TargetSelect.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\AsmWriter.cpp -o r\src\lib\IR\AsmWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Attributes.cpp -o r\src\lib\IR\Attributes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\AutoUpgrade.cpp -o r\src\lib\IR\AutoUpgrade.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\BasicBlock.cpp -o r\src\lib\IR\BasicBlock.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Comdat.cpp -o r\src\lib\IR\Comdat.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\ConstantFold.cpp -o r\src\lib\IR\ConstantFold.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\ConstantRange.cpp -o r\src\lib\IR\ConstantRange.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Constants.cpp -o r\src\lib\IR\Constants.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Core.cpp -o r\src\lib\IR\Core.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DataLayout.cpp -o r\src\lib\IR\DataLayout.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DebugInfo.cpp -o r\src\lib\IR\DebugInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DebugInfoMetadata.cpp -o r\src\lib\IR\DebugInfoMetadata.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DebugLoc.cpp -o r\src\lib\IR\DebugLoc.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DiagnosticInfo.cpp -o r\src\lib\IR\DiagnosticInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DiagnosticPrinter.cpp -o r\src\lib\IR\DiagnosticPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\DIBuilder.cpp -o r\src\lib\IR\DIBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Dominators.cpp -o r\src\lib\IR\Dominators.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Function.cpp -o r\src\lib\IR\Function.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\FunctionInfo.cpp -o r\src\lib\IR\FunctionInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\GCOV.cpp -o r\src\lib\IR\GCOV.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Globals.cpp -o r\src\lib\IR\Globals.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\GVMaterializer.cpp -o r\src\lib\IR\GVMaterializer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\InlineAsm.cpp -o r\src\lib\IR\InlineAsm.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Instruction.cpp -o r\src\lib\IR\Instruction.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Instructions.cpp -o r\src\lib\IR\Instructions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\IntrinsicInst.cpp -o r\src\lib\IR\IntrinsicInst.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\IRBuilder.cpp -o r\src\lib\IR\IRBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\IRPrintingPasses.cpp -o r\src\lib\IR\IRPrintingPasses.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\LegacyPassManager.cpp -o r\src\lib\IR\LegacyPassManager.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\LLVMContext.cpp -o r\src\lib\IR\LLVMContext.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\LLVMContextImpl.cpp -o r\src\lib\IR\LLVMContextImpl.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Mangler.cpp -o r\src\lib\IR\Mangler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\MDBuilder.cpp -o r\src\lib\IR\MDBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Metadata.cpp -o r\src\lib\IR\Metadata.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Module.cpp -o r\src\lib\IR\Module.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Operator.cpp -o r\src\lib\IR\Operator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Pass.cpp -o r\src\lib\IR\Pass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\PassManager.cpp -o r\src\lib\IR\PassManager.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\PassRegistry.cpp -o r\src\lib\IR\PassRegistry.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Statepoint.cpp -o r\src\lib\IR\Statepoint.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Type.cpp -o r\src\lib\IR\Type.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\TypeFinder.cpp -o r\src\lib\IR\TypeFinder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Use.cpp -o r\src\lib\IR\Use.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\User.cpp -o r\src\lib\IR\User.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Value.cpp -o r\src\lib\IR\Value.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\ValueSymbolTable.cpp -o r\src\lib\IR\ValueSymbolTable.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\ValueTypes.cpp -o r\src\lib\IR\ValueTypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IR\Verifier.cpp -o r\src\lib\IR\Verifier.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\IRReader\IRReader.cpp -o r\src\lib\IRReader\IRReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Linker\IRMover.cpp -o r\src\lib\Linker\IRMover.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Linker\LinkModules.cpp -o r\src\lib\Linker\LinkModules.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\ConstantPools.cpp -o r\src\lib\MC\ConstantPools.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\ELFObjectWriter.cpp -o r\src\lib\MC\ELFObjectWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MachObjectWriter.cpp -o r\src\lib\MC\MachObjectWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmBackend.cpp -o r\src\lib\MC\MCAsmBackend.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmInfo.cpp -o r\src\lib\MC\MCAsmInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmInfoCOFF.cpp -o r\src\lib\MC\MCAsmInfoCOFF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmInfoDarwin.cpp -o r\src\lib\MC\MCAsmInfoDarwin.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmInfoELF.cpp -o r\src\lib\MC\MCAsmInfoELF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAsmStreamer.cpp -o r\src\lib\MC\MCAsmStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCAssembler.cpp -o r\src\lib\MC\MCAssembler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCCodeEmitter.cpp -o r\src\lib\MC\MCCodeEmitter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCCodeGenInfo.cpp -o r\src\lib\MC\MCCodeGenInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCContext.cpp -o r\src\lib\MC\MCContext.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCDisassembler\Disassembler.cpp -o r\src\lib\MC\MCDisassembler\Disassembler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCDisassembler\MCDisassembler.cpp -o r\src\lib\MC\MCDisassembler\MCDisassembler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCDisassembler\MCExternalSymbolizer.cpp -o r\src\lib\MC\MCDisassembler\MCExternalSymbolizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCDisassembler\MCRelocationInfo.cpp -o r\src\lib\MC\MCDisassembler\MCRelocationInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCDwarf.cpp -o r\src\lib\MC\MCDwarf.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCELFObjectTargetWriter.cpp -o r\src\lib\MC\MCELFObjectTargetWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCELFStreamer.cpp -o r\src\lib\MC\MCELFStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCExpr.cpp -o r\src\lib\MC\MCExpr.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCFragment.cpp -o r\src\lib\MC\MCFragment.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCInst.cpp -o r\src\lib\MC\MCInst.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCInstPrinter.cpp -o r\src\lib\MC\MCInstPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCInstrAnalysis.cpp -o r\src\lib\MC\MCInstrAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCInstrDesc.cpp -o r\src\lib\MC\MCInstrDesc.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCLabel.cpp -o r\src\lib\MC\MCLabel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCLinkerOptimizationHint.cpp -o r\src\lib\MC\MCLinkerOptimizationHint.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCMachObjectTargetWriter.cpp -o r\src\lib\MC\MCMachObjectTargetWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCMachOStreamer.cpp -o r\src\lib\MC\MCMachOStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCNullStreamer.cpp -o r\src\lib\MC\MCNullStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCObjectFileInfo.cpp -o r\src\lib\MC\MCObjectFileInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCObjectStreamer.cpp -o r\src\lib\MC\MCObjectStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCObjectWriter.cpp -o r\src\lib\MC\MCObjectWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\AsmLexer.cpp -o r\src\lib\MC\MCParser\AsmLexer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\AsmParser.cpp -o r\src\lib\MC\MCParser\AsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\COFFAsmParser.cpp -o r\src\lib\MC\MCParser\COFFAsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\DarwinAsmParser.cpp -o r\src\lib\MC\MCParser\DarwinAsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\ELFAsmParser.cpp -o r\src\lib\MC\MCParser\ELFAsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\MCAsmLexer.cpp -o r\src\lib\MC\MCParser\MCAsmLexer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\MCAsmParser.cpp -o r\src\lib\MC\MCParser\MCAsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\MCAsmParserExtension.cpp -o r\src\lib\MC\MCParser\MCAsmParserExtension.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCParser\MCTargetAsmParser.cpp -o r\src\lib\MC\MCParser\MCTargetAsmParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCRegisterInfo.cpp -o r\src\lib\MC\MCRegisterInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSchedule.cpp -o r\src\lib\MC\MCSchedule.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSection.cpp -o r\src\lib\MC\MCSection.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSectionCOFF.cpp -o r\src\lib\MC\MCSectionCOFF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSectionELF.cpp -o r\src\lib\MC\MCSectionELF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSectionMachO.cpp -o r\src\lib\MC\MCSectionMachO.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCStreamer.cpp -o r\src\lib\MC\MCStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSubtargetInfo.cpp -o r\src\lib\MC\MCSubtargetInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSymbol.cpp -o r\src\lib\MC\MCSymbol.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSymbolELF.cpp -o r\src\lib\MC\MCSymbolELF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCSymbolizer.cpp -o r\src\lib\MC\MCSymbolizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCTargetOptions.cpp -o r\src\lib\MC\MCTargetOptions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCValue.cpp -o r\src\lib\MC\MCValue.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCWin64EH.cpp -o r\src\lib\MC\MCWin64EH.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\MCWinEH.cpp -o r\src\lib\MC\MCWinEH.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\StringTableBuilder.cpp -o r\src\lib\MC\StringTableBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\SubtargetFeature.cpp -o r\src\lib\MC\SubtargetFeature.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\WinCOFFObjectWriter.cpp -o r\src\lib\MC\WinCOFFObjectWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\WinCOFFStreamer.cpp -o r\src\lib\MC\WinCOFFStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\MC\YAML.cpp -o r\src\lib\MC\YAML.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\Archive.cpp -o r\src\lib\Object\Archive.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\ArchiveWriter.cpp -o r\src\lib\Object\ArchiveWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\Binary.cpp -o r\src\lib\Object\Binary.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\COFFObjectFile.cpp -o r\src\lib\Object\COFFObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\COFFYAML.cpp -o r\src\lib\Object\COFFYAML.o
src\lib\Object\COFFYAML.cpp: In static member function 'static void llvm::yaml::MappingTraits<llvm::COFFYAML::Section>::mapping(llvm::yaml::IO&, llvm::COFFYAML::Section&)':
src\lib\Object\COFFYAML.cpp:488:65: error: no matching function for call to 'llvm::yaml::IO::mapOptional(const char [15], uint32_t&, unsigned int)'
   IO.mapOptional("VirtualAddress", Sec.Header.VirtualAddress, 0U);
                                                                 ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:561:3: note: candidate: template<class T> typename std::enable_if<llvm::yaml::has_SequenceTraits<T>::value, void>::type llvm::yaml::IO::mapOptional(const char*, T&)
   mapOptional(const char* Key, T& Val) {
   ^
src\include/llvm/Support/YAMLTraits.h:561:3: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:488:65: note:   candidate expects 2 arguments, 3 provided
   IO.mapOptional("VirtualAddress", Sec.Header.VirtualAddress, 0U);
                                                                 ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:569:8: note: candidate: template<class T> void llvm::yaml::IO::mapOptional(const char*, llvm::Optional<T>&)
   void mapOptional(const char* Key, Optional<T> &Val) {
        ^
src\include/llvm/Support/YAMLTraits.h:569:8: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:488:65: note:   mismatched types 'llvm::Optional<T>' and 'uint32_t {aka long unsigned int}'
   IO.mapOptional("VirtualAddress", Sec.Header.VirtualAddress, 0U);
                                                                 ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:575:3: note: candidate: template<class T> typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&)
   mapOptional(const char* Key, T& Val) {
   ^
src\include/llvm/Support/YAMLTraits.h:575:3: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:488:65: note:   candidate expects 2 arguments, 3 provided
   IO.mapOptional("VirtualAddress", Sec.Header.VirtualAddress, 0U);
                                                                 ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:580:8: note: candidate: template<class T> void llvm::yaml::IO::mapOptional(const char*, T&, const T&)
   void mapOptional(const char* Key, T& Val, const T& Default) {
        ^
src\include/llvm/Support/YAMLTraits.h:580:8: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:488:65: note:   deduced conflicting types for parameter 'const T' ('long unsigned int' and 'unsigned int')
   IO.mapOptional("VirtualAddress", Sec.Header.VirtualAddress, 0U);
                                                                 ^
src\lib\Object\COFFYAML.cpp:489:59: error: no matching function for call to 'llvm::yaml::IO::mapOptional(const char [12], uint32_t&, unsigned int)'
   IO.mapOptional("VirtualSize", Sec.Header.VirtualSize, 0U);
                                                           ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:561:3: note: candidate: template<class T> typename std::enable_if<llvm::yaml::has_SequenceTraits<T>::value, void>::type llvm::yaml::IO::mapOptional(const char*, T&)
   mapOptional(const char* Key, T& Val) {
   ^
src\include/llvm/Support/YAMLTraits.h:561:3: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:489:59: note:   candidate expects 2 arguments, 3 provided
   IO.mapOptional("VirtualSize", Sec.Header.VirtualSize, 0U);
                                                           ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:569:8: note: candidate: template<class T> void llvm::yaml::IO::mapOptional(const char*, llvm::Optional<T>&)
   void mapOptional(const char* Key, Optional<T> &Val) {
        ^
src\include/llvm/Support/YAMLTraits.h:569:8: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:489:59: note:   mismatched types 'llvm::Optional<T>' and 'uint32_t {aka long unsigned int}'
   IO.mapOptional("VirtualSize", Sec.Header.VirtualSize, 0U);
                                                           ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:575:3: note: candidate: template<class T> typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&)
   mapOptional(const char* Key, T& Val) {
   ^
src\include/llvm/Support/YAMLTraits.h:575:3: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:489:59: note:   candidate expects 2 arguments, 3 provided
   IO.mapOptional("VirtualSize", Sec.Header.VirtualSize, 0U);
                                                           ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h:580:8: note: candidate: template<class T> void llvm::yaml::IO::mapOptional(const char*, T&, const T&)
   void mapOptional(const char* Key, T& Val, const T& Default) {
        ^
src\include/llvm/Support/YAMLTraits.h:580:8: note:   template argument deduction/substitution failed:
src\lib\Object\COFFYAML.cpp:489:59: note:   deduced conflicting types for parameter 'const T' ('long unsigned int' and 'unsigned int')
   IO.mapOptional("VirtualSize", Sec.Header.VirtualSize, 0U);
                                                           ^
In file included from src\include/llvm/MC/YAML.h:4:0,
                 from src\include/llvm/Object/COFFYAML.h:18,
                 from src\lib\Object\COFFYAML.cpp:14:
src\include/llvm/Support/YAMLTraits.h: In instantiation of 'typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type llvm::yaml::yamlize(llvm::yaml::IO&, T&, bool) [with T = unsigned int; typename std::enable_if<llvm::yaml::missingTraits<T>::value, void>::type = void]':
src\include/llvm/Support/YAMLTraits.h:627:14:   required from 'void llvm::yaml::IO::processKey(const char*, T&, bool) [with T = unsigned int]'
src\include/llvm/Support/YAMLTraits.h:576:5:   required from 'typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type llvm::yaml::IO::mapOptional(const char*, T&) [with T = unsigned int; typename std::enable_if<(! llvm::yaml::has_SequenceTraits<T>::value), void>::type = voi
d]'
src\lib\Object\COFFYAML.cpp:490:44:   required from here
src\include/llvm/Support/YAMLTraits.h:738:42: error: invalid application of 'sizeof' to incomplete type 'llvm::yaml::MissingTrait<unsigned int>'
   char missing_yaml_trait_for_type[sizeof(MissingTrait<T>)];
                                          ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\ELF.cpp -o r\src\lib\Object\ELF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\ELFObjectFile.cpp -o r\src\lib\Object\ELFObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\ELFYAML.cpp -o r\src\lib\Object\ELFYAML.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\Error.cpp -o r\src\lib\Object\Error.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\FunctionIndexObjectFile.cpp -o r\src\lib\Object\FunctionIndexObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\IRObjectFile.cpp -o r\src\lib\Object\IRObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\MachOObjectFile.cpp -o r\src\lib\Object\MachOObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\MachOUniversal.cpp -o r\src\lib\Object\MachOUniversal.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\Object.cpp -o r\src\lib\Object\Object.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\ObjectFile.cpp -o r\src\lib\Object\ObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\RecordStreamer.cpp -o r\src\lib\Object\RecordStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\SymbolicFile.cpp -o r\src\lib\Object\SymbolicFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Object\SymbolSize.cpp -o r\src\lib\Object\SymbolSize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Option\Arg.cpp -o r\src\lib\Option\Arg.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Option\ArgList.cpp -o r\src\lib\Option\ArgList.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Option\Option.cpp -o r\src\lib\Option\Option.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Option\OptTable.cpp -o r\src\lib\Option\OptTable.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Passes\PassBuilder.cpp -o r\src\lib\Passes\PassBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\CoverageMapping.cpp -o r\src\lib\ProfileData\CoverageMapping.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\CoverageMappingReader.cpp -o r\src\lib\ProfileData\CoverageMappingReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\CoverageMappingWriter.cpp -o r\src\lib\ProfileData\CoverageMappingWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\InstrProf.cpp -o r\src\lib\ProfileData\InstrProf.o
src\lib\ProfileData\InstrProf.cpp: In function 'int llvm::readPGOFuncNameStrings(llvm::StringRef, llvm::InstrProfSymtab&)':
src\lib\ProfileData\InstrProf.cpp:226:52: warning: invalid conversion from 'uint32_t* {aka long unsigned int*}' to 'unsigned int*' [-fpermissive]
     uint64_t UncompressedSize = decodeULEB128(P, &N);
                                                    ^
In file included from src\lib\ProfileData\InstrProf.cpp:23:0:
src\include/llvm/Support/LEB128.h:80:17: note:   initializing argument 2 of 'uint64_t llvm::decodeULEB128(const uint8_t*, unsigned int*)'
 inline uint64_t decodeULEB128(const uint8_t *p, unsigned *n = nullptr) {
                 ^
src\lib\ProfileData\InstrProf.cpp:228:50: warning: invalid conversion from 'uint32_t* {aka long unsigned int*}' to 'unsigned int*' [-fpermissive]
     uint64_t CompressedSize = decodeULEB128(P, &N);
                                                  ^
In file included from src\lib\ProfileData\InstrProf.cpp:23:0:
src\include/llvm/Support/LEB128.h:80:17: note:   initializing argument 2 of 'uint64_t llvm::decodeULEB128(const uint8_t*, unsigned int*)'
 inline uint64_t decodeULEB128(const uint8_t *p, unsigned *n = nullptr) {
                 ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\InstrProfReader.cpp -o r\src\lib\ProfileData\InstrProfReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\InstrProfWriter.cpp -o r\src\lib\ProfileData\InstrProfWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\SampleProf.cpp -o r\src\lib\ProfileData\SampleProf.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\SampleProfReader.cpp -o r\src\lib\ProfileData\SampleProfReader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\ProfileData\SampleProfWriter.cpp -o r\src\lib\ProfileData\SampleProfWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Allocator.cpp -o r\src\lib\Support\Allocator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\APFloat.cpp -o r\src\lib\Support\APFloat.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\APInt.cpp -o r\src\lib\Support\APInt.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\APSInt.cpp -o r\src\lib\Support\APSInt.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ARMBuildAttrs.cpp -o r\src\lib\Support\ARMBuildAttrs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ARMWinEH.cpp -o r\src\lib\Support\ARMWinEH.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Atomic.cpp -o r\src\lib\Support\Atomic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\BlockFrequency.cpp -o r\src\lib\Support\BlockFrequency.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\BranchProbability.cpp -o r\src\lib\Support\BranchProbability.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\circular_raw_ostream.cpp -o r\src\lib\Support\circular_raw_ostream.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\COM.cpp -o r\src\lib\Support\COM.o
In file included from src\lib\Support\COM.cpp:22:0:
src\lib\Support\Windows/COM.inc:18:21: fatal error: objbase.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\CommandLine.cpp -o r\src\lib\Support\CommandLine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Compression.cpp -o r\src\lib\Support\Compression.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ConvertUTF.c -o r\src\lib\Support\ConvertUTF.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ConvertUTFWrapper.cpp -o r\src\lib\Support\ConvertUTFWrapper.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\CrashRecoveryContext.cpp -o r\src\lib\Support\CrashRecoveryContext.o
In file included from src\lib\Support\CrashRecoveryContext.cpp:146:0:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\DAGDeltaAlgorithm.cpp -o r\src\lib\Support\DAGDeltaAlgorithm.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\DataExtractor.cpp -o r\src\lib\Support\DataExtractor.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\DataStream.cpp -o r\src\lib\Support\DataStream.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Debug.cpp -o r\src\lib\Support\Debug.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\DeltaAlgorithm.cpp -o r\src\lib\Support\DeltaAlgorithm.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Dwarf.cpp -o r\src\lib\Support\Dwarf.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\DynamicLibrary.cpp -o r\src\lib\Support\DynamicLibrary.o
In file included from src\lib\Support\Windows/DynamicLibrary.inc:14:0,
                 from src\lib\Support\DynamicLibrary.cpp:40:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Errno.cpp -o r\src\lib\Support\Errno.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ErrorHandling.cpp -o r\src\lib\Support\ErrorHandling.o
src\lib\Support\ErrorHandling.cpp:143:22: fatal error: winerror.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\FileOutputBuffer.cpp -o r\src\lib\Support\FileOutputBuffer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\FileUtilities.cpp -o r\src\lib\Support\FileUtilities.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\FoldingSet.cpp -o r\src\lib\Support\FoldingSet.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\FormattedStream.cpp -o r\src\lib\Support\FormattedStream.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\GraphWriter.cpp -o r\src\lib\Support\GraphWriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Hashing.cpp -o r\src\lib\Support\Hashing.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Host.cpp -o r\src\lib\Support\Host.o
In file included from src\lib\Support\Windows/Host.inc:14:0,
                 from src\lib\Support\Host.cpp:30:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\IntEqClasses.cpp -o r\src\lib\Support\IntEqClasses.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\IntervalMap.cpp -o r\src\lib\Support\IntervalMap.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\IntrusiveRefCntPtr.cpp -o r\src\lib\Support\IntrusiveRefCntPtr.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\JamCRC.cpp -o r\src\lib\Support\JamCRC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\LEB128.cpp -o r\src\lib\Support\LEB128.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\LineIterator.cpp -o r\src\lib\Support\LineIterator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Locale.cpp -o r\src\lib\Support\Locale.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\LockFileManager.cpp -o r\src\lib\Support\LockFileManager.o
src\lib\Support\LockFileManager.cpp:19:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ManagedStatic.cpp -o r\src\lib\Support\ManagedStatic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\MathExtras.cpp -o r\src\lib\Support\MathExtras.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\MD5.cpp -o r\src\lib\Support\MD5.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Memory.cpp -o r\src\lib\Support\Memory.o
In file included from src\lib\Support\Windows/Memory.inc:21:0,
                 from src\lib\Support\Memory.cpp:24:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\MemoryBuffer.cpp -o r\src\lib\Support\MemoryBuffer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\MemoryObject.cpp -o r\src\lib\Support\MemoryObject.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Mutex.cpp -o r\src\lib\Support\Mutex.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Options.cpp -o r\src\lib\Support\Options.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Path.cpp -o r\src\lib\Support\Path.o
In file included from src\lib\Support\Windows/Path.inc:28:0,
                 from src\lib\Support\Path.cpp:1136:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\PluginLoader.cpp -o r\src\lib\Support\PluginLoader.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\PrettyStackTrace.cpp -o r\src\lib\Support\PrettyStackTrace.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Process.cpp -o r\src\lib\Support\Process.o
In file included from src\lib\Support\Windows/Process.inc:20:0,
                 from src\lib\Support\Process.cpp:81:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Program.cpp -o r\src\lib\Support\Program.o
In file included from src\lib\Support\Windows/Program.inc:14:0,
                 from src\lib\Support\Program.cpp:68:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\RandomNumberGenerator.cpp -o r\src\lib\Support\RandomNumberGenerator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\raw_os_ostream.cpp -o r\src\lib\Support\raw_os_ostream.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\raw_ostream.cpp -o r\src\lib\Support\raw_ostream.o
In file included from src\lib\Support\raw_ostream.cpp:61:0:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\regcomp.c -o r\src\lib\Support\regcomp.o
src\lib\Support\regcomp.c: In function 'void enlarge(parse*, sopno)':
src\lib\Support\regcomp.c:1425:7: error: 'uintptr_t' was not declared in this scope
  if ((uintptr_t)size > SIZE_MAX / sizeof(sop)) {
       ^
src\lib\Support\regcomp.c:1425:17: error: expected ')' before 'size'
  if ((uintptr_t)size > SIZE_MAX / sizeof(sop)) {
                 ^
src\lib\Support\regcomp.c: In function 'void stripsnug(parse*, re_guts*)':
src\lib\Support\regcomp.c:1446:7: error: 'uintptr_t' was not declared in this scope
  if ((uintptr_t)p->slen > SIZE_MAX / sizeof(sop)) {
       ^
src\lib\Support\regcomp.c:1446:17: error: expected ')' before 'p'
  if ((uintptr_t)p->slen > SIZE_MAX / sizeof(sop)) {
                 ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\regerror.c -o r\src\lib\Support\regerror.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Regex.cpp -o r\src\lib\Support\Regex.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\regexec.c -o r\src\lib\Support\regexec.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\regfree.c -o r\src\lib\Support\regfree.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\regstrlcpy.c -o r\src\lib\Support\regstrlcpy.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\RWMutex.cpp -o r\src\lib\Support\RWMutex.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ScaledNumber.cpp -o r\src\lib\Support\ScaledNumber.o
src\lib\Support\ScaledNumber.cpp: In function 'std::__cxx11::string toStringAPFloat(uint64_t, int, unsigned int)':
src\lib\Support\ScaledNumber.cpp:168:69: error: no matching function for call to 'min(const int32_t&, int)'
   int NewE = std::min(ScaledNumbers::MaxScale, E + 63 - LeadingZeros);
                                                                     ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/Support/ScaledNumber.h:26,
                 from src\lib\Support\ScaledNumber.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:147:5: note: candidate: template<class _Tp> const _Tp& std::min(const _Tp&, const _Tp&)
     min(const _Tp& __a, const _Tp& __b)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:147:5: note:   template argument deduction/substitution failed:
src\lib\Support\ScaledNumber.cpp:168:69: note:   deduced conflicting types for parameter 'const _Tp' ('long int' and 'int')
   int NewE = std::min(ScaledNumbers::MaxScale, E + 63 - LeadingZeros);
                                                                     ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/Support/ScaledNumber.h:26,
                 from src\lib\Support\ScaledNumber.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:195:5: note: candidate: template<class _Tp, class _Compare> const _Tp& std::min(const _Tp&, const _Tp&, _Compare)
     min(const _Tp& __a, const _Tp& __b, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:195:5: note:   template argument deduction/substitution failed:
src\lib\Support\ScaledNumber.cpp:168:69: note:   deduced conflicting types for parameter 'const _Tp' ('long int' and 'int')
   int NewE = std::min(ScaledNumbers::MaxScale, E + 63 - LeadingZeros);
                                                                     ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/Support/ScaledNumber.h:26,
                 from src\lib\Support\ScaledNumber.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3445:5: note: candidate: template<class _Tp> _Tp std::min(std::initializer_list<_Tp>)
     min(initializer_list<_Tp> __l)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3445:5: note:   template argument deduction/substitution failed:
src\lib\Support\ScaledNumber.cpp:168:69: note:   mismatched types 'std::initializer_list<_Tp>' and 'long int'
   int NewE = std::min(ScaledNumbers::MaxScale, E + 63 - LeadingZeros);
                                                                     ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/Support/ScaledNumber.h:26,
                 from src\lib\Support\ScaledNumber.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3451:5: note: candidate: template<class _Tp, class _Compare> _Tp std::min(std::initializer_list<_Tp>, _Compare)
     min(initializer_list<_Tp> __l, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3451:5: note:   template argument deduction/substitution failed:
src\lib\Support\ScaledNumber.cpp:168:69: note:   mismatched types 'std::initializer_list<_Tp>' and 'long int'
   int NewE = std::min(ScaledNumbers::MaxScale, E + 63 - LeadingZeros);
                                                                     ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SearchForAddressOfSpecialSymbol.cpp -o r\src\lib\Support\SearchForAddressOfSpecialSymbol.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Signals.cpp -o r\src\lib\Support\Signals.o
In file included from src\lib\Support\Windows/Signals.inc:22:0,
                 from src\lib\Support\Signals.cpp:171:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SmallPtrSet.cpp -o r\src\lib\Support\SmallPtrSet.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SmallVector.cpp -o r\src\lib\Support\SmallVector.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SourceMgr.cpp -o r\src\lib\Support\SourceMgr.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SpecialCaseList.cpp -o r\src\lib\Support\SpecialCaseList.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Statistic.cpp -o r\src\lib\Support\Statistic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StreamingMemoryObject.cpp -o r\src\lib\Support\StreamingMemoryObject.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StringExtras.cpp -o r\src\lib\Support\StringExtras.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StringMap.cpp -o r\src\lib\Support\StringMap.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StringPool.cpp -o r\src\lib\Support\StringPool.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StringRef.cpp -o r\src\lib\Support\StringRef.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\StringSaver.cpp -o r\src\lib\Support\StringSaver.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\SystemUtils.cpp -o r\src\lib\Support\SystemUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\TargetParser.cpp -o r\src\lib\Support\TargetParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\TargetRegistry.cpp -o r\src\lib\Support\TargetRegistry.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Threading.cpp -o r\src\lib\Support\Threading.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ThreadLocal.cpp -o r\src\lib\Support\ThreadLocal.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ThreadPool.cpp -o r\src\lib\Support\ThreadPool.o
In file included from src\lib\Support\ThreadPool.cpp:14:0:
src\include/llvm/Support/ThreadPool.h:119:8: error: 'mutex' in namespace 'std' does not name a type
   std::mutex QueueLock;
        ^
src\include/llvm/Support/ThreadPool.h:120:8: error: 'condition_variable' in namespace 'std' does not name a type
   std::condition_variable QueueCondition;
        ^
src\include/llvm/Support/ThreadPool.h:123:8: error: 'mutex' in namespace 'std' does not name a type
   std::mutex CompletionLock;
        ^
src\include/llvm/Support/ThreadPool.h:124:8: error: 'condition_variable' in namespace 'std' does not name a type
   std::condition_variable CompletionCondition;
        ^
src\include/llvm/Support/ThreadPool.h: In member function 'std::shared_future<void> llvm::ThreadPool::async(Function&&, Args&& ...)':
src\include/llvm/Support/ThreadPool.h:77:77: error: return type 'class std::shared_future<void>' is incomplete
   inline std::shared_future<VoidTy> async(Function &&F, Args &&... ArgList) {
                                                                             ^
src\include/llvm/Support/ThreadPool.h: In member function 'std::shared_future<void> llvm::ThreadPool::async(Function&&)':
src\include/llvm/Support/ThreadPool.h:95:57: error: return type 'class std::shared_future<void>' is incomplete
   inline std::shared_future<VoidTy> async(Function &&F) {
                                                         ^
src\lib\Support\ThreadPool.cpp: In member function 'void llvm::ThreadPool::wait()':
src\lib\Support\ThreadPool.cpp:126:40: error: 'std::packaged_task<void()> Task' has incomplete type
     auto Task = std::move(Tasks.front());
                                        ^
src\lib\Support\ThreadPool.cpp: In member function 'std::shared_future<void> llvm::ThreadPool::asyncImpl(llvm::ThreadPool::TaskTy)':
src\lib\Support\ThreadPool.cpp:136:73: error: return type 'class std::shared_future<void>' is incomplete
 std::shared_future<ThreadPool::VoidTy> ThreadPool::asyncImpl(TaskTy Task) {
                                                                         ^
src\lib\Support\ThreadPool.cpp:139:66: error: invalid use of incomplete type 'class std::future<void>'
   auto Future = std::async(std::launch::deferred, std::move(Task)).share();
                                                                  ^
In file included from src\include/llvm/Support/ThreadPool.h:30:0,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/future:115:11: note: declaration of 'class std::future<void>'
     class future;
           ^
src\lib\Support\ThreadPool.cpp:142:30: error: variable 'llvm::ThreadPool::PackagedTaskTy PackagedTask' has initializer but incomplete type
   PackagedTaskTy PackagedTask([Future]() { Future.get(); });
                              ^
src\lib\Support\ThreadPool.cpp: In lambda function:
src\lib\Support\ThreadPool.cpp:142:44: error: 'Future' is not captured
   PackagedTaskTy PackagedTask([Future]() { Future.get(); });
                                            ^
src\lib\Support\ThreadPool.cpp:142:38: note: the lambda has no capture-default
   PackagedTaskTy PackagedTask([Future]() { Future.get(); });
                                      ^
src\lib\Support\ThreadPool.cpp:139:8: note: '<typeprefixerror>Future' declared here
   auto Future = std::async(std::launch::deferred, std::move(Task)).share();
        ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/deque:64:0,
                 from c:/cpcdos~3/djgpp/include/cxx/5.30/queue:60,
                 from src\include/llvm/Support/ThreadPool.h:40,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h: In instantiation of 'void std::deque<_Tp, _Alloc>::_M_destroy_data(std::deque<_Tp, _Alloc>::iterator, std::deque<_Tp, _Alloc>::iterator, const std::allocator<_CharT>&) [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_t
ask<void()> >; std::deque<_Tp, _Alloc>::iterator = std::_Deque_iterator<std::packaged_task<void()>, std::packaged_task<void()>&, std::packaged_task<void()>*>]':
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:1039:24:   required from 'std::deque<_Tp, _Alloc>::~deque() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]'
src\lib\Support\ThreadPool.cpp:116:22:   required from here
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:2036:2: error: invalid use of incomplete type 'std::deque<std::packaged_task<void()>, std::allocator<std::packaged_task<void()> > >::value_type {aka class std::packaged_task<void()>}'
  if (!__has_trivial_destructor(value_type))
  ^
In file included from src\include/llvm/Support/ThreadPool.h:30:0,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/future:121:11: note: declaration of 'std::deque<std::packaged_task<void()>, std::allocator<std::packaged_task<void()> > >::value_type {aka class std::packaged_task<void()>}'
     class packaged_task;
           ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/deque:64:0,
                 from c:/cpcdos~3/djgpp/include/cxx/5.30/queue:60,
                 from src\include/llvm/Support/ThreadPool.h:40,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h: In instantiation of 'void std::deque<_Tp, _Alloc>::pop_front() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]':
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_queue.h:244:2:   required from 'void std::queue<_Tp, _Sequence>::pop() [with _Tp = std::packaged_task<void()>; _Sequence = std::deque<std::packaged_task<void()>, std::allocator<std::packaged_task<void()> > >]'
src\lib\Support\ThreadPool.cpp:127:15:   required from here
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:1551:40: error: invalid use of incomplete type 'class std::packaged_task<void()>'
      != this->_M_impl._M_start._M_last - 1)
                                        ^
In file included from src\include/llvm/Support/ThreadPool.h:30:0,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/future:121:11: note: declaration of 'class std::packaged_task<void()>'
     class packaged_task;
           ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/deque:64:0,
                 from c:/cpcdos~3/djgpp/include/cxx/5.30/queue:60,
                 from src\include/llvm/Support/ThreadPool.h:40,
                 from src\lib\Support\ThreadPool.cpp:14:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:1555:6: error: cannot increment a pointer to incomplete type 'std::packaged_task<void()>'
      ++this->_M_impl._M_start._M_cur;
      ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h: In instantiation of 'void std::_Deque_base<_Tp, _Alloc>::_M_initialize_map(std::size_t) [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >; std::size_t = long unsigned int]':
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:490:26:   required from 'std::_Deque_base<_Tp, _Alloc>::_Deque_base() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]'
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:883:23:   required from 'std::deque<_Tp, _Alloc>::deque() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]'
src\lib\Support\ThreadPool.cpp:116:22:   required from here
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:683:74: error: invalid application of 'sizeof' to incomplete type 'std::packaged_task<void()>'
       const size_t __num_nodes = (__num_elements/ __deque_buf_size(sizeof(_Tp))
                                                                          ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:714:31: error: invalid application of 'sizeof' to incomplete type 'std::packaged_task<void()>'
      % __deque_buf_size(sizeof(_Tp)));
                               ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h: In instantiation of 'void std::_Deque_base<_Tp, _Alloc>::_M_deallocate_node(std::_Deque_base<_Tp, _Alloc>::_Ptr) [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >; std::_Deque_base<_Tp, _Alloc>::_Ptr = st
d::packaged_task<void()>*]':
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:742:20:   required from 'void std::_Deque_base<_Tp, _Alloc>::_M_destroy_nodes(std::_Deque_base<_Tp, _Alloc>::_Map_pointer, std::_Deque_base<_Tp, _Alloc>::_Map_pointer) [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_ta
sk<void()> >; std::_Deque_base<_Tp, _Alloc>::_Map_pointer = std::packaged_task<void()>**]'
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:664:20:   required from 'std::_Deque_base<_Tp, _Alloc>::~_Deque_base() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]'
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:883:23:   required from 'std::deque<_Tp, _Alloc>::deque() [with _Tp = std::packaged_task<void()>; _Alloc = std::allocator<std::packaged_task<void()> >]'
src\lib\Support\ThreadPool.cpp:116:22:   required from here
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stl_deque.h:608:59: error: invalid application of 'sizeof' to incomplete type 'std::packaged_task<void()>'
  _Traits::deallocate(_M_impl, __p, __deque_buf_size(sizeof(_Tp)));
                                                           ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Timer.cpp -o r\src\lib\Support\Timer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\TimeValue.cpp -o r\src\lib\Support\TimeValue.o
In file included from src\lib\Support\Windows/TimeValue.inc:14:0,
                 from src\lib\Support\TimeValue.cpp:55:
src\lib\Support\Windows/WindowsSupport.h:44:21: fatal error: windows.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\ToolOutputFile.cpp -o r\src\lib\Support\ToolOutputFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Triple.cpp -o r\src\lib\Support\Triple.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Twine.cpp -o r\src\lib\Support\Twine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Unicode.cpp -o r\src\lib\Support\Unicode.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Valgrind.cpp -o r\src\lib\Support\Valgrind.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\Watchdog.cpp -o r\src\lib\Support\Watchdog.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\YAMLParser.cpp -o r\src\lib\Support\YAMLParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Support\YAMLTraits.cpp -o r\src\lib\Support\YAMLTraits.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\Error.cpp -o r\src\lib\TableGen\Error.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\Main.cpp -o r\src\lib\TableGen\Main.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\Record.cpp -o r\src\lib\TableGen\Record.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\SetTheory.cpp -o r\src\lib\TableGen\SetTheory.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\StringMatcher.cpp -o r\src\lib\TableGen\StringMatcher.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\TableGenBackend.cpp -o r\src\lib\TableGen\TableGenBackend.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\TGLexer.cpp -o r\src\lib\TableGen\TGLexer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\TableGen\TGParser.cpp -o r\src\lib\TableGen\TGParser.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Hello\Hello.cpp -o r\src\lib\Tf\Hello\Hello.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineAddSub.cpp -o r\src\lib\Tf\IC\InstCombineAddSub.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineAndOrXor.cpp -o r\src\lib\Tf\IC\InstCombineAndOrXor.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineCalls.cpp -o r\src\lib\Tf\IC\InstCombineCalls.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineCasts.cpp -o r\src\lib\Tf\IC\InstCombineCasts.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineCompares.cpp -o r\src\lib\Tf\IC\InstCombineCompares.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineLoadStoreAlloca.cpp -o r\src\lib\Tf\IC\InstCombineLoadStoreAlloca.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineMulDivRem.cpp -o r\src\lib\Tf\IC\InstCombineMulDivRem.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombinePHI.cpp -o r\src\lib\Tf\IC\InstCombinePHI.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineSelect.cpp -o r\src\lib\Tf\IC\InstCombineSelect.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineShifts.cpp -o r\src\lib\Tf\IC\InstCombineShifts.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineSimplifyDemanded.cpp -o r\src\lib\Tf\IC\InstCombineSimplifyDemanded.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstCombineVectorOps.cpp -o r\src\lib\Tf\IC\InstCombineVectorOps.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IC\InstructionCombining.cpp -o r\src\lib\Tf\IC\InstructionCombining.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\AddressSanitizer.cpp -o r\src\lib\Tf\Ins\AddressSanitizer.o
src\lib\Tf\Ins\AddressSanitizer.cpp: In member function 'void {anonymous}::AddressSanitizer::instrumentAddress(llvm::Instruction*, llvm::Instruction*, llvm::Value*, uint32_t, bool, llvm::Value*, bool, uint32_t)':
src\lib\Tf\Ins\AddressSanitizer.cpp:1086:66: error: no matching function for call to 'max(unsigned int, uint32_t)'
       IntegerType::get(*C, std::max(8U, TypeSize >> Mapping.Scale));
                                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/Transforms/Instrumentation.h:17,
                 from src\lib\Tf\Ins\AddressSanitizer.cpp:16:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note: candidate: template<class _Tp> const _Tp& std::max(const _Tp&, const _Tp&)
     max(const _Tp& __a, const _Tp& __b)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:171:5: note:   template argument deduction/substitution failed:
src\lib\Tf\Ins\AddressSanitizer.cpp:1086:66: note:   deduced conflicting types for parameter 'const _Tp' ('unsigned int' and 'uint32_t {aka long unsigned int}')
       IntegerType::get(*C, std::max(8U, TypeSize >> Mapping.Scale));
                                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:61:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/Transforms/Instrumentation.h:17,
                 from src\lib\Tf\Ins\AddressSanitizer.cpp:16:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note: candidate: template<class _Tp, class _Compare> const _Tp& std::max(const _Tp&, const _Tp&, _Compare)
     max(const _Tp& __a, const _Tp& __b, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgobase.h:217:5: note:   template argument deduction/substitution failed:
src\lib\Tf\Ins\AddressSanitizer.cpp:1086:66: note:   deduced conflicting types for parameter 'const _Tp' ('unsigned int' and 'uint32_t {aka long unsigned int}')
       IntegerType::get(*C, std::max(8U, TypeSize >> Mapping.Scale));
                                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/Transforms/Instrumentation.h:17,
                 from src\lib\Tf\Ins\AddressSanitizer.cpp:16:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note: candidate: template<class _Tp> _Tp std::max(std::initializer_list<_Tp>)
     max(initializer_list<_Tp> __l)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3457:5: note:   template argument deduction/substitution failed:
src\lib\Tf\Ins\AddressSanitizer.cpp:1086:66: note:   mismatched types 'std::initializer_list<_Tp>' and 'unsigned int'
       IntegerType::get(*C, std::max(8U, TypeSize >> Mapping.Scale));
                                                                  ^
In file included from c:/cpcdos~3/djgpp/include/cxx/5.30/algorithm:62:0,
                 from src\include/llvm/ADT/StringRef.h:14,
                 from src\include/llvm/Transforms/Instrumentation.h:17,
                 from src\lib\Tf\Ins\AddressSanitizer.cpp:16:
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note: candidate: template<class _Tp, class _Compare> _Tp std::max(std::initializer_list<_Tp>, _Compare)
     max(initializer_list<_Tp> __l, _Compare __comp)
     ^
c:/cpcdos~3/djgpp/include/cxx/5.30/bits/stlalgo.h:3463:5: note:   template argument deduction/substitution failed:
src\lib\Tf\Ins\AddressSanitizer.cpp:1086:66: note:   mismatched types 'std::initializer_list<_Tp>' and 'unsigned int'
       IntegerType::get(*C, std::max(8U, TypeSize >> Mapping.Scale));
                                                                  ^

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\BoundsChecking.cpp -o r\src\lib\Tf\Ins\BoundsChecking.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\DataFlowSanitizer.cpp -o r\src\lib\Tf\Ins\DataFlowSanitizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\GCOVProfiling.cpp -o r\src\lib\Tf\Ins\GCOVProfiling.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\InstrProfiling.cpp -o r\src\lib\Tf\Ins\InstrProfiling.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\Instrumentation.cpp -o r\src\lib\Tf\Ins\Instrumentation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\MemorySanitizer.cpp -o r\src\lib\Tf\Ins\MemorySanitizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\PGOInstrumentation.cpp -o r\src\lib\Tf\Ins\PGOInstrumentation.o
src\lib\Tf\Ins\PGOInstrumentation.cpp: In member function 'void {anonymous}::PGOUseFunc::setBranchWeights()':
src\lib\Tf\Ins\PGOInstrumentation.cpp:660:52: error: no matching function for call to 'llvm::MDBuilder::createBranchWeights(llvm::SmallVector<unsigned int, 4u>&)'
                     MDB.createBranchWeights(Weights));
                                                    ^
In file included from src\lib\Tf\Ins\PGOInstrumentation.cpp:61:0:
src\include/llvm/IR/MDBuilder.h:58:11: note: candidate: llvm::MDNode* llvm::MDBuilder::createBranchWeights(uint32_t, uint32_t)
   MDNode *createBranchWeights(uint32_t TrueWeight, uint32_t FalseWeight);
           ^
src\include/llvm/IR/MDBuilder.h:58:11: note:   candidate expects 2 arguments, 1 provided
src\include/llvm/IR/MDBuilder.h:61:11: note: candidate: llvm::MDNode* llvm::MDBuilder::createBranchWeights(llvm::ArrayRef<long unsigned int>)
   MDNode *createBranchWeights(ArrayRef<uint32_t> Weights);
           ^
src\include/llvm/IR/MDBuilder.h:61:11: note:   no known conversion for argument 1 from 'llvm::SmallVector<unsigned int, 4u>' to 'llvm::ArrayRef<long unsigned int>'

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\SafeStack.cpp -o r\src\lib\Tf\Ins\SafeStack.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\SanitizerCoverage.cpp -o r\src\lib\Tf\Ins\SanitizerCoverage.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Ins\ThreadSanitizer.cpp -o r\src\lib\Tf\Ins\ThreadSanitizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\ArgumentPromotion.cpp -o r\src\lib\Tf\IPO\ArgumentPromotion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\BarrierNoopPass.cpp -o r\src\lib\Tf\IPO\BarrierNoopPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\ConstantMerge.cpp -o r\src\lib\Tf\IPO\ConstantMerge.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\CrossDSOCFI.cpp -o r\src\lib\Tf\IPO\CrossDSOCFI.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\DeadArgumentElimination.cpp -o r\src\lib\Tf\IPO\DeadArgumentElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\ElimAvailExtern.cpp -o r\src\lib\Tf\IPO\ElimAvailExtern.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\ExtractGV.cpp -o r\src\lib\Tf\IPO\ExtractGV.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\ForceFunctionAttrs.cpp -o r\src\lib\Tf\IPO\ForceFunctionAttrs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\FunctionAttrs.cpp -o r\src\lib\Tf\IPO\FunctionAttrs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\FunctionImport.cpp -o r\src\lib\Tf\IPO\FunctionImport.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\GlobalDCE.cpp -o r\src\lib\Tf\IPO\GlobalDCE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\GlobalOpt.cpp -o r\src\lib\Tf\IPO\GlobalOpt.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\InferFunctionAttrs.cpp -o r\src\lib\Tf\IPO\InferFunctionAttrs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\InlineAlways.cpp -o r\src\lib\Tf\IPO\InlineAlways.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\Inliner.cpp -o r\src\lib\Tf\IPO\Inliner.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\InlineSimple.cpp -o r\src\lib\Tf\IPO\InlineSimple.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\Internalize.cpp -o r\src\lib\Tf\IPO\Internalize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\IPConstantPropagation.cpp -o r\src\lib\Tf\IPO\IPConstantPropagation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\IPO.cpp -o r\src\lib\Tf\IPO\IPO.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\LoopExtractor.cpp -o r\src\lib\Tf\IPO\LoopExtractor.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\LowerBitSets.cpp -o r\src\lib\Tf\IPO\LowerBitSets.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\MergeFunctions.cpp -o r\src\lib\Tf\IPO\MergeFunctions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\PartialInlining.cpp -o r\src\lib\Tf\IPO\PartialInlining.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\PassManagerBuilder.cpp -o r\src\lib\Tf\IPO\PassManagerBuilder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\PruneEH.cpp -o r\src\lib\Tf\IPO\PruneEH.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\SampleProfile.cpp -o r\src\lib\Tf\IPO\SampleProfile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\StripDeadPrototypes.cpp -o r\src\lib\Tf\IPO\StripDeadPrototypes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\IPO\StripSymbols.cpp -o r\src\lib\Tf\IPO\StripSymbols.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\DependencyAnalysis.cpp -o r\src\lib\Tf\OC\DependencyAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ObjCARC.cpp -o r\src\lib\Tf\OC\ObjCARC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ObjCARCAPElim.cpp -o r\src\lib\Tf\OC\ObjCARCAPElim.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ObjCARCContract.cpp -o r\src\lib\Tf\OC\ObjCARCContract.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ObjCARCExpand.cpp -o r\src\lib\Tf\OC\ObjCARCExpand.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ObjCARCOpts.cpp -o r\src\lib\Tf\OC\ObjCARCOpts.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ProvenanceAnalysis.cpp -o r\src\lib\Tf\OC\ProvenanceAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\ProvenanceAnalysisEvaluator.cpp -o r\src\lib\Tf\OC\ProvenanceAnalysisEvaluator.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\OC\PtrState.cpp -o r\src\lib\Tf\OC\PtrState.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\ADCE.cpp -o r\src\lib\Tf\Scalar\ADCE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\AlignmentFromAssumptions.cpp -o r\src\lib\Tf\Scalar\AlignmentFromAssumptions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\BDCE.cpp -o r\src\lib\Tf\Scalar\BDCE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\ConstantHoisting.cpp -o r\src\lib\Tf\Scalar\ConstantHoisting.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\ConstantProp.cpp -o r\src\lib\Tf\Scalar\ConstantProp.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\CorrelatedValuePropagation.cpp -o r\src\lib\Tf\Scalar\CorrelatedValuePropagation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\DCE.cpp -o r\src\lib\Tf\Scalar\DCE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\DeadStoreElimination.cpp -o r\src\lib\Tf\Scalar\DeadStoreElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\EarlyCSE.cpp -o r\src\lib\Tf\Scalar\EarlyCSE.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\FlattenCFGPass.cpp -o r\src\lib\Tf\Scalar\FlattenCFGPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Float2Int.cpp -o r\src\lib\Tf\Scalar\Float2Int.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\GVN.cpp -o r\src\lib\Tf\Scalar\GVN.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\InductiveRangeCheckElimination.cpp -o r\src\lib\Tf\Scalar\InductiveRangeCheckElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\IndVarSimplify.cpp -o r\src\lib\Tf\Scalar\IndVarSimplify.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\JumpThreading.cpp -o r\src\lib\Tf\Scalar\JumpThreading.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LICM.cpp -o r\src\lib\Tf\Scalar\LICM.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoadCombine.cpp -o r\src\lib\Tf\Scalar\LoadCombine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopDeletion.cpp -o r\src\lib\Tf\Scalar\LoopDeletion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopDistribute.cpp -o r\src\lib\Tf\Scalar\LoopDistribute.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopIdiomRecognize.cpp -o r\src\lib\Tf\Scalar\LoopIdiomRecognize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopInstSimplify.cpp -o r\src\lib\Tf\Scalar\LoopInstSimplify.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopInterchange.cpp -o r\src\lib\Tf\Scalar\LoopInterchange.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopLoadElimination.cpp -o r\src\lib\Tf\Scalar\LoopLoadElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopRerollPass.cpp -o r\src\lib\Tf\Scalar\LoopRerollPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopRotation.cpp -o r\src\lib\Tf\Scalar\LoopRotation.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopStrengthReduce.cpp -o r\src\lib\Tf\Scalar\LoopStrengthReduce.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopUnrollPass.cpp -o r\src\lib\Tf\Scalar\LoopUnrollPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LoopUnswitch.cpp -o r\src\lib\Tf\Scalar\LoopUnswitch.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LowerAtomic.cpp -o r\src\lib\Tf\Scalar\LowerAtomic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\LowerExpectIntrinsic.cpp -o r\src\lib\Tf\Scalar\LowerExpectIntrinsic.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\MemCpyOptimizer.cpp -o r\src\lib\Tf\Scalar\MemCpyOptimizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\MergedLoadStoreMotion.cpp -o r\src\lib\Tf\Scalar\MergedLoadStoreMotion.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\NaryReassociate.cpp -o r\src\lib\Tf\Scalar\NaryReassociate.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\PartiallyInlineLibCalls.cpp -o r\src\lib\Tf\Scalar\PartiallyInlineLibCalls.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\PlaceSafepoints.cpp -o r\src\lib\Tf\Scalar\PlaceSafepoints.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Reassociate.cpp -o r\src\lib\Tf\Scalar\Reassociate.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Reg2Mem.cpp -o r\src\lib\Tf\Scalar\Reg2Mem.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\RewriteStatepointsForGC.cpp -o r\src\lib\Tf\Scalar\RewriteStatepointsForGC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Scalar.cpp -o r\src\lib\Tf\Scalar\Scalar.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Scalarizer.cpp -o r\src\lib\Tf\Scalar\Scalarizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\ScalarReplAggregates.cpp -o r\src\lib\Tf\Scalar\ScalarReplAggregates.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\SCCP.cpp -o r\src\lib\Tf\Scalar\SCCP.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\SeparateConstOffsetFromGEP.cpp -o r\src\lib\Tf\Scalar\SeparateConstOffsetFromGEP.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\SimplifyCFGPass.cpp -o r\src\lib\Tf\Scalar\SimplifyCFGPass.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\Sink.cpp -o r\src\lib\Tf\Scalar\Sink.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\SpeculativeExecution.cpp -o r\src\lib\Tf\Scalar\SpeculativeExecution.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\SROA.cpp -o r\src\lib\Tf\Scalar\SROA.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\StraightLineStrengthReduce.cpp -o r\src\lib\Tf\Scalar\StraightLineStrengthReduce.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\StructurizeCFG.cpp -o r\src\lib\Tf\Scalar\StructurizeCFG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Scalar\TailRecursionElimination.cpp -o r\src\lib\Tf\Scalar\TailRecursionElimination.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\AddDiscriminators.cpp -o r\src\lib\Tf\Utils\AddDiscriminators.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\ASanStackFrameLayout.cpp -o r\src\lib\Tf\Utils\ASanStackFrameLayout.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\BasicBlockUtils.cpp -o r\src\lib\Tf\Utils\BasicBlockUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\BreakCriticalEdges.cpp -o r\src\lib\Tf\Utils\BreakCriticalEdges.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\BuildLibCalls.cpp -o r\src\lib\Tf\Utils\BuildLibCalls.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\BypassSlowDivision.cpp -o r\src\lib\Tf\Utils\BypassSlowDivision.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\CloneFunction.cpp -o r\src\lib\Tf\Utils\CloneFunction.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\CloneModule.cpp -o r\src\lib\Tf\Utils\CloneModule.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\CmpInstAnalysis.cpp -o r\src\lib\Tf\Utils\CmpInstAnalysis.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\CodeExtractor.cpp -o r\src\lib\Tf\Utils\CodeExtractor.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\CtorUtils.cpp -o r\src\lib\Tf\Utils\CtorUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\DemoteRegToStack.cpp -o r\src\lib\Tf\Utils\DemoteRegToStack.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\FlattenCFG.cpp -o r\src\lib\Tf\Utils\FlattenCFG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\GlobalStatus.cpp -o r\src\lib\Tf\Utils\GlobalStatus.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\InlineFunction.cpp -o r\src\lib\Tf\Utils\InlineFunction.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\InstructionNamer.cpp -o r\src\lib\Tf\Utils\InstructionNamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\IntegerDivision.cpp -o r\src\lib\Tf\Utils\IntegerDivision.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LCSSA.cpp -o r\src\lib\Tf\Utils\LCSSA.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\Local.cpp -o r\src\lib\Tf\Utils\Local.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LoopSimplify.cpp -o r\src\lib\Tf\Utils\LoopSimplify.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LoopUnroll.cpp -o r\src\lib\Tf\Utils\LoopUnroll.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LoopUnrollRuntime.cpp -o r\src\lib\Tf\Utils\LoopUnrollRuntime.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LoopUtils.cpp -o r\src\lib\Tf\Utils\LoopUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LoopVersioning.cpp -o r\src\lib\Tf\Utils\LoopVersioning.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LowerInvoke.cpp -o r\src\lib\Tf\Utils\LowerInvoke.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\LowerSwitch.cpp -o r\src\lib\Tf\Utils\LowerSwitch.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\Mem2Reg.cpp -o r\src\lib\Tf\Utils\Mem2Reg.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\MetaRenamer.cpp -o r\src\lib\Tf\Utils\MetaRenamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\ModuleUtils.cpp -o r\src\lib\Tf\Utils\ModuleUtils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\PromoteMemoryToRegister.cpp -o r\src\lib\Tf\Utils\PromoteMemoryToRegister.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SimplifyCFG.cpp -o r\src\lib\Tf\Utils\SimplifyCFG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SimplifyIndVar.cpp -o r\src\lib\Tf\Utils\SimplifyIndVar.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SimplifyInstructions.cpp -o r\src\lib\Tf\Utils\SimplifyInstructions.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SimplifyLibCalls.cpp -o r\src\lib\Tf\Utils\SimplifyLibCalls.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SplitModule.cpp -o r\src\lib\Tf\Utils\SplitModule.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SSAUpdater.cpp -o r\src\lib\Tf\Utils\SSAUpdater.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\SymbolRewriter.cpp -o r\src\lib\Tf\Utils\SymbolRewriter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\UnifyFunctionExitNodes.cpp -o r\src\lib\Tf\Utils\UnifyFunctionExitNodes.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\Utils.cpp -o r\src\lib\Tf\Utils\Utils.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Utils\ValueMapper.cpp -o r\src\lib\Tf\Utils\ValueMapper.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Vec\BBVectorize.cpp -o r\src\lib\Tf\Vec\BBVectorize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Vec\LoopVectorize.cpp -o r\src\lib\Tf\Vec\LoopVectorize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Vec\SLPVectorizer.cpp -o r\src\lib\Tf\Vec\SLPVectorizer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tf\Vec\Vectorize.cpp -o r\src\lib\Tf\Vec\Vectorize.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\Target.cpp -o r\src\lib\Tg\Target.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetIntrinsicInfo.cpp -o r\src\lib\Tg\TargetIntrinsicInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetLoweringObjectFile.cpp -o r\src\lib\Tg\TargetLoweringObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetMachine.cpp -o r\src\lib\Tg\TargetMachine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetMachineC.cpp -o r\src\lib\Tg\TargetMachineC.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetRecip.cpp -o r\src\lib\Tg\TargetRecip.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\TargetSubtargetInfo.cpp -o r\src\lib\Tg\TargetSubtargetInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\AsmParser\X86AsmInstrumentation.cpp -o r\src\lib\Tg\X86\AsmParser\X86AsmInstrumentation.o
src\lib\Tg\X86\AsmParser\X86AsmInstrumentation.cpp:10:38: fatal error: MCTargetDesc/X86BaseInfo.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\AsmParser\X86AsmParser.cpp -o r\src\lib\Tg\X86\AsmParser\X86AsmParser.o
src\lib\Tg\X86\AsmParser\X86AsmParser.cpp:10:38: fatal error: MCTargetDesc/X86BaseInfo.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\Disassembler\X86Disassembler.cpp -o r\src\lib\Tg\X86\Disassembler\X86Disassembler.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\Disassembler\X86DisassemblerDecoder.cpp -o r\src\lib\Tg\X86\Disassembler\X86DisassemblerDecoder.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\InstPrinter\X86ATTInstPrinter.cpp -o r\src\lib\Tg\X86\InstPrinter\X86ATTInstPrinter.o
src\lib\Tg\X86\InstPrinter\X86ATTInstPrinter.cpp:16:38: fatal error: MCTargetDesc/X86BaseInfo.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\InstPrinter\X86InstComments.cpp -o r\src\lib\Tg\X86\InstPrinter\X86InstComments.o
src\lib\Tg\X86\InstPrinter\X86InstComments.cpp:16:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\InstPrinter\X86IntelInstPrinter.cpp -o r\src\lib\Tg\X86\InstPrinter\X86IntelInstPrinter.o
src\lib\Tg\X86\InstPrinter\X86IntelInstPrinter.cpp:16:38: fatal error: MCTargetDesc/X86BaseInfo.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86AsmBackend.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86AsmBackend.o
src\lib\Tg\X86\MCTargetDesc\X86AsmBackend.cpp:10:38: fatal error: MCTargetDesc/X86BaseInfo.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86ELFObjectWriter.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86ELFObjectWriter.o
src\lib\Tg\X86\MCTargetDesc\X86ELFObjectWriter.cpp:10:40: fatal error: MCTargetDesc/X86FixupKinds.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86ELFRelocationInfo.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86ELFRelocationInfo.o
src\lib\Tg\X86\MCTargetDesc\X86ELFRelocationInfo.cpp:10:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86MachObjectWriter.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86MachObjectWriter.o
src\lib\Tg\X86\MCTargetDesc\X86MachObjectWriter.cpp:10:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86MachORelocationInfo.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86MachORelocationInfo.o
src\lib\Tg\X86\MCTargetDesc\X86MachORelocationInfo.cpp:10:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86MCAsmInfo.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86MCAsmInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86MCCodeEmitter.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86MCCodeEmitter.o
src\lib\Tg\X86\MCTargetDesc\X86MCCodeEmitter.cpp:14:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86MCTargetDesc.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86MCTargetDesc.o
src\lib\Tg\X86\MCTargetDesc\X86MCTargetDesc.cpp:15:43: fatal error: InstPrinter/X86ATTInstPrinter.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86WinCOFFObjectWriter.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86WinCOFFObjectWriter.o
src\lib\Tg\X86\MCTargetDesc\X86WinCOFFObjectWriter.cpp:10:40: fatal error: MCTargetDesc/X86FixupKinds.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\MCTargetDesc\X86WinCOFFStreamer.cpp -o r\src\lib\Tg\X86\MCTargetDesc\X86WinCOFFStreamer.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\TargetInfo\X86TargetInfo.cpp -o r\src\lib\Tg\X86\TargetInfo\X86TargetInfo.o
src\lib\Tg\X86\TargetInfo\X86TargetInfo.cpp:10:42: fatal error: MCTargetDesc/X86MCTargetDesc.h: No such file or directory (ENOENT)
compilation terminated.

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\Utils\X86ShuffleDecode.cpp -o r\src\lib\Tg\X86\Utils\X86ShuffleDecode.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86AsmPrinter.cpp -o r\src\lib\Tg\X86\X86AsmPrinter.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86CallFrameOptimization.cpp -o r\src\lib\Tg\X86\X86CallFrameOptimization.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86ExpandPseudo.cpp -o r\src\lib\Tg\X86\X86ExpandPseudo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86FastISel.cpp -o r\src\lib\Tg\X86\X86FastISel.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86FixupLEAs.cpp -o r\src\lib\Tg\X86\X86FixupLEAs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86FloatingPoint.cpp -o r\src\lib\Tg\X86\X86FloatingPoint.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86FrameLowering.cpp -o r\src\lib\Tg\X86\X86FrameLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86InstrInfo.cpp -o r\src\lib\Tg\X86\X86InstrInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86ISelDAGToDAG.cpp -o r\src\lib\Tg\X86\X86ISelDAGToDAG.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86ISelLowering.cpp -o r\src\lib\Tg\X86\X86ISelLowering.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86MachineFunctionInfo.cpp -o r\src\lib\Tg\X86\X86MachineFunctionInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86MCInstLower.cpp -o r\src\lib\Tg\X86\X86MCInstLower.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86OptimizeLEAs.cpp -o r\src\lib\Tg\X86\X86OptimizeLEAs.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86PadShortFunction.cpp -o r\src\lib\Tg\X86\X86PadShortFunction.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86RegisterInfo.cpp -o r\src\lib\Tg\X86\X86RegisterInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86SelectionDAGInfo.cpp -o r\src\lib\Tg\X86\X86SelectionDAGInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86ShuffleDecodeConstantPool.cpp -o r\src\lib\Tg\X86\X86ShuffleDecodeConstantPool.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86Subtarget.cpp -o r\src\lib\Tg\X86\X86Subtarget.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86TargetMachine.cpp -o r\src\lib\Tg\X86\X86TargetMachine.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86TargetObjectFile.cpp -o r\src\lib\Tg\X86\X86TargetObjectFile.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86TargetTransformInfo.cpp -o r\src\lib\Tg\X86\X86TargetTransformInfo.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86VZeroUpper.cpp -o r\src\lib\Tg\X86\X86VZeroUpper.o

C:\LLVM\_MYLLV~1>gpp @a -c src\lib\Tg\X86\X86WinEHState.cpp -o r\src\lib\Tg\X86\X86WinEHState.o

C:\LLVM\_MYLLV~1>pause
Press any key to continue . . .