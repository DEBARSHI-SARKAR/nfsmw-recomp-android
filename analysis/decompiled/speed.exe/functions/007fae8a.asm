007fae8a  PUSH EBP
007fae8b  MOV EBP,ESP
007fae8d  PUSH ESI
007fae8e  PUSH EDI
007fae8f  PUSH 0x10
007fae91  MOV ESI,EAX
007fae93  POP EDI
007fae94  MOV EAX,0x1ff
007fae99  XOR EDX,EDX
007fae9b  MOV DX,word ptr [ECX + 0x2]
007fae9f  AND EDX,EAX
007faea1  MOV DL,byte ptr [EDX + 0x9c1640]
007faea7  MOV byte ptr [ESI],DL
007faea9  XOR EDX,EDX
007faeab  MOV DX,word ptr [ECX + 0x6]
007faeaf  AND EDX,EAX
007faeb1  MOV DL,byte ptr [EDX + 0x9c1640]
007faeb7  MOV byte ptr [ESI + 0x1],DL
007faeba  XOR EDX,EDX
007faebc  MOV DX,word ptr [ECX + 0xa]
007faec0  AND EDX,EAX
007faec2  MOV DL,byte ptr [EDX + 0x9c1640]
007faec8  MOV byte ptr [ESI + 0x2],DL
007faecb  XOR EDX,EDX
007faecd  MOV DX,word ptr [ECX + 0xe]
007faed1  AND EDX,EAX
007faed3  MOV DL,byte ptr [EDX + 0x9c1640]
007faed9  MOV byte ptr [ESI + 0x3],DL
007faedc  XOR EDX,EDX
007faede  MOV DX,word ptr [ECX + 0x12]
007faee2  AND EDX,EAX
007faee4  MOV DL,byte ptr [EDX + 0x9c1640]
007faeea  MOV byte ptr [ESI + 0x4],DL
007faeed  XOR EDX,EDX
007faeef  MOV DX,word ptr [ECX + 0x16]
007faef3  AND EDX,EAX
007faef5  MOV DL,byte ptr [EDX + 0x9c1640]
007faefb  MOV byte ptr [ESI + 0x5],DL
007faefe  XOR EDX,EDX
007faf00  MOV DX,word ptr [ECX + 0x1a]
007faf04  AND EDX,EAX
007faf06  MOV DL,byte ptr [EDX + 0x9c1640]
007faf0c  MOV byte ptr [ESI + 0x6],DL
007faf0f  XOR EDX,EDX
007faf11  MOV DX,word ptr [ECX + 0x1e]
007faf15  AND EDX,EAX
007faf17  MOV DL,byte ptr [EDX + 0x9c1640]
007faf1d  MOV byte ptr [ESI + 0x7],DL
007faf20  XOR EDX,EDX
007faf22  MOV DX,word ptr [ECX + 0x22]
007faf26  AND EDX,EAX
007faf28  MOV DL,byte ptr [EDX + 0x9c1640]
007faf2e  MOV byte ptr [ESI + 0x8],DL
007faf31  XOR EDX,EDX
007faf33  MOV DX,word ptr [ECX + 0x26]
007faf37  AND EDX,EAX
007faf39  MOV DL,byte ptr [EDX + 0x9c1640]
007faf3f  MOV byte ptr [ESI + 0x9],DL
007faf42  XOR EDX,EDX
007faf44  MOV DX,word ptr [ECX + 0x2a]
007faf48  AND EDX,EAX
007faf4a  MOV DL,byte ptr [EDX + 0x9c1640]
007faf50  MOV byte ptr [ESI + 0xa],DL
007faf53  XOR EDX,EDX
007faf55  MOV DX,word ptr [ECX + 0x2e]
007faf59  AND EDX,EAX
007faf5b  MOV DL,byte ptr [EDX + 0x9c1640]
007faf61  MOV byte ptr [ESI + 0xb],DL
007faf64  XOR EDX,EDX
007faf66  MOV DX,word ptr [ECX + 0x32]
007faf6a  AND EDX,EAX
007faf6c  MOV DL,byte ptr [EDX + 0x9c1640]
007faf72  MOV byte ptr [ESI + 0xc],DL
007faf75  XOR EDX,EDX
007faf77  MOV DX,word ptr [ECX + 0x36]
007faf7b  AND EDX,EAX
007faf7d  MOV DL,byte ptr [EDX + 0x9c1640]
007faf83  MOV byte ptr [ESI + 0xd],DL
007faf86  XOR EDX,EDX
007faf88  MOV DX,word ptr [ECX + 0x3a]
007faf8c  AND EDX,EAX
007faf8e  MOV DL,byte ptr [EDX + 0x9c1640]
007faf94  MOV byte ptr [ESI + 0xe],DL
007faf97  XOR EDX,EDX
007faf99  MOV DX,word ptr [ECX + 0x3e]
007faf9d  AND EDX,EAX
007faf9f  MOV DL,byte ptr [EDX + 0x9c1640]
007fafa5  MOV byte ptr [ESI + 0xf],DL
007fafa8  ADD ECX,0x40
007fafab  ADD ESI,dword ptr [EBP + 0x8]
007fafae  DEC EDI
007fafaf  JNZ 0x007fae99
007fafb5  POP EDI
007fafb6  POP ESI
007fafb7  POP EBP
007fafb8  RET
