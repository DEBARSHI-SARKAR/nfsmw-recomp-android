00488830  SUB ESP,0x19c
00488836  PUSH EBX
00488837  MOV EBX,dword ptr [ESP + 0x1a4]
0048883e  PUSH EBP
0048883f  PUSH ESI
00488840  MOV ESI,ECX
00488842  LEA EAX,[EBX + 0xc]
00488845  MOV ECX,dword ptr [EAX]
00488847  MOV EDX,dword ptr [EAX + 0x4]
0048884a  MOV EAX,dword ptr [EAX + 0x8]
0048884d  PUSH EDI
0048884e  XOR EDI,EDI
00488850  MOV dword ptr [ESP + 0x10],ECX
00488854  LEA ECX,[ESP + 0x10]
00488858  MOV dword ptr [ESP + 0x78],EDI
0048885c  MOV dword ptr [ESP + 0x7c],EDI
00488860  MOV dword ptr [ESP + 0x80],EDI
00488867  MOV dword ptr [ESP + 0x54],EDI
0048886b  MOV dword ptr [ESP + 0x58],EDI
0048886f  MOV dword ptr [ESP + 0x5c],EDI
00488873  MOV dword ptr [ESP + 0x6c],EDI
00488877  MOV dword ptr [ESP + 0x70],EDI
0048887b  MOV dword ptr [ESP + 0x74],EDI
0048887f  MOV dword ptr [ESP + 0x14],EDX
00488883  MOV dword ptr [ESP + 0x18],EAX
00488887  CALL 0x00488680
0048888c  FSTP ST0
0048888e  MOV ECX,dword ptr [ESI + 0xd0]
00488894  LEA EDX,[ESP + 0x78]
00488898  PUSH EDX
00488899  MOV dword ptr [ESP + 0x88],ECX
004888a0  PUSH EBX
004888a1  MOV ECX,ESI
004888a3  MOV dword ptr [ESP + 0x24],EDI
004888a7  CALL 0x00486e30
004888ac  FLD float ptr [ESI + 0x80]
004888b2  FMUL float ptr [ESI + 0xbc]
004888b8  LEA EAX,[ESP + 0x16c]
004888bf  PUSH EAX
004888c0  PUSH ESI
004888c1  FSTP float ptr [ESP + 0x28]
004888c5  LEA ECX,[ESP + 0x28]
004888c9  FLD float ptr [ESI + 0x84]
004888cf  FMUL float ptr [ESI + 0xc0]
004888d5  FSTP float ptr [ESP + 0x2c]
004888d9  FLD float ptr [ESI + 0x88]
004888df  FMUL float ptr [ESI + 0xc4]
004888e5  FSTP float ptr [ESP + 0x30]
004888e9  CALL 0x00486bd0
004888ee  LEA EBP,[ESI + 0xa4]
004888f4  MOV ECX,EBP
004888f6  MOV EDX,dword ptr [ECX]
004888f8  MOV EAX,dword ptr [ECX + 0x4]
004888fb  MOV ECX,dword ptr [ECX + 0x8]
004888fe  MOV dword ptr [ESP + 0x2c],EDX
00488902  MOV dword ptr [ESP + 0x34],ECX
00488906  LEA ECX,[ESI + 0x98]
0048890c  MOV dword ptr [ESP + 0x30],EAX
00488910  MOV EDX,ECX
00488912  MOV EAX,dword ptr [EDX]
00488914  MOV dword ptr [ESP + 0x48],EAX
00488918  MOV EAX,dword ptr [EDX + 0x4]
0048891b  MOV EDX,dword ptr [EDX + 0x8]
0048891e  MOV dword ptr [ESP + 0x4c],EAX
00488922  MOV EAX,dword ptr [ESP + 0x1b4]
00488929  XOR EBX,EBX
0048892b  CMP EAX,EDI
0048892d  MOV dword ptr [ESP + 0xa0],ECX
00488934  MOV dword ptr [ESP + 0x50],EDX
00488938  MOV dword ptr [ESP + 0xa4],EBX
0048893f  JLE 0x00488ec3
00488945  JMP 0x00488950
00488950  FLD float ptr [ESP + 0x80]
00488957  MOV dword ptr [ESP + 0x88],EDI
0048895e  FMUL float ptr [ESP + 0x30]
00488962  MOV dword ptr [ESP + 0x8c],EDI
00488969  FLD float ptr [ESP + 0x7c]
0048896d  MOV dword ptr [ESP + 0x90],EDI
00488974  FMUL float ptr [ESP + 0x34]
00488978  MOV dword ptr [ESP + 0xcc],EDI
0048897f  MOV dword ptr [ESP + 0xd0],EDI
00488986  FSUBP
00488988  MOV dword ptr [ESP + 0xd4],EDI
0048898f  MOV dword ptr [ESP + 0x94],EDI
00488996  FSTP float ptr [ESP + 0xd8]
0048899d  MOV EAX,dword ptr [ESP + 0xd8]
004889a4  FLD float ptr [ESP + 0x34]
004889a8  MOV dword ptr [ESP + 0xf0],EAX
004889af  FMUL float ptr [ESP + 0x78]
004889b3  MOV dword ptr [ESP + 0x98],EDI
004889ba  FLD float ptr [ESP + 0x80]
004889c1  MOV dword ptr [ESP + 0x9c],EDI
004889c8  FMUL float ptr [ESP + 0x2c]
004889cc  MOV dword ptr [ESP + 0xb4],EDI
004889d3  MOV dword ptr [ESP + 0xb8],EDI
004889da  FSUBP
004889dc  MOV dword ptr [ESP + 0xbc],EDI
004889e3  FSTP float ptr [ESP + 0xdc]
004889ea  MOV EDX,dword ptr [ESP + 0xdc]
004889f1  FLD float ptr [ESP + 0x7c]
004889f5  MOV dword ptr [ESP + 0xf4],EDX
004889fc  FMUL float ptr [ESP + 0x2c]
00488a00  FLD float ptr [ESP + 0x30]
00488a04  FMUL float ptr [ESP + 0x78]
00488a08  FSUBP
00488a0a  FSTP float ptr [ESP + 0xe0]
00488a11  MOV EAX,dword ptr [ESP + 0xe0]
00488a18  FLD float ptr [ESP + 0xf0]
00488a1f  MOV dword ptr [ESP + 0xf8],EAX
00488a26  FADD float ptr [ESP + 0x48]
00488a2a  FSTP float ptr [ESP + 0x60]
00488a2e  FLD float ptr [ESP + 0xf4]
00488a35  FADD float ptr [ESP + 0x4c]
00488a39  FSTP float ptr [ESP + 0x64]
00488a3d  FLD float ptr [ESP + 0xf8]
00488a44  FADD float ptr [ESP + 0x50]
00488a48  FSTP float ptr [ESP + 0x68]
00488a4c  FLD float ptr [ESP + 0x60]
00488a50  FMUL float ptr [ESP + 0x84]
00488a57  FLD float ptr [ESP + 0x64]
00488a5b  FMUL float ptr [ESP + 0x84]
00488a62  FLD float ptr [ESP + 0x68]
00488a66  FMUL float ptr [ESP + 0x84]
00488a6d  FLD ST2
00488a6f  FSTP float ptr [ESP + 0x118]
00488a76  FLD ST1
00488a78  FSTP float ptr [ESP + 0x11c]
00488a7f  FST float ptr [ESP + 0x120]
00488a86  FLD float ptr [ESP + 0x18]
00488a8a  FMUL ST1
00488a8c  FLD float ptr [ESP + 0x14]
00488a90  FMUL ST3
00488a92  FADDP
00488a94  FXCH ST3
00488a96  FMUL float ptr [ESP + 0x10]
00488a9a  FADDP ST3,ST0
00488a9c  FXCH ST2
00488a9e  FSTP float ptr [ESP + 0x38]
00488aa2  FSTP ST1
00488aa4  FSTP ST0
00488aa6  FLD float ptr [ESP + 0x38]
00488aaa  FCOMP float ptr [0x00890968]
00488ab0  FNSTSW AX
00488ab2  TEST AH,0x1
00488ab5  JZ 0x00488ebf
00488abb  FLD float ptr [ESP + 0x38]
00488abf  LEA EAX,[ESP + 0x3c]
00488ac3  FCHS
00488ac5  PUSH EAX
00488ac6  FLD float ptr [ESP + 0x14]
00488aca  LEA EAX,[ESP + 0x11c]
00488ad1  FMUL ST1
00488ad3  MOV dword ptr [ESP + 0x40],EDI
00488ad7  MOV dword ptr [ESP + 0x44],EDI
00488adb  MOV dword ptr [ESP + 0x48],EDI
00488adf  FST float ptr [ESP + 0xac]
00488ae6  FLD float ptr [ESP + 0x18]
00488aea  FMUL ST2
00488aec  FSTP float ptr [ESP + 0xb0]
00488af3  MOV ECX,dword ptr [ESP + 0xb0]
00488afa  FLD float ptr [ESP + 0x1c]
00488afe  MOV dword ptr [ESP + 0xc8],ECX
00488b05  FMUL ST2
00488b07  LEA ECX,[ESP + 0x14]
00488b0b  PUSH ECX
00488b0c  MOV ECX,dword ptr [ESP + 0x1b8]
00488b13  FSTP float ptr [ESP + 0xb8]
00488b1a  MOV EDX,dword ptr [ESP + 0xb8]
00488b21  MOV dword ptr [ESP + 0xd0],EDX
00488b28  MOV EDX,dword ptr [ESP + 0x40]
00488b2c  FSTP float ptr [ESP + 0xc8]
00488b33  PUSH EDX
00488b34  PUSH EAX
00488b35  FSTP ST0
00488b37  ADD ECX,0x18
00488b3a  CALL 0x004886f0
00488b3f  CMP EBX,EDI
00488b41  MOV dword ptr [ESP + 0xfc],EAX
00488b48  JNZ 0x00488c3e
00488b4e  FLD float ptr [ESP + 0x18]
00488b52  FMUL float ptr [ESP + 0x68]
00488b56  FLD float ptr [ESP + 0x14]
00488b5a  FMUL float ptr [ESP + 0x64]
00488b5e  FADDP
00488b60  FLD float ptr [ESP + 0x10]
00488b64  FMUL float ptr [ESP + 0x60]
00488b68  FADDP
00488b6a  FLD float ptr [ESP + 0x10]
00488b6e  FMUL ST1
00488b70  FLD float ptr [ESP + 0x14]
00488b74  FMUL ST2
00488b76  FLD float ptr [ESP + 0x18]
00488b7a  FMUL ST3
00488b7c  FSTP float ptr [ESP + 0x150]
00488b83  MOV ECX,dword ptr [ESP + 0x150]
00488b8a  MOV dword ptr [ESP + 0xec],ECX
00488b91  FXCH
00488b93  FSTP float ptr [ESP + 0xe4]
00488b9a  MOV EAX,dword ptr [ESP + 0xe4]
00488ba1  LEA ECX,[ESI + 0xd8]
00488ba7  FSTP float ptr [ESP + 0xe8]
00488bae  MOV EDX,ECX
00488bb0  MOV dword ptr [EDX],EAX
00488bb2  MOV EAX,dword ptr [ESP + 0xe8]
00488bb9  FSTP ST0
00488bbb  FLD float ptr [ESP + 0x60]
00488bbf  MOV dword ptr [EDX + 0x4],EAX
00488bc2  MOV EAX,dword ptr [ESP + 0xec]
00488bc9  MOV dword ptr [EDX + 0x8],EAX
00488bcc  FSUB float ptr [ECX]
00488bce  FLD float ptr [ESP + 0x64]
00488bd2  LEA EDX,[ESI + 0xe4]
00488bd8  FSUB float ptr [ECX + 0x4]
00488bdb  FLD float ptr [ESP + 0x68]
00488bdf  FSUB float ptr [ECX + 0x8]
00488be2  FSTP float ptr [ESP + 0x15c]
00488be9  MOV ECX,dword ptr [ESP + 0x15c]
00488bf0  FXCH
00488bf2  MOV dword ptr [ESP + 0x28],ECX
00488bf6  FSTP float ptr [ESP + 0x20]
00488bfa  MOV EAX,dword ptr [ESP + 0x20]
00488bfe  MOV dword ptr [EDX],EAX
00488c00  MOV EAX,dword ptr [ESP + 0x28]
00488c04  FSTP float ptr [ESP + 0x24]
00488c08  MOV ECX,dword ptr [ESP + 0x24]
00488c0c  MOV dword ptr [EDX + 0x4],ECX
00488c0f  MOV ECX,dword ptr [ESP + 0xfc]
00488c16  MOV dword ptr [EDX + 0x8],EAX
00488c19  MOV EAX,dword ptr [ESP + 0x3c]
00488c1d  LEA EDX,[ESI + 0xfc]
00488c23  MOV dword ptr [EDX],EAX
00488c25  MOV EAX,dword ptr [ESP + 0x44]
00488c29  MOV dword ptr [ESI + 0x108],ECX
00488c2f  MOV ECX,dword ptr [ESP + 0x40]
00488c33  MOV dword ptr [EDX + 0x4],ECX
00488c36  MOV dword ptr [EDX + 0x8],EAX
00488c39  JMP 0x00488ea1
00488c3e  FILD dword ptr [ESP + 0xa4]
00488c45  LEA ECX,[ESP + 0x94]
00488c4c  PUSH ECX
00488c4d  LEA EDX,[ESP + 0x8c]
00488c54  FIDIV dword ptr [ESP + 0x1b8]
00488c5b  PUSH EDX
00488c5c  LEA EAX,[ESP + 0x174]
00488c63  PUSH EAX
00488c64  LEA ECX,[ESP + 0x84]
00488c6b  PUSH ECX
00488c6c  LEA EDX,[ESP + 0xd0]
00488c73  PUSH EDX
00488c74  MOV ECX,ESI
00488c76  FLD float ptr [ESP + 0xbc]
00488c7d  FMUL ST1
00488c7f  FSTP float ptr [ESP + 0xd4]
00488c86  FLD float ptr [ESP + 0xc0]
00488c8d  FMUL ST1
00488c8f  FSTP float ptr [ESP + 0xd8]
00488c96  FLD float ptr [ESP + 0xc4]
00488c9d  FMUL ST1
00488c9f  FSTP float ptr [ESP + 0xdc]
00488ca6  FLD float ptr [ESP + 0x50]
00488caa  FMUL ST1
00488cac  FSTP float ptr [ESP + 0x50]
00488cb0  FLD float ptr [ESP + 0x54]
00488cb4  FMUL ST1
00488cb6  FSTP float ptr [ESP + 0x54]
00488cba  FLD float ptr [ESP + 0x58]
00488cbe  FMUL ST1
00488cc0  FSTP float ptr [ESP + 0x58]
00488cc4  FMUL float ptr [ESP + 0x4c]
00488cc8  FSUBR float ptr [ESP + 0x30]
00488ccc  FSTP float ptr [ESP + 0x30]
00488cd0  CALL 0x00486da0
00488cd5  LEA EAX,[ESP + 0xb4]
00488cdc  PUSH EAX
00488cdd  LEA ECX,[ESP + 0xd0]
00488ce4  PUSH ECX
00488ce5  LEA EDX,[ESP + 0x174]
00488cec  PUSH EDX
00488ced  LEA EAX,[ESP + 0x84]
00488cf4  PUSH EAX
00488cf5  LEA ECX,[ESP + 0x4c]
00488cf9  PUSH ECX
00488cfa  MOV ECX,ESI
00488cfc  CALL 0x00486da0
00488d01  FLD float ptr [ESP + 0xb4]
00488d08  FADD float ptr [ESP + 0x94]
00488d0f  FLD float ptr [ESP + 0xb8]
00488d16  FADD float ptr [ESP + 0x98]
00488d1d  FLD float ptr [ESP + 0xbc]
00488d24  FADD float ptr [ESP + 0x9c]
00488d2b  FSTP float ptr [ESP + 0x144]
00488d32  FLD float ptr [ESP + 0xcc]
00488d39  FADD float ptr [ESP + 0x88]
00488d40  FLD float ptr [ESP + 0xd0]
00488d47  FADD float ptr [ESP + 0x8c]
00488d4e  FLD float ptr [ESP + 0xd4]
00488d55  FADD float ptr [ESP + 0x90]
00488d5c  FSTP float ptr [ESP + 0x138]
00488d63  FLD ST1
00488d65  FADD float ptr [ESP + 0x48]
00488d69  FSTP float ptr [ESP + 0x48]
00488d6d  FLD float ptr [ESP + 0x4c]
00488d71  FADD ST0,ST1
00488d73  FSTP float ptr [ESP + 0x4c]
00488d77  FLD float ptr [ESP + 0x138]
00488d7e  FADD float ptr [ESP + 0x50]
00488d82  FSTP float ptr [ESP + 0x50]
00488d86  FLD ST3
00488d88  FADD float ptr [ESP + 0x2c]
00488d8c  FSTP float ptr [ESP + 0x2c]
00488d90  FLD ST2
00488d92  FADD float ptr [ESP + 0x30]
00488d96  FSTP float ptr [ESP + 0x30]
00488d9a  FLD float ptr [ESP + 0x144]
00488da1  FADD float ptr [ESP + 0x34]
00488da5  FSTP float ptr [ESP + 0x34]
00488da9  FLD float ptr [ESI + 0x10c]
00488daf  FLD float ptr [ESP + 0x88]
00488db6  FMUL ST1
00488db8  FLD float ptr [ESP + 0x8c]
00488dbf  FMUL ST2
00488dc1  FSTP float ptr [ESP + 0x104]
00488dc8  FLD float ptr [ESP + 0x90]
00488dcf  FMUL ST2
00488dd1  FSTP float ptr [ESP + 0x108]
00488dd8  FADD ST0,ST3
00488dda  FSTP float ptr [ESP + 0x160]
00488de1  FSTP ST0
00488de3  FLD float ptr [ESP + 0x104]
00488dea  FADD ST0,ST1
00488dec  FSTP ST2
00488dee  FSTP ST0
00488df0  FLD float ptr [ESP + 0x108]
00488df7  FADD float ptr [ESP + 0x138]
00488dfe  FLD float ptr [ESP + 0x54]
00488e02  FADD float ptr [ESP + 0x160]
00488e09  FSTP float ptr [ESP + 0x54]
00488e0d  FLD float ptr [ESP + 0x58]
00488e11  FADD ST0,ST2
00488e13  FSTP float ptr [ESP + 0x58]
00488e17  FLD float ptr [ESP + 0x5c]
00488e1b  FADD ST0,ST1
00488e1d  FSTP float ptr [ESP + 0x5c]
00488e21  FSTP ST0
00488e23  FSTP ST0
00488e25  FLD float ptr [ESI + 0x10c]
00488e2b  FLD float ptr [ESP + 0x94]
00488e32  FMUL ST1
00488e34  FLD float ptr [ESP + 0x98]
00488e3b  FMUL ST2
00488e3d  FSTP float ptr [ESP + 0x110]
00488e44  FLD float ptr [ESP + 0x9c]
00488e4b  FMUL ST2
00488e4d  FSTP float ptr [ESP + 0x114]
00488e54  FADD ST0,ST3
00488e56  FSTP float ptr [ESP + 0x124]
00488e5d  FSTP ST0
00488e5f  FLD float ptr [ESP + 0x110]
00488e66  FADD ST0,ST1
00488e68  FSTP ST2
00488e6a  FSTP ST0
00488e6c  FLD float ptr [ESP + 0x114]
00488e73  FADD float ptr [ESP + 0x144]
00488e7a  FLD float ptr [ESP + 0x6c]
00488e7e  FADD float ptr [ESP + 0x124]
00488e85  FSTP float ptr [ESP + 0x6c]
00488e89  FLD float ptr [ESP + 0x70]
00488e8d  FADD ST0,ST2
00488e8f  FSTP float ptr [ESP + 0x70]
00488e93  FLD float ptr [ESP + 0x74]
00488e97  FADD ST0,ST1
00488e99  FSTP float ptr [ESP + 0x74]
00488e9d  FSTP ST0
00488e9f  FSTP ST0
00488ea1  MOV EAX,dword ptr [ESP + 0x1b4]
00488ea8  MOV ECX,dword ptr [ESP + 0xa0]
00488eaf  INC EBX
00488eb0  CMP EBX,EAX
00488eb2  MOV dword ptr [ESP + 0xa4],EBX
00488eb9  JL 0x00488950
00488ebf  CMP EBX,EDI
00488ec1  JNZ 0x00488ed2
00488ec3  POP EDI
00488ec4  POP ESI
00488ec5  POP EBP
00488ec6  XOR AL,AL
00488ec8  POP EBX
00488ec9  ADD ESP,0x19c
00488ecf  RET 0x8
00488ed2  FLD float ptr [ESP + 0x10]
00488ed6  ADD ESI,0xf0
00488edc  FMUL float ptr [ESP + 0x1c]
00488ee0  POP EDI
00488ee1  FLD float ptr [ESP + 0x10]
00488ee5  FMUL float ptr [ESP + 0x18]
00488ee9  FLD float ptr [ESP + 0x14]
00488eed  FMUL float ptr [ESP + 0x18]
00488ef1  FSTP float ptr [ESP + 0x128]
00488ef8  MOV EDX,dword ptr [ESP + 0x128]
00488eff  FXCH
00488f01  MOV dword ptr [ESP + 0x24],EDX
00488f05  FSTP float ptr [ESP + 0x1c]
00488f09  MOV EAX,dword ptr [ESP + 0x1c]
00488f0d  MOV dword ptr [ESI],EAX
00488f0f  MOV EAX,dword ptr [ESP + 0x24]
00488f13  FSTP float ptr [ESP + 0x20]
00488f17  MOV EDX,dword ptr [ESP + 0x20]
00488f1b  FLD float ptr [ESP + 0x50]
00488f1f  MOV dword ptr [ESI + 0x4],EDX
00488f22  MOV dword ptr [ESI + 0x8],EAX
00488f25  FADD float ptr [ECX]
00488f27  POP ESI
00488f28  MOV AL,0x1
00488f2a  FSTP float ptr [ECX]
00488f2c  FLD float ptr [ESP + 0x50]
00488f30  FADD float ptr [ECX + 0x4]
00488f33  FSTP float ptr [ECX + 0x4]
00488f36  FLD float ptr [ESP + 0x54]
00488f3a  FADD float ptr [ECX + 0x8]
00488f3d  FSTP float ptr [ECX + 0x8]
00488f40  FLD float ptr [ESP + 0x64]
00488f44  FADD float ptr [EBP]
00488f47  FSTP float ptr [EBP]
00488f4a  FLD float ptr [ESP + 0x68]
00488f4e  FADD float ptr [EBP + 0x4]
00488f51  FSTP float ptr [EBP + 0x4]
00488f54  FLD float ptr [ESP + 0x6c]
00488f58  FADD float ptr [EBP + 0x8]
00488f5b  FSTP float ptr [EBP + 0x8]
00488f5e  POP EBP
00488f5f  POP EBX
00488f60  ADD ESP,0x19c
00488f66  RET 0x8
