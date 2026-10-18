0084fcc0  XOR EAX,EAX
0084fcc2  MOV EDX,0x100
0084fcc7  MOV ECX,0x80
0084fccc  MOV dword ptr [ESI + 0xc8],EAX
0084fcd2  MOV dword ptr [ESI + 0xcc],EAX
0084fcd8  MOV dword ptr [ESI + 0xd0],EAX
0084fcde  MOV dword ptr [ESI + 0xd8],EDX
0084fce4  MOV dword ptr [ESI + 0xdc],ECX
0084fcea  MOV dword ptr [ESI + 0xa4],EAX
0084fcf0  MOV dword ptr [ESI + 0xa8],EAX
0084fcf6  MOV dword ptr [ESI + 0xb0],EDX
0084fcfc  MOV dword ptr [ESI + 0xb4],ECX
0084fd02  MOV dword ptr [ESI + 0xbc],EAX
0084fd08  CALL 0x0084bcb0
0084fd0d  SUB EAX,0x1388
0084fd12  MOV dword ptr [ESI + 0xe4],EAX
0084fd18  CALL 0x0084bcb0
0084fd1d  SUB EAX,0x1388
0084fd22  MOV dword ptr [ESI + 0xe8],EAX
0084fd28  RET
