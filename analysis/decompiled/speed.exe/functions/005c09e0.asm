005c09e0  SUB ESP,0xc
005c09e3  PUSH EBX
005c09e4  PUSH ESI
005c09e5  PUSH EDI
005c09e6  MOV EDI,dword ptr [ESP + 0x1c]
005c09ea  XOR BL,BL
005c09ec  CMP EDI,-0x1
005c09ef  MOV ESI,ECX
005c09f1  JNZ 0x005c0a1b
005c09f3  MOV EAX,dword ptr [ESP + 0x20]
005c09f7  MOV ECX,dword ptr [EAX]
005c09f9  MOV dword ptr [ESI + 0x18],ECX
005c09fc  MOV EDX,dword ptr [EAX + 0x4]
005c09ff  MOV dword ptr [ESI + 0x1c],EDX
005c0a02  MOV EAX,dword ptr [EAX + 0x8]
005c0a05  MOV dword ptr [ESI + 0x20],EAX
005c0a08  MOV AL,byte ptr [ESI + 0x3]
005c0a0b  AND AL,0x7f
005c0a0d  POP EDI
005c0a0e  MOV byte ptr [ESI + 0x3],AL
005c0a11  POP ESI
005c0a12  MOV AL,BL
005c0a14  POP EBX
005c0a15  ADD ESP,0xc
005c0a18  RET 0x8
005c0a1b  PUSH EDI
005c0a1c  MOV ECX,ESI
005c0a1e  CALL 0x005aecb0
005c0a23  CMP dword ptr [EAX + 0xc],EDI
005c0a26  JZ 0x005c0a32
005c0a28  PUSH EDI
005c0a29  MOV ECX,ESI
005c0a2b  MOV BL,0x1
005c0a2d  CALL 0x005c0830
005c0a32  MOV ECX,dword ptr [ESP + 0x20]
005c0a36  FLD float ptr [ECX]
005c0a38  POP EDI
005c0a39  FSUB float ptr [ESI + 0x18]
005c0a3c  FLD float ptr [ECX + 0x4]
005c0a3f  FSUB float ptr [ESI + 0x1c]
005c0a42  FLD float ptr [ECX + 0x8]
005c0a45  FSUB float ptr [ESI + 0x20]
005c0a48  FSTP float ptr [ESP + 0x10]
005c0a4c  MOV ECX,dword ptr [ESP + 0x10]
005c0a50  FXCH
005c0a52  MOV dword ptr [EAX + 0x18],ECX
005c0a55  FSTP float ptr [EAX + 0x10]
005c0a58  FSTP float ptr [EAX + 0x14]
005c0a5b  MOV AL,byte ptr [ESI + 0x3]
005c0a5e  AND AL,0x7f
005c0a60  MOV byte ptr [ESI + 0x3],AL
005c0a63  POP ESI
005c0a64  MOV AL,BL
005c0a66  POP EBX
005c0a67  ADD ESP,0xc
005c0a6a  RET 0x8
