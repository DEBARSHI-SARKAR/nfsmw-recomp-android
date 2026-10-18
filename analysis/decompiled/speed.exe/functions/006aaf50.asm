006aaf50  PUSH -0x1
006aaf52  PUSH 0x87cf60
006aaf57  MOV EAX,FS:[0x0]
006aaf5d  PUSH EAX
006aaf5e  MOV dword ptr FS:[0x0],ESP
006aaf65  PUSH ECX
006aaf66  PUSH EBX
006aaf67  PUSH EBP
006aaf68  PUSH ESI
006aaf69  MOV ESI,ECX
006aaf6b  PUSH EDI
006aaf6c  MOV dword ptr [ESP + 0x10],ESI
006aaf70  MOV dword ptr [ESI],0x8abc00
006aaf76  MOV dword ptr [ESI + 0x8],0x8abbf8
006aaf7d  MOV dword ptr [ESI + 0x4c],0x8abb80
006aaf84  MOV EBP,0x4
006aaf89  MOV dword ptr [ESP + 0x1c],EBP
006aaf8d  LEA EBX,[ESI + 0xfc]
006aaf93  MOV EDI,dword ptr [EBX]
006aaf95  TEST EDI,EDI
006aaf97  JZ 0x006aafb6
006aaf99  LEA ECX,[EDI + 0x9c]
006aaf9f  CALL 0x0045a430
006aafa4  PUSH 0x0
006aafa6  PUSH 0x10c
006aafab  PUSH EDI
006aafac  MOV ECX,0x925b30
006aafb1  CALL 0x005d0370
006aafb6  ADD EBX,0x4
006aafb9  DEC EBP
006aafba  JNZ 0x006aaf93
006aafbc  LEA ECX,[ESI + 0xcc]
006aafc2  MOV byte ptr [ESP + 0x1c],0x3
006aafc7  CALL 0x0045a430
006aafcc  LEA ECX,[ESI + 0xb8]
006aafd2  MOV byte ptr [ESP + 0x1c],0x2
006aafd7  CALL 0x0045a430
006aafdc  LEA ECX,[ESI + 0xa4]
006aafe2  MOV byte ptr [ESP + 0x1c],0x1
006aafe7  CALL 0x0045a430
006aafec  LEA ECX,[ESI + 0x90]
006aaff2  MOV byte ptr [ESP + 0x1c],0x0
006aaff7  CALL 0x0045a430
006aaffc  MOV ECX,ESI
006aaffe  MOV dword ptr [ESP + 0x1c],0xffffffff
006ab006  CALL 0x0069d0a0
006ab00b  MOV ECX,dword ptr [ESP + 0x14]
006ab00f  POP EDI
006ab010  POP ESI
006ab011  POP EBP
006ab012  POP EBX
006ab013  MOV dword ptr FS:[0x0],ECX
006ab01a  ADD ESP,0x10
006ab01d  RET
