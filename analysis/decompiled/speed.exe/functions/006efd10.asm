006efd10  PUSH 0x0
006efd12  PUSH 0xc
006efd14  MOV ECX,0x925b30
006efd19  CALL 0x005d29d0
006efd1e  TEST EAX,EAX
006efd20  JZ 0x006efd38
006efd22  MOV ECX,dword ptr [ESP + 0x4]
006efd26  MOV EDX,dword ptr [ESP + 0x8]
006efd2a  MOV dword ptr [EAX],ECX
006efd2c  MOV ECX,dword ptr [ESP + 0xc]
006efd30  MOV dword ptr [EAX + 0x4],EDX
006efd33  MOV EDX,dword ptr [ECX]
006efd35  MOV dword ptr [EAX + 0x8],EDX
006efd38  RET 0xc
