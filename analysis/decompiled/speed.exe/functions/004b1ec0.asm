004b1ec0  MOV EAX,dword ptr [ESP + 0x4]
004b1ec4  CMP EAX,0x4
004b1ec7  JGE 0x004b1ed0
004b1ec9  MOV EAX,dword ptr [ECX + EAX*0x4 + 0x14]
004b1ecd  RET 0x4
004b1ed0  XOR EAX,EAX
004b1ed2  RET 0x4
