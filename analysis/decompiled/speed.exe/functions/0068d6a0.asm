0068d6a0  SUB ESP,0x24
0068d6a3  FLD float ptr [ESP + 0x28]
0068d6a7  MOV EAX,dword ptr [ECX + 0x78]
0068d6aa  FMUL float ptr [0x008aabd8]
0068d6b0  MOV ECX,dword ptr [EAX + 0x54]
0068d6b3  MOV EAX,dword ptr [EAX + 0x20]
0068d6b6  MOV dword ptr [ESP + 0x4],EAX
0068d6ba  FCOM float ptr [0x008aabd4]
0068d6c0  MOV EDX,0x1
0068d6c5  MOV dword ptr [ESP],ECX
0068d6c8  FNSTSW AX
0068d6ca  TEST AH,0x41
0068d6cd  JNZ 0x0068d6d5
0068d6cf  FSUB float ptr [0x008aabd8]
0068d6d5  FCOM float ptr [0x00890968]
0068d6db  FNSTSW AX
0068d6dd  TEST AH,0x5
0068d6e0  JP 0x0068d6e6
0068d6e2  XOR EDX,EDX
0068d6e4  FCHS
0068d6e6  TEST EDX,EDX
0068d6e8  FLD float ptr [ESP]
0068d6eb  FMUL ST1
0068d6ed  FLD ST1
0068d6ef  FMUL float ptr [ESP + 0x4]
0068d6f3  FADD float ptr [ESP]
0068d6f6  FDIVP
0068d6f8  FSTP float ptr [ESP + 0x4]
0068d6fc  JZ 0x0068d707
0068d6fe  MOV ECX,dword ptr [ESP + 0x4]
0068d702  MOV dword ptr [ESP],ECX
0068d705  JMP 0x0068d712
0068d707  FCHS
0068d709  FSTP float ptr [ESP]
0068d70c  FLD float ptr [ESP + 0x4]
0068d710  FCHS
0068d712  FSTP float ptr [ESP + 0x28]
0068d716  PUSH ESI
0068d717  FLD float ptr [ESP + 0x2c]
0068d71b  MOV ESI,dword ptr [ESP + 0x30]
0068d71f  FCOS
0068d721  LEA EDX,[ESP + 0xc]
0068d725  PUSH EDX
0068d726  MOV EAX,EDX
0068d728  PUSH ESI
0068d729  PUSH EAX
0068d72a  MOV dword ptr [ESP + 0x1c],0x0
0068d732  FSTP float ptr [ESP + 0x20]
0068d736  FLD float ptr [ESP + 0x38]
0068d73a  FSIN
0068d73c  FSTP float ptr [ESP + 0x18]
0068d740  CALL 0x00401670
0068d745  FLD float ptr [ESP + 0x10]
0068d749  FCOS
0068d74b  MOV EAX,dword ptr [ESP + 0x20]
0068d74f  MOV ECX,dword ptr [ESP + 0x18]
0068d753  MOV EDX,dword ptr [ESP + 0x1c]
0068d757  MOV dword ptr [ESP + 0x28],EDX
0068d75b  MOV EDX,dword ptr [ESP + 0x44]
0068d75f  MOV dword ptr [ESP + 0x24],ECX
0068d763  MOV ECX,dword ptr [ESP + 0x38]
0068d767  MOV dword ptr [ESP + 0x2c],EAX
0068d76b  MOV EAX,dword ptr [ESP + 0x24]
0068d76f  MOV dword ptr [EDX],EAX
0068d771  MOV EAX,dword ptr [ESP + 0x2c]
0068d775  MOV dword ptr [ESP + 0x30],ECX
0068d779  MOV ECX,dword ptr [ESP + 0x28]
0068d77d  MOV dword ptr [EDX + 0x4],ECX
0068d780  MOV ECX,dword ptr [ESP + 0x30]
0068d784  MOV dword ptr [EDX + 0x8],EAX
0068d787  MOV dword ptr [EDX + 0xc],ECX
0068d78a  LEA EDX,[ESP + 0x18]
0068d78e  PUSH EDX
0068d78f  MOV EAX,EDX
0068d791  PUSH ESI
0068d792  PUSH EAX
0068d793  MOV dword ptr [ESP + 0x28],0x0
0068d79b  FSTP float ptr [ESP + 0x2c]
0068d79f  FLD float ptr [ESP + 0x1c]
0068d7a3  FSIN
0068d7a5  FSTP float ptr [ESP + 0x24]
0068d7a9  CALL 0x00401670
0068d7ae  MOV ECX,dword ptr [ESP + 0x24]
0068d7b2  MOV EDX,dword ptr [ESP + 0x28]
0068d7b6  MOV EAX,dword ptr [ESP + 0x2c]
0068d7ba  MOV dword ptr [ESP + 0x30],ECX
0068d7be  MOV ECX,dword ptr [ESP + 0x1c]
0068d7c2  MOV dword ptr [ESP + 0x34],EDX
0068d7c6  MOV EDX,dword ptr [ESP + 0x4c]
0068d7ca  MOV dword ptr [ESP + 0x38],EAX
0068d7ce  MOV EAX,dword ptr [ESP + 0x30]
0068d7d2  MOV dword ptr [EDX],EAX
0068d7d4  MOV EAX,dword ptr [ESP + 0x38]
0068d7d8  MOV dword ptr [ESP + 0x3c],ECX
0068d7dc  MOV ECX,dword ptr [ESP + 0x34]
0068d7e0  MOV dword ptr [EDX + 0x4],ECX
0068d7e3  MOV ECX,dword ptr [ESP + 0x3c]
0068d7e7  ADD ESP,0x18
0068d7ea  MOV dword ptr [EDX + 0x8],EAX
0068d7ed  MOV dword ptr [EDX + 0xc],ECX
0068d7f0  POP ESI
0068d7f1  ADD ESP,0x24
0068d7f4  RET 0x10
