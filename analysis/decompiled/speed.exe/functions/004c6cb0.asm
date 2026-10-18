004c6cb0  PUSH 0x0
004c6cb2  PUSH 0x30
004c6cb4  MOV ECX,0x925b30
004c6cb9  CALL 0x005d29d0
004c6cbe  TEST EAX,EAX
004c6cc0  JZ 0x004c6d08
004c6cc2  MOV ECX,dword ptr [ESP + 0x4]
004c6cc6  MOV EDX,dword ptr [ESP + 0x8]
004c6cca  MOV dword ptr [EAX],ECX
004c6ccc  MOV ECX,dword ptr [ESP + 0xc]
004c6cd0  MOV dword ptr [EAX + 0x4],EDX
004c6cd3  MOV EDX,dword ptr [ECX]
004c6cd5  MOV dword ptr [EAX + 0x8],EDX
004c6cd8  MOV EDX,dword ptr [ECX + 0x8]
004c6cdb  MOV dword ptr [EAX + 0x10],EDX
004c6cde  MOV EDX,dword ptr [ECX + 0xc]
004c6ce1  MOV dword ptr [EAX + 0x14],EDX
004c6ce4  MOV EDX,dword ptr [ECX + 0x10]
004c6ce7  MOV dword ptr [EAX + 0x18],EDX
004c6cea  MOV EDX,dword ptr [ECX + 0x14]
004c6ced  MOV dword ptr [EAX + 0x1c],EDX
004c6cf0  MOV EDX,dword ptr [ECX + 0x18]
004c6cf3  MOV dword ptr [EAX + 0x20],EDX
004c6cf6  MOV DL,byte ptr [ECX + 0x1c]
004c6cf9  MOV byte ptr [EAX + 0x24],DL
004c6cfc  MOV EDX,dword ptr [ECX + 0x20]
004c6cff  MOV dword ptr [EAX + 0x28],EDX
004c6d02  MOV ECX,dword ptr [ECX + 0x24]
004c6d05  MOV dword ptr [EAX + 0x2c],ECX
004c6d08  RET 0xc
