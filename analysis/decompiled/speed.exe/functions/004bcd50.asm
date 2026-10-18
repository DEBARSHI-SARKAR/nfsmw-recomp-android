004bcd50  PUSH ECX
004bcd51  PUSH ESI
004bcd52  MOV ESI,ECX
004bcd54  MOV EAX,dword ptr [ESI + 0x84]
004bcd5a  TEST EAX,EAX
004bcd5c  JLE 0x004bcdae
004bcd5e  CMP EAX,0x4
004bcd61  JG 0x004bcdae
004bcd63  MOV EAX,dword ptr [ESI + 0x18]
004bcd66  FLD float ptr [EAX + 0x60]
004bcd69  MOV ECX,dword ptr [ESP + 0xc]
004bcd6d  PUSH EDI
004bcd6e  FST float ptr [ESP + 0x8]
004bcd72  LEA EDI,[ESI + 0x68]
004bcd75  PUSH ECX
004bcd76  FSTP float ptr [EDI + 0xc]
004bcd79  MOV ECX,EDI
004bcd7b  CALL 0x004b0320
004bcd80  MOV AL,byte ptr [EDI + 0x18]
004bcd83  TEST AL,AL
004bcd85  JZ 0x004bcd8e
004bcd87  MOV EDX,dword ptr [ESP + 0x8]
004bcd8b  MOV dword ptr [EDI + 0x14],EDX
004bcd8e  MOV AL,byte ptr [ESI + 0x80]
004bcd94  TEST AL,AL
004bcd96  JZ 0x004bcdad
004bcd98  MOV ESI,dword ptr [ESI + 0x18]
004bcd9b  MOV EAX,dword ptr [ESI + 0x60]
004bcd9e  PUSH 0x0
004bcda0  PUSH 0x0
004bcda2  MOV ECX,EAX
004bcda4  PUSH EAX
004bcda5  PUSH ECX
004bcda6  MOV ECX,EDI
004bcda8  CALL 0x004b02b0
004bcdad  POP EDI
004bcdae  POP ESI
004bcdaf  POP ECX
004bcdb0  RET 0x4
