import chisel3._ 
import chisel3.util._ 

class RegCtrl extends CoreParameters{
    val regfile = Mem(32, UInt(RegDataLen.W))
    def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U, regfile.read(addr))
    def write(addr: UInt, data: UInt) = {
        regfile(addr) := data
    }
}