0068d800  SUB ESP,0x24
0068d803  PUSH ESI
0068d804  MOV ESI,ECX
0068d806  MOV EAX,dword ptr [ESI + 0x78]
0068d809  MOV ECX,dword ptr [EAX + 0x64]
0068d80c  MOV dword ptr [ESP + 0x4],ECX
0068d810  FLD float ptr [ESP + 0x4]
0068d814  MOV ECX,dword ptr [ESI + 0x34]
0068d817  FSUB float ptr [EAX + 0x54]
0068d81a  MOV EDX,dword ptr [ECX]
0068d81c  FSTP float ptr [ESP + 0x8]
0068d820  CALL dword ptr [EDX + 0x54]
0068d823  MOV EDX,dword ptr [EAX]
0068d825  LEA ECX,[ESP + 0x1c]
0068d829  PUSH ECX
0068d82a  MOV ECX,EAX
0068d82c  CALL dword ptr [EDX + 0x48]
0068d82f  FLD float ptr [ESP + 0x2c]
0068d833  MOV EDX,dword ptr [EAX + 0x4]
0068d836  MOV EAX,dword ptr [ESI + 0x78]
0068d839  FADD float ptr [EAX + 0x6c]
0068d83c  LEA ECX,[ESI + 0x4c]
0068d83f  MOV dword ptr [ESP + 0xc],EDX
0068d843  MOV EDX,dword ptr [ECX]
0068d845  FMUL float ptr [0x00890dc4]
0068d84b  FSTP float ptr [ESP + 0x2c]
0068d84f  CALL dword ptr [EDX + 0x4c]
0068d852  TEST EAX,EAX
0068d854  JNZ 0x0068d85e
0068d856  FLD float ptr [0x008933d4]
0068d85c  JMP 0x0068d862
0068d85e  FLD float ptr [ESP + 0x2c]
0068d862  FLD float ptr [ESP + 0x4]
0068d866  MOV EAX,dword ptr [ESI + 0x78]
0068d869  FSUB float ptr [ESP + 0x8]
0068d86d  FMULP
0068d86f  FADD float ptr [ESP + 0x8]
0068d873  FLD float ptr [EAX + 0x50]
0068d876  FMUL float ptr [0x008a9388]
0068d87c  FLD float ptr [ESP + 0x30]
0068d880  FMUL float ptr [0x008a9388]
0068d886  FLD float ptr [EAX + 0x1c]
0068d889  FMUL float ptr [0x008a9388]
0068d88f  FADD ST0,ST1
0068d891  FSTP float ptr [ESP + 0x2c]
0068d895  FLD float ptr [EAX + 0x18]
0068d898  FMUL float ptr [0x008a9388]
0068d89e  FADDP
0068d8a0  FCOM float ptr [ESP + 0x2c]
0068d8a4  FNSTSW AX
0068d8a6  TEST AH,0x41
0068d8a9  JZ 0x0068d8b1
0068d8ab  FSTP ST0
0068d8ad  FLD float ptr [ESP + 0x2c]
0068d8b1  FADD float ptr [ESP + 0xc]
0068d8b5  MOV ECX,dword ptr [ESI + 0x54]
0068d8b8  LEA EDX,[ESP + 0x10]
0068d8bc  MOV dword ptr [ESP + 0x10],0x0
0068d8c4  FSUBR ST0,ST1
0068d8c6  PUSH EDX
0068d8c7  FSTP float ptr [ESP + 0x18]
0068d8cb  FSTP ST0
0068d8cd  FSTP float ptr [ESP + 0x1c]
0068d8d1  MOV EAX,dword ptr [ECX]
0068d8d3  CALL dword ptr [EAX + 0x38]
0068d8d6  POP ESI
0068d8d7  ADD ESP,0x24
0068d8da  RET 0x8
