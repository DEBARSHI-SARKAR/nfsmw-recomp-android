005aab70  PUSH EBX
005aab71  MOV EBX,dword ptr [ESP + 0x10]
005aab75  PUSH ESI
005aab76  MOV ESI,dword ptr [ESP + 0x10]
005aab7a  PUSH EDI
005aab7b  MOV EDI,ECX
005aab7d  MOV EAX,dword ptr [EDI + 0x4]
005aab80  CMP ESI,dword ptr [EAX]
005aab82  JNZ 0x005aabbc
005aab84  CMP EBX,EAX
005aab86  JNZ 0x005aabbc
005aab88  MOV EAX,dword ptr [EAX + 0x4]
005aab8b  PUSH EAX
005aab8c  MOV ECX,EDI
005aab8e  CALL 0x005946b0
005aab93  MOV EAX,dword ptr [EDI + 0x4]
005aab96  MOV dword ptr [EAX + 0x4],EAX
005aab99  MOV EAX,dword ptr [EDI + 0x4]
005aab9c  MOV dword ptr [EDI + 0x8],0x0
005aaba3  MOV dword ptr [EAX],EAX
005aaba5  MOV EAX,dword ptr [EDI + 0x4]
005aaba8  MOV dword ptr [EAX + 0x8],EAX
005aabab  MOV ECX,dword ptr [EDI + 0x4]
005aabae  MOV EDX,dword ptr [ECX]
005aabb0  MOV EAX,dword ptr [ESP + 0x10]
005aabb4  POP EDI
005aabb5  POP ESI
005aabb6  MOV dword ptr [EAX],EDX
005aabb8  POP EBX
005aabb9  RET 0xc
005aabbc  CMP ESI,EBX
005aabbe  JZ 0x005aac1b
005aabc0  MOV AL,byte ptr [ESI + 0x11]
005aabc3  TEST AL,AL
005aabc5  MOV ECX,ESI
005aabc7  JNZ 0x005aac0a
005aabc9  MOV EAX,dword ptr [ESI + 0x8]
005aabcc  MOV DL,byte ptr [EAX + 0x11]
005aabcf  TEST DL,DL
005aabd1  JNZ 0x005aabed
005aabd3  MOV ESI,EAX
005aabd5  MOV EAX,dword ptr [ESI]
005aabd7  MOV DL,byte ptr [EAX + 0x11]
005aabda  TEST DL,DL
005aabdc  JNZ 0x005aac0a
005aabde  MOV EDI,EDI
005aabe0  MOV ESI,EAX
005aabe2  MOV EAX,dword ptr [ESI]
005aabe4  MOV DL,byte ptr [EAX + 0x11]
005aabe7  TEST DL,DL
005aabe9  JZ 0x005aabe0
005aabeb  JMP 0x005aac0a
005aabed  MOV EAX,dword ptr [ESI + 0x4]
005aabf0  MOV DL,byte ptr [EAX + 0x11]
005aabf3  TEST DL,DL
005aabf5  JNZ 0x005aac08
005aabf7  CMP ESI,dword ptr [EAX + 0x8]
005aabfa  JNZ 0x005aac08
005aabfc  MOV ESI,EAX
005aabfe  MOV EAX,dword ptr [EAX + 0x4]
005aac01  MOV DL,byte ptr [EAX + 0x11]
005aac04  TEST DL,DL
005aac06  JZ 0x005aabf7
005aac08  MOV ESI,EAX
005aac0a  PUSH ECX
005aac0b  LEA EAX,[ESP + 0x18]
005aac0f  PUSH EAX
005aac10  MOV ECX,EDI
005aac12  CALL 0x005aa210
005aac17  CMP ESI,EBX
005aac19  JNZ 0x005aabc0
005aac1b  MOV EAX,dword ptr [ESP + 0x10]
005aac1f  POP EDI
005aac20  MOV dword ptr [EAX],ESI
005aac22  POP ESI
005aac23  POP EBX
005aac24  RET 0xc
