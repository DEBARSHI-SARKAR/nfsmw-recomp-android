006ced30  MOV ECX,dword ptr [ESP + 0x8]
006ced34  LEA EAX,[ECX + -0x1]
006ced37  CDQ
006ced38  PUSH EBX
006ced39  MOV EBX,dword ptr [ESP + 0x10]
006ced3d  SUB EAX,EDX
006ced3f  SAR EAX,0x1
006ced41  CMP EBX,ECX
006ced43  PUSH ESI
006ced44  MOV ESI,dword ptr [ESP + 0xc]
006ced48  JGE 0x006ced79
006ced4a  PUSH EDI
006ced4b  JMP 0x006ced50
006ced50  MOV EDX,dword ptr [ESI + EAX*0x8 + 0x4]
006ced54  CMP EDX,dword ptr [ESP + 0x20]
006ced58  MOV EDI,dword ptr [ESI + EAX*0x8]
006ced5b  JA 0x006ced78
006ced5d  JC 0x006ced65
006ced5f  CMP EDI,dword ptr [ESP + 0x1c]
006ced63  JNC 0x006ced78
006ced65  MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
006ced69  MOV dword ptr [ESI + ECX*0x8],EDI
006ced6c  MOV ECX,EAX
006ced6e  DEC EAX
006ced6f  CDQ
006ced70  SUB EAX,EDX
006ced72  SAR EAX,0x1
006ced74  CMP EBX,ECX
006ced76  JL 0x006ced50
006ced78  POP EDI
006ced79  MOV EAX,dword ptr [ESP + 0x18]
006ced7d  MOV EDX,dword ptr [ESP + 0x1c]
006ced81  MOV dword ptr [ESI + ECX*0x8],EAX
006ced84  MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
006ced88  POP ESI
006ced89  POP EBX
006ced8a  RET
