007aec50  SUB ESP,0x2c
007aec53  MOV EDX,dword ptr [ESP + 0x30]
007aec57  XOR EAX,EAX
007aec59  MOV dword ptr [ESP + 0xc],EAX
007aec5d  MOV dword ptr [ESP + 0x10],EAX
007aec61  MOV dword ptr [ESP + 0x14],EAX
007aec65  MOV dword ptr [ESP + 0x24],EAX
007aec69  MOV byte ptr [ESP + 0x28],AL
007aec6d  MOV dword ptr [ESP + 0x18],EDX
007aec71  MOV EDX,0x1
007aec76  LEA EAX,[ESP]
007aec79  PUSH EAX
007aec7a  MOV dword ptr [ESP + 0x4],0x8b7518
007aec82  MOV byte ptr [ESP + 0x20],DL
007aec86  MOV dword ptr [ESP + 0x24],EDX
007aec8a  CALL 0x007aeb90
007aec8f  ADD ESP,0x2c
007aec92  RET 0x4
