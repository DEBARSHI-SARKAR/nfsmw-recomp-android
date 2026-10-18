0065eab0  PUSH EBX
0065eab1  MOV EBX,ECX
0065eab3  MOV EAX,dword ptr [EBX + 0x8]
0065eab6  PUSH ESI
0065eab7  MOV ESI,dword ptr [EBX + 0x4]
0065eaba  CMP ESI,EAX
0065eabc  JZ 0x0065eaec
0065eabe  PUSH EDI
0065eabf  MOV EDI,dword ptr [ESP + 0x10]
0065eac3  MOV EAX,dword ptr [EDI]
0065eac5  CMP EAX,dword ptr [ESI + 0x14]
0065eac8  JNZ 0x0065eae1
0065eaca  MOV ECX,dword ptr [EDI + 0xc]
0065eacd  CMP ECX,dword ptr [ESI + 0x1c]
0065ead0  JZ 0x0065ead9
0065ead2  MOV AL,byte ptr [ESI + 0x20]
0065ead5  TEST AL,AL
0065ead7  JZ 0x0065eae1
0065ead9  PUSH ESI
0065eada  PUSH EDI
0065eadb  CALL dword ptr [ESI + 0x10]
0065eade  ADD ESP,0x8
0065eae1  MOV EAX,dword ptr [EBX + 0x8]
0065eae4  ADD ESI,0x24
0065eae7  CMP ESI,EAX
0065eae9  JNZ 0x0065eac3
0065eaeb  POP EDI
0065eaec  POP ESI
0065eaed  POP EBX
0065eaee  RET 0x4
