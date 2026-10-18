005cbfb0  PUSH ESI
005cbfb1  MOV ESI,ECX
005cbfb3  MOV EAX,dword ptr [ESI + 0x4]
005cbfb6  MOV ECX,dword ptr [ESI]
005cbfb8  PUSH EAX
005cbfb9  PUSH ECX
005cbfba  PUSH 0x91de38
005cbfbf  CALL 0x007c64e0
005cbfc4  MOV EDX,dword ptr [ESI + 0x4]
005cbfc7  ADD ESP,0xc
005cbfca  MOV byte ptr [EDX + 0x91de38],0x0
005cbfd1  MOV EAX,0x91de38
005cbfd6  POP ESI
005cbfd7  RET
