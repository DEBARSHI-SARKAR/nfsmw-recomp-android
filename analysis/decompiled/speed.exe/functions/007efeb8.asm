007efeb8  MOV EAX,dword ptr [ECX]
007efeba  XOR EDX,EDX
007efebc  CMP EAX,EDX
007efebe  JZ 0x007efed7
007efec0  CMP EAX,dword ptr [ECX + 0x4]
007efec3  JNZ 0x007efecc
007efec5  MOV dword ptr [ECX + 0x4],EDX
007efec8  MOV dword ptr [ECX],EDX
007efeca  JMP 0x007efed2
007efecc  PUSH ESI
007efecd  MOV ESI,dword ptr [EAX]
007efecf  MOV dword ptr [ECX],ESI
007efed1  POP ESI
007efed2  DEC dword ptr [ECX + 0x8]
007efed5  MOV dword ptr [EAX],EDX
007efed7  RET
