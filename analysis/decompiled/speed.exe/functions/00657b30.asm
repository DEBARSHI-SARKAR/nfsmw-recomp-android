00657b30  MOV ECX,dword ptr [ESP + 0x8]
00657b34  MOV EAX,dword ptr [ESP + 0xc]
00657b38  PUSH ESI
00657b39  MOV ESI,dword ptr [ESP + 0x8]
00657b3d  CMP ESI,ECX
00657b3f  JZ 0x00657b81
00657b41  MOV EDX,dword ptr [ECX + -0x24]
00657b44  SUB ECX,0x24
00657b47  MOV dword ptr [EAX + -0x24],EDX
00657b4a  MOV EDX,dword ptr [ECX + 0x4]
00657b4d  SUB EAX,0x24
00657b50  CMP ECX,ESI
00657b52  MOV dword ptr [EAX + 0x4],EDX
00657b55  MOV EDX,dword ptr [ECX + 0x8]
00657b58  MOV dword ptr [EAX + 0x8],EDX
00657b5b  MOV EDX,dword ptr [ECX + 0xc]
00657b5e  MOV dword ptr [EAX + 0xc],EDX
00657b61  MOV EDX,dword ptr [ECX + 0x10]
00657b64  MOV dword ptr [EAX + 0x10],EDX
00657b67  MOV EDX,dword ptr [ECX + 0x14]
00657b6a  MOV dword ptr [EAX + 0x14],EDX
00657b6d  MOV EDX,dword ptr [ECX + 0x18]
00657b70  MOV dword ptr [EAX + 0x18],EDX
00657b73  MOV EDX,dword ptr [ECX + 0x1c]
00657b76  MOV dword ptr [EAX + 0x1c],EDX
00657b79  MOV DL,byte ptr [ECX + 0x20]
00657b7c  MOV byte ptr [EAX + 0x20],DL
00657b7f  JNZ 0x00657b41
00657b81  POP ESI
00657b82  RET
