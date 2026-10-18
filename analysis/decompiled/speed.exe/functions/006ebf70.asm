006ebf70  PUSH EBX
006ebf71  MOV EBX,dword ptr [ESP + 0xc]
006ebf75  PUSH ESI
006ebf76  MOV ESI,dword ptr [ESP + 0xc]
006ebf7a  CMP ESI,EBX
006ebf7c  JZ 0x006ebfad
006ebf7e  PUSH EBP
006ebf7f  MOV EBP,dword ptr [ESP + 0x1c]
006ebf83  PUSH EDI
006ebf84  MOV EDI,dword ptr [ESP + 0x1c]
006ebf88  PUSH ESI
006ebf89  CALL EBP
006ebf8b  ADD ESP,0x4
006ebf8e  TEST AL,AL
006ebf90  JNZ 0x006ebf9f
006ebf92  MOV EAX,dword ptr [ESI]
006ebf94  MOV dword ptr [EDI],EAX
006ebf96  MOV ECX,dword ptr [ESI + 0x4]
006ebf99  MOV dword ptr [EDI + 0x4],ECX
006ebf9c  ADD EDI,0x8
006ebf9f  ADD ESI,0x8
006ebfa2  CMP ESI,EBX
006ebfa4  JNZ 0x006ebf88
006ebfa6  MOV EAX,EDI
006ebfa8  POP EDI
006ebfa9  POP EBP
006ebfaa  POP ESI
006ebfab  POP EBX
006ebfac  RET
006ebfad  MOV EAX,dword ptr [ESP + 0x14]
006ebfb1  POP ESI
006ebfb2  POP EBX
006ebfb3  RET
