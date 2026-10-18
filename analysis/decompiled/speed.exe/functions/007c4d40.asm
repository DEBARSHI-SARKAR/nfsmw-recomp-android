007c4d40  PUSH EBP
007c4d41  MOV EBP,ESP
007c4d43  SUB ESP,0x1c
007c4d46  MOV dword ptr [EBP + -0x18],0x0
007c4d4d  MOV dword ptr [EBP + -0x14],0x7c4db0
007c4d54  MOV EAX,[0x00906980]
007c4d59  MOV dword ptr [EBP + -0x10],EAX
007c4d5c  MOV ECX,dword ptr [EBP + 0xc]
007c4d5f  MOV dword ptr [EBP + -0xc],ECX
007c4d62  MOV EDX,dword ptr [EBP + 0x8]
007c4d65  MOV dword ptr [EBP + -0x8],EDX
007c4d68  MOV EAX,dword ptr [EBP + 0x14]
007c4d6b  ADD EAX,0x1
007c4d6e  MOV dword ptr [EBP + -0x4],EAX
007c4d71  MOV EAX,FS:[0x0]
007c4d77  MOV dword ptr [EBP + -0x18],EAX
007c4d7a  LEA EAX,[EBP + -0x18]
007c4d7d  MOV FS:[0x0],EAX
007c4d83  MOV ECX,dword ptr [EBP + 0x18]
007c4d86  PUSH ECX
007c4d87  MOV EDX,dword ptr [EBP + 0x8]
007c4d8a  PUSH EDX
007c4d8b  MOV EAX,dword ptr [EBP + 0x10]
007c4d8e  PUSH EAX
007c4d8f  CALL 0x007d09d0
007c4d94  MOV dword ptr [EBP + -0x1c],EAX
007c4d97  MOV EAX,dword ptr [EBP + -0x18]
007c4d9a  MOV FS:[0x0],EAX
007c4da0  MOV EAX,dword ptr [EBP + -0x1c]
007c4da3  MOV ESP,EBP
007c4da5  POP EBP
007c4da6  RET
