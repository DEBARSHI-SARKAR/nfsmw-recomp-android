004770b0  XOR EDX,EDX
004770b2  MOV dword ptr [ECX + 0x80],EDX
004770b8  MOV EAX,dword ptr [ECX + 0x90]
004770be  MOV dword ptr [ECX + 0xc0],EAX
004770c4  MOV EAX,dword ptr [ECX + 0x94]
004770ca  MOV dword ptr [ECX + 0xc4],EAX
004770d0  MOV EAX,dword ptr [ECX + 0x98]
004770d6  MOV dword ptr [ECX + 0xc8],EAX
004770dc  MOV EAX,dword ptr [ECX + 0x9c]
004770e2  MOV dword ptr [ECX + 0xcc],EAX
004770e8  MOV EAX,dword ptr [ECX + 0xa0]
004770ee  MOV dword ptr [ECX + 0xd0],EAX
004770f4  FLD float ptr [ECX + 0xb4]
004770fa  FLD float ptr [ECX + 0xb8]
00477100  MOV EAX,dword ptr [ECX + 0xb0]
00477106  MOV dword ptr [ECX + 0xe0],EAX
0047710c  FXCH
0047710e  FSTP float ptr [ECX + 0xe4]
00477114  PUSH ESI
00477115  FSTP float ptr [ECX + 0xe8]
0047711b  MOV EAX,dword ptr [ECX + 0x90]
00477121  MOV dword ptr [ECX + 0xf0],EAX
00477127  MOV EAX,dword ptr [ECX + 0x94]
0047712d  MOV dword ptr [ECX + 0xf4],EAX
00477133  MOV EAX,dword ptr [ECX + 0x98]
00477139  MOV dword ptr [ECX + 0xf8],EAX
0047713f  MOV EAX,dword ptr [ECX + 0x9c]
00477145  MOV dword ptr [ECX + 0xfc],EAX
0047714b  MOV EAX,dword ptr [ECX + 0xa0]
00477151  MOV dword ptr [ECX + 0x100],EAX
00477157  FLD float ptr [ECX + 0xb4]
0047715d  FLD float ptr [ECX + 0xb8]
00477163  MOV EAX,dword ptr [ECX + 0xb0]
00477169  MOV dword ptr [ECX + 0x110],EAX
0047716f  FXCH
00477171  MOV EAX,dword ptr [ESP + 0x8]
00477175  FSTP float ptr [ECX + 0x114]
0047717b  FSTP float ptr [ECX + 0x118]
00477181  MOV ESI,dword ptr [EAX]
00477183  MOV dword ptr [ECX + 0xf0],ESI
00477189  MOV ESI,dword ptr [EAX + 0x4]
0047718c  MOV dword ptr [ECX + 0xf4],ESI
00477192  MOV EAX,dword ptr [EAX + 0x8]
00477195  MOV dword ptr [ECX + 0xf8],EAX
0047719b  MOV EAX,dword ptr [ESP + 0xc]
0047719f  MOV dword ptr [ECX + 0xfc],EAX
004771a5  MOV EAX,dword ptr [ESP + 0x10]
004771a9  MOV dword ptr [ECX + 0x100],EAX
004771af  MOV EAX,dword ptr [ESP + 0x14]
004771b3  FLD float ptr [EAX + 0x8]
004771b6  FLD float ptr [EAX + 0x4]
004771b9  MOV EAX,dword ptr [EAX]
004771bb  FSTP float ptr [ECX + 0x114]
004771c1  MOV dword ptr [ECX + 0x110],EAX
004771c7  MOV EAX,dword ptr [ESP + 0x1c]
004771cb  FSTP float ptr [ECX + 0x118]
004771d1  MOV dword ptr [ECX + 0x12c],EAX
004771d7  MOV EAX,dword ptr [ESP + 0x20]
004771db  MOV dword ptr [ECX + 0x130],EAX
004771e1  MOV EAX,dword ptr [ECX + 0xf0]
004771e7  PUSH EAX
004771e8  MOV EAX,dword ptr [ECX + 0xc0]
004771ee  PUSH EAX
004771ef  CALL 0x0046b980
004771f4  FSTP float ptr [ECX + 0xf0]
004771fa  MOV EAX,dword ptr [ECX + 0xf4]
00477200  PUSH EAX
00477201  MOV EAX,dword ptr [ECX + 0xc4]
00477207  PUSH EAX
00477208  CALL 0x0046b980
0047720d  FSTP float ptr [ECX + 0xf4]
00477213  MOV EAX,dword ptr [ECX + 0xfc]
00477219  PUSH EAX
0047721a  MOV EAX,dword ptr [ECX + 0xcc]
00477220  PUSH EAX
00477221  CALL 0x0046b980
00477226  FSTP float ptr [ECX + 0xfc]
0047722c  MOV dword ptr [ECX + 0x134],EDX
00477232  MOV EDX,dword ptr [ESP + 0x18]
00477236  MOV dword ptr [ECX + 0x138],EDX
0047723c  POP ESI
0047723d  RET 0x1c
