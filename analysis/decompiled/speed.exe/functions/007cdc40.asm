007cdc40  PUSH EBP
007cdc41  MOV EBP,ESP
007cdc43  SUB ESP,0x34
007cdc46  MOV EAX,[0x00906980]
007cdc4b  MOV dword ptr [EBP + -0x4],EAX
007cdc4e  MOV EAX,dword ptr [EBP + 0x8]
007cdc51  MOV dword ptr [EBP + -0x24],EAX
007cdc54  LEA ECX,[EBP + -0x34]
007cdc57  MOV dword ptr [EBP + -0x20],ECX
007cdc5a  LEA EDX,[EBP + -0x1c]
007cdc5d  PUSH EDX
007cdc5e  LEA EAX,[EBP + -0x34]
007cdc61  PUSH EAX
007cdc62  MOV ECX,dword ptr [EBP + -0x24]
007cdc65  MOV EDX,dword ptr [ECX + 0x4]
007cdc68  PUSH EDX
007cdc69  MOV EAX,dword ptr [ECX]
007cdc6b  PUSH EAX
007cdc6c  CALL 0x007deba0
007cdc71  ADD ESP,0x10
007cdc74  MOV ECX,dword ptr [EBP + -0x20]
007cdc77  PUSH ECX
007cdc78  MOV EDX,dword ptr [EBP + 0x10]
007cdc7b  ADD EDX,0x1
007cdc7e  PUSH EDX
007cdc7f  MOV EAX,dword ptr [EBP + -0x20]
007cdc82  XOR ECX,ECX
007cdc84  CMP dword ptr [EAX],0x2d
007cdc87  SETZ CL
007cdc8a  ADD ECX,dword ptr [EBP + 0xc]
007cdc8d  XOR EDX,EDX
007cdc8f  CMP dword ptr [EBP + 0x10],0x0
007cdc93  SETG DL
007cdc96  ADD ECX,EDX
007cdc98  PUSH ECX
007cdc99  CALL 0x007deaa0
007cdc9e  ADD ESP,0xc
007cdca1  PUSH 0x0
007cdca3  MOV EAX,dword ptr [EBP + -0x20]
007cdca6  PUSH EAX
007cdca7  MOV ECX,dword ptr [EBP + 0x14]
007cdcaa  PUSH ECX
007cdcab  MOV EDX,dword ptr [EBP + 0x10]
007cdcae  PUSH EDX
007cdcaf  MOV EAX,dword ptr [EBP + 0xc]
007cdcb2  PUSH EAX
007cdcb3  CALL 0x007cdcd0
007cdcb8  ADD ESP,0x14
007cdcbb  MOV EAX,dword ptr [EBP + 0xc]
007cdcbe  MOV ECX,dword ptr [EBP + -0x4]
007cdcc1  CALL 0x007d6cb0
007cdcc6  MOV ESP,EBP
007cdcc8  POP EBP
007cdcc9  RET
