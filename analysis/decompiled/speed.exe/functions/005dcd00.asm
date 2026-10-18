005dcd00  SUB ESP,0x4c
005dcd03  PUSH ESI
005dcd04  PUSH EDI
005dcd05  MOV ECX,0x10
005dcd0a  MOV ESI,0x8a3028
005dcd0f  LEA EDI,[ESP + 0x14]
005dcd13  MOVSD.REP ES:EDI,ESI
005dcd15  MOV ECX,dword ptr [ESP + 0x58]
005dcd19  PUSH 0x0
005dcd1b  PUSH 0x5a6a57c6
005dcd20  MOV dword ptr [ESP + 0x10],0x0
005dcd28  MOV dword ptr [ESP + 0x14],0x0
005dcd30  MOV dword ptr [ESP + 0x18],0x3f800000
005dcd38  MOV dword ptr [ESP + 0x1c],0x3f800000
005dcd40  MOV dword ptr [ESP + 0x30],0x3f800000
005dcd48  MOV dword ptr [ESP + 0x44],0x3f800000
005dcd50  MOV dword ptr [ESP + 0x58],0x3f800000
005dcd58  MOV dword ptr [ESP + 0x54],0x0
005dcd60  MOV dword ptr [ESP + 0x50],0x0
005dcd68  MOV dword ptr [ESP + 0x4c],0x0
005dcd70  MOV dword ptr [ESP + 0x48],0x0
005dcd78  MOV dword ptr [ESP + 0x40],0x0
005dcd80  MOV dword ptr [ESP + 0x3c],0x0
005dcd88  MOV dword ptr [ESP + 0x38],0x0
005dcd90  MOV dword ptr [ESP + 0x34],0x0
005dcd98  MOV dword ptr [ESP + 0x2c],0x0
005dcda0  MOV dword ptr [ESP + 0x28],0x0
005dcda8  MOV dword ptr [ESP + 0x24],0x0
005dcdb0  MOV dword ptr [ESP + 0x20],0x0
005dcdb8  CALL 0x00454810
005dcdbd  TEST EAX,EAX
005dcdbf  POP EDI
005dcdc0  POP ESI
005dcdc1  JNZ 0x005dcdcd
005dcdc3  PUSH 0x4
005dcdc5  CALL 0x006269b0
005dcdca  ADD ESP,0x4
005dcdcd  FLD float ptr [ESP + 0x58]
005dcdd1  LEA ECX,[ESP + 0xc]
005dcdd5  FADD float ptr [EAX]
005dcdd7  PUSH ECX
005dcdd8  PUSH ECX
005dcdd9  MOV EDX,ECX
005dcddb  FMUL float ptr [0x008a3874]
005dcde1  FSTP float ptr [ESP]
005dcde4  PUSH EDX
005dcde5  CALL 0x005c6bb0
005dcdea  LEA EAX,[ESP + 0xc]
005dcdee  PUSH EAX
005dcdef  LEA ECX,[ESP + 0x1c]
005dcdf3  PUSH ECX
005dcdf4  MOV EDX,EAX
005dcdf6  PUSH EDX
005dcdf7  CALL 0x00401670
005dcdfc  MOV ECX,dword ptr [ESP + 0x18]
005dce00  MOV EAX,dword ptr [ESP + 0x6c]
005dce04  MOV EDX,dword ptr [ESP + 0x1c]
005dce08  MOV dword ptr [EAX],ECX
005dce0a  MOV ECX,dword ptr [ESP + 0x20]
005dce0e  MOV dword ptr [EAX + 0x4],EDX
005dce11  MOV dword ptr [EAX + 0x8],ECX
005dce14  ADD ESP,0x64
005dce17  RET 0xc
