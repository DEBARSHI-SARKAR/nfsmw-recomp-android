006ebc90  MOV EAX,dword ptr [ESP + 0x4]
006ebc94  MOV ECX,dword ptr [ESP + 0x8]
006ebc98  CMP EAX,ECX
006ebc9a  JZ 0x006ebcc7
006ebc9c  MOV EDX,dword ptr [ESP + 0xc]
006ebca0  PUSH EBX
006ebca1  PUSH ESI
006ebca2  PUSH EDI
006ebca3  MOV ESI,EDX
006ebca5  MOV EBX,dword ptr [ESI]
006ebca7  MOV EDI,EAX
006ebca9  MOV dword ptr [EDI],EBX
006ebcab  MOV EBX,dword ptr [ESI + 0x4]
006ebcae  MOV dword ptr [EDI + 0x4],EBX
006ebcb1  MOV EBX,dword ptr [ESI + 0x8]
006ebcb4  MOV dword ptr [EDI + 0x8],EBX
006ebcb7  MOV ESI,dword ptr [ESI + 0xc]
006ebcba  ADD EAX,0x10
006ebcbd  CMP EAX,ECX
006ebcbf  MOV dword ptr [EDI + 0xc],ESI
006ebcc2  JNZ 0x006ebca3
006ebcc4  POP EDI
006ebcc5  POP ESI
006ebcc6  POP EBX
006ebcc7  RET
