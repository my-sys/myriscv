import chisel3._ 
import chisel3.util._ 

class RegCtrl extends CoreParameters{
    val regfile = Mem(32, UInt(RegDataLen.W))
	// this not obey the rules (when write and read both in one cycle),you should handle by yourself
    def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U(64.W), regfile.read(addr))
    def write(addr: UInt, data: UInt) = {
        regfile(addr) := data
    }
}