00828c6b  PUSH EBP
00828c6c  MOV EBP,ESP
00828c6e  PUSH ECX
00828c6f  MOV EAX,dword ptr [EBP + 0x8]
00828c72  MOV ECX,dword ptr [EAX + 0xc]
00828c75  CMP byte ptr [ECX],0xee
00828c78  JNZ 0x00828ce7
00828c7a  INC ECX
00828c7b  MOV dword ptr [EAX + 0xc],ECX
00828c7e  MOV DL,byte ptr [ECX + 0x1]
00828c81  MOV byte ptr [EBP + 0xa],DL
00828c84  MOV DL,byte ptr [ECX]
00828c86  MOV byte ptr [EBP + 0xb],DL
00828c89  MOVSX EDX,word ptr [EBP + 0xa]
00828c8d  MOV dword ptr [EBP + -0x4],EDX
00828c90  ADD ECX,0x2
00828c93  MOV dword ptr [EAX + 0xc],ECX
00828c96  FILD dword ptr [EBP + -0x4]
00828c99  PUSH ESI
00828c9a  PUSH 0x1c
00828c9c  POP ESI
00828c9d  FSTP float ptr [EAX + 0x4]
00828ca0  MOV DL,byte ptr [ECX + 0x1]
00828ca3  MOV byte ptr [EBP + 0xa],DL
00828ca6  MOV DL,byte ptr [ECX]
00828ca8  MOV byte ptr [EBP + 0xb],DL
00828cab  MOVSX EDX,word ptr [EBP + 0xa]
00828caf  MOV dword ptr [EBP + -0x4],EDX
00828cb2  ADD ECX,0x2
00828cb5  MOV dword ptr [EAX + 0xc],ECX
00828cb8  FILD dword ptr [EBP + -0x4]
00828cbb  FSTP float ptr [EAX + 0x8]
00828cbe  MOV ECX,dword ptr [EAX + 0xc]
00828cc1  MOV DL,byte ptr [ECX + 0x1]
00828cc4  MOV CL,byte ptr [ECX]
00828cc6  MOV byte ptr [EBP + 0xb],CL
00828cc9  MOV byte ptr [EBP + 0xa],DL
00828ccc  MOVSX ECX,word ptr [EBP + 0xa]
00828cd0  MOV dword ptr [EBP + -0x4],ECX
00828cd3  MOV ECX,dword ptr [EAX + 0x10]
00828cd6  FILD dword ptr [EBP + -0x4]
00828cd9  FSTP float ptr [ECX]
00828cdb  ADD dword ptr [EAX + 0x10],0x4
00828cdf  ADD dword ptr [EAX + 0xc],0x2
00828ce3  DEC ESI
00828ce4  JNZ 0x00828cbe
00828ce6  POP ESI
00828ce7  LEAVE
00828ce8  RET
