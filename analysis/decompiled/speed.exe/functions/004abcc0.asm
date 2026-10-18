004abcc0  PUSH ESI
004abcc1  MOV ESI,dword ptr [ESP + 0xc]
004abcc5  PUSH 0x0
004abcc7  PUSH ESI
004abcc8  CALL 0x00452880
004abccd  MOV EAX,dword ptr [ESP + 0x10]
004abcd1  ADD ESP,0x8
004abcd4  TEST EAX,EAX
004abcd6  JZ 0x004abceb
004abcd8  TEST ESI,ESI
004abcda  JBE 0x004abceb
004abcdc  MOV ECX,dword ptr [0x008f7ea8]
004abce2  MOV EDX,dword ptr [ECX]
004abce4  PUSH 0x0
004abce6  PUSH ESI
004abce7  PUSH EAX
004abce8  CALL dword ptr [EDX + 0x4]
004abceb  POP ESI
004abcec  RET
