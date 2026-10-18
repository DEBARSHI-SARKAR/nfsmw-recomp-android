007fbc8a  PUSH EBP
007fbc8b  MOV EBP,ESP
007fbc8d  CMP dword ptr [EBP + 0xc],0x0
007fbc91  JNZ 0x007fbca1
007fbc93  MOV EAX,dword ptr [EBP + 0x8]
007fbc96  MOV EAX,dword ptr [EAX + 0x1a0]
007fbc9c  MOV ECX,dword ptr [EBP + 0x10]
007fbc9f  MOV dword ptr [ECX],EAX
007fbca1  POP EBP
007fbca2  RET
