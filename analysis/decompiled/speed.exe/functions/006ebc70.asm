006ebc70  MOV EAX,dword ptr [ESP + 0x4]
006ebc74  MOV ECX,dword ptr [ESP + 0x8]
006ebc78  CMP EAX,ECX
006ebc7a  JZ 0x006ebc8d
006ebc7c  MOV EDX,dword ptr [ESP + 0xc]
006ebc80  PUSH ESI
006ebc81  MOV ESI,dword ptr [EDX]
006ebc83  MOV dword ptr [EAX],ESI
006ebc85  ADD EAX,0x4
006ebc88  CMP EAX,ECX
006ebc8a  JNZ 0x006ebc81
006ebc8c  POP ESI
006ebc8d  RET
