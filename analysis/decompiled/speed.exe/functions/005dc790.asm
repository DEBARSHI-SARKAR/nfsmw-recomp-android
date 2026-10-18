005dc790  MOV EDX,dword ptr [ECX + 0x74]
005dc793  FLD float ptr [0x00890968]
005dc799  FLD float ptr [ECX + EDX*0x4 + 0x78]
005dc79d  FUCOMPP
005dc79f  FNSTSW AX
005dc7a1  TEST AH,0x44
005dc7a4  JP 0x005dc7aa
005dc7a6  INC EDX
005dc7a7  MOV dword ptr [ECX + 0x74],EDX
005dc7aa  MOV EAX,dword ptr [ESP + 0x4]
005dc7ae  FLD float ptr [ESP + 0x8]
005dc7b2  FSTP float ptr [ECX + EAX*0x4 + 0x78]
005dc7b6  MOV EDX,dword ptr [ECX + 0x10]
005dc7b9  MOV dword ptr [ECX + EAX*0x4 + 0xb8],EDX
005dc7c0  RET 0x8
