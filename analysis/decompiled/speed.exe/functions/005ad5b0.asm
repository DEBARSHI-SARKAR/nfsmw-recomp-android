005ad5b0  MOV AL,byte ptr [ECX + 0x2c]
005ad5b3  TEST AL,AL
005ad5b5  JZ 0x005ad5bf
005ad5b7  MOV ECX,dword ptr [ECX + 0x30]
005ad5ba  JMP 0x005ad440
005ad5bf  MOV EAX,dword ptr [ECX + 0x30]
005ad5c2  RET
