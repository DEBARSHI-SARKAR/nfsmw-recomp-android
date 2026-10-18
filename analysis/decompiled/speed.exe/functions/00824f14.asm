00824f14  MOV EAX,dword ptr [ESP + 0x4]
00824f18  FLDZ
00824f1a  XOR ECX,ECX
00824f1c  FSTP float ptr [EAX + 0x1c]
00824f1f  MOV dword ptr [EAX + 0x8],ECX
00824f22  MOV dword ptr [EAX + 0xc],ECX
00824f25  MOV dword ptr [EAX + 0x10],ECX
00824f28  MOV dword ptr [EAX + 0x14],ECX
00824f2b  MOV byte ptr [EAX + 0x1b],CL
00824f2e  MOV dword ptr [EAX + 0x4],ECX
00824f31  MOV dword ptr [EAX],0x824ed1
00824f37  XOR EAX,EAX
00824f39  RET
