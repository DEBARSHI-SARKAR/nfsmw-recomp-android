00414ce0  PUSH EBX
00414ce1  PUSH ESI
00414ce2  MOV ESI,ECX
00414ce4  MOV EAX,dword ptr [ESI + 0x34]
00414ce7  MOV ECX,dword ptr [EAX + 0x4]
00414cea  PUSH 0x404010
00414cef  CALL 0x005d59f0
00414cf4  MOV dword ptr [ESI + 0xd4],EAX
00414cfa  MOV EAX,dword ptr [ESI + 0x34]
00414cfd  MOV ECX,dword ptr [EAX + 0x4]
00414d00  PUSH 0x404040
00414d05  CALL 0x005d59f0
00414d0a  MOV dword ptr [ESI + 0xd8],EAX
00414d10  MOV EAX,dword ptr [ESI + 0x34]
00414d13  MOV ECX,dword ptr [EAX + 0x4]
00414d16  PUSH 0x404020
00414d1b  CALL 0x005d59f0
00414d20  MOV dword ptr [ESI + 0xdc],EAX
00414d26  MOV EAX,dword ptr [ESI + 0x34]
00414d29  MOV ECX,dword ptr [EAX + 0x4]
00414d2c  PUSH 0x403f90
00414d31  CALL 0x005d59f0
00414d36  MOV dword ptr [ESI + 0xe0],EAX
00414d3c  MOV ECX,dword ptr [ESI + 0xb8]
00414d42  XOR EBX,EBX
00414d44  CMP ECX,EBX
00414d46  JZ 0x00414d54
00414d48  MOV EAX,dword ptr [ECX]
00414d4a  PUSH 0x1
00414d4c  CALL dword ptr [EAX]
00414d4e  MOV dword ptr [ESI + 0xb8],EBX
00414d54  MOV ECX,dword ptr [0x0091ddbc]
00414d5a  MOV dword ptr [ESI + 0xc4],ECX
00414d60  MOV dword ptr [ESI + 0xb0],EBX
00414d66  MOV byte ptr [ESI + 0xb4],BL
00414d6c  MOV byte ptr [ESI + 0x80],BL
00414d72  MOV dword ptr [ESI + 0x94],EBX
00414d78  MOV dword ptr [ESI + 0x98],EBX
00414d7e  MOV byte ptr [ESI + 0x9c],BL
00414d84  MOV byte ptr [ESI + 0xa6],BL
00414d8a  MOV byte ptr [ESI + 0xa7],BL
00414d90  MOV byte ptr [ESI + 0xa8],BL
00414d96  MOV word ptr [ESI + 0xa4],0xffff
00414d9f  POP ESI
00414da0  POP EBX
00414da1  RET
