00825c0b  PUSH EBP
00825c0c  MOV EBP,ESP
00825c0e  SUB ESP,0x44
00825c11  CMP dword ptr [EBP + 0xc],0x2
00825c15  PUSH EBX
00825c16  PUSH ESI
00825c17  PUSH EDI
00825c18  JNZ 0x00825c63
00825c1a  PUSHAD
00825c1b  PUSHFD
00825c1c  MOV ECX,dword ptr [EBP + 0x8]
00825c1f  SHL ECX,0x1
00825c21  MOV EBX,dword ptr [EBP + 0x14]
00825c24  MOV EDI,dword ptr [EBP + 0x10]
00825c27  XOR EAX,EAX
00825c29  MOV AL,byte ptr [EDI]
00825c2b  MUL ECX
00825c2d  ADD EAX,EBX
00825c2f  MOV ESI,EAX
00825c31  XOR EAX,EAX
00825c33  MOV AL,byte ptr [EDI + 0x1]
00825c36  MUL ECX
00825c38  ADD EAX,EBX
00825c3a  MOV EBX,EAX
00825c3c  MOV EDI,dword ptr [EBP + 0x18]
00825c3f  MOV EAX,dword ptr [EBX + ECX*0x1 + -0x4]
00825c43  MOV EDX,dword ptr [ESI + ECX*0x1 + -0x4]
00825c47  ROL EDX,0x10
00825c4a  XCHG AX,DX
00825c4c  ROL EDX,0x10
00825c4f  MOV dword ptr [EDI + ECX*0x2 + -0x8],EDX
00825c53  MOV dword ptr [EDI + ECX*0x2 + -0x4],EAX
00825c57  SUB ECX,0x4
00825c5a  JG 0x00825c3f
00825c5c  POPFD
00825c5d  POPAD
00825c5e  JMP 0x00825ee2
00825c63  CMP dword ptr [EBP + 0xc],0x4
00825c67  JNZ 0x00825ce6
00825c69  MOV EAX,dword ptr [EBP + 0x10]
00825c6c  MOVZX ECX,byte ptr [EAX]
00825c6f  MOV ESI,dword ptr [EBP + 0x8]
00825c72  MOV EDX,dword ptr [EBP + 0x14]
00825c75  IMUL ECX,ESI
00825c78  MOVZX EBX,byte ptr [EAX + 0x2]
00825c7c  LEA EDI,[EDX + ECX*0x2]
00825c7f  IMUL EBX,ESI
00825c82  MOVZX ECX,byte ptr [EAX + 0x1]
00825c86  MOVZX EAX,byte ptr [EAX + 0x3]
00825c8a  IMUL ECX,ESI
00825c8d  IMUL EAX,ESI
00825c90  TEST ESI,ESI
00825c92  LEA EAX,[EDX + EAX*0x2]
00825c95  LEA ECX,[EDX + ECX*0x2]
00825c98  LEA EBX,[EDX + EBX*0x2]
00825c9b  MOV dword ptr [EBP + 0xc],EAX
00825c9e  JLE 0x00825ee2
00825ca4  MOV EAX,dword ptr [EBP + 0x18]
00825ca7  MOV EDX,EDI
00825ca9  MOV EDI,EBX
00825cab  MOV EBX,dword ptr [EBP + 0xc]
00825cae  SUB EDX,ECX
00825cb0  SUB EDI,ECX
00825cb2  SUB EBX,ECX
00825cb4  MOV dword ptr [EBP + 0xc],ESI
00825cb7  MOV SI,word ptr [EDX + ECX*0x1]
00825cbb  MOV word ptr [EAX],SI
00825cbe  MOV SI,word ptr [ECX]
00825cc1  INC EAX
00825cc2  INC EAX
00825cc3  MOV word ptr [EAX],SI
00825cc6  MOV SI,word ptr [EDI + ECX*0x1]
00825cca  INC EAX
00825ccb  INC EAX
00825ccc  MOV word ptr [EAX],SI
00825ccf  MOV SI,word ptr [EBX + ECX*0x1]
00825cd3  INC EAX
00825cd4  INC EAX
00825cd5  MOV word ptr [EAX],SI
00825cd8  INC EAX
00825cd9  INC EAX
00825cda  INC ECX
00825cdb  INC ECX
00825cdc  DEC dword ptr [EBP + 0xc]
00825cdf  JNZ 0x00825cb7
00825ce1  JMP 0x00825ee2
00825ce6  CMP dword ptr [EBP + 0xc],0x6
00825cea  JNZ 0x00825ee2
00825cf0  MOV EAX,dword ptr [EBP + 0x10]
00825cf3  MOV EBX,dword ptr [EBP + 0x8]
00825cf6  MOVZX EDX,byte ptr [EAX]
00825cf9  MOV ECX,dword ptr [EBP + 0x14]
00825cfc  IMUL EDX,EBX
00825cff  MOVZX ESI,byte ptr [EAX + 0x3]
00825d03  LEA EDX,[ECX + EDX*0x2]
00825d06  IMUL ESI,EBX
00825d09  MOV dword ptr [EBP + -0x8],EDX
00825d0c  MOVZX EDX,byte ptr [EAX + 0x1]
00825d10  IMUL EDX,EBX
00825d13  LEA ESI,[ECX + ESI*0x2]
00825d16  LEA EDI,[ECX + EDX*0x2]
00825d19  MOVZX EDX,byte ptr [EAX + 0x2]
00825d1d  MOV dword ptr [EBP + 0xc],ESI
00825d20  IMUL EDX,EBX
00825d23  MOVZX ESI,byte ptr [EAX + 0x4]
00825d27  MOVZX EAX,byte ptr [EAX + 0x5]
00825d2b  IMUL ESI,EBX
00825d2e  IMUL EAX,EBX
00825d31  TEST EBX,EBX
00825d33  LEA EDX,[ECX + EDX*0x2]
00825d36  LEA ESI,[ECX + ESI*0x2]
00825d39  LEA EAX,[ECX + EAX*0x2]
00825d3c  MOV dword ptr [EBP + -0x10],EDX
00825d3f  MOV dword ptr [EBP + -0x4],ESI
00825d42  MOV dword ptr [EBP + -0xc],EAX
00825d45  JLE 0x00825ee2
00825d4b  MOV EBX,dword ptr [EBP + -0x8]
00825d4e  SUB EBX,EDI
00825d50  MOV dword ptr [EBP + -0x18],EBX
00825d53  MOV EBX,dword ptr [EBP + -0x10]
00825d56  SUB EBX,EDI
00825d58  LEA ECX,[EDI + 0x2]
00825d5b  MOV dword ptr [EBP + -0x1c],EBX
00825d5e  MOV EBX,dword ptr [EBP + 0xc]
00825d61  SUB EBX,EDI
00825d63  MOV dword ptr [EBP + -0x20],EBX
00825d66  MOV EBX,dword ptr [EBP + -0x4]
00825d69  SUB EBX,EDI
00825d6b  MOV dword ptr [EBP + -0x24],EBX
00825d6e  MOV EBX,dword ptr [EBP + -0xc]
00825d71  SUB EBX,EDI
00825d73  MOV EDI,dword ptr [EBP + -0x8]
00825d76  MOV dword ptr [EBP + -0x28],EBX
00825d79  MOV EBX,dword ptr [EBP + -0x10]
00825d7c  SUB EDI,EBX
00825d7e  MOV dword ptr [EBP + -0x2c],EDI
00825d81  MOV EDI,dword ptr [EBP + 0xc]
00825d84  SUB EDI,EBX
00825d86  MOV dword ptr [EBP + -0x30],EDI
00825d89  MOV EDI,dword ptr [EBP + -0x4]
00825d8c  SUB EDI,EBX
00825d8e  MOV dword ptr [EBP + -0x34],EDI
00825d91  MOV EDI,dword ptr [EBP + -0xc]
00825d94  SUB EDI,EBX
00825d96  MOV dword ptr [EBP + -0x38],EDI
00825d99  MOV EDI,dword ptr [EBP + -0x8]
00825d9c  SUB EDI,dword ptr [EBP + 0xc]
00825d9f  MOV EAX,dword ptr [EBP + 0x18]
00825da2  MOV dword ptr [EBP + -0x3c],EDI
00825da5  MOV EDI,dword ptr [EBP + -0x4]
00825da8  SUB EDI,dword ptr [EBP + 0xc]
00825dab  MOV dword ptr [EBP + -0x14],ESI
00825dae  MOV ESI,dword ptr [EBP + 0xc]
00825db1  MOV dword ptr [EBP + -0x40],EDI
00825db4  MOV EDI,dword ptr [EBP + -0xc]
00825db7  SUB EDI,dword ptr [EBP + 0xc]
00825dba  ADD ESI,0x6
00825dbd  MOV dword ptr [EBP + -0x44],EDI
00825dc0  MOV EDI,dword ptr [EBP + -0x8]
00825dc3  SUB EDI,dword ptr [EBP + -0x4]
00825dc6  ADD EDX,0x4
00825dc9  MOV dword ptr [EBP + -0x10],EDI
00825dcc  MOV EDI,dword ptr [EBP + -0xc]
00825dcf  SUB EDI,dword ptr [EBP + -0x4]
00825dd2  ADD EAX,0x4
00825dd5  MOV dword ptr [EBP + -0xc],EDI
00825dd8  MOV EDI,dword ptr [EBP + 0x8]
00825ddb  DEC EDI
00825ddc  SHR EDI,0x2
00825ddf  INC EDI
00825de0  MOV dword ptr [EBP + 0xc],EDI
00825de3  MOV EDI,dword ptr [EBP + -0x14]
00825de6  MOV EBX,dword ptr [EBP + -0x10]
00825de9  MOV BX,word ptr [EBX + EDI*0x1]
00825ded  MOV word ptr [EAX + -0x4],BX
00825df1  MOV BX,word ptr [ECX + -0x2]
00825df5  MOV word ptr [EAX + -0x2],BX
00825df9  MOV BX,word ptr [EDX + -0x4]
00825dfd  MOV word ptr [EAX],BX
00825e00  MOV BX,word ptr [ESI + -0x6]
00825e04  MOV word ptr [EAX + 0x2],BX
00825e08  MOV BX,word ptr [EDI]
00825e0b  MOV word ptr [EAX + 0x4],BX
00825e0f  MOV EBX,dword ptr [EBP + -0xc]
00825e12  MOV BX,word ptr [EBX + EDI*0x1]
00825e16  MOV word ptr [EAX + 0x6],BX
00825e1a  MOV EBX,dword ptr [EBP + -0x18]
00825e1d  MOV BX,word ptr [EBX + ECX*0x1]
00825e21  MOV word ptr [EAX + 0x8],BX
00825e25  MOV BX,word ptr [ECX]
00825e28  MOV word ptr [EAX + 0xa],BX
00825e2c  MOV EBX,dword ptr [EBP + -0x1c]
00825e2f  MOV BX,word ptr [EBX + ECX*0x1]
00825e33  MOV word ptr [EAX + 0xc],BX
00825e37  MOV EBX,dword ptr [EBP + -0x20]
00825e3a  MOV BX,word ptr [EBX + ECX*0x1]
00825e3e  MOV word ptr [EAX + 0xe],BX
00825e42  MOV EBX,dword ptr [EBP + -0x24]
00825e45  MOV BX,word ptr [EBX + ECX*0x1]
00825e49  MOV word ptr [EAX + 0x10],BX
00825e4d  MOV EBX,dword ptr [EBP + -0x28]
00825e50  MOV BX,word ptr [EBX + ECX*0x1]
00825e54  MOV word ptr [EAX + 0x12],BX
00825e58  MOV EBX,dword ptr [EBP + -0x2c]
00825e5b  MOV BX,word ptr [EDX + EBX*0x1]
00825e5f  MOV word ptr [EAX + 0x14],BX
00825e63  MOV BX,word ptr [ECX + 0x2]
00825e67  MOV word ptr [EAX + 0x16],BX
00825e6b  MOV BX,word ptr [EDX]
00825e6e  MOV word ptr [EAX + 0x18],BX
00825e72  MOV EBX,dword ptr [EBP + -0x30]
00825e75  MOV BX,word ptr [EDX + EBX*0x1]
00825e79  MOV word ptr [EAX + 0x1a],BX
00825e7d  MOV EBX,dword ptr [EBP + -0x34]
00825e80  MOV BX,word ptr [EDX + EBX*0x1]
00825e84  MOV word ptr [EAX + 0x1c],BX
00825e88  MOV EBX,dword ptr [EBP + -0x38]
00825e8b  MOV BX,word ptr [EDX + EBX*0x1]
00825e8f  MOV word ptr [EAX + 0x1e],BX
00825e93  MOV EBX,dword ptr [EBP + -0x3c]
00825e96  MOV BX,word ptr [ESI + EBX*0x1]
00825e9a  MOV word ptr [EAX + 0x20],BX
00825e9e  MOV BX,word ptr [ECX + 0x4]
00825ea2  MOV word ptr [EAX + 0x22],BX
00825ea6  MOV BX,word ptr [EDX + 0x2]
00825eaa  MOV word ptr [EAX + 0x24],BX
00825eae  MOV BX,word ptr [ESI]
00825eb1  MOV word ptr [EAX + 0x26],BX
00825eb5  MOV EBX,dword ptr [EBP + -0x40]
00825eb8  MOV BX,word ptr [ESI + EBX*0x1]
00825ebc  MOV word ptr [EAX + 0x28],BX
00825ec0  MOV EBX,dword ptr [EBP + -0x44]
00825ec3  MOV BX,word ptr [ESI + EBX*0x1]
00825ec7  MOV word ptr [EAX + 0x2a],BX
00825ecb  PUSH 0x8
00825ecd  POP EBX
00825ece  ADD EAX,0x30
00825ed1  ADD ECX,EBX
00825ed3  ADD EDI,EBX
00825ed5  ADD EDX,EBX
00825ed7  ADD ESI,EBX
00825ed9  DEC dword ptr [EBP + 0xc]
00825edc  JNZ 0x00825de6
00825ee2  POP EDI
00825ee3  POP ESI
00825ee4  POP EBX
00825ee5  LEAVE
00825ee6  RET
