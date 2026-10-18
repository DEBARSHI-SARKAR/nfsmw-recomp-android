007cbbf0  PUSH EBP
007cbbf1  MOV EBP,ESP
007cbbf3  SUB ESP,0x8
007cbbf6  CALL 0x007dd1c0
007cbbfb  MOV EAX,dword ptr [EAX]
007cbbfd  MOV dword ptr [EBP + -0x4],EAX
007cbc00  FNINIT
007cbc02  CALL 0x007cd9a0
007cbc07  CMP dword ptr [EBP + -0x4],0x0
007cbc0b  JZ 0x007cbc3c
007cbc0d  MOV ECX,dword ptr [EBP + -0x4]
007cbc10  MOV EDX,dword ptr [ECX + 0x4]
007cbc13  MOV EAX,dword ptr [EDX]
007cbc15  AND EAX,0x10008
007cbc1a  JZ 0x007cbc3c
007cbc1c  MOV ECX,dword ptr [EBP + -0x4]
007cbc1f  MOV EDX,dword ptr [ECX + 0x4]
007cbc22  ADD EDX,0x1c
007cbc25  MOV dword ptr [EBP + -0x8],EDX
007cbc28  MOV EAX,dword ptr [EBP + -0x8]
007cbc2b  MOV dword ptr [EAX + 0x4],0x0
007cbc32  MOV ECX,dword ptr [EBP + -0x8]
007cbc35  MOV dword ptr [ECX + 0x8],0xffff
007cbc3c  MOV ESP,EBP
007cbc3e  POP EBP
007cbc3f  RET
