0068ca60  SUB ESP,0x10
0068ca63  MOV EAX,dword ptr [ECX + 0x3c]
0068ca66  MOV EDX,dword ptr [ECX + 0x40]
0068ca69  MOV dword ptr [ESP],EAX
0068ca6c  MOV EAX,dword ptr [ECX + 0x44]
0068ca6f  MOV ECX,dword ptr [ESP + 0x18]
0068ca73  MOV dword ptr [ESP + 0x4],EDX
0068ca77  MOV EDX,dword ptr [ESP]
0068ca7a  MOV dword ptr [ESP + 0x8],EAX
0068ca7e  MOV EAX,dword ptr [ESP + 0x4]
0068ca82  ADD ECX,0x20
0068ca85  MOV dword ptr [ECX],EDX
0068ca87  MOV EDX,dword ptr [ESP + 0x8]
0068ca8b  MOV dword ptr [ECX + 0x4],EAX
0068ca8e  MOV dword ptr [ESP + 0xc],0x3f800000
0068ca96  MOV EAX,dword ptr [ESP + 0xc]
0068ca9a  MOV dword ptr [ECX + 0x8],EDX
0068ca9d  MOV dword ptr [ECX + 0xc],EAX
0068caa0  MOV AL,0x1
0068caa2  ADD ESP,0x10
0068caa5  RET 0x8
