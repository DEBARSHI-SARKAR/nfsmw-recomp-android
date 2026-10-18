005b07f0  MOV EAX,dword ptr [ESP + 0x4]
005b07f4  TEST EAX,EAX
005b07f6  JZ 0x005b07ff
005b07f8  MOV CL,byte ptr [ESP + 0x8]
005b07fc  MOV byte ptr [EAX + 0x28],CL
005b07ff  RET 0x8
