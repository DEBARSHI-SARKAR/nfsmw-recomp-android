00409ed0  MOV EAX,dword ptr [ECX + 0x1c]
00409ed3  TEST EAX,EAX
00409ed5  JZ 0x00409ee5
00409ed7  MOV ECX,EAX
00409ed9  MOV EAX,dword ptr [ECX]
00409edb  CALL dword ptr [EAX + 0x54]
00409ede  MOV EDX,dword ptr [EAX]
00409ee0  MOV ECX,EAX
00409ee2  JMP dword ptr [EDX + 0x30]
00409ee5  FLD float ptr [0x00890968]
00409eeb  RET
