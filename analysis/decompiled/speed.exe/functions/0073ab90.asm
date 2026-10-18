0073ab90  MOV EDX,dword ptr [ESP + 0x8]
0073ab94  MOV ECX,dword ptr [EDX]
0073ab96  PUSH ESI
0073ab97  MOV ESI,dword ptr [ESP + 0x8]
0073ab9b  MOV EAX,dword ptr [ESI]
0073ab9d  CMP EAX,ECX
0073ab9f  JNZ 0x0073aba9
0073aba1  MOV ECX,dword ptr [ESI + 0x4]
0073aba4  CMP ECX,dword ptr [EDX + 0x4]
0073aba7  JZ 0x0073abad
0073aba9  XOR AL,AL
0073abab  POP ESI
0073abac  RET
0073abad  PUSH EDI
0073abae  MOV EDI,ESI
0073abb0  PUSH EBX
0073abb1  XOR ECX,ECX
0073abb3  LEA EAX,[EDX + 0x8]
0073abb6  SUB EDI,EDX
0073abb8  MOV EBX,dword ptr [EDI + EAX*0x1]
0073abbb  CMP EBX,dword ptr [EAX]
0073abbd  JNZ 0x0073ac2a
0073abbf  INC ECX
0073abc0  ADD EAX,0x4
0073abc3  CMP ECX,0x4
0073abc6  JL 0x0073abb8
0073abc8  XOR EDI,EDI
0073abca  LEA ECX,[EDX + 0x34]
0073abcd  LEA EAX,[ESI + 0x1c]
0073abd0  SUB EDX,ESI
0073abd2  MOV ESI,dword ptr [EAX + -0x4]
0073abd5  CMP ESI,dword ptr [ECX + -0x1c]
0073abd8  JNZ 0x0073ac2a
0073abda  MOV ESI,dword ptr [EAX]
0073abdc  CMP ESI,dword ptr [EDX + EAX*0x1]
0073abdf  JNZ 0x0073ac2a
0073abe1  MOV ESI,dword ptr [EAX + 0x4]
0073abe4  CMP ESI,dword ptr [ECX + -0x14]
0073abe7  JNZ 0x0073ac2a
0073abe9  MOV ESI,dword ptr [EAX + 0x18]
0073abec  CMP ESI,dword ptr [ECX]
0073abee  JNZ 0x0073ac2a
0073abf0  MOV ESI,dword ptr [EAX + 0x1c]
0073abf3  CMP ESI,dword ptr [ECX + 0x4]
0073abf6  JNZ 0x0073ac2a
0073abf8  MOV ESI,dword ptr [EAX + 0x20]
0073abfb  CMP ESI,dword ptr [ECX + 0x8]
0073abfe  JNZ 0x0073ac2a
0073ac00  MOV ESI,dword ptr [EAX + 0x24]
0073ac03  CMP ESI,dword ptr [ECX + 0xc]
0073ac06  JNZ 0x0073ac2a
0073ac08  MOV ESI,dword ptr [EAX + 0x28]
0073ac0b  CMP ESI,dword ptr [ECX + 0x10]
0073ac0e  JNZ 0x0073ac2a
0073ac10  MOV ESI,dword ptr [EAX + 0x2c]
0073ac13  CMP ESI,dword ptr [ECX + 0x14]
0073ac16  JNZ 0x0073ac2a
0073ac18  INC EDI
0073ac19  ADD EAX,0x34
0073ac1c  ADD ECX,0x34
0073ac1f  CMP EDI,0x1
0073ac22  JL 0x0073abd2
0073ac24  POP EBX
0073ac25  POP EDI
0073ac26  MOV AL,0x1
0073ac28  POP ESI
0073ac29  RET
0073ac2a  POP EBX
0073ac2b  POP EDI
0073ac2c  XOR AL,AL
0073ac2e  POP ESI
0073ac2f  RET
