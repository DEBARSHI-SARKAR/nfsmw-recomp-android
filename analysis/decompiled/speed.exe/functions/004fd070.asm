004fd070  SUB ESP,0x8
004fd073  MOV EAX,dword ptr [ESP + 0x14]
004fd077  PUSH EBX
004fd078  PUSH EBP
004fd079  PUSH ESI
004fd07a  MOV ESI,ECX
004fd07c  XOR ECX,ECX
004fd07e  XOR EBX,EBX
004fd080  CMP EAX,0x1
004fd083  PUSH EDI
004fd084  MOV dword ptr [ESP + 0x10],ECX
004fd088  JLE 0x004fd0a0
004fd08a  LEA EBX,[EBX]
004fd090  INC ECX
004fd091  MOV EDX,0x1
004fd096  SHL EDX,CL
004fd098  CMP EDX,EAX
004fd09a  JL 0x004fd090
004fd09c  MOV dword ptr [ESP + 0x10],ECX
004fd0a0  MOV EBP,dword ptr [ESP + 0x28]
004fd0a4  XOR ECX,ECX
004fd0a6  CMP EBP,0x1
004fd0a9  MOV dword ptr [ESP + 0x14],ECX
004fd0ad  JLE 0x004fd0c0
004fd0af  NOP
004fd0b0  INC ECX
004fd0b1  MOV EDX,0x1
004fd0b6  SHL EDX,CL
004fd0b8  CMP EDX,EBP
004fd0ba  JL 0x004fd0b0
004fd0bc  MOV dword ptr [ESP + 0x14],ECX
004fd0c0  MOV ECX,dword ptr [ESP + 0x2c]
004fd0c4  ADD ECX,-0x4
004fd0c7  XOR EDI,EDI
004fd0c9  CMP ECX,0x7d
004fd0cc  JA 0x004fd106
004fd0ce  MOVZX ECX,byte ptr [ECX + 0x4fd1f4]
004fd0d5  JMP dword ptr [ECX*0x4 + 0x4fd1dc]
004fd0dc  MOV EDI,EAX
004fd0de  JMP 0x004fd103
004fd0e0  MOV EDI,EAX
004fd0e2  IMUL EDI,EBP
004fd0e5  SHL EDI,0x1
004fd0e7  JMP 0x004fd106
004fd0e9  MOV EDI,EAX
004fd0eb  IMUL EDI,EBP
004fd0ee  LEA EDI,[EDI + EDI*0x2]
004fd0f1  JMP 0x004fd106
004fd0f3  MOV EDI,EAX
004fd0f5  IMUL EDI,EBP
004fd0f8  SHL EDI,0x2
004fd0fb  JMP 0x004fd106
004fd0fd  LEA EDI,[EAX + -0x1]
004fd100  AND EDI,0x1
004fd103  IMUL EDI,EBP
004fd106  MOV EAX,dword ptr [ESP + 0x1c]
004fd10a  MOV ECX,dword ptr [EAX]
004fd10c  LEA EDX,[ESI + 0xc]
004fd10f  MOV dword ptr [EDX],ECX
004fd111  MOV ECX,dword ptr [EAX + 0x4]
004fd114  MOV dword ptr [EDX + 0x4],ECX
004fd117  MOV ECX,dword ptr [EAX + 0x8]
004fd11a  MOV dword ptr [EDX + 0x8],ECX
004fd11d  MOV ECX,dword ptr [EAX + 0xc]
004fd120  MOV dword ptr [EDX + 0xc],ECX
004fd123  MOV ECX,dword ptr [EAX + 0x10]
004fd126  MOV dword ptr [EDX + 0x10],ECX
004fd129  MOV EAX,dword ptr [EAX + 0x14]
004fd12c  MOV ECX,dword ptr [ESP + 0x1c]
004fd130  MOV dword ptr [EDX + 0x14],EAX
004fd133  PUSH ECX
004fd134  MOV byte ptr [ESI + 0x23],BL
004fd137  CALL 0x00460bf0
004fd13c  MOV CX,word ptr [ESP + 0x38]
004fd141  MOV DX,word ptr [ESP + 0x28]
004fd146  MOV dword ptr [ESI + 0x24],EAX
004fd149  MOV AL,byte ptr [ESP + 0x30]
004fd14d  MOV byte ptr [ESI + 0x4a],AL
004fd150  MOV AL,byte ptr [ESP + 0x18]
004fd154  MOV word ptr [ESI + 0x44],DX
004fd158  MOV DL,byte ptr [ESP + 0x14]
004fd15c  MOV word ptr [ESI + 0x4c],CX
004fd160  MOV CL,byte ptr [ESP + 0x3c]
004fd164  MOV byte ptr [ESI + 0x49],AL
004fd167  MOV EAX,0x100
004fd16c  ADD ESP,0x4
004fd16f  MOV byte ptr [ESI + 0x48],DL
004fd172  MOV DL,byte ptr [ESP + 0x3c]
004fd176  MOV byte ptr [ESI + 0x55],CL
004fd179  MOV ECX,dword ptr [ESP + 0x30]
004fd17d  MOV word ptr [ESI + 0x62],AX
004fd181  MOV word ptr [ESI + 0x64],AX
004fd185  MOV EAX,dword ptr [ESP + 0x20]
004fd189  MOV dword ptr [ESI + 0x40],EDI
004fd18c  MOV dword ptr [ESI + 0x38],EDI
004fd18f  POP EDI
004fd190  MOV word ptr [ESI + 0x46],BP
004fd194  MOV dword ptr [ESI + 0x30],EBX
004fd197  MOV dword ptr [ESI + 0x34],EBX
004fd19a  MOV dword ptr [ESI + 0x3c],EBX
004fd19d  MOV byte ptr [ESI + 0x4b],BL
004fd1a0  MOV byte ptr [ESI + 0x54],BL
004fd1a3  MOV byte ptr [ESI + 0x51],BL
004fd1a6  MOV byte ptr [ESI + 0x4f],BL
004fd1a9  MOV byte ptr [ESI + 0x57],BL
004fd1ac  MOV byte ptr [ESI + 0x52],BL
004fd1af  MOV word ptr [ESI + 0x5e],BX
004fd1b3  MOV word ptr [ESI + 0x60],BX
004fd1b7  MOV dword ptr [ESI + 0x68],EBX
004fd1ba  MOV byte ptr [ESI + 0x4e],0x1
004fd1be  MOV byte ptr [ESI + 0x56],DL
004fd1c1  MOV dword ptr [ESI + 0x6c],ESI
004fd1c4  MOV dword ptr [ESI + 0x70],EAX
004fd1c7  MOV dword ptr [ESI + 0x74],ECX
004fd1ca  MOV dword ptr [ESI + 0x78],0x1
004fd1d1  POP ESI
004fd1d2  POP EBP
004fd1d3  POP EBX
004fd1d4  ADD ESP,0x8
004fd1d7  RET 0x28
