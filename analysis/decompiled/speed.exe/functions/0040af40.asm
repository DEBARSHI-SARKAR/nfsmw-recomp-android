0040af40  PUSH ESI
0040af41  MOV ESI,ECX
0040af43  MOV AL,byte ptr [ESI + 0xa8]
0040af49  TEST AL,AL
0040af4b  JZ 0x0040afab
0040af4d  MOV ECX,dword ptr [ESI + 0x15c]
0040af53  MOV EAX,dword ptr [ESI + 0x84]
0040af59  INC ECX
0040af5a  TEST EAX,EAX
0040af5c  MOV dword ptr [ESI + 0x15c],ECX
0040af62  JZ 0x0040af97
0040af64  MOV ECX,dword ptr [ESP + 0x8]
0040af68  MOV EAX,dword ptr [ECX]
0040af6a  PUSH EDI
0040af6b  CALL dword ptr [EAX + 0x4]
0040af6e  MOV ECX,dword ptr [ESI + 0x84]
0040af74  MOV EDI,dword ptr [ECX]
0040af76  MOV EDX,dword ptr [EAX]
0040af78  MOV ECX,EAX
0040af7a  CALL dword ptr [EDX + 0x34]
0040af7d  MOV ECX,dword ptr [ESI + 0x84]
0040af83  PUSH EAX
0040af84  CALL dword ptr [EDI + 0x58]
0040af87  TEST EAX,EAX
0040af89  POP EDI
0040af8a  JZ 0x0040af97
0040af8c  MOV ECX,dword ptr [ESI + 0x84]
0040af92  MOV EAX,dword ptr [ECX]
0040af94  CALL dword ptr [EAX + 0x30]
0040af97  POP ESI
0040af98  MOV dword ptr [ESP + 0x4],0x890eb0
0040afa0  MOV ECX,dword ptr [0x0091e00c]
0040afa6  JMP 0x005edb50
0040afab  POP ESI
0040afac  RET 0x4
