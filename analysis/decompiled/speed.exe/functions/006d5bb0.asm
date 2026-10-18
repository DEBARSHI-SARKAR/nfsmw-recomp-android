006d5bb0  PUSH ESI
006d5bb1  MOV ESI,ECX
006d5bb3  MOV EAX,dword ptr [ESI + 0x44]
006d5bb6  PUSH EAX
006d5bb7  MOV dword ptr [ESI],0x8af1f8
006d5bbd  CALL 0x00652b00
006d5bc2  MOV EAX,dword ptr [ESI + 0x48]
006d5bc5  ADD ESP,0x4
006d5bc8  TEST EAX,EAX
006d5bca  JZ 0x006d5be5
006d5bcc  MOV ECX,dword ptr [EAX]
006d5bce  PUSH EAX
006d5bcf  CALL dword ptr [ECX + 0x114]
006d5bd5  MOV EAX,dword ptr [ESI + 0x48]
006d5bd8  MOV EDX,dword ptr [EAX]
006d5bda  PUSH EAX
006d5bdb  CALL dword ptr [EDX + 0x8]
006d5bde  MOV dword ptr [ESI + 0x48],0x0
006d5be5  MOV EAX,dword ptr [ESI + 0x4c]
006d5be8  TEST EAX,EAX
006d5bea  JZ 0x006d5bf9
006d5bec  MOV ECX,dword ptr [EAX]
006d5bee  PUSH EAX
006d5bef  CALL dword ptr [ECX + 0x8]
006d5bf2  MOV dword ptr [ESI + 0x4c],0x0
006d5bf9  TEST byte ptr [ESP + 0x8],0x1
006d5bfe  JZ 0x006d5c09
006d5c00  PUSH ESI
006d5c01  CALL 0x00652b00
006d5c06  ADD ESP,0x4
006d5c09  MOV EAX,ESI
006d5c0b  POP ESI
006d5c0c  RET 0x4
