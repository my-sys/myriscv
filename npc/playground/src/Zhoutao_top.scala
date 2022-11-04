import circt.stage._

object Zhoutao_top extends APP{
    def top = new GCD()
    val useMFC = true 
    val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
    if (useMFC){
        (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
    } else{
        (new chisel3.stage.ChiselStage).execute(args, generator)
    }
}