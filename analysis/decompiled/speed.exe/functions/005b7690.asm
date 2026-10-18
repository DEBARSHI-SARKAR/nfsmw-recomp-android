005b7690  SUB ESP,0x18
005b7693  PUSH ESI
005b7694  MOV ESI,dword ptr [ESP + 0x20]
005b7698  MOV EAX,dword ptr [ESI + 0x2c]
005b769b  MOV EDX,ECX
005b769d  MOV ECX,dword ptr [EAX + 0xc]
005b76a0  TEST ECX,ECX
005b76a2  JZ 0x005b7735
005b76a8  FLD float ptr [EAX + 0x10]
005b76ab  MOV ECX,dword ptr [EAX + 0x18]
005b76ae  FLD float ptr [EAX + 0x14]
005b76b1  MOV dword ptr [ESP + 0xc],ECX
005b76b5  MOV ECX,dword ptr [ESP + 0x24]
005b76b9  FXCH
005b76bb  FADD float ptr [EAX + 0x1c]
005b76be  MOV dword ptr [ESP + 0x18],0x0
005b76c6  FSTP float ptr [ESP + 0x4]
005b76ca  FADD float ptr [EAX + 0x20]
005b76cd  FSTP float ptr [ESP + 0x8]
005b76d1  FLD float ptr [ESP + 0xc]
005b76d5  FADD float ptr [EAX + 0x24]
005b76d8  LEA EAX,[ESP + 0x4]
005b76dc  PUSH EAX
005b76dd  PUSH ECX
005b76de  LEA EAX,[ESP + 0x18]
005b76e2  FSTP float ptr [ESP + 0x14]
005b76e6  PUSH EAX
005b76e7  CALL 0x005b0080
005b76ec  FLD float ptr [ESP + 0x24]
005b76f0  FCOMP float ptr [0x00890968]
005b76f6  MOV CX,word ptr [ESP + 0x34]
005b76fb  ADD ESP,0xc
005b76fe  MOV word ptr [ESI + 0x20],CX
005b7702  FNSTSW AX
005b7704  TEST AH,0x41
005b7707  JNP 0x005b7735
005b7709  MOV ECX,dword ptr [EDX + 0x10c]
005b770f  MOV EAX,dword ptr [ESP + 0x18]
005b7713  MOV dword ptr [ESP + 0x28],EAX
005b7717  MOV dword ptr [EDX + ECX*0x8 + 0x110],ESI
005b771e  MOV EAX,dword ptr [EDX + 0x10c]
005b7724  MOV ECX,dword ptr [ESP + 0x28]
005b7728  MOV dword ptr [EDX + EAX*0x8 + 0x114],ECX
005b772f  INC dword ptr [EDX + 0x10c]
005b7735  POP ESI
005b7736  ADD ESP,0x18
005b7739  RET 0xc
