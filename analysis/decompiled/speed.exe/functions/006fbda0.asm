006fbda0  MOV EAX,dword ptr [ESP + 0x4]
006fbda4  SUB ESP,0x10
006fbda7  PUSH EBX
006fbda8  PUSH EBP
006fbda9  MOV EBP,dword ptr [ESP + 0x20]
006fbdad  PUSH ESI
006fbdae  PUSH EDI
006fbdaf  PUSH EAX
006fbdb0  MOV ESI,ECX
006fbdb2  MOV EDI,dword ptr [ESI + 0x18]
006fbdb5  MOV EBX,dword ptr [ESI + 0x14]
006fbdb8  PUSH EBP
006fbdb9  PUSH EDI
006fbdba  LEA ECX,[ESP + 0x34]
006fbdbe  PUSH EBX
006fbdbf  PUSH ECX
006fbdc0  CALL 0x006f0080
006fbdc5  MOV EAX,dword ptr [ESP + 0x3c]
006fbdc9  ADD ESP,0x14
006fbdcc  CMP EAX,EDI
006fbdce  JNZ 0x006fbe16
006fbdd0  MOV EDX,dword ptr [ESP + 0x24]
006fbdd4  MOV EAX,dword ptr [ESP + 0x2c]
006fbdd8  PUSH 0x0
006fbdda  LEA ECX,[ESP + 0x14]
006fbdde  PUSH ECX
006fbddf  PUSH EDI
006fbde0  MOV dword ptr [ESP + 0x20],EDX
006fbde4  LEA EDX,[ESP + 0x30]
006fbde8  PUSH EBX
006fbde9  PUSH EDX
006fbdea  MOV dword ptr [ESP + 0x24],EBP
006fbdee  MOV dword ptr [ESP + 0x2c],EAX
006fbdf2  MOV dword ptr [ESP + 0x30],0x0
006fbdfa  CALL 0x006f6ae0
006fbdff  MOV EDX,dword ptr [ESP + 0x38]
006fbe03  ADD ESP,0x14
006fbe06  LEA EAX,[ESP + 0x10]
006fbe0a  PUSH EAX
006fbe0b  PUSH 0x1
006fbe0d  LEA ECX,[ESI + 0x10]
006fbe10  PUSH EDX
006fbe11  CALL 0x006fa4d0
006fbe16  POP EDI
006fbe17  POP ESI
006fbe18  POP EBP
006fbe19  POP EBX
006fbe1a  ADD ESP,0x10
006fbe1d  RET 0xc
