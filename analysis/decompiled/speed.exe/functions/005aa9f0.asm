005aa9f0  PUSH EBX
005aa9f1  MOV EBX,dword ptr [ESP + 0x10]
005aa9f5  PUSH ESI
005aa9f6  MOV ESI,dword ptr [ESP + 0x10]
005aa9fa  PUSH EDI
005aa9fb  MOV EDI,ECX
005aa9fd  MOV EAX,dword ptr [EDI + 0x4]
005aaa00  CMP ESI,dword ptr [EAX]
005aaa02  JNZ 0x005aaa3c
005aaa04  CMP EBX,EAX
005aaa06  JNZ 0x005aaa3c
005aaa08  MOV EAX,dword ptr [EAX + 0x4]
005aaa0b  PUSH EAX
005aaa0c  MOV ECX,EDI
005aaa0e  CALL 0x00594610
005aaa13  MOV EAX,dword ptr [EDI + 0x4]
005aaa16  MOV dword ptr [EAX + 0x4],EAX
005aaa19  MOV EAX,dword ptr [EDI + 0x4]
005aaa1c  MOV dword ptr [EDI + 0x8],0x0
005aaa23  MOV dword ptr [EAX],EAX
005aaa25  MOV EAX,dword ptr [EDI + 0x4]
005aaa28  MOV dword ptr [EAX + 0x8],EAX
005aaa2b  MOV ECX,dword ptr [EDI + 0x4]
005aaa2e  MOV EDX,dword ptr [ECX]
005aaa30  MOV EAX,dword ptr [ESP + 0x10]
005aaa34  POP EDI
005aaa35  POP ESI
005aaa36  MOV dword ptr [EAX],EDX
005aaa38  POP EBX
005aaa39  RET 0xc
005aaa3c  CMP ESI,EBX
005aaa3e  JZ 0x005aaa9b
005aaa40  MOV AL,byte ptr [ESI + 0x15]
005aaa43  TEST AL,AL
005aaa45  MOV ECX,ESI
005aaa47  JNZ 0x005aaa8a
005aaa49  MOV EAX,dword ptr [ESI + 0x8]
005aaa4c  MOV DL,byte ptr [EAX + 0x15]
005aaa4f  TEST DL,DL
005aaa51  JNZ 0x005aaa6d
005aaa53  MOV ESI,EAX
005aaa55  MOV EAX,dword ptr [ESI]
005aaa57  MOV DL,byte ptr [EAX + 0x15]
005aaa5a  TEST DL,DL
005aaa5c  JNZ 0x005aaa8a
005aaa5e  MOV EDI,EDI
005aaa60  MOV ESI,EAX
005aaa62  MOV EAX,dword ptr [ESI]
005aaa64  MOV DL,byte ptr [EAX + 0x15]
005aaa67  TEST DL,DL
005aaa69  JZ 0x005aaa60
005aaa6b  JMP 0x005aaa8a
005aaa6d  MOV EAX,dword ptr [ESI + 0x4]
005aaa70  MOV DL,byte ptr [EAX + 0x15]
005aaa73  TEST DL,DL
005aaa75  JNZ 0x005aaa88
005aaa77  CMP ESI,dword ptr [EAX + 0x8]
005aaa7a  JNZ 0x005aaa88
005aaa7c  MOV ESI,EAX
005aaa7e  MOV EAX,dword ptr [EAX + 0x4]
005aaa81  MOV DL,byte ptr [EAX + 0x15]
005aaa84  TEST DL,DL
005aaa86  JZ 0x005aaa77
005aaa88  MOV ESI,EAX
005aaa8a  PUSH ECX
005aaa8b  LEA EAX,[ESP + 0x18]
005aaa8f  PUSH EAX
005aaa90  MOV ECX,EDI
005aaa92  CALL 0x005a9c70
005aaa97  CMP ESI,EBX
005aaa99  JNZ 0x005aaa40
005aaa9b  MOV EAX,dword ptr [ESP + 0x10]
005aaa9f  POP EDI
005aaaa0  MOV dword ptr [EAX],ESI
005aaaa2  POP ESI
005aaaa3  POP EBX
005aaaa4  RET 0xc
