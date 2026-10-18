005aaab0  PUSH EBX
005aaab1  MOV EBX,dword ptr [ESP + 0x10]
005aaab5  PUSH ESI
005aaab6  MOV ESI,dword ptr [ESP + 0x10]
005aaaba  PUSH EDI
005aaabb  MOV EDI,ECX
005aaabd  MOV EAX,dword ptr [EDI + 0x4]
005aaac0  CMP ESI,dword ptr [EAX]
005aaac2  JNZ 0x005aaafc
005aaac4  CMP EBX,EAX
005aaac6  JNZ 0x005aaafc
005aaac8  MOV EAX,dword ptr [EAX + 0x4]
005aaacb  PUSH EAX
005aaacc  MOV ECX,EDI
005aaace  CALL 0x00594660
005aaad3  MOV EAX,dword ptr [EDI + 0x4]
005aaad6  MOV dword ptr [EAX + 0x4],EAX
005aaad9  MOV EAX,dword ptr [EDI + 0x4]
005aaadc  MOV dword ptr [EDI + 0x8],0x0
005aaae3  MOV dword ptr [EAX],EAX
005aaae5  MOV EAX,dword ptr [EDI + 0x4]
005aaae8  MOV dword ptr [EAX + 0x8],EAX
005aaaeb  MOV ECX,dword ptr [EDI + 0x4]
005aaaee  MOV EDX,dword ptr [ECX]
005aaaf0  MOV EAX,dword ptr [ESP + 0x10]
005aaaf4  POP EDI
005aaaf5  POP ESI
005aaaf6  MOV dword ptr [EAX],EDX
005aaaf8  POP EBX
005aaaf9  RET 0xc
005aaafc  CMP ESI,EBX
005aaafe  JZ 0x005aab5b
005aab00  MOV AL,byte ptr [ESI + 0x15]
005aab03  TEST AL,AL
005aab05  MOV ECX,ESI
005aab07  JNZ 0x005aab4a
005aab09  MOV EAX,dword ptr [ESI + 0x8]
005aab0c  MOV DL,byte ptr [EAX + 0x15]
005aab0f  TEST DL,DL
005aab11  JNZ 0x005aab2d
005aab13  MOV ESI,EAX
005aab15  MOV EAX,dword ptr [ESI]
005aab17  MOV DL,byte ptr [EAX + 0x15]
005aab1a  TEST DL,DL
005aab1c  JNZ 0x005aab4a
005aab1e  MOV EDI,EDI
005aab20  MOV ESI,EAX
005aab22  MOV EAX,dword ptr [ESI]
005aab24  MOV DL,byte ptr [EAX + 0x15]
005aab27  TEST DL,DL
005aab29  JZ 0x005aab20
005aab2b  JMP 0x005aab4a
005aab2d  MOV EAX,dword ptr [ESI + 0x4]
005aab30  MOV DL,byte ptr [EAX + 0x15]
005aab33  TEST DL,DL
005aab35  JNZ 0x005aab48
005aab37  CMP ESI,dword ptr [EAX + 0x8]
005aab3a  JNZ 0x005aab48
005aab3c  MOV ESI,EAX
005aab3e  MOV EAX,dword ptr [EAX + 0x4]
005aab41  MOV DL,byte ptr [EAX + 0x15]
005aab44  TEST DL,DL
005aab46  JZ 0x005aab37
005aab48  MOV ESI,EAX
005aab4a  PUSH ECX
005aab4b  LEA EAX,[ESP + 0x18]
005aab4f  PUSH EAX
005aab50  MOV ECX,EDI
005aab52  CALL 0x005a9f40
005aab57  CMP ESI,EBX
005aab59  JNZ 0x005aab00
005aab5b  MOV EAX,dword ptr [ESP + 0x10]
005aab5f  POP EDI
005aab60  MOV dword ptr [EAX],ESI
005aab62  POP ESI
005aab63  POP EBX
005aab64  RET 0xc
