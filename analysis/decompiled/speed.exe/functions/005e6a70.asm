005e6a70  PUSH 0x0
005e6a72  PUSH 0x18
005e6a74  MOV ECX,0x925b30
005e6a79  CALL 0x005d29d0
005e6a7e  TEST EAX,EAX
005e6a80  JZ 0x005e6ab0
005e6a82  MOV ECX,dword ptr [ESP + 0x4]
005e6a86  MOV EDX,dword ptr [ESP + 0x8]
005e6a8a  MOV dword ptr [EAX],ECX
005e6a8c  MOV ECX,dword ptr [ESP + 0xc]
005e6a90  MOV dword ptr [EAX + 0x8],ECX
005e6a93  MOV ECX,dword ptr [ESP + 0x10]
005e6a97  MOV dword ptr [EAX + 0x4],EDX
005e6a9a  MOV EDX,dword ptr [ECX]
005e6a9c  MOV dword ptr [EAX + 0xc],EDX
005e6a9f  MOV ECX,dword ptr [ECX + 0x4]
005e6aa2  MOV DL,byte ptr [ESP + 0x14]
005e6aa6  MOV dword ptr [EAX + 0x10],ECX
005e6aa9  MOV byte ptr [EAX + 0x14],DL
005e6aac  MOV byte ptr [EAX + 0x15],0x0
005e6ab0  RET 0x14
