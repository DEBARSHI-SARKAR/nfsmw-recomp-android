005aaef0  PUSH ECX
005aaef1  PUSH EBP
005aaef2  MOV EBP,dword ptr [ESP + 0x10]
005aaef6  PUSH ESI
005aaef7  PUSH EDI
005aaef8  MOV EDI,ECX
005aaefa  MOV ESI,dword ptr [EDI + 0x4]
005aaefd  MOV EAX,dword ptr [ESI + 0x4]
005aaf00  MOV DL,byte ptr [EAX + 0x15]
005aaf03  TEST DL,DL
005aaf05  MOV CL,0x1
005aaf07  MOV byte ptr [ESP + 0xc],CL
005aaf0b  JNZ 0x005aaf2d
005aaf0d  MOV EDX,dword ptr [EBP]
005aaf10  CMP EDX,dword ptr [EAX + 0xc]
005aaf13  SETC CL
005aaf16  TEST CL,CL
005aaf18  MOV ESI,EAX
005aaf1a  MOV byte ptr [ESP + 0xc],CL
005aaf1e  JZ 0x005aaf24
005aaf20  MOV EAX,dword ptr [EAX]
005aaf22  JMP 0x005aaf27
005aaf24  MOV EAX,dword ptr [EAX + 0x8]
005aaf27  CMP byte ptr [EAX + 0x15],0x0
005aaf2b  JZ 0x005aaf10
005aaf2d  TEST CL,CL
005aaf2f  MOV EDX,ESI
005aaf31  MOV dword ptr [ESP + 0x18],EDX
005aaf35  JZ 0x005aaf6a
005aaf37  MOV EAX,dword ptr [EDI + 0x4]
005aaf3a  CMP ESI,dword ptr [EAX]
005aaf3c  LEA ECX,[ESP + 0x18]
005aaf40  JNZ 0x005aaf61
005aaf42  PUSH EBP
005aaf43  PUSH ESI
005aaf44  PUSH 0x1
005aaf46  PUSH ECX
005aaf47  MOV ECX,EDI
005aaf49  CALL 0x005aa690
005aaf4e  MOV EDX,dword ptr [EAX]
005aaf50  MOV EAX,dword ptr [ESP + 0x14]
005aaf54  POP EDI
005aaf55  POP ESI
005aaf56  MOV byte ptr [EAX + 0x4],0x1
005aaf5a  MOV dword ptr [EAX],EDX
005aaf5c  POP EBP
005aaf5d  POP ECX
005aaf5e  RET 0x8
005aaf61  CALL 0x0058b6e0
005aaf66  MOV EDX,dword ptr [ESP + 0x18]
005aaf6a  MOV EAX,dword ptr [EDX + 0xc]
005aaf6d  CMP EAX,dword ptr [EBP]
005aaf70  JNC 0x005aaf98
005aaf72  MOV ECX,dword ptr [ESP + 0xc]
005aaf76  PUSH EBP
005aaf77  PUSH ESI
005aaf78  PUSH ECX
005aaf79  LEA EDX,[ESP + 0x24]
005aaf7d  PUSH EDX
005aaf7e  MOV ECX,EDI
005aaf80  CALL 0x005aa690
005aaf85  MOV ECX,dword ptr [EAX]
005aaf87  MOV EAX,dword ptr [ESP + 0x14]
005aaf8b  POP EDI
005aaf8c  POP ESI
005aaf8d  MOV dword ptr [EAX],ECX
005aaf8f  MOV byte ptr [EAX + 0x4],0x1
005aaf93  POP EBP
005aaf94  POP ECX
005aaf95  RET 0x8
005aaf98  MOV EAX,dword ptr [ESP + 0x14]
005aaf9c  POP EDI
005aaf9d  POP ESI
005aaf9e  MOV byte ptr [EAX + 0x4],0x0
005aafa2  MOV dword ptr [EAX],EDX
005aafa4  POP EBP
005aafa5  POP ECX
005aafa6  RET 0x8
