0045b2b0  PUSH ESI
0045b2b1  MOV ESI,ECX
0045b2b3  TEST byte ptr [ESI + 0xc],0x1
0045b2b7  JNZ 0x0045b2e0
0045b2b9  MOV EAX,dword ptr [ESI + 0x4]
0045b2bc  MOV ECX,dword ptr [0x008f7ea8]
0045b2c2  MOV EDX,dword ptr [ECX]
0045b2c4  LEA EAX,[EAX + EAX*0x2]
0045b2c7  PUSH 0x0
0045b2c9  SHL EAX,0x2
0045b2cc  PUSH EAX
0045b2cd  MOV EAX,dword ptr [ESI]
0045b2cf  PUSH EAX
0045b2d0  CALL dword ptr [EDX + 0x4]
0045b2d3  MOV dword ptr [ESI],0x0
0045b2d9  MOV dword ptr [ESI + 0x4],0x0
0045b2e0  MOV EAX,dword ptr [ESI + 0xc]
0045b2e3  AND EAX,0x1
0045b2e6  MOV dword ptr [ESI + 0x8],0x0
0045b2ed  MOV dword ptr [ESI + 0xc],EAX
0045b2f0  POP ESI
0045b2f1  RET
