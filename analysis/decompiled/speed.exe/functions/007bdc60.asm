007bdc60  PUSH -0x1
007bdc62  PUSH 0x883754
007bdc67  MOV EAX,FS:[0x0]
007bdc6d  PUSH EAX
007bdc6e  MOV dword ptr FS:[0x0],ESP
007bdc75  PUSH ECX
007bdc76  PUSH EBX
007bdc77  PUSH ESI
007bdc78  MOV ESI,ECX
007bdc7a  MOV EAX,dword ptr [ESI + 0x148]
007bdc80  SUB EAX,0x301
007bdc85  PUSH EDI
007bdc86  JZ 0x007bdd02
007bdc88  SUB EAX,0x2
007bdc8b  JZ 0x007bdd93
007bdc91  MOV EBX,dword ptr [ESI + 0x2e0]
007bdc97  DEC EBX
007bdc98  JZ 0x007bdd07
007bdc9a  MOV EAX,dword ptr [ESI + 0x1bc]
007bdca0  MOV EDX,dword ptr [ESI]
007bdca2  MOV EDI,dword ptr [ESI + EAX*0x4 + 0x2d4]
007bdca9  CALL dword ptr [EDX + 0x14]
007bdcac  CMP EAX,EDI
007bdcae  JZ 0x007bdd07
007bdcb0  TEST EDI,EDI
007bdcb2  JZ 0x007bdcbc
007bdcb4  MOV EAX,dword ptr [EDI]
007bdcb6  PUSH 0x1
007bdcb8  MOV ECX,EDI
007bdcba  CALL dword ptr [EAX]
007bdcbc  PUSH 0x2c
007bdcbe  CALL 0x00652ad0
007bdcc3  MOV EDI,EAX
007bdcc5  ADD ESP,0x4
007bdcc8  MOV dword ptr [ESP + 0xc],EDI
007bdccc  TEST EDI,EDI
007bdcce  MOV dword ptr [ESP + 0x18],0x0
007bdcd6  JZ 0x007bdce9
007bdcd8  MOV EDX,dword ptr [ESI]
007bdcda  MOV ECX,ESI
007bdcdc  CALL dword ptr [EDX + 0x14]
007bdcdf  PUSH EAX
007bdce0  MOV ECX,EDI
007bdce2  CALL 0x007a9e60
007bdce7  JMP 0x007bdceb
007bdce9  XOR EAX,EAX
007bdceb  MOV ECX,dword ptr [ESI + 0x1bc]
007bdcf1  MOV dword ptr [ESP + 0x18],0xffffffff
007bdcf9  MOV dword ptr [ESI + ECX*0x4 + 0x2d4],EAX
007bdd00  JMP 0x007bdd07
007bdd02  MOV EBX,0x2
007bdd07  MOV EAX,dword ptr [ESP + 0x20]
007bdd0b  CMP EAX,-0x1
007bdd0e  MOV EDI,dword ptr [ESI + 0x1bc]
007bdd14  JNZ 0x007bdd1d
007bdd16  DEC EDI
007bdd17  JNS 0x007bdd29
007bdd19  MOV EDI,EBX
007bdd1b  JMP 0x007bdd29
007bdd1d  CMP EAX,0x1
007bdd20  JNZ 0x007bdd29
007bdd22  INC EDI
007bdd23  CMP EDI,EBX
007bdd25  JLE 0x007bdd29
007bdd27  XOR EDI,EDI
007bdd29  CMP EDI,dword ptr [ESI + 0x1bc]
007bdd2f  JZ 0x007bdd93
007bdd31  MOV EAX,dword ptr [ESI + 0x238]
007bdd37  TEST EAX,EAX
007bdd39  JZ 0x007bdd40
007bdd3b  ADD EAX,0x4
007bdd3e  JMP 0x007bdd42
007bdd40  XOR EAX,EAX
007bdd42  PUSH EAX
007bdd43  LEA ECX,[ESI + 0x230]
007bdd49  CALL 0x0045d3a0
007bdd4e  MOV EDX,dword ptr [ESI + 0x1bc]
007bdd54  DEC EAX
007bdd55  MOV dword ptr [ESI + EDX*0x4 + 0x1c0],EAX
007bdd5c  MOV EAX,dword ptr [ESI + 0x148]
007bdd62  SUB EAX,0x301
007bdd67  MOV dword ptr [ESI + 0x1bc],EDI
007bdd6d  JZ 0x007bdd7a
007bdd6f  SUB EAX,0x2
007bdd72  JZ 0x007bdd7a
007bdd74  ADD EDI,0x4f
007bdd77  PUSH EDI
007bdd78  JMP 0x007bdd85
007bdd7a  MOV EAX,dword ptr [ESI]
007bdd7c  MOV ECX,ESI
007bdd7e  CALL dword ptr [EAX + 0x14]
007bdd81  MOV ECX,dword ptr [EAX + 0x10]
007bdd84  PUSH ECX
007bdd85  MOV ECX,ESI
007bdd87  CALL 0x007b8040
007bdd8c  MOV EDX,dword ptr [ESI]
007bdd8e  MOV ECX,ESI
007bdd90  CALL dword ptr [EDX + 0xc]
007bdd93  MOV ECX,dword ptr [ESP + 0x10]
007bdd97  POP EDI
007bdd98  POP ESI
007bdd99  POP EBX
007bdd9a  MOV dword ptr FS:[0x0],ECX
007bdda1  ADD ESP,0x10
007bdda4  RET 0x4
