005a9c70  MOV EAX,FS:[0x0]
005a9c76  PUSH -0x1
005a9c78  PUSH 0x873c88
005a9c7d  PUSH EAX
005a9c7e  MOV EAX,dword ptr [ESP + 0x14]
005a9c82  MOV dword ptr FS:[0x0],ESP
005a9c89  SUB ESP,0x48
005a9c8c  PUSH EBP
005a9c8d  MOV EBP,ECX
005a9c8f  MOV CL,byte ptr [EAX + 0x15]
005a9c92  TEST CL,CL
005a9c94  PUSH ESI
005a9c95  JZ 0x005a9ce3
005a9c97  PUSH 0x1b
005a9c99  XOR ESI,ESI
005a9c9b  PUSH 0x892920
005a9ca0  LEA ECX,[ESP + 0x14]
005a9ca4  MOV dword ptr [ESP + 0x2c],0xf
005a9cac  MOV dword ptr [ESP + 0x28],ESI
005a9cb0  MOV byte ptr [ESP + 0x18],0x0
005a9cb5  CALL 0x004303b0
005a9cba  LEA EAX,[ESP + 0xc]
005a9cbe  PUSH EAX
005a9cbf  LEA ECX,[ESP + 0x2c]
005a9cc3  MOV dword ptr [ESP + 0x5c],ESI
005a9cc7  CALL 0x00432d50
005a9ccc  PUSH 0x8c9f78
005a9cd1  LEA ECX,[ESP + 0x2c]
005a9cd5  PUSH ECX
005a9cd6  MOV dword ptr [ESP + 0x30],0x8bf2c0
005a9cde  CALL 0x007c56b0
005a9ce3  PUSH EBX
005a9ce4  MOV EBX,EAX
005a9ce6  PUSH EDI
005a9ce7  LEA ECX,[ESP + 0x6c]
005a9ceb  MOV dword ptr [ESP + 0x10],EBX
005a9cef  CALL 0x00578b90
005a9cf4  MOV EAX,dword ptr [EBX]
005a9cf6  MOV CL,byte ptr [EAX + 0x15]
005a9cf9  TEST CL,CL
005a9cfb  JZ 0x005a9d02
005a9cfd  MOV EDI,dword ptr [EBX + 0x8]
005a9d00  JMP 0x005a9d1b
005a9d02  MOV EDX,dword ptr [EBX + 0x8]
005a9d05  MOV CL,byte ptr [EDX + 0x15]
005a9d08  TEST CL,CL
005a9d0a  JZ 0x005a9d10
005a9d0c  MOV EDI,EAX
005a9d0e  JMP 0x005a9d1b
005a9d10  MOV ECX,dword ptr [ESP + 0x6c]
005a9d14  CMP ECX,EBX
005a9d16  MOV EDI,dword ptr [ECX + 0x8]
005a9d19  JNZ 0x005a9d89
005a9d1b  MOV AL,byte ptr [EDI + 0x15]
005a9d1e  TEST AL,AL
005a9d20  MOV ESI,dword ptr [EBX + 0x4]
005a9d23  JNZ 0x005a9d28
005a9d25  MOV dword ptr [EDI + 0x4],ESI
005a9d28  MOV EAX,dword ptr [EBP + 0x4]
005a9d2b  CMP dword ptr [EAX + 0x4],EBX
005a9d2e  JNZ 0x005a9d35
005a9d30  MOV dword ptr [EAX + 0x4],EDI
005a9d33  JMP 0x005a9d40
005a9d35  CMP dword ptr [ESI],EBX
005a9d37  JNZ 0x005a9d3d
005a9d39  MOV dword ptr [ESI],EDI
005a9d3b  JMP 0x005a9d40
005a9d3d  MOV dword ptr [ESI + 0x8],EDI
005a9d40  MOV EBX,dword ptr [EBP + 0x4]
005a9d43  MOV EAX,dword ptr [EBX]
005a9d45  CMP EAX,dword ptr [ESP + 0x10]
005a9d49  JNZ 0x005a9d61
005a9d4b  MOV AL,byte ptr [EDI + 0x15]
005a9d4e  TEST AL,AL
005a9d50  JZ 0x005a9d56
005a9d52  MOV EAX,ESI
005a9d54  JMP 0x005a9d5f
005a9d56  PUSH EDI
005a9d57  CALL 0x00578420
005a9d5c  ADD ESP,0x4
005a9d5f  MOV dword ptr [EBX],EAX
005a9d61  MOV EBX,dword ptr [EBP + 0x4]
005a9d64  MOV ECX,dword ptr [ESP + 0x10]
005a9d68  CMP dword ptr [EBX + 0x8],ECX
005a9d6b  JNZ 0x005a9de1
005a9d6d  MOV AL,byte ptr [EDI + 0x15]
005a9d70  TEST AL,AL
005a9d72  JZ 0x005a9d7b
005a9d74  MOV EAX,ESI
005a9d76  MOV dword ptr [EBX + 0x8],EAX
005a9d79  JMP 0x005a9de1
005a9d7b  PUSH EDI
005a9d7c  CALL 0x00578400
005a9d81  ADD ESP,0x4
005a9d84  MOV dword ptr [EBX + 0x8],EAX
005a9d87  JMP 0x005a9de1
005a9d89  MOV dword ptr [EAX + 0x4],ECX
005a9d8c  MOV EDX,dword ptr [EBX]
005a9d8e  MOV dword ptr [ECX],EDX
005a9d90  CMP ECX,dword ptr [EBX + 0x8]
005a9d93  JNZ 0x005a9d99
005a9d95  MOV ESI,ECX
005a9d97  JMP 0x005a9db4
005a9d99  MOV AL,byte ptr [EDI + 0x15]
005a9d9c  TEST AL,AL
005a9d9e  MOV ESI,dword ptr [ECX + 0x4]
005a9da1  JNZ 0x005a9da6
005a9da3  MOV dword ptr [EDI + 0x4],ESI
005a9da6  MOV dword ptr [ESI],EDI
005a9da8  MOV EAX,dword ptr [EBX + 0x8]
005a9dab  MOV dword ptr [ECX + 0x8],EAX
005a9dae  MOV EDX,dword ptr [EBX + 0x8]
005a9db1  MOV dword ptr [EDX + 0x4],ECX
005a9db4  MOV EAX,dword ptr [EBP + 0x4]
005a9db7  CMP dword ptr [EAX + 0x4],EBX
005a9dba  JNZ 0x005a9dc1
005a9dbc  MOV dword ptr [EAX + 0x4],ECX
005a9dbf  JMP 0x005a9dcf
005a9dc1  MOV EAX,dword ptr [EBX + 0x4]
005a9dc4  CMP dword ptr [EAX],EBX
005a9dc6  JNZ 0x005a9dcc
005a9dc8  MOV dword ptr [EAX],ECX
005a9dca  JMP 0x005a9dcf
005a9dcc  MOV dword ptr [EAX + 0x8],ECX
005a9dcf  MOV EAX,dword ptr [EBX + 0x4]
005a9dd2  MOV dword ptr [ECX + 0x4],EAX
005a9dd5  MOV DL,byte ptr [EBX + 0x14]
005a9dd8  MOV AL,byte ptr [ECX + 0x14]
005a9ddb  MOV byte ptr [ECX + 0x14],DL
005a9dde  MOV byte ptr [EBX + 0x14],AL
005a9de1  MOV EAX,dword ptr [ESP + 0x10]
005a9de5  MOV CL,byte ptr [EAX + 0x14]
005a9de8  MOV BL,0x1
005a9dea  CMP CL,BL
005a9dec  JNZ 0x005a9ef1
005a9df2  MOV ECX,dword ptr [EBP + 0x4]
005a9df5  CMP EDI,dword ptr [ECX + 0x4]
005a9df8  JZ 0x005a9eee
005a9dfe  MOV EDI,EDI
005a9e00  CMP byte ptr [EDI + 0x14],BL
005a9e03  JNZ 0x005a9eee
005a9e09  MOV EAX,dword ptr [ESI]
005a9e0b  CMP EDI,EAX
005a9e0d  JNZ 0x005a9e76
005a9e0f  MOV EAX,dword ptr [ESI + 0x8]
005a9e12  MOV CL,byte ptr [EAX + 0x14]
005a9e15  TEST CL,CL
005a9e17  JNZ 0x005a9e2b
005a9e19  MOV byte ptr [EAX + 0x14],BL
005a9e1c  PUSH ESI
005a9e1d  MOV ECX,EBP
005a9e1f  MOV byte ptr [ESI + 0x14],0x0
005a9e23  CALL 0x0058b230
005a9e28  MOV EAX,dword ptr [ESI + 0x8]
005a9e2b  MOV CL,byte ptr [EAX + 0x15]
005a9e2e  TEST CL,CL
005a9e30  JNZ 0x005a9ea8
005a9e32  MOV EDX,dword ptr [EAX]
005a9e34  CMP byte ptr [EDX + 0x14],BL
005a9e37  JNZ 0x005a9e41
005a9e39  MOV ECX,dword ptr [EAX + 0x8]
005a9e3c  CMP byte ptr [ECX + 0x14],BL
005a9e3f  JZ 0x005a9ea4
005a9e41  MOV ECX,dword ptr [EAX + 0x8]
005a9e44  CMP byte ptr [ECX + 0x14],BL
005a9e47  JNZ 0x005a9e5d
005a9e49  MOV EDX,dword ptr [EAX]
005a9e4b  MOV byte ptr [EDX + 0x14],BL
005a9e4e  PUSH EAX
005a9e4f  MOV ECX,EBP
005a9e51  MOV byte ptr [EAX + 0x14],0x0
005a9e55  CALL 0x0058b290
005a9e5a  MOV EAX,dword ptr [ESI + 0x8]
005a9e5d  MOV CL,byte ptr [ESI + 0x14]
005a9e60  MOV byte ptr [EAX + 0x14],CL
005a9e63  MOV byte ptr [ESI + 0x14],BL
005a9e66  MOV EDX,dword ptr [EAX + 0x8]
005a9e69  PUSH ESI
005a9e6a  MOV ECX,EBP
005a9e6c  MOV byte ptr [EDX + 0x14],BL
005a9e6f  CALL 0x0058b230
005a9e74  JMP 0x005a9eee
005a9e76  MOV CL,byte ptr [EAX + 0x14]
005a9e79  TEST CL,CL
005a9e7b  JNZ 0x005a9e8e
005a9e7d  MOV byte ptr [EAX + 0x14],BL
005a9e80  PUSH ESI
005a9e81  MOV ECX,EBP
005a9e83  MOV byte ptr [ESI + 0x14],0x0
005a9e87  CALL 0x0058b290
005a9e8c  MOV EAX,dword ptr [ESI]
005a9e8e  MOV CL,byte ptr [EAX + 0x15]
005a9e91  TEST CL,CL
005a9e93  JNZ 0x005a9ea8
005a9e95  MOV EDX,dword ptr [EAX + 0x8]
005a9e98  CMP byte ptr [EDX + 0x14],BL
005a9e9b  JNZ 0x005a9ebd
005a9e9d  MOV ECX,dword ptr [EAX]
005a9e9f  CMP byte ptr [ECX + 0x14],BL
005a9ea2  JNZ 0x005a9ebd
005a9ea4  MOV byte ptr [EAX + 0x14],0x0
005a9ea8  MOV EDX,dword ptr [EBP + 0x4]
005a9eab  MOV EAX,dword ptr [EDX + 0x4]
005a9eae  MOV EDI,ESI
005a9eb0  CMP EDI,EAX
005a9eb2  MOV ESI,dword ptr [ESI + 0x4]
005a9eb5  JNZ 0x005a9e00
005a9ebb  JMP 0x005a9eee
005a9ebd  MOV ECX,dword ptr [EAX]
005a9ebf  CMP byte ptr [ECX + 0x14],BL
005a9ec2  JNZ 0x005a9ed8
005a9ec4  MOV EDX,dword ptr [EAX + 0x8]
005a9ec7  MOV byte ptr [EDX + 0x14],BL
005a9eca  PUSH EAX
005a9ecb  MOV ECX,EBP
005a9ecd  MOV byte ptr [EAX + 0x14],0x0
005a9ed1  CALL 0x0058b230
005a9ed6  MOV EAX,dword ptr [ESI]
005a9ed8  MOV CL,byte ptr [ESI + 0x14]
005a9edb  MOV byte ptr [EAX + 0x14],CL
005a9ede  MOV byte ptr [ESI + 0x14],BL
005a9ee1  MOV EDX,dword ptr [EAX]
005a9ee3  PUSH ESI
005a9ee4  MOV ECX,EBP
005a9ee6  MOV byte ptr [EDX + 0x14],BL
005a9ee9  CALL 0x0058b290
005a9eee  MOV byte ptr [EDI + 0x14],BL
005a9ef1  MOV EAX,dword ptr [ESP + 0x10]
005a9ef5  PUSH 0x890f10
005a9efa  PUSH 0x18
005a9efc  PUSH EAX
005a9efd  MOV ECX,0x925b30
005a9f02  CALL 0x005d0370
005a9f07  MOV EAX,dword ptr [EBP + 0x8]
005a9f0a  TEST EAX,EAX
005a9f0c  POP EDI
005a9f0d  POP EBX
005a9f0e  JBE 0x005a9f14
005a9f10  DEC EAX
005a9f11  MOV dword ptr [EBP + 0x8],EAX
005a9f14  MOV ECX,dword ptr [ESP + 0x64]
005a9f18  MOV EAX,dword ptr [ESP + 0x60]
005a9f1c  MOV dword ptr [EAX],ECX
005a9f1e  MOV ECX,dword ptr [ESP + 0x50]
005a9f22  POP ESI
005a9f23  POP EBP
005a9f24  MOV dword ptr FS:[0x0],ECX
005a9f2b  ADD ESP,0x54
005a9f2e  RET 0x8
