005c0ae0  PUSH EBX
005c0ae1  PUSH ESI
005c0ae2  PUSH EDI
005c0ae3  MOV EDI,dword ptr [ESP + 0x10]
005c0ae7  XOR BL,BL
005c0ae9  CMP EDI,-0x1
005c0aec  MOV ESI,ECX
005c0aee  JNZ 0x005c0b1b
005c0af0  MOV EAX,dword ptr [ESP + 0x14]
005c0af4  MOV ECX,dword ptr [EAX + 0xc]
005c0af7  MOV dword ptr [ESI + 0x24],ECX
005c0afa  MOV EDX,dword ptr [EAX + 0x8]
005c0afd  MOV dword ptr [ESI + 0x20],EDX
005c0b00  MOV ECX,dword ptr [EAX + 0x4]
005c0b03  MOV dword ptr [ESI + 0x1c],ECX
005c0b06  MOV EDX,dword ptr [EAX]
005c0b08  MOV dword ptr [ESI + 0x18],EDX
005c0b0b  MOV AL,byte ptr [ESI + 0x3]
005c0b0e  AND AL,0x7f
005c0b10  POP EDI
005c0b11  MOV byte ptr [ESI + 0x3],AL
005c0b14  POP ESI
005c0b15  MOV AL,BL
005c0b17  POP EBX
005c0b18  RET 0x8
005c0b1b  PUSH EDI
005c0b1c  MOV ECX,ESI
005c0b1e  CALL 0x005aecb0
005c0b23  CMP dword ptr [EAX + 0xc],EDI
005c0b26  JZ 0x005c0b32
005c0b28  PUSH EDI
005c0b29  MOV ECX,ESI
005c0b2b  MOV BL,0x1
005c0b2d  CALL 0x005c0830
005c0b32  MOV EDI,dword ptr [ESI + 0x20]
005c0b35  MOV ECX,dword ptr [ESP + 0x14]
005c0b39  MOV EDX,dword ptr [ECX + 0x8]
005c0b3c  PUSH EBP
005c0b3d  MOV EBP,dword ptr [ESI + 0x1c]
005c0b40  SUB EDX,EDI
005c0b42  MOV EDI,dword ptr [ECX + 0x4]
005c0b45  SUB EDI,EBP
005c0b47  MOV EBP,dword ptr [ECX]
005c0b49  MOV ECX,dword ptr [ECX + 0xc]
005c0b4c  SUB EBP,dword ptr [ESI + 0x18]
005c0b4f  SUB ECX,dword ptr [ESI + 0x24]
005c0b52  MOV dword ptr [EAX + 0x14],EDI
005c0b55  MOV dword ptr [EAX + 0x10],EBP
005c0b58  MOV dword ptr [EAX + 0x1c],ECX
005c0b5b  MOV dword ptr [EAX + 0x18],EDX
005c0b5e  MOV AL,byte ptr [ESI + 0x3]
005c0b61  POP EBP
005c0b62  AND AL,0x7f
005c0b64  POP EDI
005c0b65  MOV byte ptr [ESI + 0x3],AL
005c0b68  POP ESI
005c0b69  MOV AL,BL
005c0b6b  POP EBX
005c0b6c  RET 0x8
