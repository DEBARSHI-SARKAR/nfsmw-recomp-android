00460a70  MOV EAX,dword ptr [ESP + 0x4]
00460a74  MOV ECX,dword ptr [EAX*0x4 + 0x90df10]
00460a7b  MOV DL,byte ptr [ESP + 0x8]
00460a7f  MOV AL,byte ptr [ECX + 0x40]
00460a82  MOV byte ptr [ECX + 0x40],DL
00460a85  RET
