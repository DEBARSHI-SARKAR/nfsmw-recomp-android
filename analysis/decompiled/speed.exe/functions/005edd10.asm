005edd10  PUSH ECX
005edd11  PUSH ESI
005edd12  MOV ESI,ECX
005edd14  MOV ECX,dword ptr [ESI + 0x9c]
005edd1a  MOV EAX,dword ptr [ECX]
005edd1c  CMP EAX,ECX
005edd1e  MOV dword ptr [ESP + 0x4],EAX
005edd22  JZ 0x005edd52
005edd24  PUSH EDI
005edd25  MOV EDI,0xbf800000
005edd2a  LEA EBX,[EBX]
005edd30  TEST byte ptr [EAX + 0x1c],0x2
005edd34  JZ 0x005edd3c
005edd36  MOV dword ptr [EAX + 0x18],EDI
005edd39  MOV dword ptr [EAX + 0x14],EDI
005edd3c  LEA ECX,[ESP + 0x8]
005edd40  CALL 0x005e6920
005edd45  MOV EAX,dword ptr [ESP + 0x8]
005edd49  CMP EAX,dword ptr [ESI + 0x9c]
005edd4f  JNZ 0x005edd30
005edd51  POP EDI
005edd52  POP ESI
005edd53  POP ECX
005edd54  RET
