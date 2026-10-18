0067ab40  PUSH 0x0
0067ab42  PUSH 0x18
0067ab44  MOV ECX,0x925b30
0067ab49  CALL 0x005d29d0
0067ab4e  TEST EAX,EAX
0067ab50  JZ 0x0067ab80
0067ab52  MOV ECX,dword ptr [ESP + 0x4]
0067ab56  MOV EDX,dword ptr [ESP + 0x8]
0067ab5a  MOV dword ptr [EAX],ECX
0067ab5c  MOV ECX,dword ptr [ESP + 0xc]
0067ab60  MOV dword ptr [EAX + 0x8],ECX
0067ab63  MOV ECX,dword ptr [ESP + 0x10]
0067ab67  MOV dword ptr [EAX + 0x4],EDX
0067ab6a  MOV EDX,dword ptr [ECX]
0067ab6c  MOV dword ptr [EAX + 0xc],EDX
0067ab6f  MOV ECX,dword ptr [ECX + 0x4]
0067ab72  MOV DL,byte ptr [ESP + 0x14]
0067ab76  MOV dword ptr [EAX + 0x10],ECX
0067ab79  MOV byte ptr [EAX + 0x14],DL
0067ab7c  MOV byte ptr [EAX + 0x15],0x0
0067ab80  RET 0x14
