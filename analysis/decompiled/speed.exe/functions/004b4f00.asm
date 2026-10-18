004b4f00  PUSH ESI
004b4f01  MOV ESI,ECX
004b4f03  MOV EAX,dword ptr [ESI + 0x14]
004b4f06  MOV ECX,dword ptr [EAX + 0x34]
004b4f09  MOV EDX,dword ptr [ECX]
004b4f0b  MOV dword ptr [ESI + 0x44],EDX
004b4f0e  MOV ECX,dword ptr [EAX + 0x34]
004b4f11  MOV EDX,dword ptr [ECX + 0x4]
004b4f14  MOV dword ptr [ESI + 0x38],EDX
004b4f17  MOV ECX,dword ptr [EAX + 0x34]
004b4f1a  MOV EDX,dword ptr [ECX + 0x8]
004b4f1d  MOV dword ptr [ESI + 0x34],EDX
004b4f20  MOV ECX,dword ptr [EAX + 0x34]
004b4f23  FLD float ptr [ECX + 0xc]
004b4f26  MOV dword ptr [ESI + 0x7c],0x0
004b4f2d  FST float ptr [ESI + 0x3c]
004b4f30  PUSH 0x0
004b4f32  FDIV float ptr [ESI + 0x38]
004b4f35  PUSH 0xeacb7696
004b4f3a  FMUL float ptr [0x00896d28]
004b4f40  FSTP float ptr [ESI + 0x30]
004b4f43  MOV EAX,dword ptr [EAX + 0x34]
004b4f46  LEA ECX,[EAX + 0x200]
004b4f4c  CALL 0x00454810
004b4f51  TEST EAX,EAX
004b4f53  JNZ 0x004b4f5f
004b4f55  PUSH 0x1
004b4f57  CALL 0x006269b0
004b4f5c  ADD ESP,0x4
004b4f5f  CMP byte ptr [EAX],0x0
004b4f62  JZ 0x004b4f6e
004b4f64  MOV EDX,dword ptr [ESI + 0xc]
004b4f67  MOV dword ptr [EDX + 0x2c],0x7fff
004b4f6e  POP ESI
004b4f6f  RET
