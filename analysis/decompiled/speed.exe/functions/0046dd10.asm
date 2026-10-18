0046dd10  PUSH EBP
0046dd11  MOV EBP,ESP
0046dd13  AND ESP,0xfffffff0
0046dd16  SUB ESP,0x30
0046dd19  MOV EAX,dword ptr [ECX + 0xc4]
0046dd1f  TEST EAX,EAX
0046dd21  JZ 0x0046dd43
0046dd23  MOV DL,byte ptr [EAX + 0x2]
0046dd26  TEST DL,DL
0046dd28  JZ 0x0046dd43
0046dd2a  MOV EAX,dword ptr [EBP + 0xc]
0046dd2d  MOV EDX,dword ptr [EBP + 0x8]
0046dd30  MOV ECX,dword ptr [ECX + 0x84]
0046dd36  PUSH EAX
0046dd37  PUSH EDX
0046dd38  CALL 0x0046c230
0046dd3d  MOV ESP,EBP
0046dd3f  POP EBP
0046dd40  RET 0x8
0046dd43  MOV EAX,dword ptr [ECX + 0x84]
0046dd49  MOV dword ptr [ESP + 0x10],0x0
0046dd51  MOV dword ptr [ESP + 0x14],0x0
0046dd59  MOV dword ptr [ESP + 0x18],0x0
0046dd61  MOV dword ptr [ESP + 0x1c],0x0
0046dd69  FLD float ptr [EAX]
0046dd6b  FLD float ptr [EAX + 0x2c]
0046dd6e  MOV ECX,dword ptr [EAX + 0x58]
0046dd71  MOV EDX,dword ptr [EAX + 0x8]
0046dd74  FLD float ptr [0x0089096c]
0046dd7a  FSUB float ptr [EBP + 0xc]
0046dd7d  MOV dword ptr [ESP + 0x28],ECX
0046dd81  MOV dword ptr [ESP + 0x10],EDX
0046dd85  MOV ECX,dword ptr [EAX + 0x34]
0046dd88  FST float ptr [ESP + 0xc]
0046dd8c  MOV dword ptr [ESP + 0x14],ECX
0046dd90  MOV EDX,dword ptr [EAX + 0x60]
0046dd93  FMUL ST2
0046dd95  MOV EAX,dword ptr [EBP + 0x8]
0046dd98  MOV ECX,dword ptr [EBP + 0xc]
0046dd9b  FSTP float ptr [EAX]
0046dd9d  PUSH ECX
0046dd9e  MOV dword ptr [ESP + 0x1c],EDX
0046dda2  FMUL float ptr [ESP + 0x10]
0046dda6  LEA EDX,[ESP + 0x14]
0046ddaa  PUSH EDX
0046ddab  PUSH EAX
0046ddac  FSTP float ptr [EAX + 0x4]
0046ddaf  PUSH EAX
0046ddb0  FSTP ST0
0046ddb2  FLD float ptr [ESP + 0x38]
0046ddb6  FMUL float ptr [ESP + 0x1c]
0046ddba  FSTP float ptr [EAX + 0x8]
0046ddbd  CALL 0x0045f640
0046ddc2  ADD ESP,0x10
0046ddc5  MOV ESP,EBP
0046ddc7  POP EBP
0046ddc8  RET 0x8
