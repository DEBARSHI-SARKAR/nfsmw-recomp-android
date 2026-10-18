007a8130  PUSH EBP
007a8131  MOV EBP,ESP
007a8133  SUB ESP,0x28
007a8136  PUSH ESI
007a8137  PUSH EAX
007a8138  MOV EAX,0xcfcecdcc
007a813d  MOV EAX,0x7a813d
007a8142  MOV EAX,0x1
007a8147  MOV EAX,0x0
007a814c  MOV EAX,0xcfcecdcc
007a8151  POP EAX
007a8152  MOV EAX,dword ptr [EBP + 0x8]
007a8155  MOV ECX,dword ptr [EAX + 0x14]
007a8158  MOV dword ptr [EBP + -0x20],ECX
007a815b  MOV EDX,dword ptr [EBP + 0x8]
007a815e  MOV EAX,dword ptr [EDX + 0x18]
007a8161  MOV dword ptr [EBP + -0x1c],EAX
007a8164  MOV ECX,dword ptr [EBP + 0x8]
007a8167  MOV EDX,dword ptr [ECX + 0x1c]
007a816a  MOV dword ptr [EBP + -0x18],EDX
007a816d  MOV EAX,dword ptr [EBP + 0x8]
007a8170  MOV ECX,dword ptr [EAX + 0x20]
007a8173  MOV dword ptr [EBP + -0x14],ECX
007a8176  MOV EDX,dword ptr [EBP + 0x8]
007a8179  MOV EAX,dword ptr [EDX + 0x24]
007a817c  MOV dword ptr [EBP + -0xc],EAX
007a817f  MOV ECX,dword ptr [EBP + 0x8]
007a8182  MOV EDX,dword ptr [ECX + 0x28]
007a8185  MOV dword ptr [EBP + -0x4],EDX
007a8188  MOV EAX,dword ptr [EBP + 0x8]
007a818b  MOV ECX,dword ptr [EAX + 0x2c]
007a818e  MOV dword ptr [EBP + -0x28],ECX
007a8191  MOV EDX,dword ptr [EBP + 0x8]
007a8194  MOV EAX,dword ptr [EDX + 0x30]
007a8197  MOV dword ptr [EBP + -0x24],EAX
007a819a  MOV ECX,dword ptr [EBP + 0x8]
007a819d  MOV EDX,dword ptr [ECX + 0x34]
007a81a0  MOV dword ptr [EBP + -0x8],EDX
007a81a3  MOV EAX,dword ptr [EBP + 0xc]
007a81a6  AND EAX,dword ptr [EBP + -0x20]
007a81a9  MOV ECX,dword ptr [EBP + 0xc]
007a81ac  AND ECX,dword ptr [EBP + -0x20]
007a81af  ADD ECX,dword ptr [EBP + -0x4]
007a81b2  IMUL ECX,dword ptr [EBP + -0x28]
007a81b6  XOR EAX,ECX
007a81b8  MOV EDX,dword ptr [EBP + 0xc]
007a81bb  AND EDX,dword ptr [EBP + -0x20]
007a81be  ADD EDX,dword ptr [EBP + -0x24]
007a81c1  IMUL EDX,dword ptr [EBP + -0x8]
007a81c5  XOR EAX,EDX
007a81c7  MOV ECX,dword ptr [EBP + -0x20]
007a81ca  NOT ECX
007a81cc  AND EAX,ECX
007a81ce  XOR EAX,dword ptr [EBP + 0xc]
007a81d1  MOV EDX,dword ptr [EBP + 0xc]
007a81d4  AND EDX,dword ptr [EBP + -0x20]
007a81d7  MOV ECX,dword ptr [EBP + 0xc]
007a81da  AND ECX,dword ptr [EBP + -0x20]
007a81dd  ADD ECX,dword ptr [EBP + -0x4]
007a81e0  IMUL ECX,dword ptr [EBP + -0x28]
007a81e4  XOR EDX,ECX
007a81e6  MOV ECX,dword ptr [EBP + 0xc]
007a81e9  AND ECX,dword ptr [EBP + -0x20]
007a81ec  ADD ECX,dword ptr [EBP + -0x24]
007a81ef  IMUL ECX,dword ptr [EBP + -0x8]
007a81f3  XOR EDX,ECX
007a81f5  MOV ECX,dword ptr [EBP + -0x20]
007a81f8  NOT ECX
007a81fa  AND EDX,ECX
007a81fc  XOR EDX,dword ptr [EBP + 0xc]
007a81ff  MOV ECX,dword ptr [EBP + -0x20]
007a8202  NOT ECX
007a8204  AND EDX,ECX
007a8206  MOV ECX,dword ptr [EBP + 0xc]
007a8209  AND ECX,dword ptr [EBP + -0x20]
007a820c  MOV ESI,dword ptr [EBP + 0xc]
007a820f  AND ESI,dword ptr [EBP + -0x20]
007a8212  ADD ESI,dword ptr [EBP + -0x4]
007a8215  IMUL ESI,dword ptr [EBP + -0x28]
007a8219  XOR ECX,ESI
007a821b  MOV ESI,dword ptr [EBP + 0xc]
007a821e  AND ESI,dword ptr [EBP + -0x20]
007a8221  ADD ESI,dword ptr [EBP + -0x24]
007a8224  IMUL ESI,dword ptr [EBP + -0x8]
007a8228  XOR ECX,ESI
007a822a  MOV ESI,dword ptr [EBP + -0x20]
007a822d  NOT ESI
007a822f  AND ECX,ESI
007a8231  XOR ECX,dword ptr [EBP + 0xc]
007a8234  MOV ESI,dword ptr [EBP + -0x20]
007a8237  NOT ESI
007a8239  AND ECX,ESI
007a823b  ADD ECX,dword ptr [EBP + -0x18]
007a823e  IMUL ECX,dword ptr [EBP + -0x1c]
007a8242  XOR EDX,ECX
007a8244  MOV ECX,dword ptr [EBP + 0xc]
007a8247  AND ECX,dword ptr [EBP + -0x20]
007a824a  MOV ESI,dword ptr [EBP + 0xc]
007a824d  AND ESI,dword ptr [EBP + -0x20]
007a8250  ADD ESI,dword ptr [EBP + -0x4]
007a8253  IMUL ESI,dword ptr [EBP + -0x28]
007a8257  XOR ECX,ESI
007a8259  MOV ESI,dword ptr [EBP + 0xc]
007a825c  AND ESI,dword ptr [EBP + -0x20]
007a825f  ADD ESI,dword ptr [EBP + -0x24]
007a8262  IMUL ESI,dword ptr [EBP + -0x8]
007a8266  XOR ECX,ESI
007a8268  MOV ESI,dword ptr [EBP + -0x20]
007a826b  NOT ESI
007a826d  AND ECX,ESI
007a826f  XOR ECX,dword ptr [EBP + 0xc]
007a8272  MOV ESI,dword ptr [EBP + -0x20]
007a8275  NOT ESI
007a8277  AND ECX,ESI
007a8279  ADD ECX,dword ptr [EBP + -0xc]
007a827c  IMUL ECX,dword ptr [EBP + -0x14]
007a8280  XOR EDX,ECX
007a8282  AND EDX,dword ptr [EBP + -0x20]
007a8285  XOR EAX,EDX
007a8287  MOV dword ptr [EBP + -0x10],EAX
007a828a  PUSH EAX
007a828b  MOV EAX,0xcfcecdcc
007a8290  MOV EAX,0x7a813d
007a8295  MOV EAX,0x0
007a829a  MOV EAX,0x0
007a829f  MOV EAX,0xcecdcccb
007a82a4  POP EAX
007a82a5  MOV EAX,dword ptr [EBP + -0x10]
007a82a8  POP ESI
007a82a9  MOV ESP,EBP
007a82ab  POP EBP
007a82ac  RET
