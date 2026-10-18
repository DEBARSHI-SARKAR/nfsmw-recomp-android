007d9e70  PUSH EBP
007d9e71  MOV EBP,ESP
007d9e73  SUB ESP,0x18
007d9e76  FLD double ptr [0x008942e0]
007d9e7c  FLD double ptr [EBP + 0x8]
007d9e7f  FUCOMPP
007d9e81  FNSTSW AX
007d9e83  TEST AH,0x44
007d9e86  JP 0x007d9e9d
007d9e88  FLD double ptr [0x008942e0]
007d9e8e  FSTP double ptr [EBP + -0x10]
007d9e91  MOV dword ptr [EBP + -0x4],0x0
007d9e98  JMP 0x007d9f8c
007d9e9d  MOVZX EAX,word ptr [EBP + 0xe]
007d9ea1  AND EAX,0x7ff0
007d9ea6  JNZ 0x007d9f5e
007d9eac  MOV ECX,dword ptr [EBP + 0xc]
007d9eaf  SHL ECX,0xc
007d9eb2  TEST ECX,ECX
007d9eb4  JNZ 0x007d9ec0
007d9eb6  CMP dword ptr [EBP + 0x8],0x0
007d9eba  JZ 0x007d9f5e
007d9ec0  MOV dword ptr [EBP + -0x4],0xfffffc03
007d9ec7  FLD double ptr [EBP + 0x8]
007d9eca  FCOMP double ptr [0x008942e0]
007d9ed0  FNSTSW AX
007d9ed2  TEST AH,0x5
007d9ed5  JP 0x007d9ee0
007d9ed7  MOV dword ptr [EBP + -0x18],0x1
007d9ede  JMP 0x007d9ee7
007d9ee0  MOV dword ptr [EBP + -0x18],0x0
007d9ee7  MOV EDX,dword ptr [EBP + -0x18]
007d9eea  MOV dword ptr [EBP + -0x14],EDX
007d9eed  MOVZX EAX,word ptr [EBP + 0xe]
007d9ef1  AND EAX,0x10
007d9ef4  JNZ 0x007d9f25
007d9ef6  MOV ECX,dword ptr [EBP + 0xc]
007d9ef9  SHL ECX,0x1
007d9efb  MOV dword ptr [EBP + 0xc],ECX
007d9efe  MOV EDX,dword ptr [EBP + 0x8]
007d9f01  AND EDX,0x80000000
007d9f07  JZ 0x007d9f12
007d9f09  MOV EAX,dword ptr [EBP + 0xc]
007d9f0c  OR EAX,0x1
007d9f0f  MOV dword ptr [EBP + 0xc],EAX
007d9f12  MOV ECX,dword ptr [EBP + 0x8]
007d9f15  SHL ECX,0x1
007d9f17  MOV dword ptr [EBP + 0x8],ECX
007d9f1a  MOV EDX,dword ptr [EBP + -0x4]
007d9f1d  SUB EDX,0x1
007d9f20  MOV dword ptr [EBP + -0x4],EDX
007d9f23  JMP 0x007d9eed
007d9f25  MOVZX EAX,word ptr [EBP + 0xe]
007d9f29  AND EAX,0xffef
007d9f2e  MOV word ptr [EBP + 0xe],AX
007d9f32  CMP dword ptr [EBP + -0x14],0x0
007d9f36  JZ 0x007d9f46
007d9f38  MOVZX ECX,word ptr [EBP + 0xe]
007d9f3c  OR ECX,0x8000
007d9f42  MOV word ptr [EBP + 0xe],CX
007d9f46  PUSH 0x0
007d9f48  FLD double ptr [EBP + 0x8]
007d9f4b  SUB ESP,0x8
007d9f4e  FSTP double ptr [ESP]
007d9f51  CALL 0x007d9d20
007d9f56  ADD ESP,0xc
007d9f59  FSTP double ptr [EBP + -0x10]
007d9f5c  JMP 0x007d9f8c
007d9f5e  PUSH 0x0
007d9f60  FLD double ptr [EBP + 0x8]
007d9f63  SUB ESP,0x8
007d9f66  FSTP double ptr [ESP]
007d9f69  CALL 0x007d9d20
007d9f6e  ADD ESP,0xc
007d9f71  FSTP double ptr [EBP + -0x10]
007d9f74  MOVZX EDX,word ptr [EBP + 0xe]
007d9f78  AND EDX,0x7ff0
007d9f7e  SAR EDX,0x4
007d9f81  MOVSX EAX,DX
007d9f84  SUB EAX,0x3fe
007d9f89  MOV dword ptr [EBP + -0x4],EAX
007d9f8c  MOV ECX,dword ptr [EBP + 0x10]
007d9f8f  MOV EDX,dword ptr [EBP + -0x4]
007d9f92  MOV dword ptr [ECX],EDX
007d9f94  FLD double ptr [EBP + -0x10]
007d9f97  MOV ESP,EBP
007d9f99  POP EBP
007d9f9a  RET
