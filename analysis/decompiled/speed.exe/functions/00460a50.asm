00460a50  MOV EAX,dword ptr [ESP + 0x4]
00460a54  MOV ECX,dword ptr [ESP + 0x8]
00460a58  LEA EAX,[EAX + EAX*0x2]
00460a5b  LEA EAX,[EAX*0x4 + 0x90de48]
00460a62  MOV dword ptr [EAX + 0x8],ECX
00460a65  MOV dword ptr [EAX + 0x4],0xffffffff
00460a6c  RET
