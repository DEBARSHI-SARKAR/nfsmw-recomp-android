006ceb80  MOV EDX,dword ptr [ESP + 0x4]
006ceb84  MOV ECX,dword ptr [ESP + 0x8]
006ceb88  CMP EDX,ECX
006ceb8a  MOV EAX,dword ptr [ESP + 0xc]
006ceb8e  JZ 0x006cebc6
006ceb90  PUSH EBX
006ceb91  PUSH ESI
006ceb92  PUSH EDI
006ceb93  SUB ECX,0x18
006ceb96  SUB EAX,0x18
006ceb99  CMP ECX,EDX
006ceb9b  MOV ESI,ECX
006ceb9d  MOV EBX,dword ptr [ESI]
006ceb9f  MOV EDI,EAX
006ceba1  MOV dword ptr [EDI],EBX
006ceba3  MOV EBX,dword ptr [ESI + 0x4]
006ceba6  MOV dword ptr [EDI + 0x4],EBX
006ceba9  MOV EBX,dword ptr [ESI + 0x8]
006cebac  MOV dword ptr [EDI + 0x8],EBX
006cebaf  MOV EBX,dword ptr [ESI + 0xc]
006cebb2  MOV dword ptr [EDI + 0xc],EBX
006cebb5  MOV EBX,dword ptr [ESI + 0x10]
006cebb8  MOV dword ptr [EDI + 0x10],EBX
006cebbb  MOV ESI,dword ptr [ESI + 0x14]
006cebbe  MOV dword ptr [EDI + 0x14],ESI
006cebc1  JNZ 0x006ceb93
006cebc3  POP EDI
006cebc4  POP ESI
006cebc5  POP EBX
006cebc6  RET
