007f71d0  PUSH ESI
007f71d1  MOV ESI,ECX
007f71d3  MOV ECX,dword ptr [ESI + 0x14]
007f71d6  MOV dword ptr [ESI],0x8c2580
007f71dc  MOV EAX,dword ptr [ECX]
007f71de  CALL dword ptr [EAX + 0x8]
007f71e1  MOV ECX,dword ptr [ESI + 0x8]
007f71e4  MOV EAX,dword ptr [ECX]
007f71e6  CALL dword ptr [EAX + 0x8]
007f71e9  MOV ECX,dword ptr [ESI + 0xc]
007f71ec  MOV EAX,dword ptr [ECX]
007f71ee  CALL dword ptr [EAX + 0x8]
007f71f1  MOV ECX,dword ptr [ESI + 0x4]
007f71f4  MOV EAX,dword ptr [ECX]
007f71f6  CALL dword ptr [EAX + 0xc]
007f71f9  MOV dword ptr [ESI],0x8c2510
007f71ff  POP ESI
007f7200  RET
