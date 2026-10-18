0072b600  PUSH 0x0
0072b602  PUSH 0x18
0072b604  MOV ECX,0x925b30
0072b609  CALL 0x005d29d0
0072b60e  TEST EAX,EAX
0072b610  JZ 0x0072b640
0072b612  MOV ECX,dword ptr [ESP + 0x4]
0072b616  MOV EDX,dword ptr [ESP + 0x8]
0072b61a  MOV dword ptr [EAX],ECX
0072b61c  MOV ECX,dword ptr [ESP + 0xc]
0072b620  MOV dword ptr [EAX + 0x8],ECX
0072b623  MOV ECX,dword ptr [ESP + 0x10]
0072b627  MOV dword ptr [EAX + 0x4],EDX
0072b62a  MOV EDX,dword ptr [ECX]
0072b62c  MOV dword ptr [EAX + 0xc],EDX
0072b62f  MOV ECX,dword ptr [ECX + 0x4]
0072b632  MOV DL,byte ptr [ESP + 0x14]
0072b636  MOV dword ptr [EAX + 0x10],ECX
0072b639  MOV byte ptr [EAX + 0x14],DL
0072b63c  MOV byte ptr [EAX + 0x15],0x0
0072b640  RET 0x14
