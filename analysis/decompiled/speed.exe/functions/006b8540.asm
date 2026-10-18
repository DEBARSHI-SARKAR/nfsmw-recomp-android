006b8540  MOV EAX,dword ptr [ESP + 0x8]
006b8544  PUSH ESI
006b8545  MOV ESI,ECX
006b8547  MOV ECX,dword ptr [ESP + 0x8]
006b854b  PUSH EAX
006b854c  PUSH ECX
006b854d  MOV ECX,ESI
006b854f  CALL 0x006b7ad0
006b8554  MOV dword ptr [ESI],0x8ad008
006b855a  MOV dword ptr [ESI + 0x8],0x8acffc
006b8561  MOV dword ptr [ESI + 0x48],0x8acf50
006b8568  MOV dword ptr [ESI + 0x50],0x8acea8
006b856f  MOV dword ptr [ESI + 0x58],0x8acea4
006b8576  MOV dword ptr [ESI + 0x60],0x8ace6c
006b857d  MOV dword ptr [ESI + 0x64],0x8ace68
006b8584  MOV dword ptr [ESI + 0x68],0x8ace58
006b858b  MOV dword ptr [ESI + 0x130],0x8ace38
006b8595  MOV EAX,ESI
006b8597  POP ESI
006b8598  RET 0x8
