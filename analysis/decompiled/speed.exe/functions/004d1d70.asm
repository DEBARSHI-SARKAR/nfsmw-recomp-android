004d1d70  SUB ESP,0x8
004d1d73  MOV EAX,dword ptr [ESP + 0x10]
004d1d77  FLD float ptr [EAX]
004d1d79  MOV ECX,dword ptr [ESP + 0x14]
004d1d7d  FSUB float ptr [ECX]
004d1d7f  FSTP float ptr [ESP]
004d1d82  FLD float ptr [EAX + 0x4]
004d1d85  MOV EAX,dword ptr [ESP + 0xc]
004d1d89  FSUB float ptr [ECX + 0x4]
004d1d8c  MOV ECX,dword ptr [ESP]
004d1d8f  MOV dword ptr [EAX],ECX
004d1d91  FSTP float ptr [ESP + 0x4]
004d1d95  MOV EDX,dword ptr [ESP + 0x4]
004d1d99  MOV dword ptr [EAX + 0x4],EDX
004d1d9c  ADD ESP,0x8
004d1d9f  RET
