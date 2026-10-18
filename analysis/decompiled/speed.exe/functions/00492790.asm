00492790  MOV EAX,dword ptr [ESP + 0x4]
00492794  MOV EDX,dword ptr [EAX]
00492796  MOV dword ptr [ECX],EDX
00492798  MOV EDX,dword ptr [EAX + 0x4]
0049279b  MOV dword ptr [ECX + 0x4],EDX
0049279e  MOV EDX,dword ptr [EAX + 0x8]
004927a1  MOV dword ptr [ECX + 0x8],EDX
004927a4  XOR EDX,EDX
004927a6  MOV dword ptr [ECX + 0xc],EDX
004927a9  PUSH ESI
004927aa  MOV ESI,dword ptr [EAX + 0xc]
004927ad  MOV dword ptr [ECX + 0x10],ESI
004927b0  MOV ESI,dword ptr [EAX + 0x10]
004927b3  MOV dword ptr [ECX + 0x14],ESI
004927b6  MOV ESI,dword ptr [EAX + 0x14]
004927b9  MOV dword ptr [ECX + 0x18],ESI
004927bc  MOV dword ptr [ECX + 0x1c],EDX
004927bf  MOV ESI,dword ptr [EAX + 0x18]
004927c2  MOV dword ptr [ECX + 0x20],ESI
004927c5  MOV ESI,dword ptr [EAX + 0x1c]
004927c8  MOV dword ptr [ECX + 0x24],ESI
004927cb  MOV EAX,dword ptr [EAX + 0x20]
004927ce  MOV dword ptr [ECX + 0x28],EAX
004927d1  MOV EAX,dword ptr [ESP + 0xc]
004927d5  MOV dword ptr [ECX + 0x2c],EDX
004927d8  MOV EDX,dword ptr [EAX]
004927da  MOV dword ptr [ECX + 0x30],EDX
004927dd  MOV EDX,dword ptr [EAX + 0x4]
004927e0  MOV dword ptr [ECX + 0x34],EDX
004927e3  MOV EDX,dword ptr [EAX + 0x8]
004927e6  MOV dword ptr [ECX + 0x38],EDX
004927e9  MOV EAX,dword ptr [EAX + 0xc]
004927ec  MOV dword ptr [ECX + 0x3c],EAX
004927ef  POP ESI
004927f0  RET 0x8
