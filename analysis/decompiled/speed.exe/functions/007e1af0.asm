007e1af0  PUSH EBP
007e1af1  MOV EBP,ESP
007e1af3  CMP dword ptr [EBP + 0x8],0x0
007e1af7  JNZ 0x007e1afe
007e1af9  JMP 0x007e1b89
007e1afe  MOV EAX,dword ptr [EBP + 0x8]
007e1b01  MOV ECX,dword ptr [0x0090738c]
007e1b07  MOV EDX,dword ptr [EAX]
007e1b09  CMP EDX,dword ptr [ECX]
007e1b0b  JZ 0x007e1b2a
007e1b0d  MOV EAX,dword ptr [EBP + 0x8]
007e1b10  MOV ECX,dword ptr [EAX]
007e1b12  CMP ECX,dword ptr [0x0090735c]
007e1b18  JZ 0x007e1b2a
007e1b1a  PUSH 0x2
007e1b1c  MOV EDX,dword ptr [EBP + 0x8]
007e1b1f  MOV EAX,dword ptr [EDX]
007e1b21  PUSH EAX
007e1b22  CALL 0x007c7290
007e1b27  ADD ESP,0x8
007e1b2a  MOV ECX,dword ptr [EBP + 0x8]
007e1b2d  MOV EDX,dword ptr [0x0090738c]
007e1b33  MOV EAX,dword ptr [ECX + 0x4]
007e1b36  CMP EAX,dword ptr [EDX + 0x4]
007e1b39  JZ 0x007e1b5a
007e1b3b  MOV ECX,dword ptr [EBP + 0x8]
007e1b3e  MOV EDX,dword ptr [ECX + 0x4]
007e1b41  CMP EDX,dword ptr [0x00907360]
007e1b47  JZ 0x007e1b5a
007e1b49  PUSH 0x2
007e1b4b  MOV EAX,dword ptr [EBP + 0x8]
007e1b4e  MOV ECX,dword ptr [EAX + 0x4]
007e1b51  PUSH ECX
007e1b52  CALL 0x007c7290
007e1b57  ADD ESP,0x8
007e1b5a  MOV EDX,dword ptr [EBP + 0x8]
007e1b5d  MOV EAX,[0x0090738c]
007e1b62  MOV ECX,dword ptr [EDX + 0x8]
007e1b65  CMP ECX,dword ptr [EAX + 0x8]
007e1b68  JZ 0x007e1b89
007e1b6a  MOV EDX,dword ptr [EBP + 0x8]
007e1b6d  MOV EAX,dword ptr [EDX + 0x8]
007e1b70  CMP EAX,dword ptr [0x00907364]
007e1b76  JZ 0x007e1b89
007e1b78  PUSH 0x2
007e1b7a  MOV ECX,dword ptr [EBP + 0x8]
007e1b7d  MOV EDX,dword ptr [ECX + 0x8]
007e1b80  PUSH EDX
007e1b81  CALL 0x007c7290
007e1b86  ADD ESP,0x8
007e1b89  POP EBP
007e1b8a  RET
