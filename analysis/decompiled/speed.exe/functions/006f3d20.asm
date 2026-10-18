006f3d20  MOV ECX,dword ptr [ESP + 0x8]
006f3d24  MOV EAX,dword ptr [ESP + 0xc]
006f3d28  CMP ECX,EAX
006f3d2a  JZ 0x006f3d44
006f3d2c  MOV EDX,dword ptr [ESP + 0x10]
006f3d30  MOV EDX,dword ptr [EDX]
006f3d32  CMP dword ptr [ECX + 0x8],EDX
006f3d35  JZ 0x006f3d3d
006f3d37  MOV ECX,dword ptr [ECX]
006f3d39  CMP ECX,EAX
006f3d3b  JNZ 0x006f3d32
006f3d3d  MOV EAX,dword ptr [ESP + 0x4]
006f3d41  MOV dword ptr [EAX],ECX
006f3d43  RET
006f3d44  MOV EAX,dword ptr [ESP + 0x4]
006f3d48  MOV dword ptr [EAX],ECX
006f3d4a  RET
