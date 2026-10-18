005b3a70  MOV ECX,dword ptr [ESP + 0x4]
005b3a74  FLD float ptr [ECX + 0xc]
005b3a77  FLD float ptr [ECX + 0x8]
005b3a7a  FLD float ptr [ECX + 0x4]
005b3a7d  FLD float ptr [ECX]
005b3a7f  FLD ST0
005b3a81  FMUL ST1
005b3a83  FLD ST2
005b3a85  FMUL ST3
005b3a87  FADDP
005b3a89  FLD ST3
005b3a8b  FMUL ST4
005b3a8d  FADDP
005b3a8f  FLD ST4
005b3a91  FMUL ST5
005b3a93  FADDP
005b3a95  FSQRT
005b3a97  FSTP ST4
005b3a99  FSTP ST0
005b3a9b  FSTP ST0
005b3a9d  FSTP ST0
005b3a9f  FDIVR float ptr [0x0089096c]
005b3aa5  FCOM float ptr [0x008910cc]
005b3aab  FNSTSW AX
005b3aad  TEST AH,0x41
005b3ab0  JNZ 0x005b3acf
005b3ab2  FLD ST0
005b3ab4  FMUL float ptr [ECX]
005b3ab6  FSTP float ptr [ECX]
005b3ab8  FLD ST0
005b3aba  FMUL float ptr [ECX + 0x4]
005b3abd  FSTP float ptr [ECX + 0x4]
005b3ac0  FLD ST0
005b3ac2  FMUL float ptr [ECX + 0x8]
005b3ac5  FSTP float ptr [ECX + 0x8]
005b3ac8  FMUL float ptr [ECX + 0xc]
005b3acb  FSTP float ptr [ECX + 0xc]
005b3ace  RET
005b3acf  XOR EAX,EAX
005b3ad1  FSTP ST0
005b3ad3  MOV dword ptr [ECX + 0x8],EAX
005b3ad6  MOV dword ptr [ECX + 0x4],EAX
005b3ad9  MOV dword ptr [ECX],EAX
005b3adb  MOV dword ptr [ECX + 0xc],0x3f800000
005b3ae2  RET
