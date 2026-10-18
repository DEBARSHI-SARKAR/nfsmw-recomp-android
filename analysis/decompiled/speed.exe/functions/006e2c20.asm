006e2c20  MOV EAX,FS:[0x0]
006e2c26  PUSH -0x1
006e2c28  PUSH 0x87e608
006e2c2d  PUSH EAX
006e2c2e  MOV EAX,dword ptr [ESP + 0x14]
006e2c32  MOV dword ptr FS:[0x0],ESP
006e2c39  SUB ESP,0x48
006e2c3c  PUSH EBP
006e2c3d  MOV EBP,ECX
006e2c3f  MOV CL,byte ptr [EAX + 0x25]
006e2c42  TEST CL,CL
006e2c44  PUSH ESI
006e2c45  JZ 0x006e2c93
006e2c47  PUSH 0x1b
006e2c49  XOR ESI,ESI
006e2c4b  PUSH 0x892920
006e2c50  LEA ECX,[ESP + 0x14]
006e2c54  MOV dword ptr [ESP + 0x2c],0xf
006e2c5c  MOV dword ptr [ESP + 0x28],ESI
006e2c60  MOV byte ptr [ESP + 0x18],0x0
006e2c65  CALL 0x004303b0
006e2c6a  LEA EAX,[ESP + 0xc]
006e2c6e  PUSH EAX
006e2c6f  LEA ECX,[ESP + 0x2c]
006e2c73  MOV dword ptr [ESP + 0x5c],ESI
006e2c77  CALL 0x00432d50
006e2c7c  PUSH 0x8c9f78
006e2c81  LEA ECX,[ESP + 0x2c]
006e2c85  PUSH ECX
006e2c86  MOV dword ptr [ESP + 0x30],0x8bf2c0
006e2c8e  CALL 0x007c56b0
006e2c93  PUSH EBX
006e2c94  MOV EBX,EAX
006e2c96  PUSH EDI
006e2c97  LEA ECX,[ESP + 0x6c]
006e2c9b  MOV dword ptr [ESP + 0x10],EBX
006e2c9f  CALL 0x006cde50
006e2ca4  MOV EAX,dword ptr [EBX]
006e2ca6  MOV CL,byte ptr [EAX + 0x25]
006e2ca9  TEST CL,CL
006e2cab  JZ 0x006e2cb2
006e2cad  MOV EDI,dword ptr [EBX + 0x8]
006e2cb0  JMP 0x006e2ccb
006e2cb2  MOV EDX,dword ptr [EBX + 0x8]
006e2cb5  MOV CL,byte ptr [EDX + 0x25]
006e2cb8  TEST CL,CL
006e2cba  JZ 0x006e2cc0
006e2cbc  MOV EDI,EAX
006e2cbe  JMP 0x006e2ccb
006e2cc0  MOV ECX,dword ptr [ESP + 0x6c]
006e2cc4  CMP ECX,EBX
006e2cc6  MOV EDI,dword ptr [ECX + 0x8]
006e2cc9  JNZ 0x006e2d39
006e2ccb  MOV AL,byte ptr [EDI + 0x25]
006e2cce  TEST AL,AL
006e2cd0  MOV ESI,dword ptr [EBX + 0x4]
006e2cd3  JNZ 0x006e2cd8
006e2cd5  MOV dword ptr [EDI + 0x4],ESI
006e2cd8  MOV EAX,dword ptr [EBP + 0x4]
006e2cdb  CMP dword ptr [EAX + 0x4],EBX
006e2cde  JNZ 0x006e2ce5
006e2ce0  MOV dword ptr [EAX + 0x4],EDI
006e2ce3  JMP 0x006e2cf0
006e2ce5  CMP dword ptr [ESI],EBX
006e2ce7  JNZ 0x006e2ced
006e2ce9  MOV dword ptr [ESI],EDI
006e2ceb  JMP 0x006e2cf0
006e2ced  MOV dword ptr [ESI + 0x8],EDI
006e2cf0  MOV EBX,dword ptr [EBP + 0x4]
006e2cf3  MOV EAX,dword ptr [EBX]
006e2cf5  CMP EAX,dword ptr [ESP + 0x10]
006e2cf9  JNZ 0x006e2d11
006e2cfb  MOV AL,byte ptr [EDI + 0x25]
006e2cfe  TEST AL,AL
006e2d00  JZ 0x006e2d06
006e2d02  MOV EAX,ESI
006e2d04  JMP 0x006e2d0f
006e2d06  PUSH EDI
006e2d07  CALL 0x006cc810
006e2d0c  ADD ESP,0x4
006e2d0f  MOV dword ptr [EBX],EAX
006e2d11  MOV EBX,dword ptr [EBP + 0x4]
006e2d14  MOV ECX,dword ptr [ESP + 0x10]
006e2d18  CMP dword ptr [EBX + 0x8],ECX
006e2d1b  JNZ 0x006e2d91
006e2d1d  MOV AL,byte ptr [EDI + 0x25]
006e2d20  TEST AL,AL
006e2d22  JZ 0x006e2d2b
006e2d24  MOV EAX,ESI
006e2d26  MOV dword ptr [EBX + 0x8],EAX
006e2d29  JMP 0x006e2d91
006e2d2b  PUSH EDI
006e2d2c  CALL 0x006cc7f0
006e2d31  ADD ESP,0x4
006e2d34  MOV dword ptr [EBX + 0x8],EAX
006e2d37  JMP 0x006e2d91
006e2d39  MOV dword ptr [EAX + 0x4],ECX
006e2d3c  MOV EDX,dword ptr [EBX]
006e2d3e  MOV dword ptr [ECX],EDX
006e2d40  CMP ECX,dword ptr [EBX + 0x8]
006e2d43  JNZ 0x006e2d49
006e2d45  MOV ESI,ECX
006e2d47  JMP 0x006e2d64
006e2d49  MOV AL,byte ptr [EDI + 0x25]
006e2d4c  TEST AL,AL
006e2d4e  MOV ESI,dword ptr [ECX + 0x4]
006e2d51  JNZ 0x006e2d56
006e2d53  MOV dword ptr [EDI + 0x4],ESI
006e2d56  MOV dword ptr [ESI],EDI
006e2d58  MOV EAX,dword ptr [EBX + 0x8]
006e2d5b  MOV dword ptr [ECX + 0x8],EAX
006e2d5e  MOV EDX,dword ptr [EBX + 0x8]
006e2d61  MOV dword ptr [EDX + 0x4],ECX
006e2d64  MOV EAX,dword ptr [EBP + 0x4]
006e2d67  CMP dword ptr [EAX + 0x4],EBX
006e2d6a  JNZ 0x006e2d71
006e2d6c  MOV dword ptr [EAX + 0x4],ECX
006e2d6f  JMP 0x006e2d7f
006e2d71  MOV EAX,dword ptr [EBX + 0x4]
006e2d74  CMP dword ptr [EAX],EBX
006e2d76  JNZ 0x006e2d7c
006e2d78  MOV dword ptr [EAX],ECX
006e2d7a  JMP 0x006e2d7f
006e2d7c  MOV dword ptr [EAX + 0x8],ECX
006e2d7f  MOV EAX,dword ptr [EBX + 0x4]
006e2d82  MOV dword ptr [ECX + 0x4],EAX
006e2d85  MOV DL,byte ptr [EBX + 0x24]
006e2d88  MOV AL,byte ptr [ECX + 0x24]
006e2d8b  MOV byte ptr [ECX + 0x24],DL
006e2d8e  MOV byte ptr [EBX + 0x24],AL
006e2d91  MOV EAX,dword ptr [ESP + 0x10]
006e2d95  MOV CL,byte ptr [EAX + 0x24]
006e2d98  MOV BL,0x1
006e2d9a  CMP CL,BL
006e2d9c  JNZ 0x006e2ea1
006e2da2  MOV ECX,dword ptr [EBP + 0x4]
006e2da5  CMP EDI,dword ptr [ECX + 0x4]
006e2da8  JZ 0x006e2e9e
006e2dae  MOV EDI,EDI
006e2db0  CMP byte ptr [EDI + 0x24],BL
006e2db3  JNZ 0x006e2e9e
006e2db9  MOV EAX,dword ptr [ESI]
006e2dbb  CMP EDI,EAX
006e2dbd  JNZ 0x006e2e26
006e2dbf  MOV EAX,dword ptr [ESI + 0x8]
006e2dc2  MOV CL,byte ptr [EAX + 0x24]
006e2dc5  TEST CL,CL
006e2dc7  JNZ 0x006e2ddb
006e2dc9  MOV byte ptr [EAX + 0x24],BL
006e2dcc  PUSH ESI
006e2dcd  MOV ECX,EBP
006e2dcf  MOV byte ptr [ESI + 0x24],0x0
006e2dd3  CALL 0x006d9c90
006e2dd8  MOV EAX,dword ptr [ESI + 0x8]
006e2ddb  MOV CL,byte ptr [EAX + 0x25]
006e2dde  TEST CL,CL
006e2de0  JNZ 0x006e2e58
006e2de2  MOV EDX,dword ptr [EAX]
006e2de4  CMP byte ptr [EDX + 0x24],BL
006e2de7  JNZ 0x006e2df1
006e2de9  MOV ECX,dword ptr [EAX + 0x8]
006e2dec  CMP byte ptr [ECX + 0x24],BL
006e2def  JZ 0x006e2e54
006e2df1  MOV ECX,dword ptr [EAX + 0x8]
006e2df4  CMP byte ptr [ECX + 0x24],BL
006e2df7  JNZ 0x006e2e0d
006e2df9  MOV EDX,dword ptr [EAX]
006e2dfb  MOV byte ptr [EDX + 0x24],BL
006e2dfe  PUSH EAX
006e2dff  MOV ECX,EBP
006e2e01  MOV byte ptr [EAX + 0x24],0x0
006e2e05  CALL 0x006d9cf0
006e2e0a  MOV EAX,dword ptr [ESI + 0x8]
006e2e0d  MOV CL,byte ptr [ESI + 0x24]
006e2e10  MOV byte ptr [EAX + 0x24],CL
006e2e13  MOV byte ptr [ESI + 0x24],BL
006e2e16  MOV EDX,dword ptr [EAX + 0x8]
006e2e19  PUSH ESI
006e2e1a  MOV ECX,EBP
006e2e1c  MOV byte ptr [EDX + 0x24],BL
006e2e1f  CALL 0x006d9c90
006e2e24  JMP 0x006e2e9e
006e2e26  MOV CL,byte ptr [EAX + 0x24]
006e2e29  TEST CL,CL
006e2e2b  JNZ 0x006e2e3e
006e2e2d  MOV byte ptr [EAX + 0x24],BL
006e2e30  PUSH ESI
006e2e31  MOV ECX,EBP
006e2e33  MOV byte ptr [ESI + 0x24],0x0
006e2e37  CALL 0x006d9cf0
006e2e3c  MOV EAX,dword ptr [ESI]
006e2e3e  MOV CL,byte ptr [EAX + 0x25]
006e2e41  TEST CL,CL
006e2e43  JNZ 0x006e2e58
006e2e45  MOV EDX,dword ptr [EAX + 0x8]
006e2e48  CMP byte ptr [EDX + 0x24],BL
006e2e4b  JNZ 0x006e2e6d
006e2e4d  MOV ECX,dword ptr [EAX]
006e2e4f  CMP byte ptr [ECX + 0x24],BL
006e2e52  JNZ 0x006e2e6d
006e2e54  MOV byte ptr [EAX + 0x24],0x0
006e2e58  MOV EDX,dword ptr [EBP + 0x4]
006e2e5b  MOV EAX,dword ptr [EDX + 0x4]
006e2e5e  MOV EDI,ESI
006e2e60  CMP EDI,EAX
006e2e62  MOV ESI,dword ptr [ESI + 0x4]
006e2e65  JNZ 0x006e2db0
006e2e6b  JMP 0x006e2e9e
006e2e6d  MOV ECX,dword ptr [EAX]
006e2e6f  CMP byte ptr [ECX + 0x24],BL
006e2e72  JNZ 0x006e2e88
006e2e74  MOV EDX,dword ptr [EAX + 0x8]
006e2e77  MOV byte ptr [EDX + 0x24],BL
006e2e7a  PUSH EAX
006e2e7b  MOV ECX,EBP
006e2e7d  MOV byte ptr [EAX + 0x24],0x0
006e2e81  CALL 0x006d9c90
006e2e86  MOV EAX,dword ptr [ESI]
006e2e88  MOV CL,byte ptr [ESI + 0x24]
006e2e8b  MOV byte ptr [EAX + 0x24],CL
006e2e8e  MOV byte ptr [ESI + 0x24],BL
006e2e91  MOV EDX,dword ptr [EAX]
006e2e93  PUSH ESI
006e2e94  MOV ECX,EBP
006e2e96  MOV byte ptr [EDX + 0x24],BL
006e2e99  CALL 0x006d9cf0
006e2e9e  MOV byte ptr [EDI + 0x24],BL
006e2ea1  MOV ECX,dword ptr [ESP + 0x10]
006e2ea5  ADD ECX,0x10
006e2ea8  CALL 0x0045a430
006e2ead  MOV EAX,dword ptr [ESP + 0x10]
006e2eb1  PUSH 0x890f10
006e2eb6  PUSH 0x28
006e2eb8  PUSH EAX
006e2eb9  MOV ECX,0x925b30
006e2ebe  CALL 0x005d0370
006e2ec3  MOV EAX,dword ptr [EBP + 0x8]
006e2ec6  TEST EAX,EAX
006e2ec8  POP EDI
006e2ec9  POP EBX
006e2eca  JBE 0x006e2ed0
006e2ecc  DEC EAX
006e2ecd  MOV dword ptr [EBP + 0x8],EAX
006e2ed0  MOV ECX,dword ptr [ESP + 0x64]
006e2ed4  MOV EAX,dword ptr [ESP + 0x60]
006e2ed8  MOV dword ptr [EAX],ECX
006e2eda  MOV ECX,dword ptr [ESP + 0x50]
006e2ede  POP ESI
006e2edf  POP EBP
006e2ee0  MOV dword ptr FS:[0x0],ECX
006e2ee7  ADD ESP,0x54
006e2eea  RET 0x8
