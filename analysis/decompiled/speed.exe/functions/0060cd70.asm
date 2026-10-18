0060cd70  PUSH 0x0
0060cd72  PUSH 0x1c
0060cd74  MOV ECX,0x925b30
0060cd79  CALL 0x005d29d0
0060cd7e  TEST EAX,EAX
0060cd80  JZ 0x0060cdba
0060cd82  MOV ECX,dword ptr [ESP + 0x4]
0060cd86  MOV EDX,dword ptr [ESP + 0x8]
0060cd8a  MOV dword ptr [EAX],ECX
0060cd8c  MOV ECX,dword ptr [ESP + 0xc]
0060cd90  MOV dword ptr [EAX + 0x4],EDX
0060cd93  MOV dword ptr [EAX + 0x8],ECX
0060cd96  MOV ECX,dword ptr [ESP + 0x10]
0060cd9a  PUSH ESI
0060cd9b  MOV ESI,dword ptr [ECX]
0060cd9d  LEA EDX,[EAX + 0xc]
0060cda0  MOV dword ptr [EDX],ESI
0060cda2  MOV ESI,dword ptr [ECX + 0x4]
0060cda5  MOV dword ptr [EDX + 0x4],ESI
0060cda8  MOV ECX,dword ptr [ECX + 0x8]
0060cdab  MOV dword ptr [EDX + 0x8],ECX
0060cdae  MOV DL,byte ptr [ESP + 0x18]
0060cdb2  MOV byte ptr [EAX + 0x18],DL
0060cdb5  MOV byte ptr [EAX + 0x19],0x0
0060cdb9  POP ESI
0060cdba  RET 0x14
