005b07d0  MOV AL,byte ptr [ESP + 0x4]
005b07d4  MOV byte ptr [ECX],AL
005b07d6  MOV EAX,dword ptr [ECX + 0xe0]
005b07dc  TEST EAX,EAX
005b07de  JZ 0x005b07ec
005b07e0  MOV DL,byte ptr [ECX]
005b07e2  MOV byte ptr [EAX + 0x14],DL
005b07e5  MOV EAX,dword ptr [EAX + 0x4]
005b07e8  TEST EAX,EAX
005b07ea  JNZ 0x005b07e0
005b07ec  RET 0x4
