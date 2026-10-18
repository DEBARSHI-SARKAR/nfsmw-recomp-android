005bdb00  PUSH ECX
005bdb01  PUSH EBP
005bdb02  PUSH ESI
005bdb03  MOV ESI,ECX
005bdb05  MOV EBP,dword ptr [ESI + 0x68]
005bdb08  PUSH EDI
005bdb09  MOV EDI,dword ptr [ESP + 0x14]
005bdb0d  MOV EAX,dword ptr [EDI + 0x68]
005bdb10  AND EAX,0xe
005bdb13  OR EBP,EAX
005bdb15  MOV dword ptr [ESI + 0x68],EBP
005bdb18  MOV ECX,dword ptr [EDI + 0x84]
005bdb1e  MOV dword ptr [ESI + 0x84],ECX
005bdb24  MOV EDX,dword ptr [EDI + 0x88]
005bdb2a  MOV dword ptr [ESI + 0x88],EDX
005bdb30  MOV EAX,dword ptr [EDI + 0x6c]
005bdb33  MOV dword ptr [ESI + 0x6c],EAX
005bdb36  MOV ECX,dword ptr [EDI + 0x70]
005bdb39  MOV dword ptr [ESI + 0x70],ECX
005bdb3c  MOV EDX,dword ptr [EDI + 0x64]
005bdb3f  MOV EAX,dword ptr [EDI + 0x60]
005bdb42  PUSH EDX
005bdb43  PUSH EAX
005bdb44  MOV ECX,ESI
005bdb46  CALL 0x005b98f0
005bdb4b  MOV EAX,dword ptr [ESI + 0xa0]
005bdb51  XOR EBP,EBP
005bdb53  CMP EAX,EBP
005bdb55  JZ 0x005bdb66
005bdb57  PUSH EAX
005bdb58  CALL 0x00652b10
005bdb5d  ADD ESP,0x4
005bdb60  MOV dword ptr [ESI + 0xa0],EBP
005bdb66  MOV EAX,dword ptr [ESI + 0x9c]
005bdb6c  CMP EAX,EBP
005bdb6e  JZ 0x005bdb7f
005bdb70  PUSH EAX
005bdb71  CALL 0x00652b10
005bdb76  ADD ESP,0x4
005bdb79  MOV dword ptr [ESI + 0x9c],EBP
005bdb7f  MOV dword ptr [ESI + 0x90],EBP
005bdb85  MOV dword ptr [ESI + 0x98],EBP
005bdb8b  MOV dword ptr [ESI + 0x94],EBP
005bdb91  MOV ECX,dword ptr [EDI + 0x94]
005bdb97  MOV EDX,dword ptr [EDI + 0x90]
005bdb9d  PUSH ECX
005bdb9e  PUSH EDX
005bdb9f  MOV ECX,ESI
005bdba1  CALL 0x005b42d0
005bdba6  MOV EAX,dword ptr [ESI + 0x64]
005bdba9  IMUL EAX,dword ptr [ESI + 0x60]
005bdbad  CMP EAX,EBP
005bdbaf  MOV dword ptr [ESP + 0xc],EAX
005bdbb3  MOV dword ptr [ESP + 0x14],EBP
005bdbb7  JBE 0x005bdd16
005bdbbd  XOR EAX,EAX
005bdbbf  PUSH EBX
005bdbc0  MOV ECX,dword ptr [EDI + 0x8c]
005bdbc6  MOV ECX,dword ptr [EAX + ECX*0x1]
005bdbc9  MOV EDX,dword ptr [ESI + 0x8c]
005bdbcf  MOV dword ptr [EAX + EDX*0x1],ECX
005bdbd2  MOV EDX,dword ptr [EDI + 0x8c]
005bdbd8  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x18]
005bdbdc  MOV ECX,dword ptr [ESI + 0x8c]
005bdbe2  MOV dword ptr [EAX + ECX*0x1 + 0x18],EDX
005bdbe6  MOV ECX,dword ptr [EDI + 0x8c]
005bdbec  MOV EBX,dword ptr [EAX + ECX*0x1 + 0x4]
005bdbf0  MOV EDX,dword ptr [ESI + 0x8c]
005bdbf6  MOV dword ptr [EAX + EDX*0x1 + 0x4],EBX
005bdbfa  LEA ECX,[EAX + ECX*0x1 + 0x4]
005bdbfe  MOV ECX,dword ptr [ECX + 0x4]
005bdc01  MOV dword ptr [EAX + EDX*0x1 + 0x8],ECX
005bdc05  MOV ECX,dword ptr [ESI + 0x8c]
005bdc0b  LEA EDX,[EAX + EDX*0x1 + 0x4]
005bdc0f  MOV EDX,dword ptr [EDI + 0x8c]
005bdc15  MOV EDX,dword ptr [EAX + EDX*0x1 + 0xc]
005bdc19  MOV dword ptr [EAX + ECX*0x1 + 0xc],EDX
005bdc1d  MOV ECX,dword ptr [EDI + 0x8c]
005bdc23  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x14]
005bdc27  MOV EDX,dword ptr [ESI + 0x8c]
005bdc2d  MOV dword ptr [EAX + EDX*0x1 + 0x14],ECX
005bdc31  MOV EDX,dword ptr [EDI + 0x8c]
005bdc37  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x10]
005bdc3b  MOV ECX,dword ptr [ESI + 0x8c]
005bdc41  MOV dword ptr [EAX + ECX*0x1 + 0x10],EDX
005bdc45  MOV ECX,dword ptr [EDI + 0x8c]
005bdc4b  MOV EDX,dword ptr [ESI + 0x8c]
005bdc51  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x1c]
005bdc55  MOV dword ptr [EAX + EDX*0x1 + 0x1c],ECX
005bdc59  MOV EDX,dword ptr [ESI + 0x8c]
005bdc5f  CMP dword ptr [EAX + EDX*0x1 + 0x18],0x2
005bdc64  JNZ 0x005bdcc9
005bdc66  MOV ECX,dword ptr [EDI + 0x8c]
005bdc6c  MOV EBX,dword ptr [EAX + ECX*0x1 + 0x20]
005bdc70  CMP EBX,EBP
005bdc72  JZ 0x005bdd15
005bdc78  MOV ECX,dword ptr [ESI + 0x98]
005bdc7e  MOV EDX,dword ptr [ESI + 0x9c]
005bdc84  MOV EDX,dword ptr [EDX + ECX*0x4]
005bdc87  INC ECX
005bdc88  MOV dword ptr [ESI + 0x98],ECX
005bdc8e  MOV word ptr [EDX],BP
005bdc91  MOV ECX,dword ptr [ESI + 0x8c]
005bdc97  MOV dword ptr [EAX + ECX*0x1 + 0x20],EDX
005bdc9b  MOV EDX,dword ptr [ESI + 0x8c]
005bdca1  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x20]
005bdca5  CMP ECX,EBP
005bdca7  JZ 0x005bdcc9
005bdca9  XOR EDX,EDX
005bdcab  MOV DX,word ptr [EBX]
005bdcae  CMP DX,BP
005bdcb1  JZ 0x005bdcc6
005bdcb3  MOV word ptr [ECX],DX
005bdcb6  ADD EBX,0x2
005bdcb9  XOR EDX,EDX
005bdcbb  MOV DX,word ptr [EBX]
005bdcbe  ADD ECX,0x2
005bdcc1  CMP DX,BP
005bdcc4  JNZ 0x005bdcb3
005bdcc6  MOV word ptr [ECX],BP
005bdcc9  MOV ECX,dword ptr [ESI + 0x8c]
005bdccf  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x18]
005bdcd3  ADD ECX,EAX
005bdcd5  CMP EDX,0x1
005bdcd8  JNZ 0x005bdcfd
005bdcda  MOV EDX,dword ptr [EDI + 0x8c]
005bdce0  MOV EBX,dword ptr [EAX + EDX*0x1 + 0x20]
005bdce4  LEA EDX,[EAX + EDX*0x1 + 0x20]
005bdce8  MOV dword ptr [ECX + 0x20],EBX
005bdceb  MOV EBX,dword ptr [EDX + 0x4]
005bdcee  MOV dword ptr [ECX + 0x24],EBX
005bdcf1  MOV EBX,dword ptr [EDX + 0x8]
005bdcf4  MOV dword ptr [ECX + 0x28],EBX
005bdcf7  MOV EDX,dword ptr [EDX + 0xc]
005bdcfa  MOV dword ptr [ECX + 0x2c],EDX
005bdcfd  MOV ECX,dword ptr [ESP + 0x18]
005bdd01  MOV EDX,dword ptr [ESP + 0x10]
005bdd05  INC ECX
005bdd06  ADD EAX,0x30
005bdd09  CMP ECX,EDX
005bdd0b  MOV dword ptr [ESP + 0x18],ECX
005bdd0f  JC 0x005bdbc0
005bdd15  POP EBX
005bdd16  POP EDI
005bdd17  POP ESI
005bdd18  POP EBP
005bdd19  POP ECX
005bdd1a  RET 0x4
