0060bd50  PUSH EBX
0060bd51  MOV EBX,dword ptr [ESP + 0x10]
0060bd55  PUSH ESI
0060bd56  PUSH EDI
0060bd57  MOV EDI,dword ptr [ESP + 0x14]
0060bd5b  PUSH EBX
0060bd5c  PUSH EDI
0060bd5d  CALL 0x00607810
0060bd62  MOV ESI,EAX
0060bd64  MOV EAX,dword ptr [ESI + 0x8]
0060bd67  ADD ESP,0x8
0060bd6a  TEST EAX,EAX
0060bd6c  JZ 0x0060bdc8
0060bd6e  PUSH ESI
0060bd6f  PUSH EDI
0060bd70  CALL 0x00607810
0060bd75  MOV ECX,dword ptr [EDI + 0x14]
0060bd78  ADD ESP,0x8
0060bd7b  CMP EAX,ESI
0060bd7d  JZ 0x0060bdbd
0060bd7f  CMP dword ptr [EAX + 0x10],ESI
0060bd82  JZ 0x0060bd8c
0060bd84  MOV EAX,dword ptr [EAX + 0x10]
0060bd87  CMP dword ptr [EAX + 0x10],ESI
0060bd8a  JNZ 0x0060bd84
0060bd8c  MOV dword ptr [EAX + 0x10],ECX
0060bd8f  MOV EAX,ESI
0060bd91  MOV EDX,dword ptr [EAX]
0060bd93  MOV dword ptr [ECX],EDX
0060bd95  MOV EDX,dword ptr [EAX + 0x4]
0060bd98  MOV dword ptr [ECX + 0x4],EDX
0060bd9b  MOV EDX,dword ptr [EAX + 0x8]
0060bd9e  MOV dword ptr [ECX + 0x8],EDX
0060bda1  MOV EDX,dword ptr [EAX + 0xc]
0060bda4  MOV dword ptr [ECX + 0xc],EDX
0060bda7  MOV EAX,dword ptr [EAX + 0x10]
0060bdaa  MOV dword ptr [ECX + 0x10],EAX
0060bdad  MOV dword ptr [ESI + 0x10],0x0
0060bdb4  MOV dword ptr [ESI + 0x8],0x0
0060bdbb  JMP 0x0060bdc8
0060bdbd  MOV EDX,dword ptr [ESI + 0x10]
0060bdc0  MOV dword ptr [ECX + 0x10],EDX
0060bdc3  MOV dword ptr [ESI + 0x10],ECX
0060bdc6  MOV ESI,ECX
0060bdc8  MOV EAX,dword ptr [EBX]
0060bdca  MOV dword ptr [ESI],EAX
0060bdcc  MOV ECX,dword ptr [EBX + 0x4]
0060bdcf  MOV dword ptr [ESI + 0x4],ECX
0060bdd2  MOV EDX,dword ptr [EDI + 0x14]
0060bdd5  CMP dword ptr [EDX],0x0
0060bdd8  JZ 0x0060bdf2
0060bdda  MOV ECX,dword ptr [EDI + 0x10]
0060bddd  LEA ECX,[ECX]
0060bde0  MOV EAX,dword ptr [EDI + 0x14]
0060bde3  CMP EAX,ECX
0060bde5  JZ 0x0060bdf9
0060bde7  ADD EAX,-0x14
0060bdea  MOV dword ptr [EDI + 0x14],EAX
0060bded  CMP dword ptr [EAX],0x0
0060bdf0  JNZ 0x0060bde0
0060bdf2  POP EDI
0060bdf3  LEA EAX,[ESI + 0x8]
0060bdf6  POP ESI
0060bdf7  POP EBX
0060bdf8  RET
0060bdf9  LEA ECX,[ESP + 0x18]
0060bdfd  PUSH ECX
0060bdfe  LEA EDX,[ESP + 0x18]
0060be02  PUSH EDX
0060be03  PUSH EDI
0060be04  MOV dword ptr [ESI + 0x8],0x1
0060be0b  MOV dword ptr [ESI + 0xc],0x0
0060be12  CALL 0x006079b0
0060be17  MOV EAX,dword ptr [ESP + 0x24]
0060be1b  PUSH EAX
0060be1c  CALL 0x006074c0
0060be21  MOV ECX,dword ptr [ESP + 0x20]
0060be25  INC EAX
0060be26  PUSH EAX
0060be27  MOV EAX,dword ptr [ESP + 0x28]
0060be2b  PUSH EDI
0060be2c  PUSH ECX
0060be2d  CALL 0x0060ba20
0060be32  PUSH EBX
0060be33  PUSH EDI
0060be34  CALL 0x00607d80
0060be39  ADD ESP,0x24
0060be3c  POP EDI
0060be3d  POP ESI
0060be3e  MOV dword ptr [EAX],0x0
0060be44  POP EBX
0060be45  RET
