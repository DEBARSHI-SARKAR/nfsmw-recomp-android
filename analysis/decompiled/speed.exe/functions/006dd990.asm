006dd990  MOV EAX,dword ptr [ESP + 0x8]
006dd994  TEST EAX,EAX
006dd996  JBE 0x006dd9c6
006dd998  MOV EDX,dword ptr [ESP + 0xc]
006dd99c  PUSH EBX
006dd99d  PUSH ESI
006dd99e  MOV ECX,EAX
006dd9a0  MOV EAX,dword ptr [ESP + 0xc]
006dd9a4  PUSH EDI
006dd9a5  TEST EAX,EAX
006dd9a7  JZ 0x006dd9bd
006dd9a9  MOV ESI,EDX
006dd9ab  MOV EBX,dword ptr [ESI]
006dd9ad  MOV EDI,EAX
006dd9af  MOV dword ptr [EDI],EBX
006dd9b1  MOV EBX,dword ptr [ESI + 0x4]
006dd9b4  MOV dword ptr [EDI + 0x4],EBX
006dd9b7  MOV ESI,dword ptr [ESI + 0x8]
006dd9ba  MOV dword ptr [EDI + 0x8],ESI
006dd9bd  ADD EAX,0xc
006dd9c0  DEC ECX
006dd9c1  JNZ 0x006dd9a5
006dd9c3  POP EDI
006dd9c4  POP ESI
006dd9c5  POP EBX
006dd9c6  RET
