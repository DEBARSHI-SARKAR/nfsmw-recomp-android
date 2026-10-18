007bce90  PUSH -0x1
007bce92  PUSH 0x8836b6
007bce97  MOV EAX,FS:[0x0]
007bce9d  PUSH EAX
007bce9e  MOV dword ptr FS:[0x0],ESP
007bcea5  PUSH ECX
007bcea6  PUSH EBX
007bcea7  PUSH ESI
007bcea8  PUSH EDI
007bcea9  MOV EDI,dword ptr [ESP + 0x20]
007bcead  MOV ESI,ECX
007bceaf  PUSH EDI
007bceb0  MOV dword ptr [ESP + 0x10],ESI
007bceb4  CALL 0x0059bc40
007bceb9  XOR EBX,EBX
007bcebb  MOV dword ptr [ESI],0x8b7e84
007bcec1  MOV dword ptr [ESI + 0x150],EBX
007bcec7  MOV EAX,dword ptr [EDI]
007bcec9  PUSH EAX
007bceca  LEA ECX,[ESI + 0x154]
007bced0  MOV dword ptr [ESP + 0x1c],EBX
007bced4  CALL 0x007b12b0
007bced9  MOV dword ptr [ESI + 0x1b8],EBX
007bcedf  MOV AL,0x1
007bcee1  MOV byte ptr [ESI + 0x11c],AL
007bcee7  MOV byte ptr [ESI + 0x129],BL
007bceed  MOV ECX,dword ptr [EDI + 0x8]
007bcef0  AND ECX,0xffff
007bcef6  MOV dword ptr [ESI + 0x148],ECX
007bcefc  MOVSX EDX,word ptr [EDI + 0xa]
007bcf00  MOV byte ptr [ESP + 0x18],AL
007bcf04  MOV EAX,ECX
007bcf06  CMP EAX,0x601
007bcf0b  MOV dword ptr [ESI + 0x14c],EDX
007bcf11  JC 0x007bcf32
007bcf13  CMP EAX,0x606
007bcf18  JA 0x007bcf32
007bcf1a  PUSH 0x89b2c8
007bcf1f  CALL 0x00591e90
007bcf24  MOV ECX,dword ptr [0x00905ed8]
007bcf2a  MOV dword ptr [EAX + 0x88],ECX
007bcf30  JMP 0x007bcf48
007bcf32  PUSH 0x89b2c8
007bcf37  CALL 0x00591e90
007bcf3c  MOV EDX,dword ptr [ESI + 0x148]
007bcf42  MOV dword ptr [EAX + 0x88],EDX
007bcf48  MOV ECX,dword ptr [ESP + 0x14]
007bcf4c  ADD ESP,0x4
007bcf4f  POP EDI
007bcf50  MOV EAX,ESI
007bcf52  POP ESI
007bcf53  POP EBX
007bcf54  MOV dword ptr FS:[0x0],ECX
007bcf5b  ADD ESP,0x10
007bcf5e  RET 0x4
