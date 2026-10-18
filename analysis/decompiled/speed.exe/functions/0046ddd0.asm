0046ddd0  PUSH EBP
0046ddd1  MOV EBP,ESP
0046ddd3  AND ESP,0xfffffff0
0046ddd6  SUB ESP,0x30
0046ddd9  MOV EAX,dword ptr [ECX + 0xc4]
0046dddf  TEST EAX,EAX
0046dde1  JZ 0x0046de03
0046dde3  MOV DL,byte ptr [EAX + 0x3]
0046dde6  TEST DL,DL
0046dde8  JZ 0x0046de03
0046ddea  MOV EAX,dword ptr [EBP + 0xc]
0046dded  MOV EDX,dword ptr [EBP + 0x8]
0046ddf0  MOV ECX,dword ptr [ECX + 0x88]
0046ddf6  PUSH EAX
0046ddf7  PUSH EDX
0046ddf8  CALL 0x0046c230
0046ddfd  MOV ESP,EBP
0046ddff  POP EBP
0046de00  RET 0x8
0046de03  MOV EAX,dword ptr [ECX + 0x88]
0046de09  MOV dword ptr [ESP + 0x10],0x0
0046de11  MOV dword ptr [ESP + 0x14],0x0
0046de19  MOV dword ptr [ESP + 0x18],0x0
0046de21  MOV dword ptr [ESP + 0x1c],0x0
0046de29  FLD float ptr [EAX]
0046de2b  FLD float ptr [EAX + 0x2c]
0046de2e  MOV ECX,dword ptr [EAX + 0x58]
0046de31  MOV EDX,dword ptr [EAX + 0x8]
0046de34  FLD float ptr [0x0089096c]
0046de3a  FSUB float ptr [EBP + 0xc]
0046de3d  MOV dword ptr [ESP + 0x28],ECX
0046de41  MOV dword ptr [ESP + 0x10],EDX
0046de45  MOV ECX,dword ptr [EAX + 0x34]
0046de48  FST float ptr [ESP + 0xc]
0046de4c  MOV dword ptr [ESP + 0x14],ECX
0046de50  MOV EDX,dword ptr [EAX + 0x60]
0046de53  FMUL ST2
0046de55  MOV EAX,dword ptr [EBP + 0x8]
0046de58  MOV ECX,dword ptr [EBP + 0xc]
0046de5b  FSTP float ptr [EAX]
0046de5d  PUSH ECX
0046de5e  MOV dword ptr [ESP + 0x1c],EDX
0046de62  FMUL float ptr [ESP + 0x10]
0046de66  LEA EDX,[ESP + 0x14]
0046de6a  PUSH EDX
0046de6b  PUSH EAX
0046de6c  FSTP float ptr [EAX + 0x4]
0046de6f  PUSH EAX
0046de70  FSTP ST0
0046de72  FLD float ptr [ESP + 0x38]
0046de76  FMUL float ptr [ESP + 0x1c]
0046de7a  FSTP float ptr [EAX + 0x8]
0046de7d  CALL 0x0045f640
0046de82  ADD ESP,0x10
0046de85  MOV ESP,EBP
0046de87  POP EBP
0046de88  RET 0x8
