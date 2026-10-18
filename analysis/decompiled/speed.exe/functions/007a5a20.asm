007a5a20  FLD float ptr [ECX + 0x4]
007a5a23  FLD float ptr [ESP + 0x4]
007a5a27  FCOMP
007a5a29  FNSTSW AX
007a5a2b  TEST AH,0x41
007a5a2e  JNZ 0x007a5a36
007a5a30  FSTP ST0
007a5a32  FLD float ptr [ESP + 0x4]
007a5a36  MOV EAX,dword ptr [ECX + 0x8]
007a5a39  MOV dword ptr [ESP + 0x4],EAX
007a5a3d  FCOM float ptr [ESP + 0x4]
007a5a41  FNSTSW AX
007a5a43  TEST AH,0x5
007a5a46  JP 0x007a5a4e
007a5a48  FSTP float ptr [ECX + 0xc]
007a5a4b  RET 0x4
007a5a4e  MOV EDX,dword ptr [ESP + 0x4]
007a5a52  FSTP ST0
007a5a54  MOV dword ptr [ECX + 0xc],EDX
007a5a57  RET 0x4
