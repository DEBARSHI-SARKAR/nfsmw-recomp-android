005bcb70  PUSH EBX
005bcb71  PUSH ESI
005bcb72  PUSH EDI
005bcb73  MOV EDI,dword ptr [ESP + 0x10]
005bcb77  XOR EBX,EBX
005bcb79  CMP EDI,EBX
005bcb7b  MOV ESI,ECX
005bcb7d  JNZ 0x005bcb87
005bcb7f  POP EDI
005bcb80  POP ESI
005bcb81  XOR EAX,EAX
005bcb83  POP EBX
005bcb84  RET 0x4
005bcb87  MOV ECX,dword ptr [ESI + 0x8]
005bcb8a  CMP ECX,EBX
005bcb8c  JZ 0x005bcb9c
005bcb8e  MOV EDI,EDI
005bcb90  CMP dword ptr [ECX + 0x1c],EDI
005bcb93  JZ 0x005bcbf6
005bcb95  MOV ECX,dword ptr [ECX + 0x4]
005bcb98  CMP ECX,EBX
005bcb9a  JNZ 0x005bcb90
005bcb9c  PUSH 0x20
005bcb9e  CALL 0x00652ac0
005bcba3  ADD ESP,0x4
005bcba6  CMP EAX,EBX
005bcba8  JZ 0x005bcbd0
005bcbaa  MOV ECX,0xabadcafe
005bcbaf  MOV dword ptr [EAX + 0x4],ECX
005bcbb2  MOV dword ptr [EAX + 0x8],ECX
005bcbb5  MOV dword ptr [EAX],0x8a2dec
005bcbbb  MOV dword ptr [EAX + 0xc],0x8a2c18
005bcbc2  MOV dword ptr [EAX + 0x14],EBX
005bcbc5  MOV dword ptr [EAX + 0x18],EBX
005bcbc8  MOV dword ptr [EAX + 0x10],EBX
005bcbcb  MOV dword ptr [EAX + 0x1c],EDI
005bcbce  JMP 0x005bcbd2
005bcbd0  XOR EAX,EAX
005bcbd2  CMP EAX,EBX
005bcbd4  MOV ECX,EAX
005bcbd6  JZ 0x005bcbf6
005bcbd8  MOV EDX,dword ptr [ESI + 0x8]
005bcbdb  CMP EDX,EBX
005bcbdd  MOV dword ptr [EAX + 0x4],EDX
005bcbe0  JZ 0x005bcbe5
005bcbe2  MOV dword ptr [EDX + 0x8],EAX
005bcbe5  MOV dword ptr [EAX + 0x8],EBX
005bcbe8  CMP dword ptr [ESI + 0xc],EBX
005bcbeb  MOV dword ptr [ESI + 0x8],EAX
005bcbee  JNZ 0x005bcbf3
005bcbf0  MOV dword ptr [ESI + 0xc],EAX
005bcbf3  INC dword ptr [ESI + 0x4]
005bcbf6  CALL 0x005b9070
005bcbfb  POP EDI
005bcbfc  POP ESI
005bcbfd  POP EBX
005bcbfe  RET 0x4
