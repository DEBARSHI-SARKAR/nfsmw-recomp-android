006bbae0  PUSH -0x1
006bbae2  PUSH 0x87e166
006bbae7  MOV EAX,FS:[0x0]
006bbaed  PUSH EAX
006bbaee  MOV dword ptr FS:[0x0],ESP
006bbaf5  SUB ESP,0x8
006bbaf8  PUSH EBX
006bbaf9  PUSH ESI
006bbafa  MOV ESI,ECX
006bbafc  PUSH EDI
006bbafd  MOV dword ptr [ESP + 0xc],ESI
006bbb01  MOV dword ptr [ESI],0x8ad83c
006bbb07  MOV dword ptr [ESI + 0x8],0x8ad834
006bbb0e  MOV dword ptr [ESI + 0x4c],0x8ad818
006bbb15  MOV dword ptr [ESI + 0x54],0x8ad798
006bbb1c  MOV dword ptr [ESI + 0x60],0x8ad778
006bbb23  MOV EAX,dword ptr [ESI + 0x84]
006bbb29  XOR EBX,EBX
006bbb2b  CMP EAX,EBX
006bbb2d  MOV dword ptr [ESP + 0x1c],0x1
006bbb35  JZ 0x006bbb43
006bbb37  PUSH EAX
006bbb38  CALL 0x006eea10
006bbb3d  MOV dword ptr [ESI + 0x84],EBX
006bbb43  MOV EAX,dword ptr [ESI + 0xa8]
006bbb49  MOV ECX,dword ptr [EAX]
006bbb4b  LEA EDI,[ESI + 0xa4]
006bbb51  PUSH EAX
006bbb52  PUSH ECX
006bbb53  LEA EAX,[ESP + 0x18]
006bbb57  PUSH EAX
006bbb58  MOV ECX,EDI
006bbb5a  MOV byte ptr [ESP + 0x28],BL
006bbb5e  CALL 0x006bb410
006bbb63  MOV EAX,dword ptr [EDI + 0x4]
006bbb66  CMP EAX,EBX
006bbb68  JZ 0x006bbb78
006bbb6a  PUSH EBX
006bbb6b  PUSH 0x18
006bbb6d  PUSH EAX
006bbb6e  MOV ECX,0x925b30
006bbb73  CALL 0x005d0370
006bbb78  MOV ECX,ESI
006bbb7a  MOV dword ptr [EDI + 0x4],EBX
006bbb7d  MOV dword ptr [EDI + 0x8],EBX
006bbb80  MOV dword ptr [ESP + 0x1c],0xffffffff
006bbb88  CALL 0x006b8de0
006bbb8d  MOV ECX,dword ptr [ESP + 0x14]
006bbb91  POP EDI
006bbb92  POP ESI
006bbb93  POP EBX
006bbb94  MOV dword ptr FS:[0x0],ECX
006bbb9b  ADD ESP,0x14
006bbb9e  RET
