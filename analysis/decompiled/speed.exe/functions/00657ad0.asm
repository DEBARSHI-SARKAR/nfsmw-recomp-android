00657ad0  MOV ECX,dword ptr [ESP + 0x4]
00657ad4  MOV EAX,dword ptr [ESP + 0xc]
00657ad8  PUSH ESI
00657ad9  MOV ESI,dword ptr [ESP + 0xc]
00657add  CMP ECX,ESI
00657adf  JZ 0x00657b1f
00657ae1  MOV EDX,dword ptr [ECX]
00657ae3  MOV dword ptr [EAX],EDX
00657ae5  MOV EDX,dword ptr [ECX + 0x4]
00657ae8  MOV dword ptr [EAX + 0x4],EDX
00657aeb  MOV EDX,dword ptr [ECX + 0x8]
00657aee  MOV dword ptr [EAX + 0x8],EDX
00657af1  MOV EDX,dword ptr [ECX + 0xc]
00657af4  MOV dword ptr [EAX + 0xc],EDX
00657af7  MOV EDX,dword ptr [ECX + 0x10]
00657afa  MOV dword ptr [EAX + 0x10],EDX
00657afd  MOV EDX,dword ptr [ECX + 0x14]
00657b00  MOV dword ptr [EAX + 0x14],EDX
00657b03  MOV EDX,dword ptr [ECX + 0x18]
00657b06  MOV dword ptr [EAX + 0x18],EDX
00657b09  MOV EDX,dword ptr [ECX + 0x1c]
00657b0c  MOV dword ptr [EAX + 0x1c],EDX
00657b0f  MOV DL,byte ptr [ECX + 0x20]
00657b12  MOV byte ptr [EAX + 0x20],DL
00657b15  ADD ECX,0x24
00657b18  ADD EAX,0x24
00657b1b  CMP ECX,ESI
00657b1d  JNZ 0x00657ae1
00657b1f  POP ESI
00657b20  RET
