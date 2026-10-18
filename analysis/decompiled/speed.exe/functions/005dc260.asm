005dc260  MOV EAX,dword ptr [ESP + 0x4]
005dc264  FLD float ptr [ESP + 0xc]
005dc268  MOV EDX,dword ptr [ESP + 0x8]
005dc26c  SHL EAX,0x4
005dc26f  ADD EAX,EDX
005dc271  FSTP float ptr [ECX + EAX*0x4 + 0x19bc]
005dc278  RET 0xc
