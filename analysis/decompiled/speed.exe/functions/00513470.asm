00513470  MOV EAX,dword ptr [ESP + 0x4]
00513474  MOV EDX,dword ptr [ESP + 0x8]
00513478  MOV dword ptr [ECX + 0x11b0],EAX
0051347e  MOV EAX,dword ptr [ESP + 0xc]
00513482  MOV dword ptr [ECX + 0x11b4],EDX
00513488  MOV EDX,dword ptr [ESP + 0x10]
0051348c  MOV dword ptr [ECX + 0x11b8],EAX
00513492  MOV dword ptr [ECX + 0x11bc],EDX
00513498  MOV byte ptr [ECX + 0x11ac],0x1
0051349f  RET 0x10
