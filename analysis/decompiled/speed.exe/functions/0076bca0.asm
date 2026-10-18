0076bca0  MOV EAX,dword ptr [ESP + 0x4]
0076bca4  MOV ECX,dword ptr [ESP + 0x8]
0076bca8  CMP EAX,ECX
0076bcaa  JZ 0x0076bcbd
0076bcac  MOV EDX,dword ptr [ESP + 0xc]
0076bcb0  PUSH ESI
0076bcb1  MOV ESI,dword ptr [EDX]
0076bcb3  MOV dword ptr [EAX],ESI
0076bcb5  ADD EAX,0x4
0076bcb8  CMP EAX,ECX
0076bcba  JNZ 0x0076bcb1
0076bcbc  POP ESI
0076bcbd  RET
