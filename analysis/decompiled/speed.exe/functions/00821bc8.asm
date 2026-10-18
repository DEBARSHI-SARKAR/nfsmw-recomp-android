00821bc8  MOV ECX,dword ptr [ESP + 0x8]
00821bcc  AND dword ptr [ECX],0x0
00821bcf  MOV EAX,dword ptr [ESP + 0x4]
00821bd3  MOV EDX,dword ptr [EAX + 0x4]
00821bd6  MOV dword ptr [ECX + 0x4],EDX
00821bd9  MOV EDX,dword ptr [EAX + 0x4]
00821bdc  TEST EDX,EDX
00821bde  JZ 0x00821be4
00821be0  MOV dword ptr [EDX],ECX
00821be2  JMP 0x00821be6
00821be4  MOV dword ptr [EAX],ECX
00821be6  INC dword ptr [EAX + 0x8]
00821be9  MOV dword ptr [EAX + 0x4],ECX
00821bec  RET
