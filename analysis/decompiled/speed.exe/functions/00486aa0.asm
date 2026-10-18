00486aa0  SUB ESP,0xc
00486aa3  MOV EAX,dword ptr [ESP + 0x14]
00486aa7  FLD float ptr [ECX + 0x4]
00486aaa  FMUL float ptr [EAX + 0x8]
00486aad  FLD float ptr [ECX + 0x8]
00486ab0  FMUL float ptr [EAX + 0x4]
00486ab3  FSUBP
00486ab5  FSTP float ptr [ESP]
00486ab8  MOV EDX,dword ptr [ESP]
00486abb  FLD float ptr [ECX + 0x8]
00486abe  FMUL float ptr [EAX]
00486ac0  FLD float ptr [ECX]
00486ac2  FMUL float ptr [EAX + 0x8]
00486ac5  FSUBP
00486ac7  FSTP float ptr [ESP + 0x4]
00486acb  FLD float ptr [ECX]
00486acd  FMUL float ptr [EAX + 0x4]
00486ad0  FLD float ptr [ECX + 0x4]
00486ad3  FMUL float ptr [EAX]
00486ad5  MOV EAX,dword ptr [ESP + 0x10]
00486ad9  MOV ECX,EAX
00486adb  MOV dword ptr [ECX],EDX
00486add  MOV EDX,dword ptr [ESP + 0x4]
00486ae1  FSUBP
00486ae3  MOV dword ptr [ECX + 0x4],EDX
00486ae6  FSTP float ptr [ESP + 0x8]
00486aea  MOV EDX,dword ptr [ESP + 0x8]
00486aee  MOV dword ptr [ECX + 0x8],EDX
00486af1  ADD ESP,0xc
00486af4  RET 0x8
