007cda10  PUSH EBP
007cda11  MOV EBP,ESP
007cda13  SUB ESP,0x8
007cda16  PUSH 0x8b91b4
007cda1b  CALL dword ptr [0x0089008c]
007cda21  MOV dword ptr [EBP + -0x8],EAX
007cda24  CMP dword ptr [EBP + -0x8],0x0
007cda28  JZ 0x007cda49
007cda2a  PUSH 0x8b9198
007cda2f  MOV EAX,dword ptr [EBP + -0x8]
007cda32  PUSH EAX
007cda33  CALL dword ptr [0x00890094]
007cda39  MOV dword ptr [EBP + -0x4],EAX
007cda3c  CMP dword ptr [EBP + -0x4],0x0
007cda40  JZ 0x007cda49
007cda42  PUSH 0x0
007cda44  CALL dword ptr [EBP + -0x4]
007cda47  JMP 0x007cda4e
007cda49  CALL 0x007cd9c0
007cda4e  MOV ESP,EBP
007cda50  POP EBP
007cda51  RET
