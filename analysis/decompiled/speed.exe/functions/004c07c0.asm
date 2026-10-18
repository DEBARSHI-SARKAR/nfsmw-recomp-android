004c07c0  PUSH 0x0
004c07c2  PUSH 0x10
004c07c4  MOV ECX,0x925b30
004c07c9  CALL 0x005d29d0
004c07ce  TEST EAX,EAX
004c07d0  JZ 0x004c07ee
004c07d2  MOV ECX,dword ptr [ESP + 0x4]
004c07d6  MOV EDX,dword ptr [ESP + 0x8]
004c07da  MOV dword ptr [EAX],ECX
004c07dc  MOV ECX,dword ptr [ESP + 0xc]
004c07e0  MOV dword ptr [EAX + 0x4],EDX
004c07e3  MOV EDX,dword ptr [ECX]
004c07e5  MOV dword ptr [EAX + 0x8],EDX
004c07e8  MOV ECX,dword ptr [ECX + 0x4]
004c07eb  MOV dword ptr [EAX + 0xc],ECX
004c07ee  RET 0xc
