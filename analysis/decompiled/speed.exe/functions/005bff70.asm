005bff70  PUSH ESI
005bff71  MOV ESI,ECX
005bff73  PUSH EDI
005bff74  MOV EDI,dword ptr [ESP + 0xc]
005bff78  MOV dword ptr [ESI],0x0
005bff7e  MOV dword ptr [ESI + 0x4],0x0
005bff85  MOV ECX,dword ptr [EDI]
005bff87  TEST ECX,ECX
005bff89  JZ 0x005bffb3
005bff8b  XOR EAX,EAX
005bff8d  CMP word ptr [ECX],AX
005bff90  JZ 0x005bff9a
005bff92  INC EAX
005bff93  CMP word ptr [ECX + EAX*0x2],0x0
005bff98  JNZ 0x005bff92
005bff9a  INC EAX
005bff9b  JZ 0x005bffa5
005bff9d  PUSH EAX
005bff9e  MOV ECX,ESI
005bffa0  CALL 0x005b91c0
005bffa5  MOV EAX,dword ptr [EDI]
005bffa7  MOV ECX,dword ptr [ESI]
005bffa9  PUSH EAX
005bffaa  PUSH ECX
005bffab  CALL 0x005b37c0
005bffb0  ADD ESP,0x8
005bffb3  MOV ECX,dword ptr [ESI]
005bffb5  XOR EAX,EAX
005bffb7  TEST ECX,ECX
005bffb9  JZ 0x005bffc8
005bffbb  CMP word ptr [ECX],AX
005bffbe  JZ 0x005bffc8
005bffc0  INC EAX
005bffc1  CMP word ptr [ECX + EAX*0x2],0x0
005bffc6  JNZ 0x005bffc0
005bffc8  MOV dword ptr [ESI + 0x4],EAX
005bffcb  POP EDI
005bffcc  MOV EAX,ESI
005bffce  POP ESI
005bffcf  RET 0x4
