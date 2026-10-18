00828ed3  MOV EAX,ECX
00828ed5  FLDZ
00828ed7  FSTP float ptr [EAX + 0x98]
00828edd  XOR ECX,ECX
00828edf  FLDZ
00828ee1  MOV dword ptr [EAX + 0xc],ECX
00828ee4  FSTP float ptr [EAX + 0x9c]
00828eea  MOV dword ptr [EAX + 0x8],ECX
00828eed  MOV dword ptr [EAX + 0x4],ECX
00828ef0  TEST byte ptr [0x009c2540],0x2
00828ef7  JZ 0x00828f00
00828ef9  MOV dword ptr [EAX],0x828ce9
00828eff  RET
00828f00  MOV dword ptr [EAX],0x828dde
00828f06  RET
