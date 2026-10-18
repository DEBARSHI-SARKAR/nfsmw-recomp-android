006ddca0  PUSH ESI
006ddca1  PUSH EDI
006ddca2  MOV EDI,dword ptr [0x00987af0]
006ddca8  CMP EDI,0x987af0
006ddcae  JZ 0x006ddd14
006ddcb0  PUSH EBX
006ddcb1  PUSH EBP
006ddcb2  MOV EAX,dword ptr [EDI]
006ddcb4  MOV ECX,dword ptr [EDI + 0x4]
006ddcb7  MOV dword ptr [ECX],EAX
006ddcb9  MOV dword ptr [EAX + 0x4],ECX
006ddcbc  MOV EAX,dword ptr [EDI + 0x28]
006ddcbf  XOR EBX,EBX
006ddcc1  CMP EAX,EBX
006ddcc3  JZ 0x006ddcce
006ddcc5  MOV ECX,dword ptr [EAX]
006ddcc7  PUSH EAX
006ddcc8  CALL dword ptr [ECX + 0x8]
006ddccb  MOV dword ptr [EDI + 0x28],EBX
006ddcce  MOV EAX,dword ptr [EDI + 0x10]
006ddcd1  XOR EBP,EBP
006ddcd3  CMP EAX,EBX
006ddcd5  JLE 0x006ddd04
006ddcd7  MOV ESI,dword ptr [EDI + 0x14]
006ddcda  MOV EAX,dword ptr [ESI + EBX*0x1 + 0x54]
006ddcde  ADD ESI,EBX
006ddce0  TEST EAX,EAX
006ddce2  JZ 0x006ddcf9
006ddce4  MOV ECX,dword ptr [ESI + 0x50]
006ddce7  TEST ECX,ECX
006ddce9  JBE 0x006ddcf9
006ddceb  MOV EDX,dword ptr [EAX]
006ddced  PUSH EAX
006ddcee  CALL dword ptr [EDX + 0x8]
006ddcf1  XOR EAX,EAX
006ddcf3  MOV dword ptr [ESI + 0x50],EAX
006ddcf6  MOV dword ptr [ESI + 0x54],EAX
006ddcf9  MOV EAX,dword ptr [EDI + 0x10]
006ddcfc  INC EBP
006ddcfd  ADD EBX,0x68
006ddd00  CMP EBP,EAX
006ddd02  JL 0x006ddcd7
006ddd04  MOV EDI,dword ptr [0x00987af0]
006ddd0a  CMP EDI,0x987af0
006ddd10  JNZ 0x006ddcb2
006ddd12  POP EBP
006ddd13  POP EBX
006ddd14  MOV ESI,dword ptr [0x009877e8]
006ddd1a  CMP ESI,0x9877e8
006ddd20  JZ 0x006ddd4a
006ddd22  MOV EAX,dword ptr [ESI + 0x8]
006ddd25  MOV ECX,dword ptr [EAX]
006ddd27  PUSH EAX
006ddd28  CALL dword ptr [ECX + 0x8]
006ddd2b  MOV EAX,ESI
006ddd2d  MOV ECX,dword ptr [EAX]
006ddd2f  MOV EDX,dword ptr [EAX + 0x4]
006ddd32  MOV ESI,dword ptr [ESI]
006ddd34  MOV dword ptr [EDX],ECX
006ddd36  PUSH EAX
006ddd37  MOV dword ptr [ECX + 0x4],EDX
006ddd3a  CALL 0x00466440
006ddd3f  ADD ESP,0x4
006ddd42  CMP ESI,0x9877e8
006ddd48  JNZ 0x006ddd22
006ddd4a  POP EDI
006ddd4b  POP ESI
006ddd4c  RET
