005bdda0  MOV ECX,dword ptr [ESP + 0x4]
005bdda4  MOVZX EAX,byte ptr [ECX + 0x2]
005bdda8  SUB EAX,0x0
005bddab  JZ 0x005bddbe
005bddad  DEC EAX
005bddae  JZ 0x005bddb5
005bddb0  SUB EAX,0x2
005bddb3  JNZ 0x005bddc7
005bddb5  MOV dword ptr [ESP + 0x4],ECX
005bddb9  JMP 0x005b9d10
005bddbe  MOV dword ptr [ESP + 0x4],ECX
005bddc2  JMP 0x005b5840
005bddc7  RET
