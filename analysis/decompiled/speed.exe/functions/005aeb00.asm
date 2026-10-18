005aeb00  MOV EAX,dword ptr [ESP + 0x8]
005aeb04  PUSH ESI
005aeb05  MOV ESI,dword ptr [ESP + 0x8]
005aeb09  SUB EAX,ESI
005aeb0b  MOV dword ptr [ESP + 0xc],EAX
005aeb0f  FILD dword ptr [ESP + 0xc]
005aeb13  FMUL float ptr [ESP + 0x10]
005aeb17  FADD float ptr [0x008933d4]
005aeb1d  CALL 0x007c4b80
005aeb22  MOV ECX,dword ptr [ESP + 0x14]
005aeb26  ADD EAX,dword ptr [ECX]
005aeb28  MOV EDX,dword ptr [ESP + 0x18]
005aeb2c  ADD EAX,ESI
005aeb2e  MOV dword ptr [EDX],EAX
005aeb30  POP ESI
005aeb31  RET
