004011c0  SUB ESP,0x10
004011c3  MOV EAX,dword ptr [ESP + 0x18]
004011c7  MOV ECX,dword ptr [EAX]
004011c9  MOV EDX,dword ptr [EAX + 0x4]
004011cc  MOV EAX,dword ptr [EAX + 0x8]
004011cf  MOV dword ptr [ESP],ECX
004011d2  MOV ECX,dword ptr [ESP + 0x1c]
004011d6  MOV dword ptr [ESP + 0x4],EDX
004011da  MOV dword ptr [ESP + 0x8],EAX
004011de  MOV EAX,dword ptr [ESP + 0x14]
004011e2  MOV dword ptr [ESP + 0xc],ECX
004011e6  MOV ECX,dword ptr [ESP]
004011e9  MOV EDX,EAX
004011eb  MOV dword ptr [EDX],ECX
004011ed  MOV ECX,dword ptr [ESP + 0x4]
004011f1  MOV dword ptr [EDX + 0x4],ECX
004011f4  MOV ECX,dword ptr [ESP + 0x8]
004011f8  MOV dword ptr [EDX + 0x8],ECX
004011fb  MOV ECX,dword ptr [ESP + 0xc]
004011ff  MOV dword ptr [EDX + 0xc],ECX
00401202  ADD ESP,0x10
00401205  RET
