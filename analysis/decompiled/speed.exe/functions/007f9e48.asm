007f9e48  PUSH EBP
007f9e49  MOV EBP,ESP
007f9e4b  MOV EAX,dword ptr [EBP + 0x8]
007f9e4e  DEC dword ptr [EAX + 0x10]
007f9e51  CMP dword ptr [EAX + 0x10],0x0
007f9e55  JG 0x007f9e7e
007f9e57  ADD EAX,0x8
007f9e5a  MOV EDX,dword ptr [EAX]
007f9e5c  PUSH ESI
007f9e5d  MOV ESI,dword ptr [EAX + 0x4]
007f9e60  MOV dword ptr [ESI],EDX
007f9e62  MOV dword ptr [EDX + 0x4],ESI
007f9e65  PUSH 0xb
007f9e67  POP EDX
007f9e68  MOV dword ptr [EAX],EDX
007f9e6a  MOV dword ptr [EAX + 0x4],EDX
007f9e6d  MOV EDX,dword ptr [ECX + 0x30]
007f9e70  ADD ECX,0x2c
007f9e73  MOV dword ptr [EDX],EAX
007f9e75  MOV dword ptr [ECX + 0x4],EAX
007f9e78  MOV dword ptr [EAX + 0x4],EDX
007f9e7b  MOV dword ptr [EAX],ECX
007f9e7d  POP ESI
007f9e7e  POP EBP
007f9e7f  RET 0x4
