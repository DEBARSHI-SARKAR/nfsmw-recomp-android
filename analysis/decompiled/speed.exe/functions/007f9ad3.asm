007f9ad3  PUSH EBP
007f9ad4  MOV EBP,ESP
007f9ad6  PUSH ESI
007f9ad7  MOV ESI,ECX
007f9ad9  CMP dword ptr [ESI + 0x18],0x0
007f9add  JNZ 0x007f9aff
007f9adf  LEA EAX,[ESI + 0x4]
007f9ae2  CMP dword ptr [EAX],0x0
007f9ae5  JNZ 0x007f9af2
007f9ae7  PUSH EAX
007f9ae8  PUSH dword ptr [ESI + 0x8]
007f9aeb  PUSH ESI
007f9aec  CALL dword ptr [ESI + 0xc]
007f9aef  ADD ESP,0xc
007f9af2  CMP dword ptr [ESI + 0x18],0x0
007f9af6  JNZ 0x007f9aff
007f9af8  XOR EAX,EAX
007f9afa  POP ESI
007f9afb  POP EBP
007f9afc  RET 0x4
007f9aff  MOV ECX,dword ptr [ESI + 0x18]
007f9b02  MOV EAX,dword ptr [ECX]
007f9b04  POP ESI
007f9b05  POP EBP
007f9b06  JMP dword ptr [EAX + 0x8]
