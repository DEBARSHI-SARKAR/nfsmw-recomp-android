006ebef0  PUSH EBX
006ebef1  MOV EBX,dword ptr [ESP + 0xc]
006ebef5  PUSH ESI
006ebef6  MOV ESI,dword ptr [ESP + 0xc]
006ebefa  CMP ESI,EBX
006ebefc  JZ 0x006ebf2d
006ebefe  PUSH EBP
006ebeff  MOV EBP,dword ptr [ESP + 0x1c]
006ebf03  PUSH EDI
006ebf04  MOV EDI,dword ptr [ESP + 0x1c]
006ebf08  PUSH ESI
006ebf09  CALL EBP
006ebf0b  ADD ESP,0x4
006ebf0e  TEST AL,AL
006ebf10  JNZ 0x006ebf1f
006ebf12  MOV EAX,dword ptr [ESI]
006ebf14  MOV dword ptr [EDI],EAX
006ebf16  MOV ECX,dword ptr [ESI + 0x4]
006ebf19  MOV dword ptr [EDI + 0x4],ECX
006ebf1c  ADD EDI,0x8
006ebf1f  ADD ESI,0x8
006ebf22  CMP ESI,EBX
006ebf24  JNZ 0x006ebf08
006ebf26  MOV EAX,EDI
006ebf28  POP EDI
006ebf29  POP EBP
006ebf2a  POP ESI
006ebf2b  POP EBX
006ebf2c  RET
006ebf2d  MOV EAX,dword ptr [ESP + 0x14]
006ebf31  POP ESI
006ebf32  POP EBX
006ebf33  RET
