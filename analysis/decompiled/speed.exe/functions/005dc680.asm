005dc680  MOV EAX,dword ptr [ESP + 0x8]
005dc684  MOV EDX,dword ptr [ESP + 0x4]
005dc688  IMUL EAX,EAX,0x65
005dc68b  ADD EAX,EDX
005dc68d  FLD float ptr [ECX + EAX*0x4 + 0x4c]
005dc691  RET 0x8
