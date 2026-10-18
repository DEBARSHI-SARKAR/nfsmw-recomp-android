00768bb0  MOV ECX,dword ptr [ESP + 0x8]
00768bb4  MOV EAX,dword ptr [ESP + 0x4]
00768bb8  SHL ECX,0x4
00768bbb  ADD ECX,0x9b3960
00768bc1  MOV EDX,dword ptr [ECX]
00768bc3  MOV dword ptr [EAX],EDX
00768bc5  MOV EDX,dword ptr [ECX + 0x4]
00768bc8  MOV dword ptr [EAX + 0x4],EDX
00768bcb  MOV EDX,dword ptr [ECX + 0x8]
00768bce  MOV dword ptr [EAX + 0x8],EDX
00768bd1  MOV ECX,dword ptr [ECX + 0xc]
00768bd4  MOV dword ptr [EAX + 0xc],ECX
00768bd7  RET
