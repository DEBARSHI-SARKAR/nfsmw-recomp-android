005b79b0  PUSH EBX
005b79b1  PUSH ESI
005b79b2  PUSH 0x8a2d1c
005b79b7  MOV ESI,ECX
005b79b9  CALL 0x007c5e60
005b79be  PUSH 0x20
005b79c0  CALL 0x00652ac0
005b79c5  XOR EBX,EBX
005b79c7  ADD ESP,0x8
005b79ca  CMP EAX,EBX
005b79cc  JZ 0x005b79f0
005b79ce  MOV ECX,0xabadcafe
005b79d3  MOV dword ptr [EAX + 0x4],ECX
005b79d6  MOV dword ptr [EAX + 0x8],ECX
005b79d9  MOV dword ptr [EAX + 0xc],EBX
005b79dc  MOV dword ptr [EAX + 0x10],EBX
005b79df  MOV dword ptr [EAX],0x8a2c7c
005b79e5  MOV dword ptr [EAX + 0x14],EBX
005b79e8  MOV dword ptr [EAX + 0x18],EBX
005b79eb  MOV dword ptr [EAX + 0x1c],EBX
005b79ee  JMP 0x005b79f2
005b79f0  XOR EAX,EAX
005b79f2  MOV ECX,dword ptr [ESP + 0xc]
005b79f6  MOV EDX,dword ptr [ESP + 0x14]
005b79fa  MOV dword ptr [EAX + 0x1c],ECX
005b79fd  MOV ECX,dword ptr [ECX + 0x20]
005b7a00  AND ECX,EDX
005b7a02  MOV dword ptr [EAX + 0x18],ECX
005b7a05  MOV CL,byte ptr [ESP + 0x10]
005b7a09  XOR EDX,EDX
005b7a0b  CMP CL,BL
005b7a0d  SETNZ DL
005b7a10  LEA EDX,[EDX*0x4 + 0x4]
005b7a17  MOV dword ptr [EAX + 0x14],EDX
005b7a1a  MOV ECX,dword ptr [ESI + 0x412c]
005b7a20  CMP ECX,EBX
005b7a22  JZ 0x005b7a39
005b7a24  MOV EDX,dword ptr [ECX + 0x4]
005b7a27  CMP EDX,EBX
005b7a29  MOV dword ptr [EAX + 0x4],EDX
005b7a2c  JZ 0x005b7a31
005b7a2e  MOV dword ptr [EDX + 0x8],EAX
005b7a31  MOV dword ptr [EAX + 0x8],ECX
005b7a34  MOV dword ptr [ECX + 0x4],EAX
005b7a37  JMP 0x005b7a52
005b7a39  MOV EDX,dword ptr [ESI + 0x4128]
005b7a3f  CMP EDX,EBX
005b7a41  MOV dword ptr [EAX + 0x4],EDX
005b7a44  JZ 0x005b7a49
005b7a46  MOV dword ptr [EDX + 0x8],EAX
005b7a49  MOV dword ptr [EAX + 0x8],EBX
005b7a4c  MOV dword ptr [ESI + 0x4128],EAX
005b7a52  CMP dword ptr [ESI + 0x412c],ECX
005b7a58  JNZ 0x005b7a60
005b7a5a  MOV dword ptr [ESI + 0x412c],EAX
005b7a60  INC dword ptr [ESI + 0x4124]
005b7a66  POP ESI
005b7a67  POP EBX
005b7a68  RET 0xc
