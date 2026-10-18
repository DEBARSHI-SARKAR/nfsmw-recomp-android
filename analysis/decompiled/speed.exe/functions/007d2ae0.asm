007d2ae0  PUSH EBP
007d2ae1  MOV EBP,ESP
007d2ae3  MOV EAX,0x1144
007d2ae8  CALL 0x007c94b0
007d2aed  MOV EAX,[0x00906980]
007d2af2  MOV dword ptr [EBP + -0xc],EAX
007d2af5  CMP dword ptr [EBP + 0x18],0x0
007d2af9  JNZ 0x007d2b20
007d2afb  PUSH 0x8bcee4
007d2b00  PUSH 0x0
007d2b02  PUSH 0x23a
007d2b07  PUSH 0x8bccf4
007d2b0c  PUSH 0x2
007d2b0e  CALL 0x007d2670
007d2b13  ADD ESP,0x14
007d2b16  CMP EAX,0x1
007d2b19  JNZ 0x007d2b20
007d2b1b  CALL 0x007d2310
007d2b20  MOV byte ptr [EBP + 0xffffefec],0x0
007d2b27  PUSH 0x104
007d2b2c  LEA ECX,[EBP + 0xffffeee8]
007d2b32  PUSH ECX
007d2b33  PUSH 0x0
007d2b35  CALL dword ptr [0x008901d4]
007d2b3b  TEST EAX,EAX
007d2b3d  JNZ 0x007d2b53
007d2b3f  PUSH 0x8b9170
007d2b44  LEA EDX,[EBP + 0xffffeee8]
007d2b4a  PUSH EDX
007d2b4b  CALL 0x007d0bd0
007d2b50  ADD ESP,0x8
007d2b53  LEA EAX,[EBP + 0xffffeee8]
007d2b59  MOV dword ptr [EBP + -0x8],EAX
007d2b5c  MOV ECX,dword ptr [EBP + -0x8]
007d2b5f  PUSH ECX
007d2b60  CALL 0x007d0cd0
007d2b65  ADD ESP,0x4
007d2b68  CMP EAX,0x40
007d2b6b  JBE 0x007d2b96
007d2b6d  MOV EDX,dword ptr [EBP + -0x8]
007d2b70  PUSH EDX
007d2b71  CALL 0x007d0cd0
007d2b76  ADD ESP,0x4
007d2b79  MOV ECX,dword ptr [EBP + -0x8]
007d2b7c  LEA EDX,[ECX + EAX*0x1 + -0x40]
007d2b80  MOV dword ptr [EBP + -0x8],EDX
007d2b83  PUSH 0x3
007d2b85  PUSH 0x8a40d8
007d2b8a  MOV EAX,dword ptr [EBP + -0x8]
007d2b8d  PUSH EAX
007d2b8e  CALL 0x007c64e0
007d2b93  ADD ESP,0xc
007d2b96  MOV ECX,dword ptr [EBP + 0x14]
007d2b99  MOV dword ptr [EBP + -0x4],ECX
007d2b9c  CMP dword ptr [EBP + -0x4],0x0
007d2ba0  JZ 0x007d2bdc
007d2ba2  MOV EDX,dword ptr [EBP + -0x4]
007d2ba5  PUSH EDX
007d2ba6  CALL 0x007d0cd0
007d2bab  ADD ESP,0x4
007d2bae  CMP EAX,0x40
007d2bb1  JBE 0x007d2bdc
007d2bb3  MOV EAX,dword ptr [EBP + -0x4]
007d2bb6  PUSH EAX
007d2bb7  CALL 0x007d0cd0
007d2bbc  ADD ESP,0x4
007d2bbf  MOV ECX,dword ptr [EBP + -0x4]
007d2bc2  LEA EDX,[ECX + EAX*0x1 + -0x40]
007d2bc6  MOV dword ptr [EBP + -0x4],EDX
007d2bc9  PUSH 0x3
007d2bcb  PUSH 0x8a40d8
007d2bd0  MOV EAX,dword ptr [EBP + -0x4]
007d2bd3  PUSH EAX
007d2bd4  CALL 0x007c64e0
007d2bd9  ADD ESP,0xc
007d2bdc  CMP dword ptr [EBP + 0x8],0x2
007d2be0  JNZ 0x007d2bee
007d2be2  MOV dword ptr [EBP + 0xffffeee0],0x8bce70
007d2bec  JMP 0x007d2bf8
007d2bee  MOV dword ptr [EBP + 0xffffeee0],0x890978
007d2bf8  MOV ECX,dword ptr [EBP + 0x18]
007d2bfb  MOVSX EDX,byte ptr [ECX]
007d2bfe  TEST EDX,EDX
007d2c00  JZ 0x007d2c0d
007d2c02  MOV EAX,dword ptr [EBP + 0x18]
007d2c05  MOV dword ptr [EBP + 0xffffeedc],EAX
007d2c0b  JMP 0x007d2c17
007d2c0d  MOV dword ptr [EBP + 0xffffeedc],0x890978
007d2c17  MOV ECX,dword ptr [EBP + 0x18]
007d2c1a  MOVSX EDX,byte ptr [ECX]
007d2c1d  TEST EDX,EDX
007d2c1f  JZ 0x007d2c33
007d2c21  CMP dword ptr [EBP + 0x8],0x2
007d2c25  JNZ 0x007d2c33
007d2c27  MOV dword ptr [EBP + 0xffffeed8],0x8bce60
007d2c31  JMP 0x007d2c3d
007d2c33  MOV dword ptr [EBP + 0xffffeed8],0x890978
007d2c3d  MOV EAX,dword ptr [EBP + 0x18]
007d2c40  MOVSX ECX,byte ptr [EAX]
007d2c43  TEST ECX,ECX
007d2c45  JZ 0x007d2c53
007d2c47  MOV dword ptr [EBP + 0xffffeed4],0x8b9150
007d2c51  JMP 0x007d2c5d
007d2c53  MOV dword ptr [EBP + 0xffffeed4],0x890978
007d2c5d  CMP dword ptr [EBP + 0x10],0x0
007d2c61  JZ 0x007d2c6e
007d2c63  MOV EDX,dword ptr [EBP + 0x10]
007d2c66  MOV dword ptr [EBP + 0xffffeed0],EDX
007d2c6c  JMP 0x007d2c78
007d2c6e  MOV dword ptr [EBP + 0xffffeed0],0x890978
007d2c78  CMP dword ptr [EBP + 0x10],0x0
007d2c7c  JZ 0x007d2c8a
007d2c7e  MOV dword ptr [EBP + 0xffffeecc],0x8bce58
007d2c88  JMP 0x007d2c94
007d2c8a  MOV dword ptr [EBP + 0xffffeecc],0x890978
007d2c94  CMP dword ptr [EBP + 0xc],0x0
007d2c98  JZ 0x007d2ca5
007d2c9a  MOV EAX,dword ptr [EBP + 0xc]
007d2c9d  MOV dword ptr [EBP + 0xffffeec8],EAX
007d2ca3  JMP 0x007d2caf
007d2ca5  MOV dword ptr [EBP + 0xffffeec8],0x890978
007d2caf  CMP dword ptr [EBP + 0xc],0x0
007d2cb3  JZ 0x007d2cc1
007d2cb5  MOV dword ptr [EBP + 0xffffeec4],0x8bce50
007d2cbf  JMP 0x007d2ccb
007d2cc1  MOV dword ptr [EBP + 0xffffeec4],0x890978
007d2ccb  CMP dword ptr [EBP + -0x4],0x0
007d2ccf  JZ 0x007d2cdc
007d2cd1  MOV ECX,dword ptr [EBP + -0x4]
007d2cd4  MOV dword ptr [EBP + 0xffffeec0],ECX
007d2cda  JMP 0x007d2ce6
007d2cdc  MOV dword ptr [EBP + 0xffffeec0],0x890978
007d2ce6  CMP dword ptr [EBP + -0x4],0x0
007d2cea  JZ 0x007d2cf8
007d2cec  MOV dword ptr [EBP + 0xffffeebc],0x8bce44
007d2cf6  JMP 0x007d2d02
007d2cf8  MOV dword ptr [EBP + 0xffffeebc],0x890978
007d2d02  MOV EDX,dword ptr [EBP + 0xffffeee0]
007d2d08  PUSH EDX
007d2d09  MOV EAX,dword ptr [EBP + 0xffffeedc]
007d2d0f  PUSH EAX
007d2d10  MOV ECX,dword ptr [EBP + 0xffffeed8]
007d2d16  PUSH ECX
007d2d17  MOV EDX,dword ptr [EBP + 0xffffeed4]
007d2d1d  PUSH EDX
007d2d1e  MOV EAX,dword ptr [EBP + 0xffffeed0]
007d2d24  PUSH EAX
007d2d25  MOV ECX,dword ptr [EBP + 0xffffeecc]
007d2d2b  PUSH ECX
007d2d2c  MOV EDX,dword ptr [EBP + 0xffffeec8]
007d2d32  PUSH EDX
007d2d33  MOV EAX,dword ptr [EBP + 0xffffeec4]
007d2d39  PUSH EAX
007d2d3a  MOV ECX,dword ptr [EBP + 0xffffeec0]
007d2d40  PUSH ECX
007d2d41  MOV EDX,dword ptr [EBP + 0xffffeebc]
007d2d47  PUSH EDX
007d2d48  MOV EAX,dword ptr [EBP + -0x8]
007d2d4b  PUSH EAX
007d2d4c  MOV ECX,dword ptr [EBP + 0x8]
007d2d4f  MOV EDX,dword ptr [ECX*0x4 + 0x906ad4]
007d2d56  PUSH EDX
007d2d57  PUSH 0x8bcdf0
007d2d5c  PUSH 0x1000
007d2d61  LEA EAX,[EBP + 0xffffeff0]
007d2d67  PUSH EAX
007d2d68  CALL 0x007df440
007d2d6d  ADD ESP,0x3c
007d2d70  TEST EAX,EAX
007d2d72  JGE 0x007d2d88
007d2d74  PUSH 0x8bcd44
007d2d79  LEA ECX,[EBP + 0xffffeff0]
007d2d7f  PUSH ECX
007d2d80  CALL 0x007d0bd0
007d2d85  ADD ESP,0x8
007d2d88  PUSH 0x12012
007d2d8d  PUSH 0x8bcdcc
007d2d92  LEA EDX,[EBP + 0xffffeff0]
007d2d98  PUSH EDX
007d2d99  CALL 0x007de140
007d2d9e  ADD ESP,0xc
007d2da1  MOV dword ptr [EBP + 0xffffeee4],EAX
007d2da7  CMP dword ptr [EBP + 0xffffeee4],0x3
007d2dae  JNZ 0x007d2dc1
007d2db0  PUSH 0x16
007d2db2  CALL 0x007dcef0
007d2db7  ADD ESP,0x4
007d2dba  PUSH 0x3
007d2dbc  CALL 0x007ca340
007d2dc1  CMP dword ptr [EBP + 0xffffeee4],0x4
007d2dc8  JNZ 0x007d2dd1
007d2dca  MOV EAX,0x1
007d2dcf  JMP 0x007d2dd3
007d2dd1  XOR EAX,EAX
007d2dd3  MOV ECX,dword ptr [EBP + -0xc]
007d2dd6  CALL 0x007d6cb0
007d2ddb  MOV ESP,EBP
007d2ddd  POP EBP
007d2dde  RET
