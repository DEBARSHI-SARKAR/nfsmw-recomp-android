0085f000  PUSH EBP
0085f001  MOV EBP,ESP
0085f003  SUB ESP,0x18
0085f006  MOV EAX,dword ptr [EBP + 0x8]
0085f009  MOV ECX,dword ptr [EAX]
0085f00b  MOV dword ptr [EBP + -0xc],ECX
0085f00e  MOV dword ptr [EBP + -0x8],0x0
0085f015  CALL 0x007cd100
0085f01a  MOV dword ptr [EBP + -0x10],EAX
0085f01d  CMP dword ptr [EBP + -0xc],0x0
0085f021  JGE 0x0085f02a
0085f023  XOR EAX,EAX
0085f025  JMP 0x0085f1fb
0085f02a  MOV EDX,dword ptr [EBP + -0x10]
0085f02d  CMP dword ptr [EDX + 0x44],0x0
0085f031  JNZ 0x0085f055
0085f033  PUSH 0x47
0085f035  PUSH 0x8c7b8c
0085f03a  PUSH 0x2
0085f03c  PUSH 0x24
0085f03e  CALL 0x007c6700
0085f043  ADD ESP,0x10
0085f046  MOV ECX,dword ptr [EBP + -0x10]
0085f049  MOV dword ptr [ECX + 0x44],EAX
0085f04c  MOV EDX,dword ptr [EBP + -0x10]
0085f04f  CMP dword ptr [EDX + 0x44],0x0
0085f053  JZ 0x0085f060
0085f055  MOV EAX,dword ptr [EBP + -0x10]
0085f058  MOV ECX,dword ptr [EAX + 0x44]
0085f05b  MOV dword ptr [EBP + -0x18],ECX
0085f05e  JMP 0x0085f067
0085f060  MOV dword ptr [EBP + -0x18],0x9c3e24
0085f067  MOV EAX,dword ptr [EBP + -0xc]
0085f06a  CDQ
0085f06b  MOV ECX,0x7861f80
0085f070  IDIV ECX
0085f072  MOV dword ptr [EBP + -0x14],EAX
0085f075  MOV EDX,dword ptr [EBP + -0x14]
0085f078  IMUL EDX,EDX,0x7861f80
0085f07e  MOV EAX,dword ptr [EBP + -0xc]
0085f081  SUB EAX,EDX
0085f083  MOV dword ptr [EBP + -0xc],EAX
0085f086  MOV ECX,dword ptr [EBP + -0x14]
0085f089  LEA EDX,[ECX*0x4 + 0x46]
0085f090  MOV dword ptr [EBP + -0x14],EDX
0085f093  CMP dword ptr [EBP + -0xc],0x1e13380
0085f09a  JL 0x0085f0f7
0085f09c  MOV EAX,dword ptr [EBP + -0x14]
0085f09f  ADD EAX,0x1
0085f0a2  MOV dword ptr [EBP + -0x14],EAX
0085f0a5  MOV ECX,dword ptr [EBP + -0xc]
0085f0a8  SUB ECX,0x1e13380
0085f0ae  MOV dword ptr [EBP + -0xc],ECX
0085f0b1  CMP dword ptr [EBP + -0xc],0x1e13380
0085f0b8  JL 0x0085f0f7
0085f0ba  MOV EDX,dword ptr [EBP + -0x14]
0085f0bd  ADD EDX,0x1
0085f0c0  MOV dword ptr [EBP + -0x14],EDX
0085f0c3  MOV EAX,dword ptr [EBP + -0xc]
0085f0c6  SUB EAX,0x1e13380
0085f0cb  MOV dword ptr [EBP + -0xc],EAX
0085f0ce  CMP dword ptr [EBP + -0xc],0x1e28500
0085f0d5  JL 0x0085f0ee
0085f0d7  MOV ECX,dword ptr [EBP + -0x14]
0085f0da  ADD ECX,0x1
0085f0dd  MOV dword ptr [EBP + -0x14],ECX
0085f0e0  MOV EDX,dword ptr [EBP + -0xc]
0085f0e3  SUB EDX,0x1e28500
0085f0e9  MOV dword ptr [EBP + -0xc],EDX
0085f0ec  JMP 0x0085f0f7
0085f0ee  MOV EAX,dword ptr [EBP + -0x8]
0085f0f1  ADD EAX,0x1
0085f0f4  MOV dword ptr [EBP + -0x8],EAX
0085f0f7  MOV ECX,dword ptr [EBP + -0x18]
0085f0fa  MOV EDX,dword ptr [EBP + -0x14]
0085f0fd  MOV dword ptr [ECX + 0x14],EDX
0085f100  MOV EAX,dword ptr [EBP + -0xc]
0085f103  CDQ
0085f104  MOV ECX,0x15180
0085f109  IDIV ECX
0085f10b  MOV EDX,dword ptr [EBP + -0x18]
0085f10e  MOV dword ptr [EDX + 0x1c],EAX
0085f111  MOV EAX,dword ptr [EBP + -0x18]
0085f114  MOV ECX,dword ptr [EAX + 0x1c]
0085f117  IMUL ECX,ECX,0x15180
0085f11d  MOV EDX,dword ptr [EBP + -0xc]
0085f120  SUB EDX,ECX
0085f122  MOV dword ptr [EBP + -0xc],EDX
0085f125  CMP dword ptr [EBP + -0x8],0x0
0085f129  JZ 0x0085f134
0085f12b  MOV dword ptr [EBP + -0x4],0x907394
0085f132  JMP 0x0085f13b
0085f134  MOV dword ptr [EBP + -0x4],0x9073c8
0085f13b  MOV dword ptr [EBP + -0x14],0x1
0085f142  JMP 0x0085f14d
0085f144  MOV EAX,dword ptr [EBP + -0x14]
0085f147  ADD EAX,0x1
0085f14a  MOV dword ptr [EBP + -0x14],EAX
0085f14d  MOV ECX,dword ptr [EBP + -0x14]
0085f150  MOV EDX,dword ptr [EBP + -0x4]
0085f153  MOV EAX,dword ptr [EBP + -0x18]
0085f156  MOV ECX,dword ptr [EDX + ECX*0x4]
0085f159  CMP ECX,dword ptr [EAX + 0x1c]
0085f15c  JGE 0x0085f160
0085f15e  JMP 0x0085f144
0085f160  MOV EDX,dword ptr [EBP + -0x14]
0085f163  SUB EDX,0x1
0085f166  MOV dword ptr [EBP + -0x14],EDX
0085f169  MOV EAX,dword ptr [EBP + -0x18]
0085f16c  MOV ECX,dword ptr [EBP + -0x14]
0085f16f  MOV dword ptr [EAX + 0x10],ECX
0085f172  MOV EDX,dword ptr [EBP + -0x18]
0085f175  MOV EAX,dword ptr [EBP + -0x14]
0085f178  MOV ECX,dword ptr [EBP + -0x4]
0085f17b  MOV EDX,dword ptr [EDX + 0x1c]
0085f17e  SUB EDX,dword ptr [ECX + EAX*0x4]
0085f181  MOV EAX,dword ptr [EBP + -0x18]
0085f184  MOV dword ptr [EAX + 0xc],EDX
0085f187  MOV ECX,dword ptr [EBP + 0x8]
0085f18a  MOV EAX,dword ptr [ECX]
0085f18c  CDQ
0085f18d  MOV ECX,0x15180
0085f192  IDIV ECX
0085f194  ADD EAX,0x4
0085f197  CDQ
0085f198  MOV ECX,0x7
0085f19d  IDIV ECX
0085f19f  MOV EAX,dword ptr [EBP + -0x18]
0085f1a2  MOV dword ptr [EAX + 0x18],EDX
0085f1a5  MOV EAX,dword ptr [EBP + -0xc]
0085f1a8  CDQ
0085f1a9  MOV ECX,0xe10
0085f1ae  IDIV ECX
0085f1b0  MOV EDX,dword ptr [EBP + -0x18]
0085f1b3  MOV dword ptr [EDX + 0x8],EAX
0085f1b6  MOV EAX,dword ptr [EBP + -0x18]
0085f1b9  MOV ECX,dword ptr [EAX + 0x8]
0085f1bc  IMUL ECX,ECX,0xe10
0085f1c2  MOV EDX,dword ptr [EBP + -0xc]
0085f1c5  SUB EDX,ECX
0085f1c7  MOV dword ptr [EBP + -0xc],EDX
0085f1ca  MOV EAX,dword ptr [EBP + -0xc]
0085f1cd  CDQ
0085f1ce  MOV ECX,0x3c
0085f1d3  IDIV ECX
0085f1d5  MOV EDX,dword ptr [EBP + -0x18]
0085f1d8  MOV dword ptr [EDX + 0x4],EAX
0085f1db  MOV EAX,dword ptr [EBP + -0x18]
0085f1de  MOV ECX,dword ptr [EAX + 0x4]
0085f1e1  IMUL ECX,ECX,0x3c
0085f1e4  MOV EDX,dword ptr [EBP + -0xc]
0085f1e7  SUB EDX,ECX
0085f1e9  MOV EAX,dword ptr [EBP + -0x18]
0085f1ec  MOV dword ptr [EAX],EDX
0085f1ee  MOV ECX,dword ptr [EBP + -0x18]
0085f1f1  MOV dword ptr [ECX + 0x20],0x0
0085f1f8  MOV EAX,dword ptr [EBP + -0x18]
0085f1fb  MOV ESP,EBP
0085f1fd  POP EBP
0085f1fe  RET
