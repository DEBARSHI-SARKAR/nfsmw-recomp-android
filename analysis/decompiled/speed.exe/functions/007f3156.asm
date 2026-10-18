007f3156  PUSH EBP
007f3157  MOV EBP,ESP
007f3159  MOV EAX,ECX
007f315b  MOV ECX,dword ptr [EBP + 0x8]
007f315e  MOV EDX,dword ptr [ECX + 0x4]
007f3161  MOV dword ptr [EAX + 0x4],EDX
007f3164  MOV EDX,dword ptr [ECX + 0x8]
007f3167  MOV dword ptr [EAX + 0x8],EDX
007f316a  MOV EDX,dword ptr [ECX + 0xc]
007f316d  MOV dword ptr [EAX + 0xc],EDX
007f3170  MOV EDX,dword ptr [ECX + 0x10]
007f3173  MOV dword ptr [EAX + 0x10],EDX
007f3176  MOV EDX,dword ptr [ECX + 0x14]
007f3179  MOV dword ptr [EAX + 0x14],EDX
007f317c  MOV EDX,dword ptr [ECX + 0x18]
007f317f  MOV dword ptr [EAX + 0x18],EDX
007f3182  MOV EDX,dword ptr [ECX + 0x1c]
007f3185  MOV dword ptr [EAX + 0x1c],EDX
007f3188  MOV ECX,dword ptr [ECX + 0x20]
007f318b  MOV dword ptr [EAX + 0x20],ECX
007f318e  POP EBP
007f318f  RET 0x4
