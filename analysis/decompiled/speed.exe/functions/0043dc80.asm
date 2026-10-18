0043dc80  PUSH ESI
0043dc81  MOV ESI,ECX
0043dc83  CALL 0x0041c8a0
0043dc88  MOV dword ptr [ESI + 0x4],EAX
0043dc8b  MOV byte ptr [EAX + 0xf],0x1
0043dc8f  MOV EAX,dword ptr [ESI + 0x4]
0043dc92  MOV dword ptr [EAX + 0x4],EAX
0043dc95  MOV EAX,dword ptr [ESI + 0x4]
0043dc98  MOV dword ptr [EAX],EAX
0043dc9a  MOV EAX,dword ptr [ESI + 0x4]
0043dc9d  MOV dword ptr [EAX + 0x8],EAX
0043dca0  MOV dword ptr [ESI + 0x8],0x0
0043dca7  MOV EAX,ESI
0043dca9  POP ESI
0043dcaa  RET
