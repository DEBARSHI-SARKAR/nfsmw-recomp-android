007cfbb0  PUSH EBP
007cfbb1  MOV EBP,ESP
007cfbb3  PUSH ECX
007cfbb4  MOV EAX,dword ptr [EBP + 0x8]
007cfbb7  CMP dword ptr [EAX + 0x4],0x0
007cfbbb  JZ 0x007cfbcb
007cfbbd  MOV ECX,dword ptr [EBP + 0x8]
007cfbc0  MOV EDX,dword ptr [ECX + 0x4]
007cfbc3  MOVSX EAX,byte ptr [EDX + 0x8]
007cfbc7  TEST EAX,EAX
007cfbc9  JNZ 0x007cfbd5
007cfbcb  MOV EAX,0x1
007cfbd0  JMP 0x007cfc56
007cfbd5  MOV ECX,dword ptr [EBP + 0x8]
007cfbd8  MOV EDX,dword ptr [EBP + 0xc]
007cfbdb  MOV EAX,dword ptr [ECX + 0x4]
007cfbde  CMP EAX,dword ptr [EDX + 0x4]
007cfbe1  JZ 0x007cfc07
007cfbe3  MOV ECX,dword ptr [EBP + 0xc]
007cfbe6  MOV EDX,dword ptr [ECX + 0x4]
007cfbe9  ADD EDX,0x8
007cfbec  PUSH EDX
007cfbed  MOV EAX,dword ptr [EBP + 0x8]
007cfbf0  MOV ECX,dword ptr [EAX + 0x4]
007cfbf3  ADD ECX,0x8
007cfbf6  PUSH ECX
007cfbf7  CALL 0x007d1120
007cfbfc  ADD ESP,0x8
007cfbff  TEST EAX,EAX
007cfc01  JZ 0x007cfc07
007cfc03  XOR EAX,EAX
007cfc05  JMP 0x007cfc56
007cfc07  MOV EDX,dword ptr [EBP + 0xc]
007cfc0a  MOV EAX,dword ptr [EDX]
007cfc0c  AND EAX,0x2
007cfc0f  JZ 0x007cfc1b
007cfc11  MOV ECX,dword ptr [EBP + 0x8]
007cfc14  MOV EDX,dword ptr [ECX]
007cfc16  AND EDX,0x8
007cfc19  JZ 0x007cfc4c
007cfc1b  MOV EAX,dword ptr [EBP + 0x10]
007cfc1e  MOV ECX,dword ptr [EAX]
007cfc20  AND ECX,0x1
007cfc23  JZ 0x007cfc2f
007cfc25  MOV EDX,dword ptr [EBP + 0x8]
007cfc28  MOV EAX,dword ptr [EDX]
007cfc2a  AND EAX,0x1
007cfc2d  JZ 0x007cfc4c
007cfc2f  MOV ECX,dword ptr [EBP + 0x10]
007cfc32  MOV EDX,dword ptr [ECX]
007cfc34  AND EDX,0x2
007cfc37  JZ 0x007cfc43
007cfc39  MOV EAX,dword ptr [EBP + 0x8]
007cfc3c  MOV ECX,dword ptr [EAX]
007cfc3e  AND ECX,0x2
007cfc41  JZ 0x007cfc4c
007cfc43  MOV dword ptr [EBP + -0x4],0x1
007cfc4a  JMP 0x007cfc53
007cfc4c  MOV dword ptr [EBP + -0x4],0x0
007cfc53  MOV EAX,dword ptr [EBP + -0x4]
007cfc56  MOV ESP,EBP
007cfc58  POP EBP
007cfc59  RET
