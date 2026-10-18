006231f0  MOV EDX,dword ptr [ESP + 0x8]
006231f4  MOV EAX,ECX
006231f6  MOV ECX,dword ptr [ESP + 0x4]
006231fa  TEST ECX,ECX
006231fc  MOV dword ptr [EAX + 0xc],EDX
006231ff  MOV EDX,dword ptr [ESP + 0xc]
00623203  MOV dword ptr [EAX + 0x4],0x20
0062320a  MOV dword ptr [EAX],0x8a6ff8
00623210  MOV dword ptr [EAX + 0x8],ECX
00623213  MOV dword ptr [EAX + 0x10],EDX
00623216  JNZ 0x00623221
00623218  MOV byte ptr [0x009b0a74],CL
0062321e  RET 0xc
00623221  MOV byte ptr [0x009b0a74],0x1
00623228  FLD float ptr [EAX + 0x10]
0062322b  MOV ECX,dword ptr [EAX + 0xc]
0062322e  FSTP float ptr [0x00904b40]
00623234  MOV dword ptr [0x00904b3c],ECX
0062323a  RET 0xc
