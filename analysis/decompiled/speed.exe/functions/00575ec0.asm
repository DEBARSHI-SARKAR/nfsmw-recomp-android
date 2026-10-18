00575ec0  FLD float ptr [ESP + 0x4]
00575ec4  MOV EAX,dword ptr [ESP + 0x4]
00575ec8  FADD float ptr [ESP + 0x8]
00575ecc  MOV EDX,dword ptr [ESP + 0xc]
00575ed0  PUSH ESI
00575ed1  MOV ESI,ECX
00575ed3  MOV ECX,dword ptr [ESP + 0xc]
00575ed7  FMUL float ptr [0x008933d4]
00575edd  PUSH 0xc2a40000
00575ee2  MOV dword ptr [ESI + 0xe0],EAX
00575ee8  MOV EAX,dword ptr [ESP + 0x18]
00575eec  FSTP float ptr [ESP + 0x10]
00575ef0  FLD float ptr [ESP + 0x10]
00575ef4  MOV dword ptr [ESI + 0xe4],ECX
00575efa  FADD float ptr [ESP + 0xc]
00575efe  LEA ECX,[ESI + 0x60]
00575f01  PUSH ECX
00575f02  MOV dword ptr [ESI + 0xe8],EAX
00575f08  FSUB float ptr [ESP + 0x1c]
00575f0c  MOV EAX,dword ptr [ESP + 0x14]
00575f10  MOV dword ptr [ESI + 0xec],EDX
00575f16  MOV EDX,dword ptr [ECX]
00575f18  FSTP float ptr [ESP]
00575f1b  PUSH 0x0
00575f1d  PUSH EAX
00575f1e  MOV EAX,dword ptr [ESP + 0x18]
00575f22  PUSH EAX
00575f23  CALL dword ptr [EDX + 0x10]
00575f26  FLD float ptr [ESI + 0xe4]
00575f2c  MOV EAX,dword ptr [ESI + 0xe8]
00575f32  FADD float ptr [ESI + 0xe0]
00575f38  MOV EDX,dword ptr [ESI + 0x9c]
00575f3e  PUSH 0x42a40000
00575f43  PUSH EAX
00575f44  MOV EAX,dword ptr [ESI + 0xe4]
00575f4a  PUSH 0x0
00575f4c  LEA ECX,[ESI + 0x9c]
00575f52  PUSH EAX
00575f53  FMUL float ptr [0x008933d4]
00575f59  PUSH ECX
00575f5a  FSTP float ptr [ESP]
00575f5d  CALL dword ptr [EDX + 0x10]
00575f60  POP ESI
00575f61  RET 0x10
