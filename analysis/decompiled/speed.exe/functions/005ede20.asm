005ede20  SUB ESP,0x8
005ede23  PUSH EBX
005ede24  MOV EBX,ECX
005ede26  MOV EAX,dword ptr [EBX + 0x2bc]
005ede2c  PUSH EDI
005ede2d  XOR EDI,EDI
005ede2f  TEST EAX,EAX
005ede31  JBE 0x005edee4
005ede37  PUSH EBP
005ede38  PUSH ESI
005ede39  MOV EBP,0x4
005ede3e  MOV EDI,EDI
005ede40  MOV EAX,dword ptr [EBX + 0x2c4]
005ede46  MOV ESI,dword ptr [EAX + EDI*0x4]
005ede49  CMP word ptr [ESI + 0x4],0x0
005ede4e  JGE 0x005ede94
005ede50  MOV EAX,[0x009a3ba4]
005ede55  TEST EAX,EAX
005ede57  JZ 0x005ede94
005ede59  MOV ECX,dword ptr [ESI + 0x10]
005ede5c  MOV EDX,dword ptr [ESI + 0x14]
005ede5f  LEA EAX,[ESP + 0x10]
005ede63  MOV dword ptr [ESP + 0x10],ECX
005ede67  PUSH EAX
005ede68  MOV ECX,0x9a3b50
005ede6d  MOV dword ptr [ESP + 0x18],EDX
005ede71  CALL 0x0072ca00
005ede76  TEST EAX,EAX
005ede78  JZ 0x005ede94
005ede7a  MOV AX,word ptr [EAX + 0xc]
005ede7e  MOVSX ECX,AX
005ede81  PUSH ECX
005ede82  MOV ECX,0x9aa9d0
005ede87  MOV word ptr [ESI + 0x4],AX
005ede8b  CALL 0x007236e0
005ede90  MOV word ptr [ESI + 0x6],AX
005ede94  MOV AX,word ptr [ESI + 0x4]
005ede98  TEST AX,AX
005ede9b  JL 0x005eded3
005ede9d  MOVSX EDX,AX
005edea0  PUSH EDX
005edea1  MOV ECX,0x9aa9d0
005edea6  CALL 0x00723650
005edeab  TEST EAX,EAX
005edead  JZ 0x005edeb4
005edeaf  CMP dword ptr [EAX + 0xc],EBP
005edeb2  JZ 0x005edecc
005edeb4  MOVSX EAX,word ptr [ESI + 0x6]
005edeb8  PUSH EAX
005edeb9  MOV ECX,0x9aa9d0
005edebe  CALL 0x00723650
005edec3  TEST EAX,EAX
005edec5  JZ 0x005eded3
005edec7  CMP dword ptr [EAX + 0xc],EBP
005edeca  JNZ 0x005eded3
005edecc  MOV ECX,ESI
005edece  CALL 0x005ec270
005eded3  MOV EAX,dword ptr [EBX + 0x2bc]
005eded9  INC EDI
005ededa  CMP EDI,EAX
005ededc  JC 0x005ede40
005edee2  POP ESI
005edee3  POP EBP
005edee4  POP EDI
005edee5  POP EBX
005edee6  ADD ESP,0x8
005edee9  RET
