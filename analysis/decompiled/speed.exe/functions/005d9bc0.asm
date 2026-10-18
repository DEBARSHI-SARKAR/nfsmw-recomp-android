005d9bc0  PUSH 0x0
005d9bc2  PUSH 0x6d9e21ad
005d9bc7  CALL 0x00454810
005d9bcc  TEST EAX,EAX
005d9bce  JZ 0x005d9be9
005d9bd0  MOV EDX,dword ptr [EAX]
005d9bd2  MOV ECX,dword ptr [ESP + 0x4]
005d9bd6  MOV dword ptr [ECX],EDX
005d9bd8  MOV EDX,dword ptr [EAX + 0x4]
005d9bdb  MOV dword ptr [ECX + 0x4],EDX
005d9bde  MOV EAX,dword ptr [EAX + 0x8]
005d9be1  MOV dword ptr [ECX + 0x8],EAX
005d9be4  MOV AL,0x1
005d9be6  RET 0x4
005d9be9  XOR AL,AL
005d9beb  RET 0x4
