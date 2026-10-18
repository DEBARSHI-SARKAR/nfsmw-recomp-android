006eec20  PUSH ESI
006eec21  MOV ESI,ECX
006eec23  MOV ECX,dword ptr [ESI + 0x80]
006eec29  TEST ECX,ECX
006eec2b  JZ 0x006eec5d
006eec2d  DEC dword ptr [ESI + 0x28]
006eec30  MOV DL,byte ptr [ECX + 0xc]
006eec33  MOV AL,0x1
006eec35  CMP DL,AL
006eec37  JZ 0x006eec41
006eec39  MOV byte ptr [ECX + 0xc],AL
006eec3c  MOV EAX,dword ptr [ECX]
006eec3e  CALL dword ptr [EAX + 0x4]
006eec41  MOV EDX,dword ptr [ESI]
006eec43  MOV ECX,ESI
006eec45  MOV dword ptr [ESI + 0x80],0x0
006eec4f  CALL dword ptr [EDX + 0x18]
006eec52  MOV byte ptr [ESI + 0x68],0x0
006eec56  MOV dword ptr [ESI + 0x64],0x0
006eec5d  POP ESI
006eec5e  RET
