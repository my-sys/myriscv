//package playground
import circt.stage._
 
object Zhoutao_top extends App{
	// ysyx_22040318()
    // def top = new ysyx_22040318()
    // val useMFC = false 
    // val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top)
	// //在所有的模块前添加ysyx_22040318,包括顶层模块
	// ,firrtl.stage.RunFirrtlTransformAnnotation(new AddModulePrefix())
	// ,ModulePrefixAnnotation("ysyx_22040318_")
	// )
    // if (useMFC){
    //     (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
    // } else{
    //     (new chisel3.stage.ChiselStage).execute(args, generator)
    // }

	// riscv_soc()
	def top = new riscv_soc()
	val useMFC = false
	val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
    if (useMFC){
        (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
    } else{
        (new chisel3.stage.ChiselStage).execute(args, generator)
    }
}