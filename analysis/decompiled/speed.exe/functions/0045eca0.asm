0045eca0  PUSH EBP
0045eca1  MOV EBP,ESP
0045eca3  AND ESP,0xfffffff0
0045eca6  SUB ESP,0x10
0045eca9  FLD float ptr [EBP + 0x10]
0045ecac  MOV EAX,dword ptr [EBP + 0x10]
0045ecaf  FMUL float ptr [EBP + 0x10]
0045ecb2  MOV EDX,dword ptr [EBP + 0xc]
0045ecb5  FLD float ptr [EBP + 0x10]
0045ecb8  LEA ECX,[ESP]
0045ecbb  PUSH ECX
0045ecbc  FMUL ST1
0045ecbe  MOV dword ptr [ESP + 0xc],EAX
0045ecc2  MOV EAX,dword ptr [EBP + 0x8]
0045ecc5  PUSH EDX
0045ecc6  FSTP float ptr [ESP + 0x8]
0045ecca  PUSH EAX
0045eccb  MOV dword ptr [ESP + 0x18],0x3f800000
0045ecd3  FSTP float ptr [ESP + 0x10]
0045ecd7  CALL 0x006bd920
0045ecdc  ADD ESP,0xc
0045ecdf  MOV ESP,EBP
0045ece1  POP EBP
0045ece2  RET
