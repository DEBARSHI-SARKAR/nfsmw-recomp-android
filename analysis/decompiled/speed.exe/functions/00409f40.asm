00409f40  SUB ESP,0xc
00409f43  MOV EAX,dword ptr [ESP + 0x20]
00409f47  FLD float ptr [EAX]
00409f49  MOV ECX,dword ptr [ESP + 0x1c]
00409f4d  FADD float ptr [ECX]
00409f4f  FLD float ptr [EAX + 0x4]
00409f52  FADD float ptr [ECX + 0x4]
00409f55  FLD float ptr [EAX + 0x8]
00409f58  MOV EAX,dword ptr [ESP + 0x14]
00409f5c  FADD float ptr [ECX + 0x8]
00409f5f  MOV ECX,dword ptr [ESP + 0x10]
00409f63  FSTP float ptr [ESP + 0x8]
00409f67  FXCH
00409f69  FSUB float ptr [EAX]
00409f6b  FSTP float ptr [ECX]
00409f6d  FSUB float ptr [EAX + 0x4]
00409f70  FSTP float ptr [ECX + 0x4]
00409f73  FLD float ptr [ESP + 0x8]
00409f77  FSUB float ptr [EAX + 0x8]
00409f7a  FSTP float ptr [ECX + 0x8]
00409f7d  ADD ESP,0xc
00409f80  RET
