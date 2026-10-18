005a3f10  MOV EAX,dword ptr [ESP + 0x4]
005a3f14  CMP EAX,0x9
005a3f17  JA 0x005a401c
005a3f1d  JMP dword ptr [EAX*0x4 + 0x5a4020]
005a3f24  MOV ECX,dword ptr [ECX + 0xb5c]
005a3f2a  MOV EAX,dword ptr [ESP + 0x8]
005a3f2e  MOV EDX,dword ptr [ESP + 0xc]
005a3f32  MOV dword ptr [EAX],ECX
005a3f34  IMUL ECX,ECX,0x7d0
005a3f3a  MOV dword ptr [EDX],ECX
005a3f3c  RET 0xc
005a3f3f  MOV ECX,dword ptr [ECX + 0xbc8]
005a3f45  MOV EAX,dword ptr [ESP + 0x8]
005a3f49  MOV EDX,dword ptr [ESP + 0xc]
005a3f4d  MOV dword ptr [EAX],ECX
005a3f4f  IMUL ECX,ECX,0x1c2
005a3f55  MOV dword ptr [EDX],ECX
005a3f57  RET 0xc
005a3f5a  MOV ECX,dword ptr [ECX + 0xbc4]
005a3f60  MOV EAX,dword ptr [ESP + 0x8]
005a3f64  MOV EDX,dword ptr [ESP + 0xc]
005a3f68  MOV dword ptr [EAX],ECX
005a3f6a  IMUL ECX,ECX,0xfa
005a3f70  MOV dword ptr [EDX],ECX
005a3f72  RET 0xc
005a3f75  MOV ECX,dword ptr [ECX + 0xb50]
005a3f7b  MOV EAX,dword ptr [ESP + 0x8]
005a3f7f  MOV EDX,dword ptr [ESP + 0xc]
005a3f83  MOV dword ptr [EAX],ECX
005a3f85  IMUL ECX,ECX,0x1388
005a3f8b  MOV dword ptr [EDX],ECX
005a3f8d  RET 0xc
005a3f90  MOV ECX,dword ptr [ECX + 0xb4c]
005a3f96  MOV EAX,dword ptr [ESP + 0x8]
005a3f9a  MOV EDX,dword ptr [ESP + 0xc]
005a3f9e  MOV dword ptr [EAX],ECX
005a3fa0  IMUL ECX,ECX,0xfa
005a3fa6  MOV dword ptr [EDX],ECX
005a3fa8  RET 0xc
005a3fab  MOV ECX,dword ptr [ECX + 0xbb4]
005a3fb1  JMP 0x005a3fef
005a3fb3  MOV ECX,dword ptr [ECX + 0xbbc]
005a3fb9  MOV EAX,dword ptr [ESP + 0x8]
005a3fbd  MOV EDX,dword ptr [ESP + 0xc]
005a3fc1  MOV dword ptr [EAX],ECX
005a3fc3  IMUL ECX,ECX,0xfa
005a3fc9  MOV dword ptr [EDX],ECX
005a3fcb  RET 0xc
005a3fce  MOV ECX,dword ptr [ECX + 0xbc0]
005a3fd4  MOV EAX,dword ptr [ESP + 0x8]
005a3fd8  MOV EDX,dword ptr [ESP + 0xc]
005a3fdc  MOV dword ptr [EAX],ECX
005a3fde  IMUL ECX,ECX,0xe1
005a3fe4  MOV dword ptr [EDX],ECX
005a3fe6  RET 0xc
005a3fe9  MOV ECX,dword ptr [ECX + 0xbb8]
005a3fef  MOV EAX,dword ptr [ESP + 0x8]
005a3ff3  MOV EDX,dword ptr [ESP + 0xc]
005a3ff7  MOV dword ptr [EAX],ECX
005a3ff9  IMUL ECX,ECX,0x1f4
005a3fff  MOV dword ptr [EDX],ECX
005a4001  RET 0xc
005a4004  MOV EAX,dword ptr [ECX + 0xbd0]
005a400a  MOV EDX,dword ptr [ESP + 0x8]
005a400e  MOV dword ptr [EDX],EAX
005a4010  MOV EAX,dword ptr [ECX + 0xbcc]
005a4016  MOV ECX,dword ptr [ESP + 0xc]
005a401a  MOV dword ptr [ECX],EAX
005a401c  RET 0xc
