007fd11d  PUSH EBP
007fd11e  MOV EBP,ESP
007fd120  PUSH ECX
007fd121  FLD double ptr [0x008942e8]
007fd127  PUSH EBX
007fd128  FLD double ptr [0x008c47c0]
007fd12e  PUSH ESI
007fd12f  MOV ESI,dword ptr [EBP + 0x8]
007fd132  FLD double ptr [0x008987a8]
007fd138  PUSH EDI
007fd139  MOV EDI,dword ptr [ESI]
007fd13b  MOVSX EAX,word ptr [EDI*0x2 + 0x8c3eb8]
007fd143  SHL EAX,0x2
007fd146  MOV dword ptr [EBP + 0x8],EAX
007fd149  FILD dword ptr [EBP + 0x8]
007fd14c  FDIVR ST0,ST3
007fd14e  FMUL ST2
007fd150  FADD ST0,ST1
007fd152  CALL 0x007c4b80
007fd157  MOV dword ptr [ESI + 0x190],EAX
007fd15d  MOV EAX,EDI
007fd15f  SHL EAX,0x2
007fd162  MOV ECX,dword ptr [EAX + 0x8c41b8]
007fd168  MOV dword ptr [ESI + 0x390],ECX
007fd16e  MOV EAX,dword ptr [EAX + 0x8c3fb8]
007fd174  LEA EBX,[ESI + 0x394]
007fd17a  MOV dword ptr [ESI + 0x590],EAX
007fd180  MOV EDI,EBX
007fd182  MOV dword ptr [EBP + 0x8],0x3f
007fd189  MOV EAX,dword ptr [ESI]
007fd18b  MOV EAX,dword ptr [EAX*0x4 + 0x8c38b8]
007fd192  SHL EAX,0x2
007fd195  TEST EAX,EAX
007fd197  MOV dword ptr [EBP + -0x4],EAX
007fd19a  FILD dword ptr [EBP + -0x4]
007fd19d  JGE 0x007fd1a5
007fd19f  FADD double ptr [0x008c3870]
007fd1a5  FDIVR ST0,ST3
007fd1a7  FMUL ST2
007fd1a9  FADD ST0,ST1
007fd1ab  CALL 0x007c4b80
007fd1b0  MOV dword ptr [EDI + 0xfffffe00],EAX
007fd1b6  MOV EAX,dword ptr [ESI]
007fd1b8  MOV EAX,dword ptr [EAX*0x4 + 0x8c3cb8]
007fd1bf  MOV dword ptr [EDI],EAX
007fd1c1  MOV EAX,dword ptr [ESI]
007fd1c3  MOV EAX,dword ptr [EAX*0x4 + 0x8c3ab8]
007fd1ca  MOV dword ptr [EDI + 0x200],EAX
007fd1d0  ADD EDI,0x4
007fd1d3  DEC dword ptr [EBP + 0x8]
007fd1d6  JNZ 0x007fd189
007fd1d8  MOV EDI,dword ptr [ESI]
007fd1da  MOVSX EAX,word ptr [EDI*0x2 + 0x8c3f38]
007fd1e2  SHL EAX,0x2
007fd1e5  MOV dword ptr [EBP + 0x8],EAX
007fd1e8  FILD dword ptr [EBP + 0x8]
007fd1eb  FDIVR ST0,ST3
007fd1ed  FMUL ST2
007fd1ef  FADD ST0,ST1
007fd1f1  CALL 0x007c4b80
007fd1f6  MOV dword ptr [ESI + 0x290],EAX
007fd1fc  MOV EAX,EDI
007fd1fe  SHL EAX,0x2
007fd201  MOV ECX,dword ptr [EAX + 0x8c42b8]
007fd207  MOV dword ptr [ESI + 0x490],ECX
007fd20d  MOV EAX,dword ptr [EAX + 0x8c40b8]
007fd213  MOV dword ptr [ESI + 0x690],EAX
007fd219  LEA EDI,[ESI + 0x494]
007fd21f  MOV dword ptr [EBP + 0x8],0x3f
007fd226  MOV EAX,dword ptr [ESI]
007fd228  MOV EAX,dword ptr [EAX*0x4 + 0x8c39b8]
007fd22f  SHL EAX,0x2
007fd232  TEST EAX,EAX
007fd234  MOV dword ptr [EBP + -0x4],EAX
007fd237  FILD dword ptr [EBP + -0x4]
007fd23a  JGE 0x007fd242
007fd23c  FADD double ptr [0x008c3870]
007fd242  FDIVR ST0,ST3
007fd244  FMUL ST2
007fd246  FADD ST0,ST1
007fd248  CALL 0x007c4b80
007fd24d  MOV dword ptr [EDI + 0xfffffe00],EAX
007fd253  MOV EAX,dword ptr [ESI]
007fd255  MOV EAX,dword ptr [EAX*0x4 + 0x8c3db8]
007fd25c  MOV dword ptr [EDI],EAX
007fd25e  MOV EAX,dword ptr [ESI]
007fd260  MOV EAX,dword ptr [EAX*0x4 + 0x8c3bb8]
007fd267  MOV dword ptr [EDI + 0x200],EAX
007fd26d  ADD EDI,0x4
007fd270  DEC dword ptr [EBP + 0x8]
007fd273  JNZ 0x007fd226
007fd275  FSTP ST0
007fd277  PUSH 0x8
007fd279  FSTP ST0
007fd27b  LEA EAX,[ESI + 0x18]
007fd27e  FSTP ST0
007fd280  POP ECX
007fd281  MOV DX,word ptr [EBX]
007fd284  MOV word ptr [EAX + -0x10],DX
007fd288  MOV DX,word ptr [ESI + 0x194]
007fd28f  MOV word ptr [EAX],DX
007fd292  MOV DX,word ptr [ESI + 0x594]
007fd299  DEC DX
007fd29b  MOV word ptr [EAX + 0x10],DX
007fd29f  INC EAX
007fd2a0  INC EAX
007fd2a1  DEC ECX
007fd2a2  JNZ 0x007fd281
007fd2a4  MOV EDI,0x8c43b8
007fd2a9  LEA ECX,[ESI + 0x890]
007fd2af  MOV EAX,dword ptr [ESI]
007fd2b1  MOV EAX,dword ptr [EAX*0x4 + 0x8c38b8]
007fd2b8  IMUL EAX,dword ptr [EDI]
007fd2bb  SHL EAX,0x2
007fd2be  CDQ
007fd2bf  PUSH 0x64
007fd2c1  POP EBX
007fd2c2  IDIV EBX
007fd2c4  MOV dword ptr [ECX + 0xffffff00],EAX
007fd2ca  MOV EAX,dword ptr [ESI]
007fd2cc  MOV EAX,dword ptr [EAX*0x4 + 0x8c39b8]
007fd2d3  IMUL EAX,dword ptr [EDI]
007fd2d6  SHL EAX,0x2
007fd2d9  CDQ
007fd2da  IDIV EBX
007fd2dc  ADD EDI,0x4
007fd2df  MOV dword ptr [ECX],EAX
007fd2e1  ADD ECX,0x4
007fd2e4  CMP EDI,0x8c44b8
007fd2ea  JL 0x007fd2af
007fd2ec  POP EDI
007fd2ed  POP ESI
007fd2ee  POP EBX
007fd2ef  LEAVE
007fd2f0  RET
