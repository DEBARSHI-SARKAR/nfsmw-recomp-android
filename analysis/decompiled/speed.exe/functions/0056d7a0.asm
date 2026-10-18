0056d7a0  MOV EAX,dword ptr [ECX + 0xc]
0056d7a3  MOV EDX,dword ptr [ESP + 0x4]
0056d7a7  CMP EDX,EAX
0056d7a9  JBE 0x0056d7b5
0056d7ab  MOV dword ptr [ECX + 0xc],0x0
0056d7b2  RET 0x4
0056d7b5  SUB EAX,EDX
0056d7b7  MOV dword ptr [ECX + 0xc],EAX
0056d7ba  RET 0x4
