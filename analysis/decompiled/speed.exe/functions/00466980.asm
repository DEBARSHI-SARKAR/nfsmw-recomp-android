00466980  MOV EAX,ECX
00466982  MOV ECX,dword ptr [ESP + 0x4]
00466986  FLD float ptr [ECX + 0x4]
00466989  MOV EDX,dword ptr [ECX + 0xc]
0046698c  FLD float ptr [ECX + 0x8]
0046698f  MOV ECX,dword ptr [ECX]
00466991  FXCH
00466993  MOV dword ptr [ESP + 0x4],EDX
00466997  FSTP float ptr [EAX + 0x4]
0046699a  MOV dword ptr [EAX],ECX
0046699c  MOV dword ptr [EAX + 0xc],EDX
0046699f  FSTP float ptr [EAX + 0x8]
004669a2  RET 0x4
