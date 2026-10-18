0045bf90  PUSH EDI
0045bf91  MOV EDI,dword ptr [ESP + 0x8]
0045bf95  MOV ECX,dword ptr [EDI + 0x4]
0045bf98  MOV EAX,dword ptr [ECX]
0045bf9a  CMP EAX,ECX
0045bf9c  JZ 0x0045c015
0045bf9e  PUSH ESI
0045bf9f  NOP
0045bfa0  MOV ESI,dword ptr [EAX + 0x8]
0045bfa3  MOV EAX,dword ptr [ESI + 0x1c]
0045bfa6  TEST EAX,EAX
0045bfa8  JA 0x0045bfdd
0045bfaa  MOV ECX,ESI
0045bfac  CALL 0x0045a0c0
0045bfb1  MOV EAX,[0x0090dcd4]
0045bfb6  MOV ECX,dword ptr [0x0090dcd0]
0045bfbc  SUB EAX,0x2c
0045bfbf  CMP EAX,ECX
0045bfc1  MOV [0x0090dcd4],EAX
0045bfc6  JBE 0x0045bfcd
0045bfc8  MOV [0x0090dcd0],EAX
0045bfcd  MOV ECX,dword ptr [0x008f7ea8]
0045bfd3  MOV EAX,dword ptr [ECX]
0045bfd5  PUSH 0x0
0045bfd7  PUSH 0x2c
0045bfd9  PUSH ESI
0045bfda  CALL dword ptr [EAX + 0x4]
0045bfdd  MOV ECX,dword ptr [EDI + 0x4]
0045bfe0  MOV EAX,dword ptr [ECX]
0045bfe2  CMP EAX,ECX
0045bfe4  JZ 0x0045c00a
0045bfe6  MOV ECX,dword ptr [EAX + 0x4]
0045bfe9  MOV EDX,dword ptr [EAX]
0045bfeb  MOV dword ptr [ECX],EDX
0045bfed  MOV ECX,dword ptr [EAX]
0045bfef  MOV EDX,dword ptr [EAX + 0x4]
0045bff2  PUSH 0x890f10
0045bff7  PUSH 0xc
0045bff9  MOV dword ptr [ECX + 0x4],EDX
0045bffc  PUSH EAX
0045bffd  MOV ECX,0x925b30
0045c002  CALL 0x005d0370
0045c007  DEC dword ptr [EDI + 0x8]
0045c00a  MOV EAX,dword ptr [EDI + 0x4]
0045c00d  MOV EAX,dword ptr [EAX]
0045c00f  CMP EAX,dword ptr [EDI + 0x4]
0045c012  JNZ 0x0045bfa0
0045c014  POP ESI
0045c015  POP EDI
0045c016  RET
