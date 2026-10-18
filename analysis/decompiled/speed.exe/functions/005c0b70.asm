005c0b70  SUB ESP,0x20
005c0b73  PUSH EBX
005c0b74  PUSH EBP
005c0b75  MOV EBP,dword ptr [ESP + 0x2c]
005c0b79  XOR BL,BL
005c0b7b  CMP EBP,-0x1
005c0b7e  PUSH ESI
005c0b7f  MOV ESI,ECX
005c0b81  JNZ 0x005c0bad
005c0b83  MOV EAX,dword ptr [ESP + 0x34]
005c0b87  MOV ECX,dword ptr [EAX]
005c0b89  MOV dword ptr [ESI + 0x18],ECX
005c0b8c  MOV EDX,dword ptr [EAX + 0x4]
005c0b8f  MOV dword ptr [ESI + 0x1c],EDX
005c0b92  MOV ECX,dword ptr [EAX + 0x8]
005c0b95  MOV dword ptr [ESI + 0x20],ECX
005c0b98  MOV EDX,dword ptr [EAX + 0xc]
005c0b9b  MOV dword ptr [ESI + 0x24],EDX
005c0b9e  AND byte ptr [ESI + 0x3],0x7f
005c0ba2  POP ESI
005c0ba3  POP EBP
005c0ba4  MOV AL,BL
005c0ba6  POP EBX
005c0ba7  ADD ESP,0x20
005c0baa  RET 0x8
005c0bad  PUSH EDI
005c0bae  PUSH EBP
005c0baf  MOV ECX,ESI
005c0bb1  CALL 0x005aecb0
005c0bb6  MOV EDI,EAX
005c0bb8  CMP dword ptr [EDI + 0xc],EBP
005c0bbb  JZ 0x005c0bc9
005c0bbd  PUSH EBP
005c0bbe  MOV ECX,ESI
005c0bc0  MOV BL,0x1
005c0bc2  CALL 0x005c0830
005c0bc7  MOV EDI,EAX
005c0bc9  LEA EAX,[ESI + 0x18]
005c0bcc  MOV ECX,dword ptr [EAX]
005c0bce  MOV EDX,dword ptr [EAX + 0x4]
005c0bd1  MOV dword ptr [ESP + 0x10],ECX
005c0bd5  FLD float ptr [ESP + 0x10]
005c0bd9  MOV ECX,dword ptr [EAX + 0x8]
005c0bdc  FCHS
005c0bde  FSTP float ptr [ESP + 0x10]
005c0be2  MOV dword ptr [ESP + 0x14],EDX
005c0be6  FLD float ptr [ESP + 0x14]
005c0bea  MOV EDX,dword ptr [EAX + 0xc]
005c0bed  FCHS
005c0bef  MOV dword ptr [ESP + 0x18],ECX
005c0bf3  FSTP float ptr [ESP + 0x14]
005c0bf7  LEA EAX,[ESP + 0x10]
005c0bfb  FLD float ptr [ESP + 0x18]
005c0bff  PUSH EAX
005c0c00  LEA ECX,[ESP + 0x24]
005c0c04  FCHS
005c0c06  PUSH ECX
005c0c07  FSTP float ptr [ESP + 0x20]
005c0c0b  MOV ECX,dword ptr [ESP + 0x40]
005c0c0f  MOV dword ptr [ESP + 0x24],EDX
005c0c13  CALL 0x005ad0f0
005c0c18  MOV EDX,dword ptr [EAX]
005c0c1a  MOV dword ptr [EDI + 0x10],EDX
005c0c1d  MOV ECX,dword ptr [EAX + 0x4]
005c0c20  MOV dword ptr [EDI + 0x14],ECX
005c0c23  MOV EDX,dword ptr [EAX + 0x8]
005c0c26  MOV dword ptr [EDI + 0x18],EDX
005c0c29  MOV EAX,dword ptr [EAX + 0xc]
005c0c2c  MOV dword ptr [EDI + 0x1c],EAX
005c0c2f  MOV AL,byte ptr [ESI + 0x3]
005c0c32  POP EDI
005c0c33  AND AL,0x7f
005c0c35  MOV byte ptr [ESI + 0x3],AL
005c0c38  POP ESI
005c0c39  POP EBP
005c0c3a  MOV AL,BL
005c0c3c  POP EBX
005c0c3d  ADD ESP,0x20
005c0c40  RET 0x8
