006ceeb0  SUB ESP,0x8
006ceeb3  LEA EAX,[ESP]
006ceeb6  PUSH EAX
006ceeb7  LEA ECX,[ESP + 0x8]
006ceebb  PUSH ECX
006ceebc  MOV ECX,0x93caf4
006ceec1  MOV dword ptr [ESP + 0x8],0x400
006ceec9  MOV dword ptr [ESP + 0xc],0x0
006ceed1  CALL 0x006c0e80
006ceed6  ADD ESP,0x8
006ceed9  RET
