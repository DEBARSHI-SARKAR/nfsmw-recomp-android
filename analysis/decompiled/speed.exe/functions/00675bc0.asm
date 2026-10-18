00675bc0  PUSH 0x0
00675bc2  PUSH 0x18
00675bc4  MOV ECX,0x925b30
00675bc9  CALL 0x005d29d0
00675bce  TEST EAX,EAX
00675bd0  JZ 0x00675c00
00675bd2  MOV ECX,dword ptr [ESP + 0x4]
00675bd6  MOV EDX,dword ptr [ESP + 0x8]
00675bda  MOV dword ptr [EAX],ECX
00675bdc  MOV ECX,dword ptr [ESP + 0xc]
00675be0  MOV dword ptr [EAX + 0x8],ECX
00675be3  MOV ECX,dword ptr [ESP + 0x10]
00675be7  MOV dword ptr [EAX + 0x4],EDX
00675bea  MOV EDX,dword ptr [ECX]
00675bec  MOV dword ptr [EAX + 0xc],EDX
00675bef  MOV ECX,dword ptr [ECX + 0x4]
00675bf2  MOV DL,byte ptr [ESP + 0x14]
00675bf6  MOV dword ptr [EAX + 0x10],ECX
00675bf9  MOV byte ptr [EAX + 0x14],DL
00675bfc  MOV byte ptr [EAX + 0x15],0x0
00675c00  RET 0x14
