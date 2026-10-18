005fcb60  PUSH ESI
005fcb61  MOV ESI,ECX
005fcb63  MOV EAX,dword ptr [ESI + 0xc]
005fcb66  TEST EAX,EAX
005fcb68  JZ 0x005fcb7b
005fcb6a  CMP dword ptr [EAX],0x0
005fcb6d  JNZ 0x005fcb7b
005fcb6f  MOV ECX,dword ptr [0x0091e00c]
005fcb75  PUSH EAX
005fcb76  CALL 0x005fa780
005fcb7b  MOV EAX,dword ptr [ESI + 0x10]
005fcb7e  TEST EAX,EAX
005fcb80  JZ 0x005fcb93
005fcb82  CMP dword ptr [EAX],0x0
005fcb85  JNZ 0x005fcb93
005fcb87  MOV ECX,dword ptr [0x0091e00c]
005fcb8d  PUSH EAX
005fcb8e  CALL 0x005fa780
005fcb93  MOV ECX,dword ptr [ESI + 0x8]
005fcb96  POP ESI
005fcb97  JMP 0x005d9620
