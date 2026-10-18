005fbfc0  PUSH ESI
005fbfc1  MOV ESI,ECX
005fbfc3  MOV EAX,dword ptr [ESI + 0x4]
005fbfc6  TEST EAX,EAX
005fbfc8  JZ 0x005fbfd4
005fbfca  MOV EAX,dword ptr [EAX + 0x18]
005fbfcd  SHR EAX,0xa
005fbfd0  AND AL,0x1
005fbfd2  POP ESI
005fbfd3  RET
005fbfd4  MOV EAX,dword ptr [ESI + 0xc]
005fbfd7  TEST EAX,EAX
005fbfd9  JZ 0x005fbfec
005fbfdb  CMP dword ptr [EAX],0x0
005fbfde  JNZ 0x005fbfec
005fbfe0  MOV ECX,dword ptr [0x0091e00c]
005fbfe6  PUSH EAX
005fbfe7  CALL 0x005fa780
005fbfec  MOV EAX,dword ptr [ESI + 0x10]
005fbfef  TEST EAX,EAX
005fbff1  JZ 0x005fc004
005fbff3  CMP dword ptr [EAX],0x0
005fbff6  JNZ 0x005fc004
005fbff8  MOV ECX,dword ptr [0x0091e00c]
005fbffe  PUSH EAX
005fbfff  CALL 0x005fa780
005fc004  MOV ECX,dword ptr [ESI + 0x8]
005fc007  PUSH 0x0
005fc009  PUSH 0x9e7a18ce
005fc00e  CALL 0x00454810
005fc013  TEST EAX,EAX
005fc015  JNZ 0x005fc021
005fc017  PUSH 0x1
005fc019  CALL 0x006269b0
005fc01e  ADD ESP,0x4
005fc021  MOV AL,byte ptr [EAX]
005fc023  POP ESI
005fc024  RET
