005ddcb0  MOV EAX,dword ptr [ESP + 0x8]
005ddcb4  TEST EAX,EAX
005ddcb6  JBE 0x005ddd0e
005ddcb8  PUSH EBX
005ddcb9  MOV EBX,dword ptr [ESP + 0x8]
005ddcbd  PUSH EBP
005ddcbe  PUSH ESI
005ddcbf  PUSH EDI
005ddcc0  MOV EBP,EAX
005ddcc2  MOV ESI,dword ptr [ECX + 0xac]
005ddcc8  XOR EDX,EDX
005ddcca  TEST ESI,ESI
005ddccc  JBE 0x005ddd04
005ddcce  MOV EDI,dword ptr [EBX + 0x4]
005ddcd1  MOV EAX,dword ptr [ECX + 0xb0]
005ddcd7  CMP dword ptr [EAX + 0x4],EDI
005ddcda  JZ 0x005ddce6
005ddcdc  INC EDX
005ddcdd  ADD EAX,0x14
005ddce0  CMP EDX,ESI
005ddce2  JC 0x005ddcd7
005ddce4  JMP 0x005ddd04
005ddce6  MOV EDX,EBX
005ddce8  MOV ESI,dword ptr [EDX]
005ddcea  MOV dword ptr [EAX],ESI
005ddcec  MOV ESI,dword ptr [EDX + 0x4]
005ddcef  MOV dword ptr [EAX + 0x4],ESI
005ddcf2  MOV ESI,dword ptr [EDX + 0x8]
005ddcf5  MOV dword ptr [EAX + 0x8],ESI
005ddcf8  MOV ESI,dword ptr [EDX + 0xc]
005ddcfb  MOV dword ptr [EAX + 0xc],ESI
005ddcfe  MOV EDX,dword ptr [EDX + 0x10]
005ddd01  MOV dword ptr [EAX + 0x10],EDX
005ddd04  ADD EBX,0x14
005ddd07  DEC EBP
005ddd08  JNZ 0x005ddcc2
005ddd0a  POP EDI
005ddd0b  POP ESI
005ddd0c  POP EBP
005ddd0d  POP EBX
005ddd0e  RET 0x8
