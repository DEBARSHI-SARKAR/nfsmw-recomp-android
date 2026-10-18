00831c8b  PUSH EBP
00831c8c  MOV EBP,ESP
00831c8e  MOV AL,byte ptr [EBP + 0x8]
00831c91  MOV byte ptr [EBP + 0xb],AL
00831c94  MOV AL,byte ptr [EBP + 0xc]
00831c97  MOV byte ptr [EBP + 0xa],AL
00831c9a  MOV AX,word ptr [EBP + 0x10]
00831c9e  MOV word ptr [EBP + 0x8],AX
00831ca2  MOV EAX,dword ptr [EBP + 0x8]
00831ca5  POP EBP
00831ca6  RET
