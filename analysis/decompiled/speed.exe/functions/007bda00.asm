007bda00  PUSH EBX
007bda01  PUSH ESI
007bda02  PUSH 0xe18ddce1
007bda07  PUSH 0x70f56628
007bda0c  MOV ESI,ECX
007bda0e  PUSH 0x86
007bda13  MOV dword ptr [ESI + 0x15c],0xb1b0e8af
007bda1d  CALL 0x007b7a50
007bda22  PUSH 0xe18ddce0
007bda27  PUSH 0xbf6682c9
007bda2c  PUSH 0x87
007bda31  MOV ECX,ESI
007bda33  CALL 0x007b7a50
007bda38  PUSH 0xe18ddcdf
007bda3d  PUSH 0xcc9e1ce4
007bda42  PUSH 0x85
007bda47  MOV ECX,ESI
007bda49  CALL 0x007b7a50
007bda4e  MOV EAX,[0x009b9e84]
007bda53  XOR EBX,EBX
007bda55  CMP EAX,EBX
007bda57  JZ 0x007bda8c
007bda59  CMP byte ptr [ESI + 0x129],BL
007bda5f  JZ 0x007bda7a
007bda61  MOV byte ptr [ESI + 0x11c],BL
007bda67  MOV byte ptr [ESI + 0x119],0x1
007bda6e  MOV byte ptr [ESI + 0x11a],BL
007bda74  MOV dword ptr [ESI + 0x110],EBX
007bda7a  MOV EDX,dword ptr [ESI + 0x2c]
007bda7d  LEA ECX,[ESI + 0x2c]
007bda80  PUSH EAX
007bda81  CALL dword ptr [EDX + 0x40]
007bda84  MOV dword ptr [0x009b9e84],EBX
007bda8a  JMP 0x007bdab8
007bda8c  CMP byte ptr [ESI + 0x129],BL
007bda92  JZ 0x007bdaad
007bda94  MOV byte ptr [ESI + 0x11c],BL
007bda9a  MOV byte ptr [ESI + 0x119],0x1
007bdaa1  MOV byte ptr [ESI + 0x11a],BL
007bdaa7  MOV dword ptr [ESI + 0x110],EBX
007bdaad  MOV EAX,dword ptr [ESI + 0x2c]
007bdab0  LEA ECX,[ESI + 0x2c]
007bdab3  PUSH 0x1
007bdab5  CALL dword ptr [EAX + 0x40]
007bdab8  MOV ECX,ESI
007bdaba  CALL 0x007b7ac0
007bdabf  MOV ECX,ESI
007bdac1  CALL 0x007b2460
007bdac6  MOV ECX,ESI
007bdac8  CALL 0x007b21b0
007bdacd  MOV EDX,dword ptr [ESI]
007bdacf  MOV ECX,ESI
007bdad1  POP ESI
007bdad2  POP EBX
007bdad3  JMP dword ptr [EDX + 0xc]
