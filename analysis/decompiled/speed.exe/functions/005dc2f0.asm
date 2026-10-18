005dc2f0  MOV EAX,dword ptr [ESP + 0x4]
005dc2f4  FLD float ptr [ESP + 0x10]
005dc2f8  MOV EDX,dword ptr [ESP + 0x8]
005dc2fc  SHL EAX,0x4
005dc2ff  ADD EAX,EDX
005dc301  MOV EDX,dword ptr [ESP + 0xc]
005dc305  SHL EAX,0x4
005dc308  ADD EAX,EDX
005dc30a  FSTP float ptr [ECX + EAX*0x4 + 0x1c3c]
005dc311  RET 0x10
