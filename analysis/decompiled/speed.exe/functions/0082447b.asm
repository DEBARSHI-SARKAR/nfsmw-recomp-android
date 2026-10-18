0082447b  MOV EAX,dword ptr [ESP + 0x4]
0082447f  MOV ECX,dword ptr [ESP + 0x8]
00824483  AND dword ptr [EAX + 0x4],0x0
00824487  MOV dword ptr [EAX],0x82444f
0082448d  MOV dword ptr [EAX + 0x1c],ECX
00824490  RET
