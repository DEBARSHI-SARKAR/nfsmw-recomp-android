00452be0  MOV EAX,ECX
00452be2  MOV ECX,dword ptr [EAX]
00452be4  TEST ECX,ECX
00452be6  JZ 0x00452bec
00452be8  DEC word ptr [ECX + 0x12]
00452bec  MOV ECX,dword ptr [ESP + 0x4]
00452bf0  MOV EDX,dword ptr [ECX]
00452bf2  MOV dword ptr [EAX],EDX
00452bf4  MOV EDX,dword ptr [ECX + 0x4]
00452bf7  MOV dword ptr [EAX + 0x4],EDX
00452bfa  MOV EDX,dword ptr [ECX + 0x8]
00452bfd  MOV dword ptr [EAX + 0x8],EDX
00452c00  MOV ECX,dword ptr [ECX + 0xc]
00452c03  MOV dword ptr [EAX + 0xc],ECX
00452c06  MOV ECX,dword ptr [EAX]
00452c08  TEST ECX,ECX
00452c0a  JZ 0x00452c10
00452c0c  INC word ptr [ECX + 0x12]
00452c10  RET 0x4
