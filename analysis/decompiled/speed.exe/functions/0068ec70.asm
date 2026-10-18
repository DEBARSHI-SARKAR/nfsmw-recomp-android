0068ec70  PUSH ESI
0068ec71  PUSH EDI
0068ec72  MOV EDI,dword ptr [ESP + 0xc]
0068ec76  FLD float ptr [EDI + 0x8c]
0068ec7c  MOV ESI,ECX
0068ec7e  FSUB float ptr [ESI + 0x130]
0068ec84  FDIV float ptr [EDI + 0xc0]
0068ec8a  FSTP float ptr [ESP + 0xc]
0068ec8e  CALL 0x006e8de0
0068ec93  SUB ESP,0x8
0068ec96  FSTP float ptr [ESP + 0x4]
0068ec9a  MOV ECX,0x8f8f80
0068ec9f  FLD float ptr [ESP + 0x14]
0068eca3  FABS
0068eca5  FSTP float ptr [ESP]
0068eca8  CALL 0x006533b0
0068ecad  PUSH ECX
0068ecae  LEA ECX,[ESI + 0x16c]
0068ecb4  FSTP float ptr [ESP]
0068ecb7  CALL 0x00653d10
0068ecbc  MOV EAX,dword ptr [EDI + 0x48]
0068ecbf  PUSH EAX
0068ecc0  MOV ECX,0x8f8f6c
0068ecc5  CALL 0x006533b0
0068ecca  FMUL float ptr [0x008aad30]
0068ecd0  PUSH ECX
0068ecd1  MOV ECX,0x8f8f94
0068ecd6  FMUL float ptr [ESI + 0x178]
0068ecdc  FSTP float ptr [ESP + 0x10]
0068ece0  FLD float ptr [ESI + 0x140]
0068ece6  FABS
0068ece8  FSTP float ptr [ESP]
0068eceb  CALL 0x006533b0
0068ecf0  FMUL float ptr [ESP + 0xc]
0068ecf4  POP EDI
0068ecf5  POP ESI
0068ecf6  RET 0x4
