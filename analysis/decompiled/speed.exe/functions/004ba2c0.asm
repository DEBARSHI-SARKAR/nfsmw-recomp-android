004ba2c0  PUSH EBX
004ba2c1  XOR EBX,EBX
004ba2c3  MOV dword ptr [ECX + 0x74],EBX
004ba2c6  MOV dword ptr [ECX],EBX
004ba2c8  MOV dword ptr [ECX + 0x70],EBX
004ba2cb  MOV dword ptr [ECX + 0x6c],EBX
004ba2ce  XOR EDX,EDX
004ba2d0  LEA EAX,[ECX + 0x34]
004ba2d3  MOV dword ptr [EAX + -0x18],EBX
004ba2d6  MOV dword ptr [EAX],EBX
004ba2d8  MOV dword ptr [EAX + -0x30],EBX
004ba2db  MOV byte ptr [ECX + EDX*0x1 + 0x4c],BL
004ba2df  MOV dword ptr [EAX + 0x20],EBX
004ba2e2  INC EDX
004ba2e3  ADD EAX,0x4
004ba2e6  CMP EDX,0x6
004ba2e9  JL 0x004ba2d3
004ba2eb  MOV EAX,dword ptr [ESP + 0x10]
004ba2ef  MOV EDX,dword ptr [ESP + 0xc]
004ba2f3  PUSH EBX
004ba2f4  PUSH EAX
004ba2f5  MOV EAX,dword ptr [ESP + 0x10]
004ba2f9  PUSH EDX
004ba2fa  PUSH EAX
004ba2fb  MOV byte ptr [ECX + 0x78],BL
004ba2fe  CALL 0x004b0040
004ba303  MOV EDX,dword ptr [ESP + 0x8]
004ba307  MOV dword ptr [ECX + 0x74],EDX
004ba30a  POP EBX
004ba30b  RET 0xc
