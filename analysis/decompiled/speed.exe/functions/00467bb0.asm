00467bb0  MOV EAX,dword ptr [ECX + 0x8]
00467bb3  MOV EDX,dword ptr [ECX + 0xc]
00467bb6  MOV dword ptr [ECX],EAX
00467bb8  MOV dword ptr [ECX + 0x4],EDX
00467bbb  XOR EAX,EAX
00467bbd  MOV word ptr [ECX + 0x28],AX
00467bc1  MOV EDX,dword ptr [ECX + 0x34]
00467bc4  MOV dword ptr [ECX + 0x2c],EDX
00467bc7  MOV EDX,dword ptr [ECX + 0x38]
00467bca  MOV dword ptr [ECX + 0x30],EDX
00467bcd  MOV word ptr [ECX + 0x54],AX
00467bd1  MOV EDX,dword ptr [ECX + 0x60]
00467bd4  MOV dword ptr [ECX + 0x58],EDX
00467bd7  MOV EDX,dword ptr [ECX + 0x64]
00467bda  MOV dword ptr [ECX + 0x5c],EDX
00467bdd  MOV word ptr [ECX + 0x80],AX
00467be4  RET
