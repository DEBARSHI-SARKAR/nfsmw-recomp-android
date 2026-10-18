006d6cf0  PUSH EBP
006d6cf1  MOV EBP,ESP
006d6cf3  AND ESP,0xfffffff0
006d6cf6  PUSH -0x1
006d6cf8  PUSH 0x87e428
006d6cfd  MOV EAX,FS:[0x0]
006d6d03  PUSH EAX
006d6d04  MOV dword ptr FS:[0x0],ESP
006d6d0b  SUB ESP,0xbc
006d6d11  PUSH ESI
006d6d12  PUSH EDI
006d6d13  PUSH 0x0
006d6d15  PUSH 0x0
006d6d17  PUSH 0xce3b435b
006d6d1c  LEA ECX,[ESP + 0x68]
006d6d20  CALL 0x0069b6c0
006d6d25  FLD float ptr [0x0090193c]
006d6d2b  FSUB float ptr [0x00901938]
006d6d31  MOV AL,[0x00901934]
006d6d36  TEST AL,AL
006d6d38  MOV dword ptr [ESP + 0xcc],0x0
006d6d43  FSTP double ptr [ESP + 0x88]
006d6d4a  MOV dword ptr [ESP + 0x24],0x3f800000
006d6d52  JZ 0x006d6de0
006d6d58  MOV EAX,[0x009b392c]
006d6d5d  MOV ECX,dword ptr [EAX + 0x70]
006d6d60  FLD float ptr [EAX + 0x7c]
006d6d63  MOV EDX,dword ptr [EAX + 0x74]
006d6d66  FLD float ptr [EAX + 0x90]
006d6d6c  FMUL float ptr [0x00890dc4]
006d6d72  MOV dword ptr [ESP + 0x30],ECX
006d6d76  MOV ECX,dword ptr [EAX + 0x78]
006d6d79  MOV dword ptr [ESP + 0x34],EDX
006d6d7d  MOV EDX,dword ptr [EAX + 0x80]
006d6d83  FSTP float ptr [ESP + 0x28]
006d6d87  FLD float ptr [EAX + 0x94]
006d6d8d  MOV dword ptr [ESP + 0x38],ECX
006d6d91  MOV ECX,dword ptr [EAX + 0x84]
006d6d97  FMUL float ptr [0x00890dc4]
006d6d9d  MOV dword ptr [ESP + 0x14],EDX
006d6da1  MOV EDX,dword ptr [EAX + 0x88]
006d6da7  MOV dword ptr [ESP + 0x18],ECX
006d6dab  FSTP float ptr [ESP + 0x10]
006d6daf  MOV ECX,dword ptr [EAX + 0x8c]
006d6db5  MOV dword ptr [ESP + 0x1c],EDX
006d6db9  MOV EDX,dword ptr [EAX + 0x98]
006d6dbf  MOV dword ptr [ESP + 0x20],ECX
006d6dc3  MOV ECX,dword ptr [EAX + 0x9c]
006d6dc9  MOV dword ptr [ESP + 0x2c],EDX
006d6dcd  MOV EDX,dword ptr [EAX + 0xa0]
006d6dd3  MOV dword ptr [ESP + 0xc],ECX
006d6dd7  MOV dword ptr [ESP + 0x24],EDX
006d6ddb  JMP 0x006d6ef2
006d6de0  PUSH 0x0
006d6de2  PUSH 0xc8baf5d6
006d6de7  LEA ECX,[ESP + 0x64]
006d6deb  CALL 0x00454810
006d6df0  TEST EAX,EAX
006d6df2  JNZ 0x006d6dfe
006d6df4  PUSH 0x4
006d6df6  CALL 0x006269b0
006d6dfb  ADD ESP,0x4
006d6dfe  FLD float ptr [EAX]
006d6e00  PUSH 0x0
006d6e02  FMUL float ptr [0x00890dc4]
006d6e08  PUSH 0x555fd699
006d6e0d  LEA ECX,[ESP + 0x64]
006d6e11  FSTP float ptr [ESP + 0x18]
006d6e15  CALL 0x00454810
006d6e1a  TEST EAX,EAX
006d6e1c  JNZ 0x006d6e28
006d6e1e  PUSH 0x4
006d6e20  CALL 0x006269b0
006d6e25  ADD ESP,0x4
006d6e28  FLD float ptr [EAX]
006d6e2a  PUSH 0x0
006d6e2c  FMUL float ptr [0x00890dc4]
006d6e32  PUSH 0x2cf0b378
006d6e37  LEA ECX,[ESP + 0x64]
006d6e3b  FSTP float ptr [ESP + 0x30]
006d6e3f  CALL 0x00454810
006d6e44  TEST EAX,EAX
006d6e46  JNZ 0x006d6e52
006d6e48  PUSH 0x10
006d6e4a  CALL 0x006269b0
006d6e4f  ADD ESP,0x4
006d6e52  MOV ECX,dword ptr [EAX]
006d6e54  MOV EDX,dword ptr [EAX + 0x4]
006d6e57  MOV dword ptr [ESP + 0x14],ECX
006d6e5b  MOV ECX,dword ptr [EAX + 0x8]
006d6e5e  MOV dword ptr [ESP + 0x18],EDX
006d6e62  MOV EDX,dword ptr [EAX + 0xc]
006d6e65  PUSH 0x0
006d6e67  MOV dword ptr [ESP + 0x20],ECX
006d6e6b  PUSH 0xa450f56c
006d6e70  LEA ECX,[ESP + 0x64]
006d6e74  MOV dword ptr [ESP + 0x28],EDX
006d6e78  CALL 0x00454810
006d6e7d  TEST EAX,EAX
006d6e7f  JNZ 0x006d6e8b
006d6e81  PUSH 0x10
006d6e83  CALL 0x006269b0
006d6e88  ADD ESP,0x4
006d6e8b  MOV ECX,dword ptr [EAX]
006d6e8d  MOV EDX,dword ptr [EAX + 0x4]
006d6e90  MOV dword ptr [ESP + 0x30],ECX
006d6e94  MOV ECX,dword ptr [EAX + 0x8]
006d6e97  MOV dword ptr [ESP + 0x34],EDX
006d6e9b  MOV EDX,dword ptr [EAX + 0xc]
006d6e9e  PUSH 0x0
006d6ea0  MOV dword ptr [ESP + 0x3c],ECX
006d6ea4  PUSH 0xdba22a95
006d6ea9  LEA ECX,[ESP + 0x64]
006d6ead  MOV dword ptr [ESP + 0x44],EDX
006d6eb1  CALL 0x00454810
006d6eb6  TEST EAX,EAX
006d6eb8  JNZ 0x006d6ec4
006d6eba  PUSH 0x4
006d6ebc  CALL 0x006269b0
006d6ec1  ADD ESP,0x4
006d6ec4  MOV EAX,dword ptr [EAX]
006d6ec6  PUSH 0x0
006d6ec8  PUSH 0x2f70d78a
006d6ecd  LEA ECX,[ESP + 0x64]
006d6ed1  MOV dword ptr [ESP + 0x14],EAX
006d6ed5  CALL 0x00454810
006d6eda  TEST EAX,EAX
006d6edc  JNZ 0x006d6ee8
006d6ede  PUSH 0x4
006d6ee0  CALL 0x006269b0
006d6ee5  ADD ESP,0x4
006d6ee8  MOV ECX,dword ptr [EAX]
006d6eea  FLD float ptr [ESP + 0x3c]
006d6eee  MOV dword ptr [ESP + 0x2c],ECX
006d6ef2  FLD float ptr [ESP + 0x10]
006d6ef6  FCOMP float ptr [0x00890968]
006d6efc  FNSTSW AX
006d6efe  TEST AH,0x41
006d6f01  JNZ 0x006d6f16
006d6f03  FLD float ptr [ESP + 0x10]
006d6f07  FMUL double ptr [ESP + 0x88]
006d6f0e  FADD float ptr [0x00901938]
006d6f14  JMP 0x006d6f1c
006d6f16  FLD double ptr [0x008942e0]
006d6f1c  FLD float ptr [ESP + 0x28]
006d6f20  PUSH 0x0
006d6f22  FMUL double ptr [ESP + 0x8c]
006d6f29  PUSH 0x110882d5
006d6f2e  LEA ECX,[ESP + 0x64]
006d6f32  FADD float ptr [0x00901938]
006d6f38  FLD ST1
006d6f3a  FMUL float ptr [ESP + 0x1c]
006d6f3e  FSTP float ptr [0x008fae14]
006d6f44  FLD float ptr [ESP + 0x38]
006d6f48  FMUL ST1
006d6f4a  FSTP float ptr [0x008fae04]
006d6f50  FLD ST1
006d6f52  FMUL float ptr [ESP + 0x20]
006d6f56  FSTP float ptr [0x008fae18]
006d6f5c  FLD float ptr [ESP + 0x3c]
006d6f60  FMUL ST1
006d6f62  FSTP float ptr [0x008fae08]
006d6f68  FLD ST1
006d6f6a  FMUL float ptr [ESP + 0x24]
006d6f6e  FSTP float ptr [0x008fae1c]
006d6f74  FLD float ptr [ESP + 0x40]
006d6f78  FMUL ST1
006d6f7a  FSTP float ptr [0x008fae0c]
006d6f80  FXCH
006d6f82  FMUL float ptr [ESP + 0x28]
006d6f86  FSTP float ptr [0x008fae20]
006d6f8c  FMUL ST1
006d6f8e  FSTP float ptr [0x008fae10]
006d6f94  FSTP ST0
006d6f96  CALL 0x00454810
006d6f9b  TEST EAX,EAX
006d6f9d  JNZ 0x006d6fa9
006d6f9f  PUSH 0x1
006d6fa1  CALL 0x006269b0
006d6fa6  ADD ESP,0x4
006d6fa9  MOV AL,byte ptr [EAX]
006d6fab  TEST AL,AL
006d6fad  MOV [0x008fae38],AL
006d6fb2  JZ 0x006d708f
006d6fb8  FLD float ptr [0x008fae04]
006d6fbe  FADD float ptr [0x008fae14]
006d6fc4  FSTP float ptr [ESP + 0x40]
006d6fc8  FLD float ptr [0x0089096c]
006d6fce  FDIV float ptr [ESP + 0x40]
006d6fd2  FSTP float ptr [ESP + 0x90]
006d6fd9  FLD float ptr [0x008fae04]
006d6fdf  FMUL float ptr [0x008afb5c]
006d6fe5  FSTP float ptr [ESP + 0xb0]
006d6fec  FLD float ptr [0x008fae14]
006d6ff2  FMUL float ptr [0x008afb58]
006d6ff8  FSTP float ptr [ESP + 0xa0]
006d6fff  FLD float ptr [0x008fae08]
006d7005  FADD float ptr [0x008fae18]
006d700b  FSTP float ptr [ESP + 0x44]
006d700f  FLD float ptr [0x0089096c]
006d7015  FDIV float ptr [ESP + 0x44]
006d7019  FSTP float ptr [ESP + 0x94]
006d7020  FLD float ptr [0x008fae08]
006d7026  FMUL float ptr [0x008afb5c]
006d702c  FSTP float ptr [ESP + 0xb4]
006d7033  FLD float ptr [0x008fae18]
006d7039  FMUL float ptr [0x008afb58]
006d703f  FSTP float ptr [ESP + 0xa4]
006d7046  FLD float ptr [0x008fae0c]
006d704c  FADD float ptr [0x008fae1c]
006d7052  FSTP float ptr [ESP + 0x48]
006d7056  FLD float ptr [0x0089096c]
006d705c  FDIV float ptr [ESP + 0x48]
006d7060  FSTP float ptr [ESP + 0x98]
006d7067  FLD float ptr [0x008fae0c]
006d706d  FMUL float ptr [0x008afb5c]
006d7073  FSTP float ptr [ESP + 0xb8]
006d707a  FLD float ptr [0x008fae1c]
006d7080  FMUL float ptr [0x008afb58]
006d7086  FSTP float ptr [ESP + 0xa8]
006d708d  JMP 0x006d70a7
006d708f  MOV dword ptr [ESP + 0x40],0x0
006d7097  MOV dword ptr [ESP + 0x44],0x0
006d709f  MOV dword ptr [ESP + 0x48],0x0
006d70a7  TEST AL,AL
006d70a9  FLD float ptr [0x0089096c]
006d70af  FSUB float ptr [ESP + 0xc]
006d70b3  FLD ST0
006d70b5  FMUL ST1
006d70b7  FSTP float ptr [ESP + 0x70]
006d70bb  FSTP ST0
006d70bd  FLD float ptr [ESP + 0xc]
006d70c1  FMUL float ptr [ESP + 0xc]
006d70c5  FADD float ptr [0x0089096c]
006d70cb  FSTP float ptr [ESP + 0x74]
006d70cf  FLD float ptr [ESP + 0xc]
006d70d3  FMUL float ptr [0x00890e94]
006d70d9  FSTP float ptr [ESP + 0x78]
006d70dd  JZ 0x006d70e9
006d70df  MOV EDX,dword ptr [ESP + 0x2c]
006d70e3  MOV dword ptr [ESP + 0x7c],EDX
006d70e7  JMP 0x006d70f1
006d70e9  MOV dword ptr [ESP + 0x7c],0x0
006d70f1  MOV ESI,dword ptr [0x0093de78]
006d70f7  MOV EAX,dword ptr [ESI + 0x44]
006d70fa  MOV ECX,dword ptr [EAX + 0x63c]
006d7100  MOV EAX,dword ptr [ESI + 0x48]
006d7103  MOV EDX,dword ptr [EAX]
006d7105  LEA EDI,[ESP + 0x40]
006d7109  PUSH EDI
006d710a  PUSH ECX
006d710b  PUSH EAX
006d710c  CALL dword ptr [EDX + 0x88]
006d7112  MOV EAX,dword ptr [ESI + 0x44]
006d7115  MOV ECX,dword ptr [EAX + 0x664]
006d711b  MOV EAX,dword ptr [ESI + 0x48]
006d711e  MOV EDX,dword ptr [EAX]
006d7120  LEA EDI,[ESP + 0x90]
006d7127  PUSH EDI
006d7128  PUSH ECX
006d7129  PUSH EAX
006d712a  CALL dword ptr [EDX + 0x88]
006d7130  MOV EAX,dword ptr [ESI + 0x44]
006d7133  MOV ECX,dword ptr [EAX + 0x68c]
006d7139  MOV EAX,dword ptr [ESI + 0x48]
006d713c  MOV EDX,dword ptr [EAX]
006d713e  LEA EDI,[ESP + 0xb0]
006d7145  PUSH EDI
006d7146  PUSH ECX
006d7147  PUSH EAX
006d7148  CALL dword ptr [EDX + 0x88]
006d714e  MOV EAX,dword ptr [ESI + 0x44]
006d7151  MOV ECX,dword ptr [EAX + 0x6b4]
006d7157  MOV EAX,dword ptr [ESI + 0x48]
006d715a  MOV EDX,dword ptr [EAX]
006d715c  LEA EDI,[ESP + 0xa0]
006d7163  PUSH EDI
006d7164  PUSH ECX
006d7165  PUSH EAX
006d7166  CALL dword ptr [EDX + 0x88]
006d716c  MOV EAX,dword ptr [ESI + 0x44]
006d716f  MOV ECX,dword ptr [EAX + 0x6dc]
006d7175  MOV EAX,dword ptr [ESI + 0x48]
006d7178  MOV EDX,dword ptr [EAX]
006d717a  LEA EDI,[ESP + 0x70]
006d717e  PUSH EDI
006d717f  PUSH ECX
006d7180  PUSH EAX
006d7181  CALL dword ptr [EDX + 0x88]
006d7187  MOV EAX,dword ptr [ESI + 0x44]
006d718a  MOV ECX,dword ptr [EAX + 0xeac]
006d7190  MOV EAX,dword ptr [ESI + 0x48]
006d7193  MOV EDX,dword ptr [EAX]
006d7195  PUSH 0x8fae24
006d719a  PUSH ECX
006d719b  PUSH EAX
006d719c  CALL dword ptr [EDX + 0x88]
006d71a2  MOV EAX,dword ptr [ESI + 0x44]
006d71a5  MOV EDX,dword ptr [ESP + 0x24]
006d71a9  MOV EAX,dword ptr [EAX + 0x704]
006d71af  MOV ESI,dword ptr [ESI + 0x48]
006d71b2  MOV ECX,dword ptr [ESI]
006d71b4  PUSH EDX
006d71b5  PUSH EAX
006d71b6  PUSH ESI
006d71b7  CALL dword ptr [ECX + 0x78]
006d71ba  LEA ECX,[ESP + 0x5c]
006d71be  MOV dword ptr [ESP + 0xcc],0xffffffff
006d71c9  CALL 0x0045a430
006d71ce  MOV ECX,dword ptr [ESP + 0xc4]
006d71d5  POP EDI
006d71d6  MOV dword ptr FS:[0x0],ECX
006d71dd  POP ESI
006d71de  MOV ESP,EBP
006d71e0  POP EBP
006d71e1  RET
