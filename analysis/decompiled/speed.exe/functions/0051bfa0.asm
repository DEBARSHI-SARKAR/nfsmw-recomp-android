0051bfa0  PUSH ESI
0051bfa1  PUSH EDI
0051bfa2  MOV EDI,ECX
0051bfa4  MOV ESI,dword ptr [EDI + 0x2c]
0051bfa7  TEST ESI,ESI
0051bfa9  JZ 0x0051bfd7
0051bfab  OR dword ptr [ESI + 0x1c],0x400000
0051bfb2  MOV dword ptr [ESI + 0x60],0x999d1383
0051bfb9  MOV ECX,dword ptr [0x0091dd08]
0051bfbf  TEST ECX,ECX
0051bfc1  JZ 0x0051bfc8
0051bfc3  MOV EAX,dword ptr [ECX]
0051bfc5  PUSH ESI
0051bfc6  CALL dword ptr [EAX]
0051bfc8  MOV ECX,dword ptr [ESI + 0x1c]
0051bfcb  AND ECX,0xfffffffd
0051bfce  OR ECX,0x400000
0051bfd4  MOV dword ptr [ESI + 0x1c],ECX
0051bfd7  MOV EDX,dword ptr [0x0091ca20]
0051bfdd  MOV EAX,dword ptr [EDX]
0051bfdf  MOV EAX,dword ptr [EAX + 0x64]
0051bfe2  MOV ESI,dword ptr [EDI + 0x30]
0051bfe5  NEG EAX
0051bfe7  SBB EAX,EAX
0051bfe9  AND EAX,0x20421a02
0051bfee  ADD EAX,0xf6bbd534
0051bff3  TEST ESI,ESI
0051bff5  JZ 0x0051c01e
0051bff7  OR dword ptr [ESI + 0x1c],0x400000
0051bffe  MOV dword ptr [ESI + 0x60],EAX
0051c001  MOV ECX,dword ptr [0x0091dd08]
0051c007  TEST ECX,ECX
0051c009  JZ 0x0051c010
0051c00b  MOV EDX,dword ptr [ECX]
0051c00d  PUSH ESI
0051c00e  CALL dword ptr [EDX]
0051c010  MOV EAX,dword ptr [ESI + 0x1c]
0051c013  AND EAX,0xfffffffd
0051c016  OR EAX,0x400000
0051c01b  MOV dword ptr [ESI + 0x1c],EAX
0051c01e  POP EDI
0051c01f  POP ESI
0051c020  RET
