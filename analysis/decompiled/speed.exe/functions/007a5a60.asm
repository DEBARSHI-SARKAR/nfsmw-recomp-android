007a5a60  FLD float ptr [ECX + 0x4]
007a5a63  MOV EAX,dword ptr [ECX + 0x10]
007a5a66  FLD float ptr [ESP + 0x4]
007a5a6a  MOV dword ptr [ECX + 0x14],EAX
007a5a6d  FCOMP
007a5a6f  FNSTSW AX
007a5a71  TEST AH,0x41
007a5a74  JNZ 0x007a5a7c
007a5a76  FSTP ST0
007a5a78  FLD float ptr [ESP + 0x4]
007a5a7c  MOV EDX,dword ptr [ECX + 0x8]
007a5a7f  MOV dword ptr [ESP + 0x4],EDX
007a5a83  FCOM float ptr [ESP + 0x4]
007a5a87  FNSTSW AX
007a5a89  TEST AH,0x5
007a5a8c  JP 0x007a5a94
007a5a8e  FSTP float ptr [ECX + 0x10]
007a5a91  RET 0x4
007a5a94  MOV EAX,dword ptr [ESP + 0x4]
007a5a98  FSTP ST0
007a5a9a  MOV dword ptr [ECX + 0x10],EAX
007a5a9d  RET 0x4
