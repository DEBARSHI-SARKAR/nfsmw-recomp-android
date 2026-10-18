007aec00  SUB ESP,0x2c
007aec03  MOV EDX,dword ptr [ESP + 0x30]
007aec07  XOR EAX,EAX
007aec09  MOV dword ptr [ESP + 0xc],EAX
007aec0d  MOV dword ptr [ESP + 0x14],EAX
007aec11  MOV byte ptr [ESP + 0x1c],AL
007aec15  MOV dword ptr [ESP + 0x24],EAX
007aec19  MOV byte ptr [ESP + 0x28],AL
007aec1d  LEA EAX,[ESP]
007aec20  PUSH EAX
007aec21  MOV dword ptr [ESP + 0x4],0x8b7518
007aec29  MOV dword ptr [ESP + 0x14],EDX
007aec2d  MOV dword ptr [ESP + 0x1c],0x7
007aec35  MOV dword ptr [ESP + 0x24],0x1
007aec3d  CALL 0x007aeb90
007aec42  ADD ESP,0x2c
007aec45  RET 0x4
