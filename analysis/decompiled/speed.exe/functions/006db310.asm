006db310  PUSH EBP
006db311  MOV EBP,ESP
006db313  AND ESP,0xfffffff0
006db316  SUB ESP,0x74
006db319  MOV AL,[0x00982bcc]
006db31e  TEST AL,AL
006db320  PUSH EBX
006db321  PUSH ESI
006db322  PUSH EDI
006db323  JZ 0x006db47f
006db329  MOV EAX,[0x00925970]
006db32e  MOV EDI,dword ptr [EBP + 0x8]
006db331  MOV ESI,dword ptr [EBP + 0xc]
006db334  MOV dword ptr [ESP + 0x2c],EAX
006db338  MOV EAX,dword ptr [EDI + 0x40]
006db33b  MOV ECX,dword ptr [EAX + 0x44]
006db33e  FLD float ptr [EAX + 0x40]
006db341  MOV EDX,dword ptr [EAX + 0x48]
006db344  ADD EAX,0x40
006db347  TEST ESI,ESI
006db349  MOV dword ptr [0x00987f10],0x3f800000
006db353  MOV dword ptr [0x00987f14],0x0
006db35d  MOV dword ptr [0x00987f18],0x0
006db367  MOV dword ptr [0x00987f1c],0x0
006db371  MOV dword ptr [0x00987f20],0x0
006db37b  MOV dword ptr [0x00987f24],0x3f800000
006db385  MOV dword ptr [0x00987f28],0x0
006db38f  MOV dword ptr [0x00987f2c],0x0
006db399  MOV dword ptr [0x00987f30],0x0
006db3a3  MOV dword ptr [0x00987f34],0x0
006db3ad  MOV dword ptr [0x00987f38],0x3f800000
006db3b7  MOV dword ptr [0x00987f3c],0x0
006db3c1  MOV dword ptr [0x00987f40],0x0
006db3cb  MOV dword ptr [0x00987f44],0x0
006db3d5  MOV dword ptr [0x00987f48],0x0
006db3df  MOV dword ptr [0x00987f4c],0x3f800000
006db3e9  MOV EAX,dword ptr [EDI + 0x4]
006db3ec  MOV dword ptr [ESP + 0x34],ECX
006db3f0  MOV dword ptr [ESP + 0x38],EDX
006db3f4  MOV dword ptr [ESP + 0xc],0x3f800000
006db3fc  MOV dword ptr [ESP + 0x18],0x0
006db404  MOV dword ptr [ESP + 0x1c],0x0
006db40c  MOV dword ptr [ESP + 0x28],EAX
006db410  MOV ECX,0x1
006db415  JNZ 0x006db421
006db417  MOV dword ptr [ESP + 0xc],0x3f800000
006db41f  JMP 0x006db461
006db421  CMP ESI,ECX
006db423  JNZ 0x006db42f
006db425  MOV dword ptr [ESP + 0xc],0x3f666666
006db42d  JMP 0x006db461
006db42f  CMP ESI,0x2
006db432  JNZ 0x006db43e
006db434  MOV dword ptr [ESP + 0xc],0x3f4ccccd
006db43c  JMP 0x006db45d
006db43e  CMP ESI,0x4
006db441  JNZ 0x006db461
006db443  MOV dword ptr [ESP + 0xc],0x3d75c28f
006db44b  MOV dword ptr [0x00987f38],0xbf800000
006db455  MOV dword ptr [ESP + 0x1c],0x43020000
006db45d  MOV dword ptr [ESP + 0x18],ECX
006db461  CMP EAX,0x12
006db464  JL 0x006db486
006db466  CMP EAX,0x17
006db469  JG 0x006db486
006db46b  MOV ECX,dword ptr [0x008f9364]
006db471  TEST ECX,ECX
006db473  MOV dword ptr [ESP + 0xc],0x3bd4fdf4
006db47b  JNZ 0x006db493
006db47d  FSTP ST0
006db47f  POP EDI
006db480  POP ESI
006db481  POP EBX
006db482  MOV ESP,EBP
006db484  POP EBP
006db485  RET
006db486  CMP EAX,0x3
006db489  JNZ 0x006db493
006db48b  MOV dword ptr [ESP + 0xc],0x3cf5c28f
006db493  MOV ECX,dword ptr [ESP + 0x34]
006db497  FSTP float ptr [0x00987f40]
006db49d  MOV EDX,dword ptr [ESP + 0x38]
006db4a1  MOV dword ptr [0x00987f44],ECX
006db4a7  MOV ECX,dword ptr [0x0093dec4]
006db4ad  MOV dword ptr [0x00987f48],EDX
006db4b3  MOV DL,byte ptr [ECX + 0x40]
006db4b6  TEST DL,DL
006db4b8  JNZ 0x006db59f
006db4be  PUSH ESI
006db4bf  CALL 0x006c0d50
006db4c4  LEA EDX,[ESP + 0x24]
006db4c8  PUSH EDX
006db4c9  LEA EAX,[ESP + 0x1c]
006db4cd  PUSH EAX
006db4ce  LEA ECX,[ESP + 0x1c]
006db4d2  PUSH ECX
006db4d3  LEA EDX,[ESP + 0x34]
006db4d7  PUSH EDX
006db4d8  PUSH ESI
006db4d9  PUSH EDI
006db4da  CALL 0x006c0dc0
006db4df  FLD float ptr [ESP + 0x40]
006db4e3  FMUL float ptr [EBP + 0x10]
006db4e6  ADD ESP,0x1c
006db4e9  CMP ESI,0x2
006db4ec  FLD float ptr [ESP + 0x10]
006db4f0  FMUL float ptr [EBP + 0x10]
006db4f3  FSTP float ptr [ESP + 0x10]
006db4f7  FLD float ptr [ESP + 0x14]
006db4fb  FMUL float ptr [EBP + 0x10]
006db4fe  FSTP float ptr [ESP + 0x14]
006db502  JNZ 0x006db51b
006db504  FLD float ptr [0x00890968]
006db50a  FLD float ptr [ESP + 0x20]
006db50e  FUCOMPP
006db510  FNSTSW AX
006db512  TEST AH,0x44
006db515  JNP 0x006db47d
006db51b  MOV EAX,[0x0093decc]
006db520  FMUL float ptr [0x00899dd8]
006db526  MOV EAX,dword ptr [EAX + 0x48]
006db529  MOV ESI,dword ptr [EAX]
006db52b  MOV dword ptr [ESP + 0x24],EAX
006db52f  CALL 0x007c4b80
006db534  FLD float ptr [ESP + 0x20]
006db538  FMUL float ptr [0x00899dd8]
006db53e  MOV EBX,EAX
006db540  AND EBX,0xff
006db546  CALL 0x007c4b80
006db54b  FLD float ptr [ESP + 0x10]
006db54f  FMUL float ptr [0x00899dd8]
006db555  SHL EAX,0x8
006db558  OR EBX,EAX
006db55a  SHL EBX,0x8
006db55d  CALL 0x007c4b80
006db562  FLD float ptr [ESP + 0x14]
006db566  FMUL float ptr [0x00899dd8]
006db56c  AND EAX,0xff
006db571  OR EBX,EAX
006db573  SHL EBX,0x8
006db576  CALL 0x007c4b80
006db57b  MOV ECX,dword ptr [0x0093decc]
006db581  MOV EDX,dword ptr [ECX + 0x44]
006db584  MOV ECX,dword ptr [ESP + 0x24]
006db588  AND EAX,0xff
006db58d  OR EBX,EAX
006db58f  MOV EAX,dword ptr [EDX + 0x45c]
006db595  PUSH EBX
006db596  PUSH EAX
006db597  PUSH ECX
006db598  CALL dword ptr [ESI + 0x68]
006db59b  MOV EAX,dword ptr [ESP + 0x28]
006db59f  CMP EAX,0x1
006db5a2  JL 0x006db652
006db5a8  CMP EAX,0x3
006db5ab  JG 0x006db652
006db5b1  MOV EAX,[0x008f9360]
006db5b6  TEST EAX,EAX
006db5b8  JZ 0x006db47f
006db5be  FLD float ptr [0x008f935c]
006db5c4  MOV EAX,dword ptr [ESP + 0x18]
006db5c8  TEST EAX,EAX
006db5ca  FMUL float ptr [ESP + 0xc]
006db5ce  FLD float ptr [0x00987f10]
006db5d4  FMUL ST1
006db5d6  FSTP float ptr [0x00987f10]
006db5dc  FLD float ptr [0x00987f24]
006db5e2  FMUL ST1
006db5e4  FSTP float ptr [0x00987f24]
006db5ea  FMUL float ptr [0x00987f38]
006db5f0  FSTP float ptr [0x00987f38]
006db5f6  FLD float ptr [0x00987f48]
006db5fc  FADD float ptr [ESP + 0x1c]
006db600  FSTP float ptr [0x00987f48]
006db606  JZ 0x006db692
006db60c  FLD float ptr [ESP + 0x2c]
006db610  FMUL float ptr [0x00894ae4]
006db616  CALL 0x007c4b80
006db61b  XOR ECX,ECX
006db61d  MOV CX,word ptr [0x00988574]
006db624  ADD CX,AX
006db627  LEA EDX,[ESP + 0x40]
006db62b  MOV word ptr [0x00988574],CX
006db632  PUSH ECX
006db633  PUSH EDX
006db634  CALL 0x006bdb50
006db639  ADD ESP,0x8
006db63c  PUSH 0x987f10
006db641  LEA EAX,[ESP + 0x44]
006db645  PUSH EAX
006db646  PUSH 0x987f10
006db64b  CALL 0x007e7d5e
006db650  JMP 0x006db692
006db652  FLD float ptr [0x00987f10]
006db658  FMUL float ptr [ESP + 0xc]
006db65c  FSTP float ptr [0x00987f10]
006db662  FLD float ptr [0x00987f24]
006db668  FMUL float ptr [ESP + 0xc]
006db66c  FSTP float ptr [0x00987f24]
006db672  FLD float ptr [0x00987f38]
006db678  FMUL float ptr [ESP + 0xc]
006db67c  FSTP float ptr [0x00987f38]
006db682  FLD float ptr [0x00987f48]
006db688  FADD float ptr [ESP + 0x1c]
006db68c  FSTP float ptr [0x00987f48]
006db692  PUSH 0x0
006db694  PUSH 0x20000
006db699  PUSH 0x0
006db69b  PUSH 0x987f10
006db6a0  PUSH 0x986f50
006db6a5  MOV ECX,EDI
006db6a7  CALL 0x006da9b0
006db6ac  POP EDI
006db6ad  POP ESI
006db6ae  POP EBX
006db6af  MOV ESP,EBP
006db6b1  POP EBP
006db6b2  RET
