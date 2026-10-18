007a4ac0  PUSH ESI
007a4ac1  MOV ESI,ECX
007a4ac3  MOV ECX,dword ptr [ESI + 0x1c0]
007a4ac9  TEST ECX,ECX
007a4acb  JZ 0x007a4ae1
007a4acd  MOV EAX,dword ptr [ECX]
007a4acf  PUSH 0x1
007a4ad1  CALL dword ptr [EAX]
007a4ad3  MOV ECX,dword ptr [ESP + 0x8]
007a4ad7  MOV dword ptr [ESI + 0x1c0],ECX
007a4add  POP ESI
007a4ade  RET 0x4
007a4ae1  MOV EDX,dword ptr [ESP + 0x8]
007a4ae5  MOV dword ptr [ESI + 0x1c0],EDX
007a4aeb  POP ESI
007a4aec  RET 0x4
