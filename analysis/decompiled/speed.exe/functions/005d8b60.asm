005d8b60  MOV EAX,dword ptr [ECX + 0x18]
005d8b63  CMP EAX,0x3
005d8b66  JA 0x005d8b88
005d8b68  JMP dword ptr [EAX*0x4 + 0x5d8bac]
005d8b6f  MOV dword ptr [ECX + 0x18],0x0
005d8b76  JMP 0x005d8b88
005d8b78  MOV dword ptr [ECX + 0x18],0x1
005d8b7f  JMP 0x005d8b88
005d8b81  MOV dword ptr [ECX + 0x18],0x2
005d8b88  MOV EAX,dword ptr [ECX + 0x18]
005d8b8b  CMP EAX,0x3
005d8b8e  JZ 0x005d8b9f
005d8b90  CMP EAX,0x2
005d8b93  JZ 0x005d8b9f
005d8b95  FLD float ptr [0x00890968]
005d8b9b  FSTP float ptr [ECX + 0x20]
005d8b9e  RET
005d8b9f  FLD float ptr [0x0089096c]
005d8ba5  FSTP float ptr [ECX + 0x20]
005d8ba8  RET
