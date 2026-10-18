004bccd0  PUSH ECX
004bccd1  MOV EAX,dword ptr [ECX + 0x84]
004bccd7  DEC EAX
004bccd8  CMP EAX,0x3
004bccdb  JA 0x004bcd1b
004bccdd  JMP dword ptr [EAX*0x4 + 0x4bcd38]
004bcce4  ADD ESP,0x4
004bcce7  ADD ECX,0x30
004bccea  JMP 0x004b0320
004bccef  MOV EDX,dword ptr [ECX + 0x18]
004bccf2  FLD float ptr [EDX + 0x64]
004bccf5  MOV EAX,dword ptr [ESP + 0x8]
004bccf9  PUSH ESI
004bccfa  FST float ptr [ESP + 0x4]
004bccfe  LEA ESI,[ECX + 0x30]
004bcd01  PUSH EAX
004bcd02  FSTP float ptr [ESI + 0xc]
004bcd05  MOV ECX,ESI
004bcd07  CALL 0x004b0320
004bcd0c  MOV AL,byte ptr [ESI + 0x18]
004bcd0f  TEST AL,AL
004bcd11  JZ 0x004bcd1a
004bcd13  MOV ECX,dword ptr [ESP + 0x4]
004bcd17  MOV dword ptr [ESI + 0x14],ECX
004bcd1a  POP ESI
004bcd1b  POP ECX
004bcd1c  RET 0x4
004bcd1f  MOV EDX,dword ptr [ECX + 0x18]
004bcd22  MOV EAX,dword ptr [EDX + 0x64]
004bcd25  MOV EDX,dword ptr [ESP + 0x8]
004bcd29  PUSH EAX
004bcd2a  PUSH EDX
004bcd2b  ADD ECX,0x30
004bcd2e  CALL 0x004ba340
004bcd33  POP ECX
004bcd34  RET 0x4
