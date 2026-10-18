007e99a0  PUSH EBP
007e99a1  MOV EBP,ESP
007e99a3  MOV EAX,dword ptr [ECX + 0x10]
007e99a6  MOV EDX,dword ptr [EBP + 0x8]
007e99a9  MOV dword ptr [EDX],EAX
007e99ab  MOV EAX,dword ptr [ECX + 0x14]
007e99ae  MOV EDX,dword ptr [EBP + 0xc]
007e99b1  MOV dword ptr [EDX],EAX
007e99b3  MOV EAX,dword ptr [ECX + 0x18]
007e99b6  MOV EDX,dword ptr [EBP + 0x10]
007e99b9  MOV dword ptr [EDX],EAX
007e99bb  MOV EAX,dword ptr [ECX + 0x1c]
007e99be  MOV ECX,dword ptr [EBP + 0x14]
007e99c1  MOV dword ptr [ECX],EAX
007e99c3  POP EBP
007e99c4  RET 0x10
