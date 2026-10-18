00822ecf  MOV EAX,dword ptr [ESP + 0x4]
00822ed3  FLD float ptr [ESP + 0xc]
00822ed7  MOV ECX,dword ptr [0x009c2520]
00822edd  IMUL EAX,EAX,0x5c
00822ee0  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x38]
00822ee4  MOV EDX,dword ptr [ESP + 0x8]
00822ee8  FSTP float ptr [ECX + EDX*0x4]
00822eeb  MOV ECX,dword ptr [0x009c2520]
00822ef1  MOV byte ptr [EAX + ECX*0x1 + 0x1],0x1
00822ef6  RET
