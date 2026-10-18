007def90  PUSH EBP
007def91  MOV EBP,ESP
007def93  PUSH ECX
007def94  MOV dword ptr [EBP + -0x4],0x1
007def9b  MOV EAX,dword ptr [EBP + 0xc]
007def9e  PUSH EAX
007def9f  MOV ECX,dword ptr [EBP + 0x8]
007defa2  PUSH ECX
007defa3  CALL dword ptr [0x008901b0]
007defa9  TEST EAX,EAX
007defab  JZ 0x007defb4
007defad  MOV dword ptr [EBP + -0x4],0x0
007defb4  MOV EAX,dword ptr [EBP + -0x4]
007defb7  MOV ESP,EBP
007defb9  POP EBP
007defba  RET
