00487000  MOV EAX,dword ptr [ESP + 0xc]
00487004  PUSH EBX
00487005  MOV EBX,ECX
00487007  MOV ECX,dword ptr [EAX]
00487009  MOV dword ptr [EBX + 0x80],ECX
0048700f  MOV EDX,dword ptr [EAX + 0x4]
00487012  MOV dword ptr [EBX + 0x84],EDX
00487018  MOV EAX,dword ptr [EAX + 0x8]
0048701b  MOV dword ptr [EBX + 0x88],EAX
00487021  MOV EAX,dword ptr [ESP + 0x14]
00487025  MOV ECX,dword ptr [EAX]
00487027  MOV dword ptr [EBX + 0x8c],ECX
0048702d  MOV EDX,dword ptr [EAX + 0x4]
00487030  MOV dword ptr [EBX + 0x90],EDX
00487036  MOV EAX,dword ptr [EAX + 0x8]
00487039  MOV dword ptr [EBX + 0x94],EAX
0048703f  MOV EAX,dword ptr [ESP + 0x18]
00487043  MOV ECX,dword ptr [EAX]
00487045  MOV dword ptr [EBX + 0x98],ECX
0048704b  MOV EDX,dword ptr [EAX + 0x4]
0048704e  MOV dword ptr [EBX + 0x9c],EDX
00487054  MOV EAX,dword ptr [EAX + 0x8]
00487057  MOV dword ptr [EBX + 0xa0],EAX
0048705d  MOV EAX,dword ptr [ESP + 0x1c]
00487061  MOV ECX,dword ptr [EAX]
00487063  MOV dword ptr [EBX + 0xa4],ECX
00487069  MOV EDX,dword ptr [EAX + 0x4]
0048706c  MOV dword ptr [EBX + 0xa8],EDX
00487072  MOV EAX,dword ptr [EAX + 0x8]
00487075  MOV dword ptr [EBX + 0xac],EAX
0048707b  MOV EAX,dword ptr [ESP + 0x20]
0048707f  MOV ECX,dword ptr [EAX]
00487081  MOV dword ptr [EBX + 0xb0],ECX
00487087  MOV EDX,dword ptr [EAX + 0x4]
0048708a  MOV ECX,dword ptr [ESP + 0xc]
0048708e  MOV dword ptr [EBX + 0xb4],EDX
00487094  MOV EAX,dword ptr [EAX + 0x8]
00487097  MOV dword ptr [EBX + 0xb8],EAX
0048709d  MOV EAX,0x3f800000
004870a2  MOV dword ptr [EBX + 0xbc],EAX
004870a8  MOV dword ptr [EBX + 0xc0],EAX
004870ae  MOV dword ptr [EBX + 0xc4],EAX
004870b4  XOR EAX,EAX
004870b6  MOV dword ptr [EBX + 0xd0],ECX
004870bc  MOV byte ptr [EBX + 0xc8],AL
004870c2  MOV dword ptr [EBX + 0xcc],EAX
004870c8  MOV dword ptr [EBX + 0xd8],EAX
004870ce  MOV dword ptr [EBX + 0xdc],EAX
004870d4  MOV dword ptr [EBX + 0xe0],EAX
004870da  MOV dword ptr [EBX + 0xe4],EAX
004870e0  MOV dword ptr [EBX + 0xe8],EAX
004870e6  MOV dword ptr [EBX + 0xec],EAX
004870ec  PUSH ESI
004870ed  MOV ESI,dword ptr [ESP + 0xc]
004870f1  MOV dword ptr [EBX + 0xf0],EAX
004870f7  MOV dword ptr [EBX + 0xf4],EAX
004870fd  MOV dword ptr [EBX + 0xf8],EAX
00487103  PUSH EDI
00487104  MOV dword ptr [EBX + 0xfc],EAX
0048710a  MOV dword ptr [EBX + 0x100],EAX
00487110  MOV dword ptr [EBX + 0x104],EAX
00487116  LEA EDX,[EBX + 0x40]
00487119  PUSH EDX
0048711a  MOV dword ptr [EBX + 0x108],EAX
00487120  MOV dword ptr [EBX + 0x10c],EAX
00487126  MOV byte ptr [EBX + 0x110],AL
0048712c  MOV ECX,0x10
00487131  MOV EDI,EBX
00487133  PUSH EBX
00487134  MOVSD.REP ES:EDI,ESI
00487136  CALL 0x004665b0
0048713b  ADD ESP,0x8
0048713e  FLD float ptr [0x0089096c]
00487144  POP EDI
00487145  FDIV float ptr [EBX + 0xd0]
0048714b  POP ESI
0048714c  MOV EAX,EBX
0048714e  FSTP float ptr [EBX + 0xd4]
00487154  POP EBX
00487155  RET 0x1c
