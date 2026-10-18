006eedc0  PUSH ESI
006eedc1  MOV ESI,ECX
006eedc3  PUSH EDI
006eedc4  XOR EDI,EDI
006eedc6  LEA ECX,[ESI + 0x10]
006eedc9  MOV dword ptr [ESI],EDI
006eedcb  MOV dword ptr [ESI + 0x4],0xb
006eedd2  MOV dword ptr [ESI + 0x8],EDI
006eedd5  MOV dword ptr [ESI + 0xc],EDI
006eedd8  CALL 0x00581c20
006eeddd  MOV dword ptr [ESI + 0x1a8],EDI
006eede3  MOV dword ptr [ESI + 0x1ac],EDI
006eede9  MOV dword ptr [ESI + 0x1b0],EDI
006eedef  POP EDI
006eedf0  MOV EAX,ESI
006eedf2  POP ESI
006eedf3  RET
