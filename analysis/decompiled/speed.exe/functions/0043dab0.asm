0043dab0  PUSH -0x1
0043dab2  PUSH 0x8694ce
0043dab7  MOV EAX,FS:[0x0]
0043dabd  PUSH EAX
0043dabe  MOV dword ptr FS:[0x0],ESP
0043dac5  PUSH ECX
0043dac6  PUSH EBX
0043dac7  PUSH ESI
0043dac8  PUSH EDI
0043dac9  MOV ESI,ECX
0043dacb  PUSH 0x1
0043dacd  MOV dword ptr [ESP + 0x10],ESI
0043dad1  CALL 0x006f94d0
0043dad6  XOR EBX,EBX
0043dad8  CMP ESI,EBX
0043dada  MOV dword ptr [ESP + 0x18],EBX
0043dade  JZ 0x0043dae5
0043dae0  LEA EAX,[ESI + 0x10]
0043dae3  JMP 0x0043dae7
0043dae5  XOR EAX,EAX
0043dae7  LEA EDI,[ESI + 0x48]
0043daea  PUSH EAX
0043daeb  MOV ECX,EDI
0043daed  CALL 0x0042e290
0043daf2  MOV dword ptr [ESI],0x8921c4
0043daf8  MOV dword ptr [ESI + 0x8],0x8921bc
0043daff  MOV dword ptr [ESI + 0x2c],0x8921a8
0043db06  MOV dword ptr [ESI + 0x38],0x89218c
0043db0d  MOV dword ptr [EDI],0x892130
0043db13  MOV dword ptr [ESI + 0x54],EBX
0043db16  MOV dword ptr [ESI + 0x58],EBX
0043db19  MOV dword ptr [ESI + 0x5c],EBX
0043db1c  MOV dword ptr [ESI + 0x64],EBX
0043db1f  MOV dword ptr [ESI + 0x68],EBX
0043db22  MOV dword ptr [ESI + 0x6c],EBX
0043db25  MOV dword ptr [ESI + 0x70],EBX
0043db28  MOV byte ptr [ESI + 0x74],BL
0043db2b  MOV word ptr [ESI + 0x76],BX
0043db2f  MOV word ptr [ESI + 0x78],BX
0043db33  MOV word ptr [ESI + 0x7a],BX
0043db37  MOV dword ptr [ESI + 0xa0],EBX
0043db3d  MOV byte ptr [ESI + 0xa4],BL
0043db43  MOV ECX,dword ptr [0x008a2fb4]
0043db49  LEA EAX,[ESI + 0x94]
0043db4f  MOV dword ptr [EAX],ECX
0043db51  MOV EDX,dword ptr [0x008a2fb8]
0043db57  MOV dword ptr [EAX + 0x4],EDX
0043db5a  MOV ECX,dword ptr [0x008a2fbc]
0043db60  MOV dword ptr [EAX + 0x8],ECX
0043db63  MOV ECX,dword ptr [ESP + 0x10]
0043db67  POP EDI
0043db68  MOV EAX,ESI
0043db6a  POP ESI
0043db6b  POP EBX
0043db6c  MOV dword ptr FS:[0x0],ECX
0043db73  ADD ESP,0x10
0043db76  RET 0x10
