005c6860  PUSH ESI
005c6861  MOV ESI,dword ptr [ESP + 0x8]
005c6865  TEST ESI,ESI
005c6867  JLE 0x005c6897
005c6869  MOV EDX,dword ptr [ESP + 0x10]
005c686d  MOV ECX,dword ptr [ESP + 0x14]
005c6871  MOV EAX,dword ptr [ESP + 0xc]
005c6875  FLD float ptr [EAX]
005c6877  ADD EAX,0xc
005c687a  FSUB float ptr [EDX]
005c687c  ADD ECX,0xc
005c687f  DEC ESI
005c6880  FSTP float ptr [ECX + -0xc]
005c6883  FLD float ptr [EAX + -0x8]
005c6886  FSUB float ptr [EDX + 0x4]
005c6889  FSTP float ptr [ECX + -0x8]
005c688c  FLD float ptr [EAX + -0x4]
005c688f  FSUB float ptr [EDX + 0x8]
005c6892  FSTP float ptr [ECX + -0x4]
005c6895  JNZ 0x005c6875
005c6897  POP ESI
005c6898  RET
