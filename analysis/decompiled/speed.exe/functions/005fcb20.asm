005fcb20  PUSH ESI
005fcb21  MOV ESI,ECX
005fcb23  MOV EAX,dword ptr [ESI + 0xc]
005fcb26  TEST EAX,EAX
005fcb28  JZ 0x005fcb3b
005fcb2a  CMP dword ptr [EAX],0x0
005fcb2d  JNZ 0x005fcb3b
005fcb2f  MOV ECX,dword ptr [0x0091e00c]
005fcb35  PUSH EAX
005fcb36  CALL 0x005fa780
005fcb3b  MOV EAX,dword ptr [ESI + 0x10]
005fcb3e  TEST EAX,EAX
005fcb40  JZ 0x005fcb53
005fcb42  CMP dword ptr [EAX],0x0
005fcb45  JNZ 0x005fcb53
005fcb47  MOV ECX,dword ptr [0x0091e00c]
005fcb4d  PUSH EAX
005fcb4e  CALL 0x005fa780
005fcb53  MOV ECX,dword ptr [ESI + 0x8]
005fcb56  POP ESI
005fcb57  JMP 0x005d95a0
