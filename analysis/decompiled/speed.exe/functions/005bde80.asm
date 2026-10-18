005bde80  PUSH ESI
005bde81  MOV ESI,ECX
005bde83  MOVZX EAX,byte ptr [ESI + 0x2]
005bde87  SUB EAX,0x0
005bde8a  JZ 0x005bdea6
005bde8c  DEC EAX
005bde8d  JZ 0x005bde94
005bde8f  SUB EAX,0x2
005bde92  JNZ 0x005bdeb9
005bde94  MOV ECX,dword ptr [ESP + 0x8]
005bde98  LEA EAX,[ESP + 0x8]
005bde9c  PUSH EAX
005bde9d  PUSH ECX
005bde9e  PUSH ESI
005bde9f  CALL 0x005b9d10
005bdea4  JMP 0x005bdeb6
005bdea6  MOV EAX,dword ptr [ESP + 0x8]
005bdeaa  LEA EDX,[ESP + 0x8]
005bdeae  PUSH EDX
005bdeaf  PUSH EAX
005bdeb0  PUSH ESI
005bdeb1  CALL 0x005b5840
005bdeb6  ADD ESP,0xc
005bdeb9  MOV ECX,dword ptr [ESP + 0xc]
005bdebd  MOV EDX,dword ptr [ECX]
005bdebf  MOV EAX,dword ptr [ESP + 0x8]
005bdec3  MOV ECX,dword ptr [ESI + 0x18]
005bdec6  SUB EDX,EAX
005bdec8  MOV AL,byte ptr [ESI + 0x3]
005bdecb  ADD ECX,EDX
005bdecd  AND AL,0x7f
005bdecf  MOV dword ptr [ESI + 0x18],ECX
005bded2  MOV byte ptr [ESI + 0x3],AL
005bded5  POP ESI
005bded6  RET 0x8
