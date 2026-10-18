007df440  PUSH EBP
007df441  MOV EBP,ESP
007df443  SUB ESP,0x30
007df446  LEA EAX,[EBP + -0x2c]
007df449  MOV dword ptr [EBP + -0xc],EAX
007df44c  LEA ECX,[EBP + 0x14]
007df44f  MOV dword ptr [EBP + -0x4],ECX
007df452  CMP dword ptr [EBP + 0x10],0x0
007df456  JNZ 0x007df476
007df458  PUSH 0x8b814c
007df45d  PUSH 0x0
007df45f  PUSH 0x5d
007df461  PUSH 0x8bdde4
007df466  PUSH 0x2
007df468  CALL 0x007d2670
007df46d  ADD ESP,0x14
007df470  CMP EAX,0x1
007df473  JNZ 0x007df476
007df475  INT3
007df476  CMP dword ptr [EBP + 0x8],0x0
007df47a  JNZ 0x007df49a
007df47c  PUSH 0x8b816c
007df481  PUSH 0x0
007df483  PUSH 0x5e
007df485  PUSH 0x8bdde4
007df48a  PUSH 0x2
007df48c  CALL 0x007d2670
007df491  ADD ESP,0x14
007df494  CMP EAX,0x1
007df497  JNZ 0x007df49a
007df499  INT3
007df49a  MOV ECX,dword ptr [EBP + -0xc]
007df49d  MOV EDX,dword ptr [EBP + 0xc]
007df4a0  MOV dword ptr [ECX + 0x4],EDX
007df4a3  MOV EAX,dword ptr [EBP + -0xc]
007df4a6  MOV dword ptr [EAX + 0xc],0x42
007df4ad  MOV ECX,dword ptr [EBP + -0xc]
007df4b0  MOV EDX,dword ptr [EBP + 0x8]
007df4b3  MOV dword ptr [ECX + 0x8],EDX
007df4b6  MOV EAX,dword ptr [EBP + -0xc]
007df4b9  MOV ECX,dword ptr [EBP + 0x8]
007df4bc  MOV dword ptr [EAX],ECX
007df4be  MOV EDX,dword ptr [EBP + -0x4]
007df4c1  PUSH EDX
007df4c2  MOV EAX,dword ptr [EBP + 0x10]
007df4c5  PUSH EAX
007df4c6  MOV ECX,dword ptr [EBP + -0xc]
007df4c9  PUSH ECX
007df4ca  CALL 0x007d1390
007df4cf  ADD ESP,0xc
007df4d2  MOV dword ptr [EBP + -0x8],EAX
007df4d5  CMP dword ptr [EBP + 0x8],0x0
007df4d9  JZ 0x007df526
007df4db  MOV EDX,dword ptr [EBP + -0xc]
007df4de  MOV EAX,dword ptr [EDX + 0x4]
007df4e1  SUB EAX,0x1
007df4e4  MOV ECX,dword ptr [EBP + -0xc]
007df4e7  MOV dword ptr [ECX + 0x4],EAX
007df4ea  MOV EDX,dword ptr [EBP + -0xc]
007df4ed  CMP dword ptr [EDX + 0x4],0x0
007df4f1  JL 0x007df515
007df4f3  MOV EAX,dword ptr [EBP + -0xc]
007df4f6  MOV ECX,dword ptr [EAX]
007df4f8  MOV byte ptr [ECX],0x0
007df4fb  XOR EDX,EDX
007df4fd  AND EDX,0xff
007df503  MOV dword ptr [EBP + -0x30],EDX
007df506  MOV EAX,dword ptr [EBP + -0xc]
007df509  MOV ECX,dword ptr [EAX]
007df50b  ADD ECX,0x1
007df50e  MOV EDX,dword ptr [EBP + -0xc]
007df511  MOV dword ptr [EDX],ECX
007df513  JMP 0x007df526
007df515  MOV EAX,dword ptr [EBP + -0xc]
007df518  PUSH EAX
007df519  PUSH 0x0
007df51b  CALL 0x007d47d0
007df520  ADD ESP,0x8
007df523  MOV dword ptr [EBP + -0x30],EAX
007df526  MOV EAX,dword ptr [EBP + -0x8]
007df529  MOV ESP,EBP
007df52b  POP EBP
007df52c  RET
