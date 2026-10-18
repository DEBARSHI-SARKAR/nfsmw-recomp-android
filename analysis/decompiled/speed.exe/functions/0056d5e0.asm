0056d5e0  MOV EAX,0x3f800000
0056d5e5  PUSH ESI
0056d5e6  MOV ESI,ECX
0056d5e8  MOV ECX,0x3f4ccccd
0056d5ed  MOV dword ptr [ESI],EAX
0056d5ef  MOV dword ptr [ESI + 0x4],EAX
0056d5f2  MOV dword ptr [ESI + 0x8],ECX
0056d5f5  MOV dword ptr [ESI + 0xc],ECX
0056d5f8  MOV dword ptr [ESI + 0x10],EAX
0056d5fb  MOV dword ptr [ESI + 0x14],EAX
0056d5fe  MOV dword ptr [ESI + 0x18],EAX
0056d601  MOV dword ptr [ESI + 0x1c],EAX
0056d604  MOV dword ptr [ESI + 0x20],EAX
0056d607  MOV dword ptr [ESI + 0x24],0x1
0056d60e  MOV ECX,dword ptr [0x00911fa8]
0056d614  CALL 0x004b9240
0056d619  MOV dword ptr [ESI + 0x24],EAX
0056d61c  MOV dword ptr [ESI + 0x28],0x1
0056d623  MOV dword ptr [ESI + 0x2c],0x1
0056d62a  MOV dword ptr [ESI + 0x30],0x0
0056d631  POP ESI
0056d632  RET
