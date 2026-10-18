007eee8a  PUSH EBP
007eee8b  MOV EBP,ESP
007eee8d  SUB ESP,0x1c
007eee90  PUSH EBX
007eee91  PUSH ESI
007eee92  MOV ESI,dword ptr [0x00907700]
007eee98  MOV EAX,ESI
007eee9a  ADD EAX,0x3
007eee9d  PUSH EDI
007eee9e  AND EAX,0xfffffffc
007eeea1  XOR EDI,EDI
007eeea3  CALL 0x007c94b0
007eeea8  MOV EAX,ESI
007eeeaa  ADD EAX,0x3
007eeead  AND EAX,0xfffffffc
007eeeb0  MOV dword ptr [EBP + -0x14],ESP
007eeeb3  CALL 0x007c94b0
007eeeb8  MOV dword ptr [EBP + -0x10],ESP
007eeebb  PUSH 0x1
007eeebd  PUSH EDI
007eeebe  PUSH EDI
007eeebf  PUSH dword ptr [EBP + 0xc]
007eeec2  CALL dword ptr [0x0089029c]
007eeec8  PUSH EDI
007eeec9  PUSH dword ptr [EBP + 0x10]
007eeecc  MOV EBX,EAX
007eeece  PUSH dword ptr [0x00907700]
007eeed4  PUSH dword ptr [EBP + -0x14]
007eeed7  PUSH EBX
007eeed8  PUSH dword ptr [EBP + 0x8]
007eeedb  CALL 0x007edb85
007eeee0  MOV dword ptr [EBP + -0x1c],EAX
007eeee3  MOV EAX,[0x00907700]
007eeee8  ADD ESP,0x18
007eeeeb  PUSH 0x0
007eeeed  PUSH dword ptr [EBP + 0x10]
007eeef0  MOV ESI,EDI
007eeef2  PUSH EAX
007eeef3  XOR ESI,0x1
007eeef6  PUSH dword ptr [EBP + ESI*0x4 + -0x14]
007eeefa  ADD EAX,EBX
007eeefc  PUSH EAX
007eeefd  PUSH dword ptr [EBP + 0x8]
007eef00  CALL 0x007edb85
007eef05  MOV dword ptr [EBP + ESI*0x4 + -0x1c],EAX
007eef09  PUSH dword ptr [EBP + EDI*0x4 + -0x1c]
007eef0d  CALL 0x007ed9a6
007eef12  PUSH dword ptr [EBP + EDI*0x4 + -0x1c]
007eef16  CALL 0x007eda45
007eef1b  ADD ESP,0x20
007eef1e  PUSH 0x0
007eef20  LEA ECX,[EBP + -0xc]
007eef23  PUSH ECX
007eef24  MOV dword ptr [EBP + -0x4],EAX
007eef27  PUSH dword ptr [EBP + -0x4]
007eef2a  MOV EAX,dword ptr [EBP + EDI*0x4 + -0x14]
007eef2e  PUSH EAX
007eef2f  PUSH dword ptr [EBP + 0xc]
007eef32  MOV dword ptr [EBP + -0x8],EAX
007eef35  CALL dword ptr [0x00890228]
007eef3b  TEST EAX,EAX
007eef3d  JZ 0x007eef77
007eef3f  MOV EDI,dword ptr [EBP + 0x14]
007eef42  XOR EAX,EAX
007eef44  MOV AX,word ptr [EDI]
007eef47  PUSH EAX
007eef48  PUSH dword ptr [EBP + -0x4]
007eef4b  PUSH dword ptr [EBP + -0x8]
007eef4e  CALL 0x007f1042
007eef53  ADD EBX,dword ptr [EBP + -0x4]
007eef56  MOV word ptr [EDI],AX
007eef59  MOV EAX,[0x00907700]
007eef5e  ADD ESP,0xc
007eef61  CMP dword ptr [EBP + -0x4],EAX
007eef64  MOV EDI,ESI
007eef66  JNZ 0x007eef7d
007eef68  CMP byte ptr [0x009bb158],0x0
007eef6f  JZ 0x007eeeeb
007eef75  JMP 0x007eef7d
007eef77  OR EBX,0xffffffff
007eef7a  XOR EDI,0x1
007eef7d  PUSH dword ptr [EBP + EDI*0x4 + -0x1c]
007eef81  CALL 0x007edab2
007eef86  POP ECX
007eef87  MOV EAX,EBX
007eef89  LEA ESP,[EBP + -0x28]
007eef8c  POP EDI
007eef8d  POP ESI
007eef8e  POP EBX
007eef8f  LEAVE
007eef90  RET
