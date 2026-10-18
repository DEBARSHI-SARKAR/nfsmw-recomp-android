00832ff5  MOV EAX,dword ptr [ESP + 0x4]
00832ff9  MOVZX ECX,byte ptr [EAX + 0x8]
00832ffd  MOV EDX,dword ptr [ESP + 0x8]
00833001  MOV dword ptr [EDX],ECX
00833003  MOVZX EAX,byte ptr [EAX + 0x9]
00833007  MOV ECX,dword ptr [ESP + 0xc]
0083300b  MOV dword ptr [ECX],EAX
0083300d  RET
