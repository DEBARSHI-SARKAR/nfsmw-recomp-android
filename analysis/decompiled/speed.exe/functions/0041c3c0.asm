0041c3c0  PUSH 0x0
0041c3c2  PUSH 0xc
0041c3c4  MOV ECX,0x925b30
0041c3c9  CALL 0x005d29d0
0041c3ce  TEST EAX,EAX
0041c3d0  JZ 0x0041c3e8
0041c3d2  MOV ECX,dword ptr [ESP + 0x4]
0041c3d6  MOV EDX,dword ptr [ESP + 0x8]
0041c3da  MOV dword ptr [EAX],ECX
0041c3dc  MOV ECX,dword ptr [ESP + 0xc]
0041c3e0  MOV dword ptr [EAX + 0x4],EDX
0041c3e3  MOV EDX,dword ptr [ECX]
0041c3e5  MOV dword ptr [EAX + 0x8],EDX
0041c3e8  RET 0xc
