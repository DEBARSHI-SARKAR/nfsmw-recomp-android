006b2c00  PUSH -0x1
006b2c02  PUSH 0x87d2c4
006b2c07  MOV EAX,FS:[0x0]
006b2c0d  PUSH EAX
006b2c0e  MOV dword ptr FS:[0x0],ESP
006b2c15  SUB ESP,0x4c
006b2c18  MOV EAX,dword ptr [ESP + 0x5c]
006b2c1c  PUSH EBX
006b2c1d  PUSH EBP
006b2c1e  PUSH ESI
006b2c1f  PUSH EDI
006b2c20  MOV ESI,ECX
006b2c22  PUSH EAX
006b2c23  MOV dword ptr [ESP + 0x1c],ESI
006b2c27  CALL 0x006b1a20
006b2c2c  MOV EAX,dword ptr [ESI + 0x34]
006b2c2f  XOR EBX,EBX
006b2c31  PUSH EBX
006b2c32  LEA EDI,[ESI + 0x90]
006b2c38  PUSH EAX
006b2c39  MOV ECX,EDI
006b2c3b  MOV dword ptr [ESP + 0x6c],EBX
006b2c3f  MOV dword ptr [ESI],0x8abd60
006b2c45  MOV dword ptr [ESI + 0x8],0x8abd58
006b2c4c  MOV dword ptr [ESI + 0x4c],0x8abce0
006b2c53  CALL 0x006a58e0
006b2c58  PUSH EAX
006b2c59  MOV ECX,EDI
006b2c5b  CALL 0x006a53d0
006b2c60  MOV EAX,dword ptr [ESI + 0x34]
006b2c63  PUSH EBX
006b2c64  LEA EBP,[ESI + 0xa4]
006b2c6a  PUSH EAX
006b2c6b  MOV ECX,EBP
006b2c6d  MOV byte ptr [ESP + 0x6c],0x1
006b2c72  CALL 0x006a59c0
006b2c77  PUSH EAX
006b2c78  MOV ECX,EBP
006b2c7a  CALL 0x006a54b0
006b2c7f  MOV EAX,dword ptr [ESI + 0x34]
006b2c82  PUSH EBX
006b2c83  LEA EBP,[ESI + 0xb8]
006b2c89  PUSH EAX
006b2c8a  MOV ECX,EBP
006b2c8c  MOV byte ptr [ESP + 0x6c],0x2
006b2c91  CALL 0x006a5800
006b2c96  PUSH EAX
006b2c97  MOV ECX,EBP
006b2c99  CALL 0x006a5440
006b2c9e  MOV EAX,dword ptr [ESI + 0x34]
006b2ca1  MOV dword ptr [ESI + 0xcc],EBX
006b2ca7  MOV dword ptr [ESI + 0xd0],EBX
006b2cad  MOV dword ptr [ESI + 0xd4],EBX
006b2cb3  MOV byte ptr [ESI + 0xdc],BL
006b2cb9  MOV dword ptr [ESI + 0xe0],EBX
006b2cbf  MOV dword ptr [ESI + 0xe4],EBX
006b2cc5  MOV dword ptr [ESI + 0xe8],0x3f8ccccd
006b2ccf  MOV dword ptr [ESI + 0xec],EBX
006b2cd5  MOV byte ptr [ESI + 0xf0],BL
006b2cdb  MOV dword ptr [ESI + 0x44],EBX
006b2cde  MOV ECX,dword ptr [EAX + 0x4]
006b2ce1  PUSH 0x4039f0
006b2ce6  MOV byte ptr [ESP + 0x68],0x3
006b2ceb  CALL 0x005d59f0
006b2cf0  MOV dword ptr [ESI + 0xcc],EAX
006b2cf6  MOV EAX,dword ptr [ESI + 0x34]
006b2cf9  MOV ECX,dword ptr [EAX + 0x4]
006b2cfc  PUSH 0x4039c0
006b2d01  CALL 0x005d59f0
006b2d06  MOV dword ptr [ESI + 0xd4],EAX
006b2d0c  MOV EAX,dword ptr [ESI + 0x34]
006b2d0f  MOV ECX,dword ptr [EAX + 0x4]
006b2d12  PUSH 0x622540
006b2d17  CALL 0x005d59f0
006b2d1c  MOV dword ptr [ESI + 0xd0],EAX
006b2d22  MOV EAX,dword ptr [ESI + 0x34]
006b2d25  MOV ECX,dword ptr [EAX + 0x4]
006b2d28  PUSH 0x405000
006b2d2d  CALL 0x005d59f0
006b2d32  MOV dword ptr [ESI + 0xd8],EAX
006b2d38  LEA EAX,[ESI + 0xf4]
006b2d3e  XOR EBP,EBP
006b2d40  MOV dword ptr [ESP + 0x6c],EAX
006b2d44  CMP EBP,0x2
006b2d47  SETL CL
006b2d4a  MOV byte ptr [ESP + 0x10],CL
006b2d4e  MOV EDX,dword ptr [ESP + 0x10]
006b2d52  PUSH EDX
006b2d53  PUSH EDI
006b2d54  CALL 0x0066bee0
006b2d59  FSTP float ptr [ESP + 0x1c]
006b2d5d  ADD ESP,0x8
006b2d60  PUSH EBX
006b2d61  PUSH 0x10c
006b2d66  MOV ECX,0x925b30
006b2d6b  CALL 0x005d29d0
006b2d70  MOV dword ptr [ESP + 0x1c],EAX
006b2d74  CMP EAX,EBX
006b2d76  MOV byte ptr [ESP + 0x64],0x4
006b2d7b  JZ 0x006b2d9d
006b2d7d  FLD float ptr [ESP + 0x14]
006b2d81  LEA ECX,[ESI + 0xa4]
006b2d87  FMUL float ptr [0x008933d4]
006b2d8d  PUSH ECX
006b2d8e  PUSH EDI
006b2d8f  PUSH EBP
006b2d90  PUSH ECX
006b2d91  MOV ECX,EAX
006b2d93  FSTP float ptr [ESP]
006b2d96  CALL 0x00690560
006b2d9b  JMP 0x006b2d9f
006b2d9d  XOR EAX,EAX
006b2d9f  MOV ECX,dword ptr [ESP + 0x6c]
006b2da3  MOV dword ptr [ECX],EAX
006b2da5  INC EBP
006b2da6  ADD ECX,0x4
006b2da9  CMP EBP,0x4
006b2dac  MOV byte ptr [ESP + 0x64],0x3
006b2db1  MOV dword ptr [ESP + 0x6c],ECX
006b2db5  JL 0x006b2d44
006b2db7  MOV ECX,dword ptr [ESI + 0x34]
006b2dba  MOV EAX,dword ptr [ECX]
006b2dbc  CALL dword ptr [EAX + 0x54]
006b2dbf  MOV EDX,dword ptr [EAX]
006b2dc1  LEA ECX,[ESP + 0x50]
006b2dc5  PUSH ECX
006b2dc6  MOV ECX,EAX
006b2dc8  CALL dword ptr [EDX + 0x4c]
006b2dcb  MOV ECX,dword ptr [ESI + 0x98]
006b2dd1  FLD float ptr [ECX + 0x40]
006b2dd4  MOV EAX,dword ptr [ESI + 0xc0]
006b2dda  FMUL float ptr [0x00890d60]
006b2de0  MOV EDX,dword ptr [EAX + 0x54]
006b2de3  MOV dword ptr [ESP + 0x14],EDX
006b2de7  POP EDI
006b2de8  FSUBR float ptr [EAX + 0x20]
006b2deb  FSTP float ptr [ESP + 0xc]
006b2def  FLD float ptr [ECX + 0x44]
006b2df2  FMUL float ptr [0x00890d60]
006b2df8  FSUBR float ptr [EAX + 0x24]
006b2dfb  MOV EAX,dword ptr [EAX + 0x64]
006b2dfe  FLD float ptr [ESP + 0xc]
006b2e02  MOV ECX,EAX
006b2e04  FMUL float ptr [0x00891068]
006b2e0a  MOV EDX,EAX
006b2e0c  MOV dword ptr [ESP + 0x68],EAX
006b2e10  MOV EAX,dword ptr [ESI + 0xf4]
006b2e16  FSTP float ptr [ESP + 0x1c]
006b2e1a  MOV dword ptr [ESP + 0x24],ECX
006b2e1e  FLD float ptr [ESP + 0x50]
006b2e22  MOV ECX,dword ptr [ESP + 0x1c]
006b2e26  FCHS
006b2e28  ADD EAX,0x6c
006b2e2b  FST float ptr [ESP + 0x20]
006b2e2f  MOV dword ptr [EAX],ECX
006b2e31  FLD float ptr [ESP + 0xc]
006b2e35  MOV ECX,dword ptr [ESP + 0x24]
006b2e39  FMUL float ptr [0x008933d4]
006b2e3f  MOV dword ptr [ESP + 0x30],EDX
006b2e43  MOV EDX,dword ptr [ESP + 0x20]
006b2e47  MOV dword ptr [EAX + 0x4],EDX
006b2e4a  FSTP float ptr [ESP + 0x28]
006b2e4e  MOV dword ptr [EAX + 0x8],ECX
006b2e51  MOV EDX,dword ptr [ESI + 0xf8]
006b2e57  MOV EAX,dword ptr [ESP + 0x28]
006b2e5b  FST float ptr [ESP + 0x2c]
006b2e5f  MOV ECX,dword ptr [ESP + 0x2c]
006b2e63  FLD ST1
006b2e65  FMUL float ptr [0x00891068]
006b2e6b  ADD EDX,0x6c
006b2e6e  MOV dword ptr [EDX],EAX
006b2e70  MOV EAX,dword ptr [ESP + 0x30]
006b2e74  FSTP float ptr [ESP + 0x34]
006b2e78  MOV dword ptr [EDX + 0x4],ECX
006b2e7b  MOV dword ptr [EDX + 0x8],EAX
006b2e7e  MOV ECX,dword ptr [ESI + 0xfc]
006b2e84  FST float ptr [ESP + 0x38]
006b2e88  FLD float ptr [ESP + 0x68]
006b2e8c  MOV EDX,dword ptr [ESP + 0x34]
006b2e90  FSUB float ptr [ESP + 0x10]
006b2e94  MOV EAX,dword ptr [ESP + 0x38]
006b2e98  ADD ECX,0x6c
006b2e9b  MOV dword ptr [ECX],EDX
006b2e9d  FST float ptr [ESP + 0x3c]
006b2ea1  MOV EDX,dword ptr [ESP + 0x3c]
006b2ea5  MOV dword ptr [ECX + 0x4],EAX
006b2ea8  FXCH ST2
006b2eaa  FMUL float ptr [0x008933d4]
006b2eb0  MOV dword ptr [ECX + 0x8],EDX
006b2eb3  MOV EAX,dword ptr [ESI + 0x100]
006b2eb9  ADD EAX,0x6c
006b2ebc  FSTP float ptr [ESP + 0x40]
006b2ec0  MOV ECX,dword ptr [ESP + 0x40]
006b2ec4  MOV dword ptr [EAX],ECX
006b2ec6  FSTP float ptr [ESP + 0x44]
006b2eca  MOV EDX,dword ptr [ESP + 0x44]
006b2ece  MOV dword ptr [EAX + 0x4],EDX
006b2ed1  FSTP float ptr [ESP + 0x48]
006b2ed5  MOV ECX,dword ptr [ESP + 0x48]
006b2ed9  MOV dword ptr [EAX + 0x8],ECX
006b2edc  MOV EAX,ESI
006b2ede  MOV ECX,dword ptr [ESP + 0x58]
006b2ee2  POP ESI
006b2ee3  POP EBP
006b2ee4  POP EBX
006b2ee5  MOV dword ptr FS:[0x0],ECX
006b2eec  ADD ESP,0x58
006b2eef  RET 0x8
