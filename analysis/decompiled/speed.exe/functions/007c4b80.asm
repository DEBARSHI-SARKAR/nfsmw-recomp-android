007c4b80  PUSH EBP
007c4b81  MOV EBP,ESP
007c4b83  SUB ESP,0x20
007c4b86  AND ESP,0xfffffff0
007c4b89  FLD ST0
007c4b8b  FST float ptr [ESP + 0x18]
007c4b8f  FISTP qword ptr [ESP + 0x10]
007c4b93  FILD qword ptr [ESP + 0x10]
007c4b97  MOV EDX,dword ptr [ESP + 0x18]
007c4b9b  MOV EAX,dword ptr [ESP + 0x10]
007c4b9f  TEST EAX,EAX
007c4ba1  JZ 0x007c4bdf
007c4ba3  FSUBP
007c4ba5  TEST EDX,EDX
007c4ba7  JNS 0x007c4bc7
007c4ba9  FSTP float ptr [ESP]
007c4bac  MOV ECX,dword ptr [ESP]
007c4baf  XOR ECX,0x80000000
007c4bb5  ADD ECX,0x7fffffff
007c4bbb  ADC EAX,0x0
007c4bbe  MOV EDX,dword ptr [ESP + 0x14]
007c4bc2  ADC EDX,0x0
007c4bc5  JMP 0x007c4bf3
007c4bc7  FSTP float ptr [ESP]
007c4bca  MOV ECX,dword ptr [ESP]
007c4bcd  ADD ECX,0x7fffffff
007c4bd3  SBB EAX,0x0
007c4bd6  MOV EDX,dword ptr [ESP + 0x14]
007c4bda  SBB EDX,0x0
007c4bdd  JMP 0x007c4bf3
007c4bdf  MOV EDX,dword ptr [ESP + 0x14]
007c4be3  TEST EDX,0x7fffffff
007c4be9  JNZ 0x007c4ba3
007c4beb  FSTP float ptr [ESP + 0x18]
007c4bef  FSTP float ptr [ESP + 0x18]
007c4bf3  LEAVE
007c4bf4  RET
