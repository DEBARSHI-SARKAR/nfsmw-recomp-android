0040b0d0  PUSH EBP
0040b0d1  MOV EBP,ESP
0040b0d3  AND ESP,0xfffffff0
0040b0d6  SUB ESP,0x10
0040b0d9  MOV AL,[0x00919658]
0040b0de  TEST AL,AL
0040b0e0  JNZ 0x0040b105
0040b0e2  MOV ECX,dword ptr [0x008a2fb4]
0040b0e8  MOV EAX,dword ptr [EBP + 0x8]
0040b0eb  MOV dword ptr [EAX],ECX
0040b0ed  MOV EDX,dword ptr [0x008a2fb8]
0040b0f3  MOV dword ptr [EAX + 0x4],EDX
0040b0f6  MOV ECX,dword ptr [0x008a2fbc]
0040b0fc  MOV dword ptr [EAX + 0x8],ECX
0040b0ff  MOV ESP,EBP
0040b101  POP EBP
0040b102  RET 0x4
0040b105  MOV EAX,[0x00919690]
0040b10a  FLD float ptr [EAX + 0x40]
0040b10d  MOV EDX,dword ptr [EBP + 0x8]
0040b110  FLD float ptr [EAX + 0x48]
0040b113  FLD float ptr [EAX + 0x44]
0040b116  FCHS
0040b118  FSTP float ptr [ESP]
0040b11b  MOV EAX,dword ptr [ESP]
0040b11e  MOV dword ptr [EDX],EAX
0040b120  FSTP float ptr [ESP + 0x4]
0040b124  MOV ECX,dword ptr [ESP + 0x4]
0040b128  MOV dword ptr [EDX + 0x4],ECX
0040b12b  FSTP float ptr [ESP + 0x8]
0040b12f  MOV EAX,dword ptr [ESP + 0x8]
0040b133  MOV dword ptr [EDX + 0x8],EAX
0040b136  MOV ESP,EBP
0040b138  POP EBP
0040b139  RET 0x4
