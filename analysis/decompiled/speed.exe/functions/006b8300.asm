006b8300  MOV EAX,dword ptr [ESP + 0x8]
006b8304  PUSH ESI
006b8305  MOV ESI,ECX
006b8307  MOV ECX,dword ptr [ESP + 0x8]
006b830b  PUSH EAX
006b830c  PUSH ECX
006b830d  MOV ECX,ESI
006b830f  CALL 0x006b7ad0
006b8314  MOV dword ptr [ESI],0x8acde0
006b831a  MOV dword ptr [ESI + 0x8],0x8acdd4
006b8321  MOV dword ptr [ESI + 0x48],0x8acd28
006b8328  MOV dword ptr [ESI + 0x50],0x8acc80
006b832f  MOV dword ptr [ESI + 0x58],0x8acc78
006b8336  MOV dword ptr [ESI + 0x60],0x8acc40
006b833d  MOV dword ptr [ESI + 0x64],0x8acc3c
006b8344  MOV dword ptr [ESI + 0x68],0x8acc2c
006b834b  MOV dword ptr [ESI + 0x130],0x8acc0c
006b8355  MOV EAX,ESI
006b8357  POP ESI
006b8358  RET 0x8
