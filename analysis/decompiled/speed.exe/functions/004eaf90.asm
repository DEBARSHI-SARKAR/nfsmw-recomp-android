004eaf90  PUSH 0x0
004eaf92  PUSH 0xc
004eaf94  MOV ECX,0x925b30
004eaf99  CALL 0x005d29d0
004eaf9e  TEST EAX,EAX
004eafa0  JZ 0x004eafb8
004eafa2  MOV ECX,dword ptr [ESP + 0x4]
004eafa6  MOV EDX,dword ptr [ESP + 0x8]
004eafaa  MOV dword ptr [EAX],ECX
004eafac  MOV ECX,dword ptr [ESP + 0xc]
004eafb0  MOV dword ptr [EAX + 0x4],EDX
004eafb3  MOV EDX,dword ptr [ECX]
004eafb5  MOV dword ptr [EAX + 0x8],EDX
004eafb8  RET 0xc
