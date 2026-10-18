006eea10  MOV EAX,dword ptr [ESP + 0x4]
006eea14  TEST EAX,EAX
006eea16  JZ 0x006eea2e
006eea18  DEC dword ptr [ECX + 0x28]
006eea1b  MOV DL,byte ptr [EAX + 0xc]
006eea1e  MOV CL,0x1
006eea20  CMP DL,CL
006eea22  JZ 0x006eea2e
006eea24  MOV EDX,dword ptr [EAX]
006eea26  MOV byte ptr [EAX + 0xc],CL
006eea29  MOV ECX,EAX
006eea2b  CALL dword ptr [EDX + 0x4]
006eea2e  RET 0x4
