00822ea5  MOV EAX,dword ptr [ESP + 0x4]
00822ea9  FLD float ptr [ESP + 0xc]
00822ead  MOV EDX,dword ptr [0x009c2520]
00822eb3  MOV ECX,EAX
00822eb5  IMUL EAX,EAX,0x5c
00822eb8  IMUL ECX,ECX,0x17
00822ebb  ADD ECX,dword ptr [ESP + 0x8]
00822ebf  FSTP float ptr [EDX + ECX*0x4 + 0x1c]
00822ec3  MOV ECX,dword ptr [0x009c2520]
00822ec9  MOV byte ptr [EAX + ECX*0x1 + 0x1],0x1
00822ece  RET
