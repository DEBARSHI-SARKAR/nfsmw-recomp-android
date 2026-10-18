007daaf0  PUSH EBP
007daaf1  MOV EBP,ESP
007daaf3  PUSH ECX
007daaf4  MOV EAX,dword ptr [EBP + 0x8]
007daaf7  MOV dword ptr [EBP + -0x4],EAX
007daafa  CMP dword ptr [EBP + -0x4],0x1
007daafe  JZ 0x007dab0e
007dab00  CMP dword ptr [EBP + -0x4],0x1
007dab04  JLE 0x007dab26
007dab06  CMP dword ptr [EBP + -0x4],0x3
007dab0a  JLE 0x007dab1b
007dab0c  JMP 0x007dab26
007dab0e  CALL 0x007cb270
007dab13  MOV dword ptr [EAX],0x21
007dab19  JMP 0x007dab26
007dab1b  CALL 0x007cb270
007dab20  MOV dword ptr [EAX],0x22
007dab26  MOV ESP,EBP
007dab28  POP EBP
007dab29  RET
