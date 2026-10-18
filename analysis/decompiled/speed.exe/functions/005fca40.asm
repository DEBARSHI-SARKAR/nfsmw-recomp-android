005fca40  PUSH ESI
005fca41  MOV ESI,ECX
005fca43  MOV EAX,dword ptr [ESI + 0xc]
005fca46  TEST EAX,EAX
005fca48  JZ 0x005fca5b
005fca4a  CMP dword ptr [EAX],0x0
005fca4d  JNZ 0x005fca5b
005fca4f  MOV ECX,dword ptr [0x0091e00c]
005fca55  PUSH EAX
005fca56  CALL 0x005fa780
005fca5b  MOV EAX,dword ptr [ESI + 0x10]
005fca5e  TEST EAX,EAX
005fca60  JZ 0x005fca73
005fca62  CMP dword ptr [EAX],0x0
005fca65  JNZ 0x005fca73
005fca67  MOV ECX,dword ptr [0x0091e00c]
005fca6d  PUSH EAX
005fca6e  CALL 0x005fa780
005fca73  MOV ECX,dword ptr [ESI + 0x8]
005fca76  POP ESI
005fca77  JMP 0x005d9a10
