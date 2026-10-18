00460a90  MOV EAX,dword ptr [ESP + 0x4]
00460a94  MOV CL,byte ptr [ESP + 0x8]
00460a98  LEA EAX,[EAX + EAX*0x2]
00460a9b  MOV byte ptr [EAX*0x4 + 0x90de49],CL
00460aa2  RET
