005afe00  PUSH ECX
005afe01  MOV EAX,dword ptr [ESP + 0x10]
005afe05  MOV ECX,dword ptr [EAX]
005afe07  PUSH EBX
005afe08  MOV EBX,dword ptr [ESP + 0x18]
005afe0c  PUSH EBP
005afe0d  PUSH ESI
005afe0e  PUSH EDI
005afe0f  XOR DL,DL
005afe11  XOR EDI,EDI
005afe13  CMP ECX,EBX
005afe15  JNC 0x005afea7
005afe1b  MOV ESI,dword ptr [ESP + 0x1c]
005afe1f  MOV EAX,0x1
005afe24  SUB EAX,ESI
005afe26  LEA EBP,[ECX + ESI*0x1]
005afe29  MOV ESI,dword ptr [ESP + 0x18]
005afe2d  MOV dword ptr [ESP + 0x10],EAX
005afe31  MOV AL,byte ptr [EBP]
005afe34  CMP AL,0xd
005afe36  JZ 0x005afeab
005afe38  CMP AL,0xa
005afe3a  JZ 0x005afeab
005afe3c  TEST DL,DL
005afe3e  JZ 0x005afe63
005afe40  CMP AL,0x5c
005afe42  JNZ 0x005afe4e
005afe44  MOV word ptr [ESI],DI
005afe47  ADD ESI,0x2
005afe4a  XOR DL,DL
005afe4c  JMP 0x005afe9f
005afe4e  CMP AL,0x30
005afe50  JL 0x005afe9f
005afe52  CMP AL,0x39
005afe54  JG 0x005afe9f
005afe56  MOVSX AX,AL
005afe5a  LEA EDI,[EDI + EDI*0x4]
005afe5d  LEA EDI,[EAX + EDI*0x2 + -0x30]
005afe61  JMP 0x005afe9f
005afe63  CMP AL,0x5c
005afe65  JNZ 0x005afe95
005afe67  MOV EAX,dword ptr [ESP + 0x10]
005afe6b  MOV EBX,dword ptr [ESP + 0x24]
005afe6f  ADD EAX,EBP
005afe71  CMP EAX,EBX
005afe73  JNC 0x005afe8b
005afe75  MOV EAX,dword ptr [ESP + 0x1c]
005afe79  CMP byte ptr [ECX + EAX*0x1 + 0x1],0x5c
005afe7e  JNZ 0x005afe8b
005afe80  MOV EBX,dword ptr [ESP + 0x24]
005afe84  MOV word ptr [ESI],0x5c
005afe89  JMP 0x005afe9c
005afe8b  MOV EBX,dword ptr [ESP + 0x24]
005afe8f  MOV DL,0x1
005afe91  XOR EDI,EDI
005afe93  JMP 0x005afe9f
005afe95  MOVSX AX,AL
005afe99  MOV word ptr [ESI],AX
005afe9c  ADD ESI,0x2
005afe9f  INC ECX
005afea0  INC EBP
005afea1  CMP ECX,EBX
005afea3  JC 0x005afe31
005afea5  JMP 0x005afeab
005afea7  MOV ESI,dword ptr [ESP + 0x18]
005afeab  CMP ECX,EBX
005afead  MOV word ptr [ESI],0x0
005afeb2  JNC 0x005afec8
005afeb4  MOV EDX,dword ptr [ESP + 0x1c]
005afeb8  MOV AL,byte ptr [ECX + EDX*0x1]
005afebb  CMP AL,0xd
005afebd  JZ 0x005afec3
005afebf  CMP AL,0xa
005afec1  JNZ 0x005afec8
005afec3  INC ECX
005afec4  CMP ECX,EBX
005afec6  JC 0x005afeb4
005afec8  MOV EAX,dword ptr [ESP + 0x20]
005afecc  POP EDI
005afecd  CMP ECX,EBX
005afecf  POP ESI
005afed0  MOV dword ptr [EAX],ECX
005afed2  SBB EAX,EAX
005afed4  POP EBP
005afed5  NEG EAX
005afed7  POP EBX
005afed8  POP ECX
005afed9  RET 0x10
