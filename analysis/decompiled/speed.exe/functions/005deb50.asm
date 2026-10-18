005deb50  MOV EAX,dword ptr [ESP + 0x4]
005deb54  MOV ECX,dword ptr [EAX + 0x8]
005deb57  MOV DL,byte ptr [ECX + 0x15]
005deb5a  TEST DL,DL
005deb5c  JNZ 0x005deb6c
005deb5e  MOV EDI,EDI
005deb60  MOV EAX,ECX
005deb62  MOV ECX,dword ptr [EAX + 0x8]
005deb65  MOV DL,byte ptr [ECX + 0x15]
005deb68  TEST DL,DL
005deb6a  JZ 0x005deb60
005deb6c  RET
