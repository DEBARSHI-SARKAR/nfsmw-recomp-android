007924a0  MOV EAX,ECX
007924a2  XOR ECX,ECX
007924a4  MOV dword ptr [EAX + 0x4],0xffffffff
007924ab  MOV dword ptr [EAX],0xffffffff
007924b1  MOV word ptr [EAX + 0x8],CX
007924b5  MOV dword ptr [EAX + 0x10],ECX
007924b8  MOV dword ptr [EAX + 0x14],ECX
007924bb  MOV dword ptr [EAX + 0x18],0xbf800000
007924c2  RET
