0068baf0  PUSH ESI
0068baf1  MOV ESI,ECX
0068baf3  MOV ECX,dword ptr [ESP + 0xc]
0068baf7  MOV EAX,dword ptr [ESI]
0068baf9  PUSH ECX
0068bafa  MOV ECX,ESI
0068bafc  CALL dword ptr [EAX + 0x5c]
0068baff  MOV EAX,dword ptr [ESP + 0x8]
0068bb03  MOV EDX,dword ptr [ESI]
0068bb05  PUSH EAX
0068bb06  MOV ECX,ESI
0068bb08  CALL dword ptr [EDX + 0x70]
0068bb0b  MOV EDX,dword ptr [ESI]
0068bb0d  PUSH 0x8a2fb4
0068bb12  MOV ECX,ESI
0068bb14  CALL dword ptr [EDX + 0x64]
0068bb17  MOV EAX,dword ptr [ESI]
0068bb19  PUSH 0x8a2fb4
0068bb1e  MOV ECX,ESI
0068bb20  CALL dword ptr [EAX + 0x60]
0068bb23  POP ESI
0068bb24  RET 0x8
