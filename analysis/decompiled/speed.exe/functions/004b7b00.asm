004b7b00  FLD float ptr [ESP + 0x4]
004b7b04  FADD float ptr [ESP + 0xc]
004b7b08  FLD float ptr [ESP + 0x8]
004b7b0c  FCOMP
004b7b0e  FNSTSW AX
004b7b10  TEST AH,0x41
004b7b13  JZ 0x004b7b32
004b7b15  FSTP ST0
004b7b17  FLD float ptr [ESP + 0x4]
004b7b1b  FSUB float ptr [ESP + 0xc]
004b7b1f  FLD float ptr [ESP + 0x8]
004b7b23  FCOMP
004b7b25  FNSTSW AX
004b7b27  TEST AH,0x5
004b7b2a  JNP 0x004b7b32
004b7b2c  FSTP ST0
004b7b2e  FLD float ptr [ESP + 0x8]
004b7b32  RET
