004a6ba0  MOV EDX,dword ptr [ESP + 0x4]
004a6ba4  SUB ESP,0x20
004a6ba7  PUSH ESI
004a6ba8  PUSH EDI
004a6ba9  MOV EDI,dword ptr [0x00911800]
004a6baf  PUSH 0x0
004a6bb1  MOV ESI,ECX
004a6bb3  MOV ECX,dword ptr [ESI + 0x18]
004a6bb6  MOV EAX,dword ptr [ECX]
004a6bb8  PUSH EDI
004a6bb9  PUSH EDX
004a6bba  CALL dword ptr [EAX + 0x18]
004a6bbd  TEST AL,AL
004a6bbf  JZ 0x004a6c6d
004a6bc5  FLD float ptr [0x00890968]
004a6bcb  PUSH EBX
004a6bcc  FLD float ptr [ESI + 0x28]
004a6bcf  LEA EBX,[EDI + 0x10]
004a6bd2  MOV EAX,EBX
004a6bd4  FUCOMPP
004a6bd6  MOV ECX,dword ptr [EAX]
004a6bd8  MOV EDX,dword ptr [EAX + 0x4]
004a6bdb  PUSH EBP
004a6bdc  MOV EBP,dword ptr [EAX + 0x8]
004a6bdf  MOV EAX,dword ptr [EAX + 0xc]
004a6be2  MOV dword ptr [ESP + 0x1c],EAX
004a6be6  FNSTSW AX
004a6be8  MOV dword ptr [ESP + 0x10],ECX
004a6bec  TEST AH,0x44
004a6bef  MOV dword ptr [ESP + 0x14],EDX
004a6bf3  MOV dword ptr [ESP + 0x18],EBP
004a6bf7  JNP 0x004a6c58
004a6bf9  MOV ECX,dword ptr [ESI + 0x34]
004a6bfc  PUSH 0x0
004a6bfe  PUSH EDI
004a6bff  CALL 0x0049ff90
004a6c04  MOV ECX,dword ptr [ESI + 0x1c]
004a6c07  MOV EAX,dword ptr [ESP + 0x38]
004a6c0b  MOV EDX,dword ptr [ECX]
004a6c0d  PUSH 0x0
004a6c0f  PUSH EDI
004a6c10  PUSH EAX
004a6c11  CALL dword ptr [EDX + 0x18]
004a6c14  TEST AL,AL
004a6c16  JZ 0x004a6c6b
004a6c18  MOV EDX,dword ptr [EBX + 0x4]
004a6c1b  MOV ECX,dword ptr [EBX]
004a6c1d  MOV EAX,dword ptr [EBX + 0x8]
004a6c20  MOV dword ptr [ESP + 0x24],EDX
004a6c24  MOV EDX,dword ptr [ESP + 0x3c]
004a6c28  MOV dword ptr [ESP + 0x20],ECX
004a6c2c  MOV ECX,dword ptr [EBX + 0xc]
004a6c2f  PUSH EDX
004a6c30  MOV EDX,dword ptr [ESI + 0x28]
004a6c33  MOV dword ptr [ESP + 0x2c],EAX
004a6c37  LEA EAX,[ESP + 0x24]
004a6c3b  MOV dword ptr [ESP + 0x30],ECX
004a6c3f  PUSH EAX
004a6c40  LEA ECX,[ESP + 0x18]
004a6c44  PUSH ECX
004a6c45  PUSH EDX
004a6c46  CALL 0x0048d7d0
004a6c4b  ADD ESP,0x10
004a6c4e  POP EBP
004a6c4f  POP EBX
004a6c50  POP EDI
004a6c51  POP ESI
004a6c52  ADD ESP,0x20
004a6c55  RET 0xc
004a6c58  MOV EAX,dword ptr [ESP + 0x3c]
004a6c5c  MOV dword ptr [EAX],ECX
004a6c5e  MOV ECX,dword ptr [ESP + 0x1c]
004a6c62  MOV dword ptr [EAX + 0x4],EDX
004a6c65  MOV dword ptr [EAX + 0x8],EBP
004a6c68  MOV dword ptr [EAX + 0xc],ECX
004a6c6b  POP EBP
004a6c6c  POP EBX
004a6c6d  POP EDI
004a6c6e  POP ESI
004a6c6f  ADD ESP,0x20
004a6c72  RET 0xc
