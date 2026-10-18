005c1dc0  PUSH EBX
005c1dc1  PUSH EBP
005c1dc2  PUSH ESI
005c1dc3  MOV ESI,ECX
005c1dc5  PUSH EDI
005c1dc6  LEA EDI,[ESI + 0x28]
005c1dc9  MOV ECX,EDI
005c1dcb  CALL 0x005b3cd0
005c1dd0  MOV EAX,dword ptr [ESP + 0x14]
005c1dd4  MOV CL,byte ptr [EAX]
005c1dd6  MOV EBP,dword ptr [ESI + 0x4]
005c1dd9  MOV byte ptr [ESI],CL
005c1ddb  MOV DL,byte ptr [EAX + 0x1]
005c1dde  MOV byte ptr [ESI + 0x1],DL
005c1de1  MOV CL,byte ptr [EAX + 0x2]
005c1de4  MOV byte ptr [ESI + 0x2],CL
005c1de7  MOV DL,byte ptr [EAX + 0x3]
005c1dea  MOV byte ptr [ESI + 0x3],DL
005c1ded  MOV ECX,dword ptr [EAX + 0x4]
005c1df0  SHL ECX,0x8
005c1df3  SAR ECX,0x8
005c1df6  XOR ECX,EBP
005c1df8  AND ECX,0xffffff
005c1dfe  MOV EDX,EBP
005c1e00  XOR EDX,ECX
005c1e02  MOV dword ptr [ESI + 0x4],EDX
005c1e05  MOV DL,byte ptr [EAX + 0x7]
005c1e08  MOV byte ptr [ESI + 0x7],DL
005c1e0b  MOV ECX,dword ptr [EAX + 0x14]
005c1e0e  MOV dword ptr [ESI + 0x14],ECX
005c1e11  MOV EDX,dword ptr [EAX + 0x18]
005c1e14  MOV dword ptr [ESI + 0x18],EDX
005c1e17  MOV ECX,dword ptr [EAX + 0x1c]
005c1e1a  MOV dword ptr [ESI + 0x1c],ECX
005c1e1d  MOV EDX,dword ptr [EAX + 0x20]
005c1e20  MOV dword ptr [ESI + 0x20],EDX
005c1e23  MOV ECX,dword ptr [EAX + 0x24]
005c1e26  MOV dword ptr [ESI + 0x24],ECX
005c1e29  MOV CL,byte ptr [EAX + 0x2c]
005c1e2c  XOR EBX,EBX
005c1e2e  CMP CL,BL
005c1e30  JZ 0x005c1e6b
005c1e32  CMP CL,BL
005c1e34  JNZ 0x005c1e3a
005c1e36  XOR ESI,ESI
005c1e38  JMP 0x005c1e3d
005c1e3a  MOV ESI,dword ptr [EAX + 0x30]
005c1e3d  CMP ESI,EBX
005c1e3f  JZ 0x005c1e5b
005c1e41  CMP byte ptr [EDI + 0x4],BL
005c1e44  JNZ 0x005c1e4d
005c1e46  MOV ECX,EDI
005c1e48  CALL 0x005b3cd0
005c1e4d  MOV dword ptr [EDI + 0x8],ESI
005c1e50  MOV byte ptr [EDI + 0x4],0x1
005c1e54  POP EDI
005c1e55  POP ESI
005c1e56  POP EBP
005c1e57  POP EBX
005c1e58  RET 0x4
005c1e5b  MOV dword ptr [EDI + 0x8],EBX
005c1e5e  MOV dword ptr [EDI + 0xc],EBX
005c1e61  MOV byte ptr [EDI + 0x4],BL
005c1e64  POP EDI
005c1e65  POP ESI
005c1e66  POP EBP
005c1e67  POP EBX
005c1e68  RET 0x4
005c1e6b  CMP CL,BL
005c1e6d  JZ 0x005c1e79
005c1e6f  MOV ECX,dword ptr [EAX + 0x30]
005c1e72  CALL 0x005ad440
005c1e77  JMP 0x005c1e7c
005c1e79  MOV EAX,dword ptr [EAX + 0x30]
005c1e7c  CMP EAX,EBX
005c1e7e  MOV ESI,EAX
005c1e80  JZ 0x005c1f0a
005c1e86  MOV EBP,0xabadcafe
005c1e8b  JMP 0x005c1e90
005c1e90  MOV ECX,0x91dd2c
005c1e95  CALL 0x005bffe0
005c1e9a  CMP EAX,EBX
005c1e9c  JZ 0x005c1eac
005c1e9e  MOV dword ptr [EAX + 0x4],EBP
005c1ea1  MOV dword ptr [EAX + 0x8],EBP
005c1ea4  MOV dword ptr [EAX],0x8a2c24
005c1eaa  JMP 0x005c1eae
005c1eac  XOR EAX,EAX
005c1eae  MOV EDX,dword ptr [ESI + 0xc]
005c1eb1  MOV dword ptr [EAX + 0xc],EDX
005c1eb4  MOV ECX,dword ptr [ESI + 0x10]
005c1eb7  MOV dword ptr [EAX + 0x10],ECX
005c1eba  MOV EDX,dword ptr [ESI + 0x14]
005c1ebd  MOV dword ptr [EAX + 0x14],EDX
005c1ec0  MOV ECX,dword ptr [ESI + 0x18]
005c1ec3  MOV dword ptr [EAX + 0x18],ECX
005c1ec6  MOV EDX,dword ptr [ESI + 0x1c]
005c1ec9  MOV dword ptr [EAX + 0x1c],EDX
005c1ecc  MOV ECX,dword ptr [EDI + 0xc]
005c1ecf  CMP ECX,EBX
005c1ed1  JZ 0x005c1ee8
005c1ed3  MOV EDX,dword ptr [ECX + 0x4]
005c1ed6  CMP EDX,EBX
005c1ed8  MOV dword ptr [EAX + 0x4],EDX
005c1edb  JZ 0x005c1ee0
005c1edd  MOV dword ptr [EDX + 0x8],EAX
005c1ee0  MOV dword ptr [EAX + 0x8],ECX
005c1ee3  MOV dword ptr [ECX + 0x4],EAX
005c1ee6  JMP 0x005c1efb
005c1ee8  MOV EDX,dword ptr [EDI + 0x8]
005c1eeb  CMP EDX,EBX
005c1eed  MOV dword ptr [EAX + 0x4],EDX
005c1ef0  JZ 0x005c1ef5
005c1ef2  MOV dword ptr [EDX + 0x8],EAX
005c1ef5  MOV dword ptr [EAX + 0x8],EBX
005c1ef8  MOV dword ptr [EDI + 0x8],EAX
005c1efb  CMP dword ptr [EDI + 0xc],ECX
005c1efe  JNZ 0x005c1f03
005c1f00  MOV dword ptr [EDI + 0xc],EAX
005c1f03  MOV ESI,dword ptr [ESI + 0x4]
005c1f06  CMP ESI,EBX
005c1f08  JNZ 0x005c1e90
005c1f0a  POP EDI
005c1f0b  POP ESI
005c1f0c  POP EBP
005c1f0d  POP EBX
005c1f0e  RET 0x4
