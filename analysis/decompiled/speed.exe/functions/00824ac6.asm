00824ac6  MOV EAX,dword ptr [ESP + 0x4]
00824aca  FLDZ
00824acc  XOR ECX,ECX
00824ace  FSTP float ptr [EAX + 0x1c]
00824ad1  MOV dword ptr [EAX + 0x8],ECX
00824ad4  MOV dword ptr [EAX + 0xc],ECX
00824ad7  MOV dword ptr [EAX + 0x10],ECX
00824ada  MOV dword ptr [EAX + 0x14],ECX
00824add  MOV byte ptr [EAX + 0x1b],CL
00824ae0  MOV dword ptr [EAX + 0x4],ECX
00824ae3  MOV dword ptr [EAX],0x824a7a
00824ae9  XOR EAX,EAX
00824aeb  RET
