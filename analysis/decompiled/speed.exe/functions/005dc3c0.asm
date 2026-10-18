005dc3c0  MOV EAX,dword ptr [ESP + 0x8]
005dc3c4  MOV EDX,dword ptr [ESP + 0x4]
005dc3c8  IMUL EAX,EAX,0x65
005dc3cb  ADD EAX,EDX
005dc3cd  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd0]
005dc3d4  RET 0x8
