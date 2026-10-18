006b59f0  PUSH -0x1
006b59f2  PUSH 0x87d7b6
006b59f7  MOV EAX,FS:[0x0]
006b59fd  PUSH EAX
006b59fe  MOV dword ptr FS:[0x0],ESP
006b5a05  SUB ESP,0x14
006b5a08  PUSH EBX
006b5a09  PUSH EBP
006b5a0a  PUSH ESI
006b5a0b  MOV ESI,dword ptr [ESP + 0x30]
006b5a0f  PUSH 0x0
006b5a11  MOV EBP,ECX
006b5a13  PUSH ESI
006b5a14  MOV dword ptr [ESP + 0x14],EBP
006b5a18  CALL 0x006717f0
006b5a1d  MOV EAX,dword ptr [ESI + 0x4]
006b5a20  TEST EAX,EAX
006b5a22  MOV dword ptr [ESP + 0x28],0x0
006b5a2a  JZ 0x006b5a31
006b5a2c  ADD EAX,0x10
006b5a2f  JMP 0x006b5a33
006b5a31  XOR EAX,EAX
006b5a33  LEA ECX,[EBP + 0x48]
006b5a36  PUSH EAX
006b5a37  CALL 0x006b57b0
006b5a3c  MOV EAX,dword ptr [ESI + 0x4]
006b5a3f  TEST EAX,EAX
006b5a41  MOV byte ptr [ESP + 0x28],0x1
006b5a46  JZ 0x006b5a4d
006b5a48  ADD EAX,0x10
006b5a4b  JMP 0x006b5a4f
006b5a4d  XOR EAX,EAX
006b5a4f  LEA EBX,[EBP + 0x50]
006b5a52  PUSH EAX
006b5a53  MOV ECX,EBX
006b5a55  CALL 0x006b5650
006b5a5a  MOV EAX,dword ptr [ESI + 0x4]
006b5a5d  TEST EAX,EAX
006b5a5f  MOV byte ptr [ESP + 0x28],0x2
006b5a64  JZ 0x006b5a6b
006b5a66  LEA ECX,[EAX + 0x10]
006b5a69  JMP 0x006b5a6d
006b5a6b  XOR ECX,ECX
006b5a6d  PUSH EDI
006b5a6e  LEA EDI,[EBP + 0x58]
006b5a71  PUSH EDI
006b5a72  PUSH 0x622540
006b5a77  MOV dword ptr [EDI],0x890970
006b5a7d  MOV dword ptr [EDI + 0x4],ECX
006b5a80  CALL 0x005d7930
006b5a85  MOV dword ptr [EDI + 0x8],0x8ab0a8
006b5a8c  MOV dword ptr [EDI],0x8ab360
006b5a92  MOV dword ptr [EDI + 0x8],0x8ab070
006b5a99  MOV dword ptr [EBP + 0x64],0x894ac8
006b5aa0  MOV ESI,dword ptr [ESI + 0x4]
006b5aa3  TEST ESI,ESI
006b5aa5  MOV byte ptr [ESP + 0x2c],0x3
006b5aaa  JZ 0x006b5ab1
006b5aac  LEA ECX,[ESI + 0x10]
006b5aaf  JMP 0x006b5ab3
006b5ab1  XOR ECX,ECX
006b5ab3  LEA ESI,[EBP + 0x68]
006b5ab6  PUSH ESI
006b5ab7  PUSH 0x620c50
006b5abc  MOV dword ptr [ESI],0x890970
006b5ac2  MOV dword ptr [ESI + 0x4],ECX
006b5ac5  CALL 0x005d7930
006b5aca  MOV dword ptr [ESI],0x8ab060
006b5ad0  MOV dword ptr [EBX],0x8ac4a0
006b5ad6  LEA EBX,[EBP + 0x78]
006b5ad9  MOV ECX,EBX
006b5adb  MOV dword ptr [EBP],0x8ac448
006b5ae2  MOV dword ptr [EBP + 0x8],0x8ac43c
006b5ae9  MOV dword ptr [EBP + 0x48],0x8ac390
006b5af0  MOV dword ptr [EDI],0x8ac38c
006b5af6  MOV dword ptr [EBP + 0x60],0x8ac354
006b5afd  MOV dword ptr [EBP + 0x64],0x8ac350
006b5b04  MOV dword ptr [ESI],0x8ac340
006b5b0a  CALL 0x006a6440
006b5b0f  MOV EAX,dword ptr [EBP + 0x34]
006b5b12  PUSH 0x0
006b5b14  LEA ESI,[EBP + 0x7c]
006b5b17  PUSH EAX
006b5b18  MOV ECX,ESI
006b5b1a  MOV byte ptr [ESP + 0x34],0x5
006b5b1f  CALL 0x00674c40
006b5b24  PUSH EAX
006b5b25  MOV ECX,ESI
006b5b27  CALL 0x00674d20
006b5b2c  LEA EDI,[EBP + 0x90]
006b5b32  MOV ECX,0x10
006b5b37  MOV ESI,0x8a3028
006b5b3c  MOVSD.REP ES:EDI,ESI
006b5b3e  MOV EDI,dword ptr [ESP + 0x38]
006b5b42  MOV dword ptr [ESP + 0x14],0x0
006b5b4a  MOV ECX,dword ptr [ESP + 0x14]
006b5b4e  LEA EAX,[EBP + 0xd0]
006b5b54  MOV dword ptr [EAX],ECX
006b5b56  MOV dword ptr [ESP + 0x18],0x3f800000
006b5b5e  MOV EDX,dword ptr [ESP + 0x18]
006b5b62  MOV dword ptr [EAX + 0x4],EDX
006b5b65  MOV dword ptr [ESP + 0x1c],0x0
006b5b6d  MOV ECX,dword ptr [ESP + 0x1c]
006b5b71  MOV dword ptr [EAX + 0x8],ECX
006b5b74  MOV dword ptr [ESP + 0x20],0x0
006b5b7c  MOV EDX,dword ptr [ESP + 0x20]
006b5b80  MOV dword ptr [EAX + 0xc],EDX
006b5b83  MOV dword ptr [ESP + 0x14],0x3f800000
006b5b8b  MOV ECX,dword ptr [ESP + 0x14]
006b5b8f  LEA EAX,[EBP + 0xe0]
006b5b95  MOV dword ptr [EAX],ECX
006b5b97  MOV dword ptr [ESP + 0x18],0x3f800000
006b5b9f  MOV EDX,dword ptr [ESP + 0x18]
006b5ba3  MOV dword ptr [EAX + 0x4],EDX
006b5ba6  XOR ESI,ESI
006b5ba8  MOV dword ptr [EBP + 0xec],ESI
006b5bae  MOV dword ptr [ESP + 0x1c],0x3f800000
006b5bb6  MOV ECX,dword ptr [ESP + 0x1c]
006b5bba  MOV dword ptr [EAX + 0x8],ECX
006b5bbd  MOV EDX,dword ptr [EDI + 0x30]
006b5bc0  MOV dword ptr [EBP + 0xfc],EDX
006b5bc6  MOV EAX,dword ptr [EDI + 0x34]
006b5bc9  MOV dword ptr [EBP + 0x104],EAX
006b5bcf  LEA EAX,[EBP + 0x110]
006b5bd5  MOV dword ptr [EBP + 0x10c],ESI
006b5bdb  MOV dword ptr [EAX],EAX
006b5bdd  MOV dword ptr [EAX + 0x4],EAX
006b5be0  MOV dword ptr [EAX + 0x8],ESI
006b5be3  MOV dword ptr [EAX + 0xc],ESI
006b5be6  LEA EAX,[EBP + 0x120]
006b5bec  MOV dword ptr [EAX],EAX
006b5bee  MOV dword ptr [EAX + 0x4],EAX
006b5bf1  MOV dword ptr [EAX + 0x8],ESI
006b5bf4  MOV dword ptr [EAX + 0xc],ESI
006b5bf7  MOV ECX,dword ptr [EBP + 0x34]
006b5bfa  MOV EDX,dword ptr [ECX]
006b5bfc  MOV byte ptr [ESP + 0x2c],0x8
006b5c01  CALL dword ptr [EDX + 0x4]
006b5c04  MOV dword ptr [EBP + 0x108],EAX
006b5c0a  MOV ECX,dword ptr [0x009382f0]
006b5c10  LEA EAX,[EBP + 0x70]
006b5c13  MOV dword ptr [ECX],EAX
006b5c15  MOV [0x009382f0],EAX
006b5c1a  MOV dword ptr [EAX + 0x4],ECX
006b5c1d  MOV dword ptr [EAX],0x9382ec
006b5c23  MOV EAX,dword ptr [EBX]
006b5c25  MOV ECX,dword ptr [EAX]
006b5c27  MOV EDX,dword ptr [0x008a2fb4]
006b5c2d  ADD ECX,0x50
006b5c30  MOV dword ptr [ECX],EDX
006b5c32  MOV EAX,[0x008a2fb8]
006b5c37  MOV dword ptr [ECX + 0x4],EAX
006b5c3a  MOV EDX,dword ptr [0x008a2fbc]
006b5c40  MOV dword ptr [ECX + 0x8],EDX
006b5c43  MOV EAX,dword ptr [EBX]
006b5c45  MOV ECX,dword ptr [EAX]
006b5c47  MOV EDX,dword ptr [0x008a2fb4]
006b5c4d  ADD ECX,0x60
006b5c50  MOV dword ptr [ECX],EDX
006b5c52  MOV EAX,[0x008a2fb8]
006b5c57  MOV dword ptr [ECX + 0x4],EAX
006b5c5a  MOV EDX,dword ptr [0x008a2fbc]
006b5c60  MOV dword ptr [ECX + 0x8],EDX
006b5c63  XOR EAX,EAX
006b5c65  CMP dword ptr [EAX*0x4 + 0x9376c8],ESI
006b5c6c  JZ 0x006b5c77
006b5c6e  INC EAX
006b5c6f  CMP EAX,0x40
006b5c72  JC 0x006b5c65
006b5c74  OR EAX,0xffffffff
006b5c77  MOV ECX,dword ptr [EBX]
006b5c79  MOV EDX,dword ptr [ECX]
006b5c7b  MOV byte ptr [EDX + 0x5e],AL
006b5c7e  MOV EAX,dword ptr [EBX]
006b5c80  MOV ECX,dword ptr [EAX]
006b5c82  MOV EDX,dword ptr [0x008a2fb4]
006b5c88  ADD ECX,0x60
006b5c8b  MOV dword ptr [ECX],EDX
006b5c8d  MOV EAX,[0x008a2fb8]
006b5c92  MOV dword ptr [ECX + 0x4],EAX
006b5c95  MOV EDX,dword ptr [0x008a2fbc]
006b5c9b  MOV dword ptr [ECX + 0x8],EDX
006b5c9e  MOV EAX,dword ptr [EBX]
006b5ca0  MOV ECX,dword ptr [EAX]
006b5ca2  MOV EDX,dword ptr [EDI + 0x20]
006b5ca5  MOV dword ptr [ECX + 0x2c],EDX
006b5ca8  MOV EAX,dword ptr [EBX]
006b5caa  MOV ECX,dword ptr [EAX]
006b5cac  MOV byte ptr [ECX + 0x5c],0x0
006b5cb0  MOV EDX,dword ptr [EBX]
006b5cb2  MOV EAX,dword ptr [EDX]
006b5cb4  MOV ECX,dword ptr [EDI + 0x10]
006b5cb7  MOV EDX,dword ptr [ECX]
006b5cb9  ADD EAX,0x10
006b5cbc  MOV dword ptr [EAX],EDX
006b5cbe  MOV EDX,dword ptr [ECX + 0x4]
006b5cc1  MOV dword ptr [EAX + 0x4],EDX
006b5cc4  MOV ECX,dword ptr [ECX + 0x8]
006b5cc7  MOV dword ptr [EAX + 0x8],ECX
006b5cca  MOV AL,byte ptr [EDI + 0x2c]
006b5ccd  TEST AL,AL
006b5ccf  JZ 0x006b5cd6
006b5cd1  MOV EAX,dword ptr [EDI + 0x14]
006b5cd4  JMP 0x006b5cdb
006b5cd6  MOV EAX,0x8a2fb4
006b5cdb  MOV EDX,dword ptr [EBX]
006b5cdd  MOV ECX,dword ptr [EDX]
006b5cdf  MOV EDX,dword ptr [EAX]
006b5ce1  ADD ECX,0x20
006b5ce4  MOV dword ptr [ECX],EDX
006b5ce6  MOV EDX,dword ptr [EAX + 0x4]
006b5ce9  MOV dword ptr [ECX + 0x4],EDX
006b5cec  MOV EAX,dword ptr [EAX + 0x8]
006b5cef  MOV dword ptr [ECX + 0x8],EAX
006b5cf2  MOV AL,byte ptr [EDI + 0x2c]
006b5cf5  TEST AL,AL
006b5cf7  JZ 0x006b5cfe
006b5cf9  MOV EDI,dword ptr [EDI + 0x18]
006b5cfc  JMP 0x006b5d03
006b5cfe  MOV EDI,0x8a2fb4
006b5d03  MOV ECX,dword ptr [EBX]
006b5d05  FLD float ptr [0x0089096c]
006b5d0b  MOV EDX,dword ptr [ECX]
006b5d0d  MOV EAX,dword ptr [EDI]
006b5d0f  ADD EDX,0x30
006b5d12  MOV dword ptr [EDX],EAX
006b5d14  MOV ECX,dword ptr [EDI + 0x4]
006b5d17  MOV dword ptr [EDX + 0x4],ECX
006b5d1a  MOV EAX,dword ptr [EDI + 0x8]
006b5d1d  MOV dword ptr [EDX + 0x8],EAX
006b5d20  MOV ECX,dword ptr [EBX]
006b5d22  MOV EDI,dword ptr [ECX]
006b5d24  ADD EDI,0x70
006b5d27  MOV ECX,0x10
006b5d2c  MOV ESI,0x8a3028
006b5d31  MOVSD.REP ES:EDI,ESI
006b5d33  MOV EDX,dword ptr [EBX]
006b5d35  MOV EAX,dword ptr [EDX]
006b5d37  MOV ESI,dword ptr [ESP + 0x38]
006b5d3b  MOV ECX,dword ptr [ESI + 0x24]
006b5d3e  MOV EDX,dword ptr [ECX]
006b5d40  MOV dword ptr [EAX + 0x40],EDX
006b5d43  MOV EDX,dword ptr [ECX + 0x4]
006b5d46  MOV dword ptr [EAX + 0x44],EDX
006b5d49  MOV ECX,dword ptr [ECX + 0x8]
006b5d4c  MOV dword ptr [EAX + 0x48],ECX
006b5d4f  MOV EDX,dword ptr [EBX]
006b5d51  MOV ECX,dword ptr [EDX]
006b5d53  ADD EAX,0x40
006b5d56  XOR EAX,EAX
006b5d58  MOV word ptr [ECX + 0x1c],AX
006b5d5c  MOV EDX,dword ptr [EBX]
006b5d5e  MOV ECX,dword ptr [EDX]
006b5d60  MOV word ptr [ECX + 0x1e],AX
006b5d64  MOV EDX,dword ptr [EBX]
006b5d66  MOV EAX,dword ptr [EDX]
006b5d68  FDIV float ptr [EAX + 0x2c]
006b5d6b  FSTP float ptr [EAX + 0x3c]
006b5d6e  MOV EAX,dword ptr [EBX]
006b5d70  MOV ECX,dword ptr [EAX]
006b5d72  MOV byte ptr [ECX + 0x5d],0x0
006b5d76  MOV EAX,dword ptr [ESI + 0x28]
006b5d79  FLD float ptr [EAX + 0x8]
006b5d7c  MOV EDX,dword ptr [EBX]
006b5d7e  FLD float ptr [EAX + 0x4]
006b5d81  MOV EDI,dword ptr [EDX]
006b5d83  FLD float ptr [EAX]
006b5d85  FLD ST0
006b5d87  FMUL ST1
006b5d89  FLD ST2
006b5d8b  FMUL ST3
006b5d8d  FADDP
006b5d8f  FLD ST3
006b5d91  FMUL ST4
006b5d93  FADDP
006b5d95  FSTP float ptr [ESP + 0x38]
006b5d99  MOV EAX,dword ptr [ESP + 0x38]
006b5d9d  FSTP ST0
006b5d9f  PUSH EAX
006b5da0  FSTP ST0
006b5da2  FSTP ST0
006b5da4  CALL 0x005c5e80
006b5da9  FSTP float ptr [EDI + 0x6c]
006b5dac  MOV ECX,dword ptr [ESI + 0x1c]
006b5daf  ADD ESP,0x4
006b5db2  PUSH ECX
006b5db3  LEA ECX,[EBP + 0x48]
006b5db6  CALL 0x00696d90
006b5dbb  MOV EAX,dword ptr [ESI + 0x28]
006b5dbe  FLD float ptr [EAX + 0x8]
006b5dc1  FLD float ptr [EAX + 0x4]
006b5dc4  FLD float ptr [EAX]
006b5dc6  FLD ST0
006b5dc8  FMUL ST1
006b5dca  FLD ST2
006b5dcc  FMUL ST3
006b5dce  MOV EDX,dword ptr [EBX]
006b5dd0  FADDP
006b5dd2  MOV EDI,dword ptr [EDX]
006b5dd4  FLD ST3
006b5dd6  FMUL ST4
006b5dd8  FADDP
006b5dda  FSTP float ptr [ESP + 0x38]
006b5dde  MOV EAX,dword ptr [ESP + 0x38]
006b5de2  FSTP ST0
006b5de4  PUSH EAX
006b5de5  FSTP ST0
006b5de7  FSTP ST0
006b5de9  CALL 0x005c5e80
006b5dee  MOVZX EAX,byte ptr [EDI + 0x5e]
006b5df2  FSTP float ptr [ESP + 0x3c]
006b5df6  ADD ESP,0x4
006b5df9  CMP EAX,0x40
006b5dfc  JNC 0x006b5e1d
006b5dfe  IMUL EAX,EAX,0x6c
006b5e01  ADD EAX,0x935a48
006b5e06  MOV EDI,EAX
006b5e08  JZ 0x006b5e1d
006b5e0a  MOV ECX,dword ptr [ESP + 0x38]
006b5e0e  MOV EDX,dword ptr [ESI + 0x10]
006b5e11  PUSH ECX
006b5e12  PUSH EDX
006b5e13  PUSH EBP
006b5e14  MOV ECX,EDI
006b5e16  CALL 0x006b4cc0
006b5e1b  JMP 0x006b5e1f
006b5e1d  XOR EDI,EDI
006b5e1f  MOV EAX,dword ptr [EBP + 0x84]
006b5e25  MOV dword ptr [EBP + 0x100],EDI
006b5e2b  ADD EAX,0x90
006b5e30  MOV EDX,dword ptr [EAX]
006b5e32  LEA ECX,[EBP + 0xf0]
006b5e38  MOV dword ptr [ECX],EDX
006b5e3a  MOV EDX,dword ptr [EAX + 0x4]
006b5e3d  MOV dword ptr [ECX + 0x4],EDX
006b5e40  MOV EAX,dword ptr [EAX + 0x8]
006b5e43  MOV dword ptr [ECX + 0x8],EAX
006b5e46  MOV ECX,dword ptr [ESI + 0x28]
006b5e49  FLD float ptr [ECX]
006b5e4b  POP EDI
006b5e4c  FLD float ptr [0x00890d60]
006b5e52  FCOMP
006b5e54  FNSTSW AX
006b5e56  TEST AH,0x41
006b5e59  JNZ 0x006b5e63
006b5e5b  FSTP ST0
006b5e5d  FLD float ptr [0x00890d60]
006b5e63  FSTP float ptr [EBP + 0xe0]
006b5e69  MOV EDX,dword ptr [ESI + 0x28]
006b5e6c  FLD float ptr [EDX + 0x4]
006b5e6f  FLD float ptr [0x00890d60]
006b5e75  FCOMP
006b5e77  FNSTSW AX
006b5e79  TEST AH,0x41
006b5e7c  JNZ 0x006b5e86
006b5e7e  FSTP ST0
006b5e80  FLD float ptr [0x00890d60]
006b5e86  FSTP float ptr [EBP + 0xe4]
006b5e8c  MOV EAX,dword ptr [ESI + 0x28]
006b5e8f  FLD float ptr [EAX + 0x8]
006b5e92  FLD float ptr [0x00890d60]
006b5e98  FCOMP
006b5e9a  FNSTSW AX
006b5e9c  TEST AH,0x41
006b5e9f  JNZ 0x006b5ea9
006b5ea1  FSTP ST0
006b5ea3  FLD float ptr [0x00890d60]
006b5ea9  FSTP float ptr [EBP + 0xe8]
006b5eaf  MOV AL,byte ptr [ESI + 0x2c]
006b5eb2  TEST AL,AL
006b5eb4  JNZ 0x006b5ebe
006b5eb6  MOV ECX,dword ptr [EBX]
006b5eb8  MOV EDX,dword ptr [ECX]
006b5eba  MOV byte ptr [EDX + 0x5d],0x1
006b5ebe  MOV EAX,dword ptr [EBP + 0x84]
006b5ec4  FLD float ptr [EAX + 0x18]
006b5ec7  ADD EAX,0x10
006b5eca  FLD float ptr [EAX + 0x4]
006b5ecd  FLD float ptr [EAX]
006b5ecf  FLD ST0
006b5ed1  FMUL ST1
006b5ed3  FLD ST2
006b5ed5  FMUL ST3
006b5ed7  FADDP
006b5ed9  FLD ST3
006b5edb  FMUL ST4
006b5edd  FADDP
006b5edf  FCOMP float ptr [0x00890968]
006b5ee5  FSTP ST0
006b5ee7  FNSTSW AX
006b5ee9  FSTP ST0
006b5eeb  TEST AH,0x41
006b5eee  FSTP ST0
006b5ef0  JNZ 0x006b5efc
006b5ef2  MOV EAX,dword ptr [EBX]
006b5ef4  MOV EAX,dword ptr [EAX]
006b5ef6  OR byte ptr [EAX + 0x1c],0x20
006b5efa  JMP 0x006b5f04
006b5efc  MOV ECX,dword ptr [EBX]
006b5efe  MOV EAX,dword ptr [ECX]
006b5f00  AND byte ptr [EAX + 0x1c],0xdf
006b5f04  MOV EAX,dword ptr [EBP + 0x84]
006b5f0a  FLD float ptr [EAX + 0x68]
006b5f0d  ADD EAX,0x60
006b5f10  FLD float ptr [EAX + 0x4]
006b5f13  FLD float ptr [EAX]
006b5f15  FLD ST0
006b5f17  FMUL ST1
006b5f19  FLD ST2
006b5f1b  FMUL ST3
006b5f1d  FADDP
006b5f1f  FLD ST3
006b5f21  FMUL ST4
006b5f23  FADDP
006b5f25  FCOMP float ptr [0x00890968]
006b5f2b  FSTP ST0
006b5f2d  FNSTSW AX
006b5f2f  FSTP ST0
006b5f31  TEST AH,0x41
006b5f34  FSTP ST0
006b5f36  JNZ 0x006b5f42
006b5f38  MOV EDX,dword ptr [EBX]
006b5f3a  MOV EAX,dword ptr [EDX]
006b5f3c  OR byte ptr [EAX + 0x1d],0x8
006b5f40  JMP 0x006b5f4a
006b5f42  MOV EAX,dword ptr [EBX]
006b5f44  MOV EAX,dword ptr [EAX]
006b5f46  AND byte ptr [EAX + 0x1d],0xf7
006b5f4a  CMP dword ptr [EBP + 0x108],0x1
006b5f51  JNZ 0x006b5f5b
006b5f53  MOV ECX,dword ptr [EBX]
006b5f55  MOV EAX,dword ptr [ECX]
006b5f57  OR byte ptr [EAX + 0x1c],0x40
006b5f5b  MOV ECX,dword ptr [EBP + 0x34]
006b5f5e  MOV EDX,dword ptr [ECX]
006b5f60  CALL dword ptr [EDX + 0x70]
006b5f63  MOV ECX,dword ptr [EBP + 0x104]
006b5f69  PUSH ECX
006b5f6a  PUSH 0x1c
006b5f6c  PUSH 0x1
006b5f6e  PUSH EAX
006b5f6f  CALL 0x00787580
006b5f74  ADD ESP,0x10
006b5f77  MOV ECX,EBP
006b5f79  MOV dword ptr [EBP + 0xec],EAX
006b5f7f  CALL 0x006a6e30
006b5f84  MOV EDX,dword ptr [EBX]
006b5f86  MOV EAX,dword ptr [EDX]
006b5f88  MOVZX ECX,byte ptr [EAX + 0x5e]
006b5f8c  MOV EDX,dword ptr [0x009377c8]
006b5f92  MOV dword ptr [ECX*0x4 + 0x9376c8],EBP
006b5f99  MOV ECX,dword ptr [ESP + 0x20]
006b5f9d  INC EDX
006b5f9e  MOV dword ptr [0x009377c8],EDX
006b5fa4  MOV EDX,dword ptr [EBX]
006b5fa6  MOV EAX,dword ptr [EDX]
006b5fa8  OR byte ptr [EAX + 0x1d],0x2
006b5fac  POP ESI
006b5fad  MOV EAX,EBP
006b5faf  POP EBP
006b5fb0  POP EBX
006b5fb1  MOV dword ptr FS:[0x0],ECX
006b5fb8  ADD ESP,0x20
006b5fbb  RET 0x8
