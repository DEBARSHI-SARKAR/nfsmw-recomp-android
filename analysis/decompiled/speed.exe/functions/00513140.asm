00513140  MOV EAX,dword ptr [ESP + 0x4]
00513144  MOV EDX,dword ptr [ESP + 0x8]
00513148  MOV dword ptr [ECX + 0x1b4],EAX
0051314e  MOV EAX,dword ptr [ESP + 0xc]
00513152  MOV dword ptr [ECX + 0x1b8],EDX
00513158  MOV EDX,dword ptr [ESP + 0x10]
0051315c  MOV dword ptr [ECX + 0x1bc],EAX
00513162  MOV dword ptr [ECX + 0x1c0],EDX
00513168  MOV byte ptr [ECX + 0x1b0],0x1
0051316f  RET 0x10
