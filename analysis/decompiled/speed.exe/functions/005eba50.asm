005eba50  SUB ESP,0xc
005eba53  MOV EAX,[0x0091e000]
005eba58  PUSH EBX
005eba59  MOV EBX,dword ptr [EAX + 0x1960]
005eba5f  PUSH ESI
005eba60  MOV ESI,ECX
005eba62  LEA ECX,[ESP + 0x10]
005eba66  PUSH ECX
005eba67  LEA EDX,[ESP + 0x10]
005eba6b  TEST EBX,EBX
005eba6d  PUSH EDX
005eba6e  MOV ECX,ESI
005eba70  SETZ BL
005eba73  MOV byte ptr [ESP + 0x12],0x0
005eba78  MOV byte ptr [ESP + 0x13],0x0
005eba7d  MOV dword ptr [ESP + 0x14],0x0
005eba85  CALL 0x005eb9e0
005eba8a  MOV ECX,dword ptr [ESP + 0xc]
005eba8e  TEST ECX,ECX
005eba90  JZ 0x005ebaa7
005eba92  MOV EAX,dword ptr [ECX]
005eba94  MOV byte ptr [ESP + 0xa],0x1
005eba99  CALL dword ptr [EAX + 0x114]
005eba9f  CMP EAX,0x2
005ebaa2  SETZ DL
005ebaa5  JMP 0x005ebaab
005ebaa7  MOV DL,byte ptr [ESP + 0xb]
005ebaab  TEST BL,BL
005ebaad  MOV CL,byte ptr [ESP + 0xa]
005ebab1  JZ 0x005ebabe
005ebab3  TEST CL,CL
005ebab5  JNZ 0x005ebabe
005ebab7  MOV EAX,0x1
005ebabc  JMP 0x005ebac0
005ebabe  XOR EAX,EAX
005ebac0  TEST BL,BL
005ebac2  MOV byte ptr [ESI + 0x2d0],AL
005ebac8  JZ 0x005ebad5
005ebaca  TEST CL,CL
005ebacc  JNZ 0x005ebad5
005ebace  MOV EAX,0x1
005ebad3  JMP 0x005ebad7
005ebad5  XOR EAX,EAX
005ebad7  TEST BL,BL
005ebad9  MOV byte ptr [ESI + 0x2ce],AL
005ebadf  JZ 0x005ebafa
005ebae1  TEST CL,CL
005ebae3  JZ 0x005ebae9
005ebae5  TEST DL,DL
005ebae7  JZ 0x005ebafa
005ebae9  MOV EAX,0x1
005ebaee  MOV byte ptr [ESI + 0x2cf],AL
005ebaf4  POP ESI
005ebaf5  POP EBX
005ebaf6  ADD ESP,0xc
005ebaf9  RET
005ebafa  XOR EAX,EAX
005ebafc  MOV byte ptr [ESI + 0x2cf],AL
005ebb02  POP ESI
005ebb03  POP EBX
005ebb04  ADD ESP,0xc
005ebb07  RET
