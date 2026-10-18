006cea70  MOV EAX,dword ptr [ESP + 0x4]
006cea74  MOV ECX,dword ptr [ESP + 0x8]
006cea78  CMP EAX,ECX
006cea7a  JZ 0x006ceab3
006cea7c  MOV EDX,dword ptr [ESP + 0xc]
006cea80  PUSH EBX
006cea81  PUSH ESI
006cea82  PUSH EDI
006cea83  MOV ESI,EDX
006cea85  MOV EBX,dword ptr [ESI]
006cea87  MOV EDI,EAX
006cea89  MOV dword ptr [EDI],EBX
006cea8b  MOV EBX,dword ptr [ESI + 0x4]
006cea8e  MOV dword ptr [EDI + 0x4],EBX
006cea91  MOV EBX,dword ptr [ESI + 0x8]
006cea94  MOV dword ptr [EDI + 0x8],EBX
006cea97  MOV EBX,dword ptr [ESI + 0xc]
006cea9a  MOV dword ptr [EDI + 0xc],EBX
006cea9d  MOV EBX,dword ptr [ESI + 0x10]
006ceaa0  MOV dword ptr [EDI + 0x10],EBX
006ceaa3  MOV ESI,dword ptr [ESI + 0x14]
006ceaa6  ADD EAX,0x18
006ceaa9  CMP EAX,ECX
006ceaab  MOV dword ptr [EDI + 0x14],ESI
006ceaae  JNZ 0x006cea83
006ceab0  POP EDI
006ceab1  POP ESI
006ceab2  POP EBX
006ceab3  RET
