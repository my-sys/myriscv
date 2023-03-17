//package playground
import circt.stage._
 
object Zhoutao_top extends App{
    def top = new ysyx_22040318()	///new riscv_soc()
    val useMFC = false 
    val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top)
	,firrtl.stage.RunFirrtlTransformAnnotation(new AddModulePrefix())
	 ,ModulePrefixAnnotation("ysyx_22040318_")
	 )
    if (useMFC){
        (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
    } else{
        (new chisel3.stage.ChiselStage).execute(args, generator)
    }
}