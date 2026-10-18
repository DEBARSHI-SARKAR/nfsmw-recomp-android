004aecb0  MOV EAX,dword ptr [ESP + 0x4]
004aecb4  MOV dword ptr [ECX + 0x24],EAX
004aecb7  MOV EAX,dword ptr [EAX + 0x1c]
004aecba  MOV [0x008ee564],EAX
004aecbf  FLD float ptr [0x008ee564]
004aecc5  FMUL float ptr [0x008969bc]
004aeccb  CALL 0x007c4b80
004aecd0  MOV ECX,dword ptr [ESP + 0x8]
004aecd4  MOV [0x008ee568],EAX
004aecd9  MOV dword ptr [0x008ee5b8],ECX
004aecdf  RET 0x8
