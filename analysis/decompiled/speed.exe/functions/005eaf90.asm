005eaf90  MOV ECX,dword ptr [ESP + 0x4]
005eaf94  MOV EDX,dword ptr [ESP + 0x8]
005eaf98  CMP ECX,EDX
005eaf9a  MOV EAX,dword ptr [ESP + 0xc]
005eaf9e  JZ 0x005eafb4
005eafa0  PUSH ESI
005eafa1  TEST EAX,EAX
005eafa3  JZ 0x005eafa9
005eafa5  MOV ESI,dword ptr [ECX]
005eafa7  MOV dword ptr [EAX],ESI
005eafa9  ADD ECX,0x4
005eafac  ADD EAX,0x4
005eafaf  CMP ECX,EDX
005eafb1  JNZ 0x005eafa1
005eafb3  POP ESI
005eafb4  RET
