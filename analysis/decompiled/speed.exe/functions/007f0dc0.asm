007f0dc0  PUSH EBP
007f0dc1  MOV EBP,ESP
007f0dc3  PUSH 0x0
007f0dc5  PUSH 0x0
007f0dc7  PUSH dword ptr [EBP + 0xc]
007f0dca  PUSH 0x0
007f0dcc  PUSH dword ptr [EBP + 0x8]
007f0dcf  CALL 0x007f0b24
007f0dd4  ADD ESP,0x14
007f0dd7  TEST EAX,EAX
007f0dd9  JZ 0x007f0def
007f0ddb  MOV EDX,dword ptr [EBP + 0x10]
007f0dde  SUB EDX,EAX
007f0de0  MOV CL,byte ptr [EAX]
007f0de2  MOV byte ptr [EDX + EAX*0x1],CL
007f0de5  INC EAX
007f0de6  TEST CL,CL
007f0de8  JNZ 0x007f0de0
007f0dea  MOV EAX,dword ptr [EBP + 0x10]
007f0ded  POP EBP
007f0dee  RET
007f0def  MOV EAX,dword ptr [EBP + 0x10]
007f0df2  MOV byte ptr [EAX],0x0
007f0df5  XOR EAX,EAX
007f0df7  POP EBP
007f0df8  RET
