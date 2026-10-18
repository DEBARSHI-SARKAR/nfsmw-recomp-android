005afa10  MOV EAX,dword ptr [ECX + 0x94]
005afa16  MOV dword ptr [ECX + 0x70],EAX
005afa19  MOV EDX,dword ptr [ECX + 0x98]
005afa1f  MOV dword ptr [ECX + 0x74],EDX
005afa22  MOV EAX,dword ptr [ECX + 0x5c]
005afa25  PUSH ESI
005afa26  MOV ESI,dword ptr [ECX + 0x88]
005afa2c  AND EAX,0xffffff9d
005afa2f  XOR EDX,EDX
005afa31  CMP ESI,EDX
005afa33  MOV dword ptr [ECX + 0x5c],EAX
005afa36  POP ESI
005afa37  JNZ 0x005afa42
005afa39  AND EAX,0xfffffff7
005afa3c  MOV dword ptr [ECX + 0x5c],EAX
005afa3f  MOV dword ptr [ECX + 0x70],EDX
005afa42  CMP dword ptr [ECX + 0x8c],EDX
005afa48  JNZ 0x005afa51
005afa4a  AND dword ptr [ECX + 0x5c],0xffffffef
005afa4e  MOV dword ptr [ECX + 0x74],EDX
005afa51  RET
