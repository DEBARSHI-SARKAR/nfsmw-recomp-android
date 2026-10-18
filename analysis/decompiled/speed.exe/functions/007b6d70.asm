007b6d70  PUSH -0x1
007b6d72  PUSH 0x883376
007b6d77  MOV EAX,FS:[0x0]
007b6d7d  PUSH EAX
007b6d7e  MOV dword ptr FS:[0x0],ESP
007b6d85  PUSH ECX
007b6d86  MOV EAX,dword ptr [ESP + 0x14]
007b6d8a  PUSH EBX
007b6d8b  PUSH ESI
007b6d8c  MOV ESI,ECX
007b6d8e  PUSH EAX
007b6d8f  MOV dword ptr [ESP + 0xc],ESI
007b6d93  CALL 0x00593920
007b6d98  MOV dword ptr [ESI],0x8b7d3c
007b6d9e  XOR EAX,EAX
007b6da0  MOV dword ptr [ESI + 0x124],0x8b7244
007b6daa  MOV dword ptr [ESI + 0x128],EAX
007b6db0  MOV dword ptr [ESI + 0x12c],0x3f800000
007b6dba  MOV dword ptr [ESI + 0x130],EAX
007b6dc0  MOV dword ptr [ESI + 0x134],EAX
007b6dc6  MOV dword ptr [ESI + 0x138],EAX
007b6dcc  MOV dword ptr [ESI + 0x13c],0x5
007b6dd6  MOV dword ptr [ESI + 0x140],EAX
007b6ddc  MOV dword ptr [ESI + 0x170],EAX
007b6de2  MOV dword ptr [ESP + 0x14],EAX
007b6de6  MOV dword ptr [ESI + 0x148],EAX
007b6dec  MOV dword ptr [ESI + 0x14c],EAX
007b6df2  MOV dword ptr [ESI + 0x150],EAX
007b6df8  MOV dword ptr [ESI + 0x154],EAX
007b6dfe  MOV dword ptr [ESI + 0x158],EAX
007b6e04  MOV dword ptr [ESI + 0x15c],EAX
007b6e0a  MOV dword ptr [ESI + 0x160],EAX
007b6e10  MOV dword ptr [ESI + 0x164],EAX
007b6e16  MOV dword ptr [ESI + 0x168],EAX
007b6e1c  MOV dword ptr [ESI + 0x16c],EAX
007b6e22  MOV byte ptr [ESI + 0x11c],AL
007b6e28  MOV EDX,dword ptr [0x0091cf90]
007b6e2e  MOV BL,byte ptr [EDX + 0x12c]
007b6e34  MOV CL,0x1
007b6e36  TEST CL,BL
007b6e38  MOV byte ptr [ESP + 0x14],CL
007b6e3c  JNZ 0x007b6e46
007b6e3e  CMP byte ptr [0x009b9e8d],AL
007b6e44  JZ 0x007b6e52
007b6e46  MOV dword ptr [ESI + 0x10c],0x4
007b6e50  JMP 0x007b6e5c
007b6e52  MOV dword ptr [ESI + 0x10c],0x6
007b6e5c  MOV ECX,ESI
007b6e5e  CALL 0x007b0c30
007b6e63  MOV ECX,dword ptr [ESP + 0xc]
007b6e67  MOV EAX,ESI
007b6e69  POP ESI
007b6e6a  POP EBX
007b6e6b  MOV dword ptr FS:[0x0],ECX
007b6e72  ADD ESP,0x10
007b6e75  RET 0x4
