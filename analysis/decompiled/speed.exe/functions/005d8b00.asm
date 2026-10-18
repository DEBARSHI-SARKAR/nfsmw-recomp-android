005d8b00  MOV EAX,dword ptr [ECX + 0x18]
005d8b03  CMP EAX,0x3
005d8b06  JA 0x005d8b28
005d8b08  JMP dword ptr [EAX*0x4 + 0x5d8b4c]
005d8b0f  MOV dword ptr [ECX + 0x18],0x1
005d8b16  JMP 0x005d8b28
005d8b18  MOV dword ptr [ECX + 0x18],0x2
005d8b1f  JMP 0x005d8b28
005d8b21  MOV dword ptr [ECX + 0x18],0x3
005d8b28  MOV EAX,dword ptr [ECX + 0x18]
005d8b2b  CMP EAX,0x3
005d8b2e  JZ 0x005d8b3f
005d8b30  CMP EAX,0x2
005d8b33  JZ 0x005d8b3f
005d8b35  FLD float ptr [0x0089096c]
005d8b3b  FSTP float ptr [ECX + 0x20]
005d8b3e  RET
005d8b3f  FLD float ptr [0x00890968]
005d8b45  FSTP float ptr [ECX + 0x20]
005d8b48  RET
