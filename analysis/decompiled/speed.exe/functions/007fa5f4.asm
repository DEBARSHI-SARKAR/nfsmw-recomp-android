007fa5f4  PUSH EBP
007fa5f5  MOV EBP,ESP
007fa5f7  MOV EAX,dword ptr [EBP + 0x8]
007fa5fa  DEC dword ptr [EAX + 0x10]
007fa5fd  CMP dword ptr [EAX + 0x10],0x0
007fa601  JG 0x007fa62a
007fa603  ADD EAX,0x8
007fa606  MOV EDX,dword ptr [EAX]
007fa608  PUSH ESI
007fa609  MOV ESI,dword ptr [EAX + 0x4]
007fa60c  MOV dword ptr [ESI],EDX
007fa60e  MOV dword ptr [EDX + 0x4],ESI
007fa611  PUSH 0xb
007fa613  POP EDX
007fa614  MOV dword ptr [EAX],EDX
007fa616  MOV dword ptr [EAX + 0x4],EDX
007fa619  MOV EDX,dword ptr [ECX + 0x2c]
007fa61c  ADD ECX,0x28
007fa61f  MOV dword ptr [EDX],EAX
007fa621  MOV dword ptr [ECX + 0x4],EAX
007fa624  MOV dword ptr [EAX + 0x4],EDX
007fa627  MOV dword ptr [EAX],ECX
007fa629  POP ESI
007fa62a  POP EBP
007fa62b  RET 0x4
