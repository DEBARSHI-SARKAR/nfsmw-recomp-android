005dc3a0  MOV EAX,dword ptr [ESP + 0x8]
005dc3a4  MOV EDX,dword ptr [ESP + 0x4]
005dc3a8  IMUL EAX,EAX,0x65
005dc3ab  ADD EAX,EDX
005dc3ad  FLD float ptr [ECX + EAX*0x4 + 0x90]
005dc3b4  RET 0x8
