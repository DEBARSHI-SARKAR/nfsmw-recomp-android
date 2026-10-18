00821ba4  MOV EAX,dword ptr [ESP + 0x4]
00821ba8  MOV EDX,dword ptr [EAX]
00821baa  MOV ECX,dword ptr [ESP + 0x8]
00821bae  AND dword ptr [ECX + 0x4],0x0
00821bb2  MOV dword ptr [ECX],EDX
00821bb4  MOV EDX,dword ptr [EAX]
00821bb6  TEST EDX,EDX
00821bb8  JZ 0x00821bbf
00821bba  MOV dword ptr [EDX + 0x4],ECX
00821bbd  JMP 0x00821bc2
00821bbf  MOV dword ptr [EAX + 0x4],ECX
00821bc2  INC dword ptr [EAX + 0x8]
00821bc5  MOV dword ptr [EAX],ECX
00821bc7  RET
