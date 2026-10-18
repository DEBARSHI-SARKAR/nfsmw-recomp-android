005fabb0  PUSH ESI
005fabb1  MOV ESI,ECX
005fabb3  MOV EAX,dword ptr [ESI + 0xc]
005fabb6  TEST EAX,EAX
005fabb8  JZ 0x005fabcb
005fabba  CMP dword ptr [EAX],0x0
005fabbd  JNZ 0x005fabcb
005fabbf  MOV ECX,dword ptr [0x0091e00c]
005fabc5  PUSH EAX
005fabc6  CALL 0x005fa780
005fabcb  MOV EAX,dword ptr [ESI + 0x10]
005fabce  TEST EAX,EAX
005fabd0  JZ 0x005fabe3
005fabd2  CMP dword ptr [EAX],0x0
005fabd5  JNZ 0x005fabe3
005fabd7  MOV ECX,dword ptr [0x0091e00c]
005fabdd  PUSH EAX
005fabde  CALL 0x005fa780
005fabe3  MOV ECX,dword ptr [ESI + 0x8]
005fabe6  PUSH 0x0
005fabe8  PUSH 0xc64bc341
005fabed  CALL 0x00454810
005fabf2  TEST EAX,EAX
005fabf4  POP ESI
005fabf5  JNZ 0x005fac01
005fabf7  PUSH 0x4
005fabf9  CALL 0x006269b0
005fabfe  ADD ESP,0x4
005fac01  MOV EAX,dword ptr [EAX]
005fac03  RET
