0056f7c0  MOV EAX,dword ptr [ESP + 0x4]
0056f7c4  SUB ESP,0x10
0056f7c7  PUSH ESI
0056f7c8  MOV ESI,ECX
0056f7ca  PUSH EAX
0056f7cb  LEA ECX,[ESP + 0x8]
0056f7cf  CALL 0x0056f410
0056f7d4  MOV CX,word ptr [EAX]
0056f7d7  ADD word ptr [ESI + 0x18],CX
0056f7db  MOV DX,word ptr [EAX + 0x2]
0056f7df  ADD word ptr [ESI + 0x1a],DX
0056f7e3  MOV CX,word ptr [EAX + 0x4]
0056f7e7  ADD word ptr [ESI + 0x1c],CX
0056f7eb  MOV DX,word ptr [EAX + 0x6]
0056f7ef  ADD word ptr [ESI + 0x1e],DX
0056f7f3  MOV CX,word ptr [EAX + 0x8]
0056f7f7  ADD word ptr [ESI + 0x20],CX
0056f7fb  MOV DX,word ptr [EAX + 0xa]
0056f7ff  ADD word ptr [ESI + 0x22],DX
0056f803  MOV CX,word ptr [EAX + 0xc]
0056f807  ADD word ptr [ESI + 0x24],CX
0056f80b  MOV DX,word ptr [EAX + 0xe]
0056f80f  MOV AL,byte ptr [ESP + 0x20]
0056f813  ADD word ptr [ESI + 0x26],DX
0056f817  TEST AL,AL
0056f819  JZ 0x0056f832
0056f81b  MOV ECX,dword ptr [ESI + 0x10]
0056f81e  MOV EAX,dword ptr [ESP + 0x1c]
0056f822  ADD ECX,EAX
0056f824  INC word ptr [ESI + 0x14]
0056f828  MOV dword ptr [ESI + 0x10],ECX
0056f82b  POP ESI
0056f82c  ADD ESP,0x10
0056f82f  RET 0xc
0056f832  INC word ptr [ESI + 0x16]
0056f836  POP ESI
0056f837  ADD ESP,0x10
0056f83a  RET 0xc
