004fca80  FLD float ptr [ESP + 0x4]
004fca84  FMUL float ptr [0x008933d4]
004fca8a  FCOMP float ptr [ESP + 0x8]
004fca8e  FLD float ptr [ECX + 0xc]
004fca91  FNSTSW AX
004fca93  TEST AH,0x5
004fca96  JP 0x004fcaa8
004fca98  FDIV float ptr [ESP + 0x8]
004fca9c  FMUL float ptr [ESP + 0x4]
004fcaa0  CALL 0x007c4b80
004fcaa5  RET 0x8
004fcaa8  FADD ST0,ST0
004fcaaa  CALL 0x007c4b80
004fcaaf  RET 0x8
