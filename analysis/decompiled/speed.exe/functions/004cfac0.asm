004cfac0  PUSH EBX
004cfac1  PUSH ESI
004cfac2  PUSH EDI
004cfac3  MOV EDI,dword ptr [ESP + 0x10]
004cfac7  MOV ESI,EDI
004cfac9  IMUL ESI,ESI,0x68
004cfacc  MOV EBX,ECX
004cface  LEA ECX,[ESI + 0x912858]
004cfad4  CALL 0x004ca1a0
004cfad9  CMP EDI,0x2f
004cfadc  JGE 0x004cfaff
004cfade  LEA ESI,[ESI + 0x9128c0]
004cfae4  PUSH ESI
004cfae5  LEA ECX,[ESI + -0x68]
004cfae8  CALL 0x004cf720
004cfaed  MOV ECX,ESI
004cfaef  CALL 0x004ca1a0
004cfaf4  ADD ESI,0x68
004cfaf7  CMP ESI,0x913bd8
004cfafd  JL 0x004cfae4
004cfaff  MOV ECX,dword ptr [EBX + 0x9c]
004cfb05  MOV EAX,dword ptr [EBX + 0xa0]
004cfb0b  DEC ECX
004cfb0c  POP EDI
004cfb0d  DEC EAX
004cfb0e  POP ESI
004cfb0f  MOV dword ptr [EBX + 0x9c],ECX
004cfb15  MOV dword ptr [EBX + 0xa0],EAX
004cfb1b  POP EBX
004cfb1c  RET 0x4
