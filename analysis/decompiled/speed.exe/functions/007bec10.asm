007bec10  PUSH ECX
007bec11  PUSH ESI
007bec12  MOV dword ptr [ESP + 0x4],0x0
007bec1a  RDTSC
007bec1c  MOV dword ptr [ESP + 0x4],EAX
007bec20  MOV EDX,dword ptr [ESP + 0x4]
007bec24  AND EDX,0x3
007bec27  MOV EAX,dword ptr [EDX*0x4 + 0x9061cc]
007bec2e  MOV EDX,dword ptr [EDX*0x4 + 0x9061dc]
007bec35  MOV dword ptr [ECX],EDX
007bec37  MOV EDX,dword ptr [ESP + 0xc]
007bec3b  MOV dword ptr [ECX + 0x4],0x10804201
007bec42  MOV dword ptr [ECX + 0x8],0x10804205
007bec49  MOV dword ptr [ECX + 0xc],0x10804204
007bec50  MOV EDX,dword ptr [EDX]
007bec52  MOV dword ptr [ECX + 0x10],EDX
007bec55  MOV EDX,dword ptr [ESP + 0x10]
007bec59  MOV EDX,dword ptr [EDX]
007bec5b  MOV dword ptr [ECX + 0x14],EDX
007bec5e  MOV EDX,EAX
007bec60  IMUL EDX,EAX
007bec63  XOR EDX,0x10804201
007bec69  MOV dword ptr [ECX + 0x4],EDX
007bec6c  IMUL EDX,EAX
007bec6f  XOR EDX,0x10804205
007bec75  MOV ESI,dword ptr [ECX + 0x10]
007bec78  MOV dword ptr [ECX + 0x8],EDX
007bec7b  IMUL EDX,EAX
007bec7e  XOR EDX,0x10804204
007bec84  MOV dword ptr [ECX + 0xc],EDX
007bec87  IMUL EDX,EAX
007bec8a  XOR ESI,EDX
007bec8c  MOV EDX,ESI
007bec8e  IMUL EDX,EAX
007bec91  MOV dword ptr [ECX + 0x10],ESI
007bec94  MOV ESI,dword ptr [ECX + 0x14]
007bec97  XOR ESI,EDX
007bec99  MOV EDX,ESI
007bec9b  IMUL EDX,EAX
007bec9e  MOV dword ptr [ECX + 0x14],ESI
007beca1  MOV ESI,dword ptr [ECX + 0x18]
007beca4  XOR ESI,EDX
007beca6  MOV EDX,ESI
007beca8  IMUL EDX,EAX
007becab  MOV EAX,dword ptr [ECX + 0x1c]
007becae  XOR EAX,EDX
007becb0  MOV dword ptr [ECX + 0x18],ESI
007becb3  MOV dword ptr [ECX + 0x1c],EAX
007becb6  MOV EAX,ECX
007becb8  POP ESI
007becb9  POP ECX
007becba  RET 0x8
