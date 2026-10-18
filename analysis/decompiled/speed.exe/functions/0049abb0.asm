0049abb0  SUB ESP,0x20
0049abb3  PUSH ESI
0049abb4  MOV ESI,dword ptr [ESP + 0x28]
0049abb8  MOV EAX,dword ptr [ESI]
0049abba  MOV EDX,dword ptr [ESI + 0x4]
0049abbd  MOV dword ptr [ESP + 0x4],EAX
0049abc1  LEA EAX,[ESP + 0x14]
0049abc5  MOV dword ptr [ESP + 0xc],EDX
0049abc9  PUSH EAX
0049abca  LEA EDX,[ESP + 0x8]
0049abce  PUSH EDX
0049abcf  ADD ECX,0x58
0049abd2  PUSH ECX
0049abd3  MOV dword ptr [ESP + 0x14],0x0
0049abdb  MOV dword ptr [ESP + 0x1c],0x3f800000
0049abe3  CALL 0x0048dec0
0049abe8  MOV EAX,dword ptr [ESP + 0x20]
0049abec  MOV ECX,dword ptr [ESP + 0x28]
0049abf0  ADD ESP,0xc
0049abf3  MOV dword ptr [ESI],EAX
0049abf5  MOV dword ptr [ESI + 0x4],ECX
0049abf8  POP ESI
0049abf9  ADD ESP,0x20
0049abfc  RET 0x4
