006eee80  PUSH -0x1
006eee82  PUSH 0x87ea28
006eee87  MOV EAX,FS:[0x0]
006eee8d  PUSH EAX
006eee8e  MOV dword ptr FS:[0x0],ESP
006eee95  SUB ESP,0x14
006eee98  PUSH ESI
006eee99  PUSH EDI
006eee9a  MOV ESI,ECX
006eee9c  MOV EAX,dword ptr [ESI]
006eee9e  PUSH 0x0
006eeea0  PUSH 0x0
006eeea2  PUSH EAX
006eeea3  LEA ECX,[ESP + 0x14]
006eeea7  CALL 0x004e4ea0
006eeeac  MOV EDI,dword ptr [ESP + 0x2c]
006eeeb0  LEA ECX,[ESP + 0x8]
006eeeb4  PUSH EDI
006eeeb5  PUSH ECX
006eeeb6  MOV dword ptr [ESP + 0x2c],0x0
006eeebe  CALL 0x0067c310
006eeec3  ADD ESP,0x8
006eeec6  TEST AL,AL
006eeec8  JZ 0x006eeee7
006eeeca  MOV ECX,dword ptr [EDI]
006eeecc  LEA EAX,[ESI + 0x1a8]
006eeed2  MOV EDX,EAX
006eeed4  MOV dword ptr [EDX],ECX
006eeed6  MOV ECX,dword ptr [EDI + 0x4]
006eeed9  MOV dword ptr [EDX + 0x4],ECX
006eeedc  MOV ECX,dword ptr [EDI + 0x8]
006eeedf  MOV dword ptr [EDX + 0x8],ECX
006eeee2  MOV dword ptr [ESI + 0xc],EAX
006eeee5  JMP 0x006eeeee
006eeee7  MOV dword ptr [ESI + 0xc],0x0
006eeeee  LEA ECX,[ESP + 0x8]
006eeef2  MOV dword ptr [ESP + 0x24],0xffffffff
006eeefa  CALL 0x0045a430
006eeeff  MOV ECX,dword ptr [ESP + 0x1c]
006eef03  POP EDI
006eef04  POP ESI
006eef05  MOV dword ptr FS:[0x0],ECX
006eef0c  ADD ESP,0x20
006eef0f  RET 0x4
