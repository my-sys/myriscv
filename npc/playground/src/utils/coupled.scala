// package utils
// import chisel3._
// import chisel3.experimental.{requireIsChiselType, Direction}
// import chisel3.reflect.DataMirror

// import scala.annotation.nowarn

// class CoupledIO[+T <: Data](gen: T) extends Bundle{
//   private val genType = (DataMirror.internal.isSynthesizable(gen), chisel3.internal.Builder.currentModule) match {
//     case (true, Some(module: Module)) if !module.compileOptions.declaredTypeMustBeUnbound => chiselTypeOf(gen)
//     case _ => gen
//   }
//   val ready = Input(Bool())
//   val valid = Output(Bool())
//   val bits = genType

// }

// object Coupled{
// 	def apply[T <: Data](gen: T): CoupledIO[T] = new CoupledIO(gen)
// 	def fire: Bool = target.ready && target.valid
// 	def fire(dummy: Int = 0): Bool = fire
// }