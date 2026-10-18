005e6c80  PUSH 0x0
005e6c82  PUSH 0x18
005e6c84  MOV ECX,0x925b30
005e6c89  CALL 0x005d29d0
005e6c8e  TEST EAX,EAX
005e6c90  JZ 0x005e6cc0
005e6c92  MOV ECX,dword ptr [ESP + 0x4]
005e6c96  MOV EDX,dword ptr [ESP + 0x8]
005e6c9a  MOV dword ptr [EAX],ECX
005e6c9c  MOV ECX,dword ptr [ESP + 0xc]
005e6ca0  MOV dword ptr [EAX + 0x8],ECX
005e6ca3  MOV ECX,dword ptr [ESP + 0x10]
005e6ca7  MOV dword ptr [EAX + 0x4],EDX
005e6caa  MOV EDX,dword ptr [ECX]
005e6cac  MOV dword ptr [EAX + 0xc],EDX
005e6caf  MOV ECX,dword ptr [ECX + 0x4]
005e6cb2  MOV DL,byte ptr [ESP + 0x14]
005e6cb6  MOV dword ptr [EAX + 0x10],ECX
005e6cb9  MOV byte ptr [EAX + 0x14],DL
005e6cbc  MOV byte ptr [EAX + 0x15],0x0
005e6cc0  RET 0x14
