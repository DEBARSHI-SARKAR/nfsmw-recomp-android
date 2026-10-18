007dab70  PUSH EBP
007dab71  MOV EBP,ESP
007dab73  PUSH ECX
007dab74  MOV EAX,dword ptr [EBP + 0x8]
007dab77  AND EAX,0x20
007dab7a  JZ 0x007dab85
007dab7c  MOV dword ptr [EBP + -0x4],0x5
007dab83  JMP 0x007dabd0
007dab85  MOV ECX,dword ptr [EBP + 0x8]
007dab88  AND ECX,0x8
007dab8b  JZ 0x007dab96
007dab8d  MOV dword ptr [EBP + -0x4],0x1
007dab94  JMP 0x007dabd0
007dab96  MOV EDX,dword ptr [EBP + 0x8]
007dab99  AND EDX,0x4
007dab9c  JZ 0x007daba7
007dab9e  MOV dword ptr [EBP + -0x4],0x2
007daba5  JMP 0x007dabd0
007daba7  MOV EAX,dword ptr [EBP + 0x8]
007dabaa  AND EAX,0x1
007dabad  JZ 0x007dabb8
007dabaf  MOV dword ptr [EBP + -0x4],0x3
007dabb6  JMP 0x007dabd0
007dabb8  MOV ECX,dword ptr [EBP + 0x8]
007dabbb  AND ECX,0x2
007dabbe  JZ 0x007dabc9
007dabc0  MOV dword ptr [EBP + -0x4],0x4
007dabc7  JMP 0x007dabd0
007dabc9  MOV dword ptr [EBP + -0x4],0x0
007dabd0  MOV EAX,dword ptr [EBP + -0x4]
007dabd3  MOV ESP,EBP
007dabd5  POP EBP
007dabd6  RET
