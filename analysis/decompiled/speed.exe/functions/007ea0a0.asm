007ea0a0  PUSH EBP
007ea0a1  MOV EBP,ESP
007ea0a3  MOV EAX,dword ptr [EBP + 0xc]
007ea0a6  PUSH ESI
007ea0a7  PUSH EDI
007ea0a8  PUSH 0x23c
007ea0ad  PUSH 0x8c18b0
007ea0b2  PUSH EAX
007ea0b3  PUSH 0x20
007ea0b5  PUSH 0x10
007ea0b7  PUSH 0x20
007ea0b9  PUSH 0x8c18e8
007ea0be  CALL 0x007e9430
007ea0c3  MOV ESI,dword ptr [EBP + 0x8]
007ea0c6  ADD ESP,0x1c
007ea0c9  MOV ECX,EAX
007ea0cb  PUSH ESI
007ea0cc  CALL 0x007e9ef0
007ea0d1  MOV byte ptr [ECX],0x7a
007ea0d4  MOV EAX,dword ptr [ESI + 0x70]
007ea0d7  MOV EDX,dword ptr [ESI + 0x6c]
007ea0da  MOV EDI,dword ptr [ESI + 0x68]
007ea0dd  MOV ESI,dword ptr [ESI + 0x64]
007ea0e0  MOV dword ptr [ECX + 0x18],EDX
007ea0e3  MOV dword ptr [ECX + 0x1c],EAX
007ea0e6  XOR EDX,EDX
007ea0e8  MOV dword ptr [ECX + 0x14],EDI
007ea0eb  LEA EAX,[ECX + 0x20]
007ea0ee  CMP EAX,EDX
007ea0f0  POP EDI
007ea0f1  MOV dword ptr [ECX + 0x10],ESI
007ea0f4  POP ESI
007ea0f5  MOV dword ptr [ECX + 0xc],EDX
007ea0f8  JNZ 0x007ea10f
007ea0fa  MOV EAX,dword ptr [ECX]
007ea0fc  AND EAX,0xfffffbff
007ea101  OR EAX,0x400
007ea106  MOV dword ptr [ECX],EAX
007ea108  MOV dword ptr [ECX + 0x8],EDX
007ea10b  MOV EAX,ECX
007ea10d  POP EBP
007ea10e  RET
007ea10f  SUB EAX,ECX
007ea111  MOV dword ptr [ECX + 0x8],EAX
007ea114  MOV EAX,dword ptr [ECX]
007ea116  AND EAX,0xfffffbff
007ea11b  OR EAX,0x400
007ea120  MOV dword ptr [ECX],EAX
007ea122  MOV EAX,ECX
007ea124  POP EBP
007ea125  RET
