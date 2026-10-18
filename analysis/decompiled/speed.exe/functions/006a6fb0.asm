006a6fb0  PUSH EBX
006a6fb1  PUSH ESI
006a6fb2  PUSH EDI
006a6fb3  MOV EDI,ECX
006a6fb5  MOV EAX,dword ptr [EDI + 0x30]
006a6fb8  MOV ESI,dword ptr [EAX]
006a6fba  MOV EAX,dword ptr [ESP + 0x10]
006a6fbe  XOR EBX,EBX
006a6fc0  MOV byte ptr [ESI + 0x5d],BL
006a6fc3  MOV EDX,dword ptr [EDI]
006a6fc5  PUSH EAX
006a6fc6  CALL dword ptr [EDX + 0x70]
006a6fc9  AND byte ptr [ESI + 0x1c],0xfd
006a6fcd  MOV EDX,dword ptr [ESP + 0x14]
006a6fd1  MOV dword ptr [ESI + 0x50],EBX
006a6fd4  MOV dword ptr [ESI + 0x54],EBX
006a6fd7  MOV dword ptr [ESI + 0x58],EBX
006a6fda  MOV dword ptr [ESI + 0x60],EBX
006a6fdd  MOV dword ptr [ESI + 0x64],EBX
006a6fe0  MOV dword ptr [ESI + 0x68],EBX
006a6fe3  MOV dword ptr [ESI + 0x20],EBX
006a6fe6  MOV dword ptr [ESI + 0x24],EBX
006a6fe9  MOV dword ptr [ESI + 0x28],EBX
006a6fec  MOV dword ptr [ESI + 0x30],EBX
006a6fef  MOV dword ptr [ESI + 0x34],EBX
006a6ff2  MOV dword ptr [ESI + 0x38],EBX
006a6ff5  MOV EAX,dword ptr [EDX]
006a6ff7  LEA ECX,[ESI + 0x10]
006a6ffa  MOV dword ptr [ECX],EAX
006a6ffc  MOV EAX,dword ptr [EDX + 0x4]
006a6fff  MOV dword ptr [ECX + 0x4],EAX
006a7002  MOV EDX,dword ptr [EDX + 0x8]
006a7005  MOV dword ptr [ECX + 0x8],EDX
006a7008  MOV byte ptr [ESI + 0x5c],BL
006a700b  CMP dword ptr [EDI + 0xc0],0x1
006a7012  JNZ 0x006a701a
006a7014  OR byte ptr [ESI + 0x1c],0x40
006a7018  JMP 0x006a701e
006a701a  AND byte ptr [ESI + 0x1c],0xbf
006a701e  MOV EAX,dword ptr [EDI + 0x30]
006a7021  MOV EAX,dword ptr [EAX]
006a7023  MOV CX,word ptr [EAX + 0x1c]
006a7027  MOV word ptr [EAX + 0x1e],CX
006a702b  MOV ECX,dword ptr [EDI + 0xa4]
006a7031  CALL 0x00782a30
006a7036  LEA ECX,[EDI + -0x48]
006a7039  CALL 0x00699a90
006a703e  POP EDI
006a703f  POP ESI
006a7040  POP EBX
006a7041  RET 0x8
