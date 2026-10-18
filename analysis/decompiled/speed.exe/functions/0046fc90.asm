0046fc90  SUB ESP,0xc
0046fc93  MOV EAX,dword ptr [ESP + 0x14]
0046fc97  MOV ECX,dword ptr [ESP + 0x18]
0046fc9b  MOV EDX,dword ptr [ESP + 0x1c]
0046fc9f  MOV dword ptr [ESP],EAX
0046fca2  MOV EAX,dword ptr [ESP + 0x10]
0046fca6  MOV dword ptr [ESP + 0x4],ECX
0046fcaa  MOV dword ptr [ESP + 0x8],EDX
0046fcae  MOV EDX,dword ptr [ESP]
0046fcb1  MOV ECX,EAX
0046fcb3  MOV dword ptr [ECX],EDX
0046fcb5  MOV EDX,dword ptr [ESP + 0x4]
0046fcb9  MOV dword ptr [ECX + 0x4],EDX
0046fcbc  MOV EDX,dword ptr [ESP + 0x8]
0046fcc0  MOV dword ptr [ECX + 0x8],EDX
0046fcc3  ADD ESP,0xc
0046fcc6  RET
