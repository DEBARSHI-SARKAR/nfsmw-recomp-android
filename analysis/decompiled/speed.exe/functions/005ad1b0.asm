005ad1b0  SUB ESP,0x10
005ad1b3  MOV EAX,dword ptr [ESP + 0x18]
005ad1b7  FLD float ptr [ESP + 0x1c]
005ad1bb  FMUL float ptr [EAX]
005ad1bd  FSTP float ptr [ESP]
005ad1c0  MOV EDX,dword ptr [ESP]
005ad1c3  FLD float ptr [ESP + 0x1c]
005ad1c7  FMUL float ptr [EAX + 0x4]
005ad1ca  FSTP float ptr [ESP + 0x4]
005ad1ce  FLD float ptr [ESP + 0x1c]
005ad1d2  FMUL float ptr [EAX + 0x8]
005ad1d5  FSTP float ptr [ESP + 0x8]
005ad1d9  FLD float ptr [ESP + 0x1c]
005ad1dd  FMUL float ptr [EAX + 0xc]
005ad1e0  MOV EAX,dword ptr [ESP + 0x14]
005ad1e4  MOV ECX,EAX
005ad1e6  MOV dword ptr [ECX],EDX
005ad1e8  MOV EDX,dword ptr [ESP + 0x4]
005ad1ec  FSTP float ptr [ESP + 0xc]
005ad1f0  MOV dword ptr [ECX + 0x4],EDX
005ad1f3  MOV EDX,dword ptr [ESP + 0x8]
005ad1f7  MOV dword ptr [ECX + 0x8],EDX
005ad1fa  MOV EDX,dword ptr [ESP + 0xc]
005ad1fe  MOV dword ptr [ECX + 0xc],EDX
005ad201  ADD ESP,0x10
005ad204  RET
