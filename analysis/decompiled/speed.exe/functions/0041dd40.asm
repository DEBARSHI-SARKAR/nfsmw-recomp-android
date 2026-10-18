0041dd40  MOV EAX,dword ptr [ESP + 0x8]
0041dd44  TEST EAX,EAX
0041dd46  JBE 0x0041dd92
0041dd48  MOV ECX,dword ptr [ESP + 0xc]
0041dd4c  PUSH EBX
0041dd4d  PUSH ESI
0041dd4e  MOV EDX,EAX
0041dd50  MOV EAX,dword ptr [ESP + 0xc]
0041dd54  PUSH EDI
0041dd55  TEST EAX,EAX
0041dd57  JZ 0x0041dd89
0041dd59  MOV ESI,ECX
0041dd5b  MOV EBX,dword ptr [ESI]
0041dd5d  MOV EDI,EAX
0041dd5f  MOV dword ptr [EDI],EBX
0041dd61  MOV EBX,dword ptr [ESI + 0x4]
0041dd64  MOV dword ptr [EDI + 0x4],EBX
0041dd67  MOV ESI,dword ptr [ESI + 0x8]
0041dd6a  MOV dword ptr [EDI + 0x8],ESI
0041dd6d  LEA ESI,[ECX + 0xc]
0041dd70  MOV EBX,dword ptr [ESI]
0041dd72  LEA EDI,[EAX + 0xc]
0041dd75  MOV dword ptr [EDI],EBX
0041dd77  MOV EBX,dword ptr [ESI + 0x4]
0041dd7a  MOV dword ptr [EDI + 0x4],EBX
0041dd7d  MOV ESI,dword ptr [ESI + 0x8]
0041dd80  MOV dword ptr [EDI + 0x8],ESI
0041dd83  MOV ESI,dword ptr [ECX + 0x18]
0041dd86  MOV dword ptr [EAX + 0x18],ESI
0041dd89  ADD EAX,0x1c
0041dd8c  DEC EDX
0041dd8d  JNZ 0x0041dd55
0041dd8f  POP EDI
0041dd90  POP ESI
0041dd91  POP EBX
0041dd92  RET
