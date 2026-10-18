0046fd60  SUB ESP,0x10
0046fd63  MOV EAX,dword ptr [ESP + 0x18]
0046fd67  MOV ECX,dword ptr [ESP + 0x1c]
0046fd6b  MOV EDX,dword ptr [ESP + 0x20]
0046fd6f  MOV dword ptr [ESP],EAX
0046fd72  MOV EAX,dword ptr [ESP + 0x24]
0046fd76  MOV dword ptr [ESP + 0x4],ECX
0046fd7a  MOV dword ptr [ESP + 0x8],EDX
0046fd7e  MOV EDX,dword ptr [ESP]
0046fd81  MOV dword ptr [ESP + 0xc],EAX
0046fd85  MOV EAX,dword ptr [ESP + 0x14]
0046fd89  MOV ECX,EAX
0046fd8b  MOV dword ptr [ECX],EDX
0046fd8d  MOV EDX,dword ptr [ESP + 0x4]
0046fd91  MOV dword ptr [ECX + 0x4],EDX
0046fd94  MOV EDX,dword ptr [ESP + 0x8]
0046fd98  MOV dword ptr [ECX + 0x8],EDX
0046fd9b  MOV EDX,dword ptr [ESP + 0xc]
0046fd9f  MOV dword ptr [ECX + 0xc],EDX
0046fda2  ADD ESP,0x10
0046fda5  RET
