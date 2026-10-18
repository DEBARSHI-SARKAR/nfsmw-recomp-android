007f3d26  OR dword ptr [ECX],0xffffffff
007f3d29  OR dword ptr [ECX + 0x4],0xffffffff
007f3d2d  XOR EAX,EAX
007f3d2f  MOV dword ptr [ECX + 0x8],EAX
007f3d32  MOV dword ptr [ECX + 0xc],EAX
007f3d35  MOV dword ptr [ECX + 0x10],EAX
007f3d38  MOV byte ptr [ECX + 0x14],AL
007f3d3b  MOV byte ptr [ECX + 0x15],AL
007f3d3e  RET
