0058b450  PUSH 0x890f10
0058b455  PUSH 0x18
0058b457  MOV ECX,0x925b30
0058b45c  CALL 0x005d29d0
0058b461  TEST EAX,EAX
0058b463  JZ 0x0058b493
0058b465  MOV ECX,dword ptr [ESP + 0x4]
0058b469  MOV EDX,dword ptr [ESP + 0x8]
0058b46d  MOV dword ptr [EAX],ECX
0058b46f  MOV ECX,dword ptr [ESP + 0xc]
0058b473  MOV dword ptr [EAX + 0x8],ECX
0058b476  MOV ECX,dword ptr [ESP + 0x10]
0058b47a  MOV dword ptr [EAX + 0x4],EDX
0058b47d  MOV EDX,dword ptr [ECX]
0058b47f  MOV dword ptr [EAX + 0xc],EDX
0058b482  MOV ECX,dword ptr [ECX + 0x4]
0058b485  MOV DL,byte ptr [ESP + 0x14]
0058b489  MOV dword ptr [EAX + 0x10],ECX
0058b48c  MOV byte ptr [EAX + 0x14],DL
0058b48f  MOV byte ptr [EAX + 0x15],0x0
0058b493  RET 0x14
