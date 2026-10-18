0085cbb0  PUSH ESI
0085cbb1  MOV ESI,dword ptr [ESP + 0x8]
0085cbb5  MOV EAX,dword ptr [ESI + 0x18c]
0085cbbb  TEST EAX,EAX
0085cbbd  JNZ 0x0085cbec
0085cbbf  MOV ECX,dword ptr [ESP + 0x10]
0085cbc3  MOV EDX,dword ptr [ESP + 0xc]
0085cbc7  MOV EAX,dword ptr [ESP + 0x14]
0085cbcb  PUSH ECX
0085cbcc  PUSH EDX
0085cbcd  PUSH ESI
0085cbce  MOV dword ptr [ESI + 0xd8],EAX
0085cbd4  CALL 0x0085bc60
0085cbd9  PUSH ESI
0085cbda  CALL 0x0085be30
0085cbdf  ADD ESP,0x10
0085cbe2  MOV dword ptr [ESI + 0x18c],0x1
0085cbec  POP ESI
0085cbed  RET
