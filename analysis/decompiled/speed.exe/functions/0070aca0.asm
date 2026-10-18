0070aca0  PUSH ESI
0070aca1  MOV ESI,ECX
0070aca3  MOV EAX,dword ptr [ESI]
0070aca5  PUSH 0x14d
0070acaa  CALL dword ptr [EAX + 0xc]
0070acad  MOV EAX,[0x0092d884]
0070acb2  TEST EAX,EAX
0070acb4  JZ 0x0070acc0
0070acb6  MOV ECX,dword ptr [0x0092d87c]
0070acbc  MOV ECX,dword ptr [ECX]
0070acbe  JMP 0x0070acc2
0070acc0  XOR ECX,ECX
0070acc2  MOV EDX,dword ptr [ECX]
0070acc4  CALL dword ptr [EDX + 0x4]
0070acc7  MOV ECX,dword ptr [EAX + 0x4]
0070acca  PUSH 0x403700
0070accf  CALL 0x005d59f0
0070acd4  TEST EAX,EAX
0070acd6  JZ 0x0070acea
0070acd8  MOV EDX,dword ptr [EAX]
0070acda  MOV ECX,EAX
0070acdc  CALL dword ptr [EDX + 0x74]
0070acdf  FMUL float ptr [0x008967e0]
0070ace5  FSTP float ptr [ESI + 0x44]
0070ace8  JMP 0x0070acf1
0070acea  MOV dword ptr [ESI + 0x44],0x43200000
0070acf1  MOV EAX,[0x00925ae8]
0070acf6  MOV ECX,dword ptr [ESP + 0x8]
0070acfa  MOV dword ptr [ESI + 0x18],EAX
0070acfd  MOV byte ptr [ESI + 0x10],0x1
0070ad01  MOV EDX,dword ptr [ECX + 0x10]
0070ad04  MOV dword ptr [ESI + 0x14],EDX
0070ad07  POP ESI
0070ad08  RET 0x4
