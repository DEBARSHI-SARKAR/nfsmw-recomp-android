0046b920  MOV EAX,dword ptr [ESP + 0x4]
0046b924  MOV EDX,dword ptr [EAX]
0046b926  MOV dword ptr [ECX + 0x90],EDX
0046b92c  MOV EDX,dword ptr [EAX + 0x4]
0046b92f  MOV dword ptr [ECX + 0x94],EDX
0046b935  MOV EAX,dword ptr [EAX + 0x8]
0046b938  MOV EDX,dword ptr [ESP + 0x8]
0046b93c  MOV dword ptr [ECX + 0x98],EAX
0046b942  MOV EAX,dword ptr [ESP + 0xc]
0046b946  MOV dword ptr [ECX + 0xa0],EAX
0046b94c  MOV EAX,dword ptr [ESP + 0x10]
0046b950  MOV dword ptr [ECX + 0x9c],EDX
0046b956  FLD float ptr [EAX + 0x8]
0046b959  FLD float ptr [EAX + 0x4]
0046b95c  MOV EDX,dword ptr [EAX]
0046b95e  FSTP float ptr [ECX + 0xb4]
0046b964  MOV dword ptr [ECX + 0xb0],EDX
0046b96a  FSTP float ptr [ECX + 0xb8]
0046b970  RET 0x10
