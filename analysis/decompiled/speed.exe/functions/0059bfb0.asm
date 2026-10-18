0059bfb0  PUSH ESI
0059bfb1  MOV ESI,ECX
0059bfb3  MOV ECX,dword ptr [ESI + 0x34]
0059bfb6  PUSH EDI
0059bfb7  MOV EDI,dword ptr [ESP + 0xc]
0059bfbb  CMP ECX,EDI
0059bfbd  JZ 0x0059bfc8
0059bfbf  TEST ECX,ECX
0059bfc1  JZ 0x0059bfc8
0059bfc3  MOV EAX,dword ptr [ECX]
0059bfc5  CALL dword ptr [EAX + 0x28]
0059bfc8  TEST EDI,EDI
0059bfca  MOV dword ptr [ESI + 0x34],EDI
0059bfcd  JZ 0x0059bfda
0059bfcf  MOV EAX,dword ptr [ESI + 0x10]
0059bfd2  MOV EDX,dword ptr [EDI]
0059bfd4  PUSH EAX
0059bfd5  MOV ECX,EDI
0059bfd7  CALL dword ptr [EDX + 0x24]
0059bfda  MOV ECX,ESI
0059bfdc  CALL 0x00593b10
0059bfe1  POP EDI
0059bfe2  POP ESI
0059bfe3  RET 0x4
