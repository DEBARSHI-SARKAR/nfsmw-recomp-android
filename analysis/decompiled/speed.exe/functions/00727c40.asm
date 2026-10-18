00727c40  MOV EDX,ECX
00727c42  XOR EAX,EAX
00727c44  MOV word ptr [EDX + 0xde],AX
00727c4b  MOV dword ptr [EDX + 0xf0],EAX
00727c51  MOV dword ptr [EDX + 0xe8],EAX
00727c57  MOV dword ptr [EDX + 0xec],EAX
00727c5d  MOV dword ptr [EDX + 0xf4],EAX
00727c63  MOV dword ptr [EDX + 0xf8],EAX
00727c69  MOV dword ptr [EDX + 0xfc],EAX
00727c6f  MOV dword ptr [EDX + 0x100],EAX
00727c75  MOV word ptr [EDX + 0x142],AX
00727c7c  MOV dword ptr [EDX + 0x154],EAX
00727c82  MOV dword ptr [EDX + 0x14c],EAX
00727c88  MOV dword ptr [EDX + 0x150],EAX
00727c8e  MOV dword ptr [EDX + 0x158],EAX
00727c94  MOV dword ptr [EDX + 0x15c],EAX
00727c9a  MOV dword ptr [EDX + 0x160],EAX
00727ca0  MOV dword ptr [EDX + 0x164],EAX
00727ca6  PUSH EDI
00727ca7  MOV ECX,0x40
00727cac  LEA EDI,[EDX + 0x1b0]
00727cb2  MOV dword ptr [EDX + 0x188],EAX
00727cb8  MOV dword ptr [EDX + 0x18c],EAX
00727cbe  MOV byte ptr [EDX + 0x191],AL
00727cc4  MOV byte ptr [EDX + 0x190],AL
00727cca  MOV byte ptr [EDX + 0x192],AL
00727cd0  MOV byte ptr [EDX + 0x193],0x1
00727cd7  MOV byte ptr [EDX + 0x194],AL
00727cdd  MOV dword ptr [EDX + 0x19c],EAX
00727ce3  MOV dword ptr [EDX + 0x1a0],EAX
00727ce9  MOV dword ptr [EDX + 0x1a8],EAX
00727cef  MOV dword ptr [EDX + 0x1ac],EAX
00727cf5  STOSD.REP ES:EDI
00727cf7  MOV ECX,EDX
00727cf9  POP EDI
00727cfa  JMP 0x00723940
