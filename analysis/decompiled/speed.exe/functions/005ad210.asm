005ad210  SUB ESP,0x10
005ad213  MOV EAX,dword ptr [ESP + 0x18]
005ad217  FLD float ptr [EAX]
005ad219  MOV ECX,dword ptr [ESP + 0x1c]
005ad21d  FADD float ptr [ECX]
005ad21f  FSTP float ptr [ESP]
005ad222  MOV EDX,dword ptr [ESP]
005ad225  FLD float ptr [EAX + 0x4]
005ad228  FADD float ptr [ECX + 0x4]
005ad22b  FSTP float ptr [ESP + 0x4]
005ad22f  FLD float ptr [EAX + 0x8]
005ad232  FADD float ptr [ECX + 0x8]
005ad235  FSTP float ptr [ESP + 0x8]
005ad239  FLD float ptr [EAX + 0xc]
005ad23c  MOV EAX,dword ptr [ESP + 0x14]
005ad240  FADD float ptr [ECX + 0xc]
005ad243  MOV ECX,EAX
005ad245  MOV dword ptr [ECX],EDX
005ad247  MOV EDX,dword ptr [ESP + 0x4]
005ad24b  MOV dword ptr [ECX + 0x4],EDX
005ad24e  FSTP float ptr [ESP + 0xc]
005ad252  MOV EDX,dword ptr [ESP + 0x8]
005ad256  MOV dword ptr [ECX + 0x8],EDX
005ad259  MOV EDX,dword ptr [ESP + 0xc]
005ad25d  MOV dword ptr [ECX + 0xc],EDX
005ad260  ADD ESP,0x10
005ad263  RET
