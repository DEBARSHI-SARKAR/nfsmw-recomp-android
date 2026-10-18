007c9b40  PUSH EBP
007c9b41  MOV EBP,ESP
007c9b43  SUB ESP,0x2c
007c9b46  LEA EAX,[EBP + -0x28]
007c9b49  MOV dword ptr [EBP + -0x8],EAX
007c9b4c  CMP dword ptr [EBP + 0xc],0x0
007c9b50  JNZ 0x007c9b70
007c9b52  PUSH 0x8b814c
007c9b57  PUSH 0x0
007c9b59  PUSH 0x5a
007c9b5b  PUSH 0x8b8c20
007c9b60  PUSH 0x2
007c9b62  CALL 0x007d2670
007c9b67  ADD ESP,0x14
007c9b6a  CMP EAX,0x1
007c9b6d  JNZ 0x007c9b70
007c9b6f  INT3
007c9b70  CMP dword ptr [EBP + 0x8],0x0
007c9b74  JNZ 0x007c9b94
007c9b76  PUSH 0x8b816c
007c9b7b  PUSH 0x0
007c9b7d  PUSH 0x5d
007c9b7f  PUSH 0x8b8c20
007c9b84  PUSH 0x2
007c9b86  CALL 0x007d2670
007c9b8b  ADD ESP,0x14
007c9b8e  CMP EAX,0x1
007c9b91  JNZ 0x007c9b94
007c9b93  INT3
007c9b94  MOV EAX,dword ptr [EBP + -0x8]
007c9b97  MOV dword ptr [EAX + 0x4],0x7fffffff
007c9b9e  MOV ECX,dword ptr [EBP + -0x8]
007c9ba1  MOV dword ptr [ECX + 0xc],0x42
007c9ba8  MOV EDX,dword ptr [EBP + -0x8]
007c9bab  MOV EAX,dword ptr [EBP + 0x8]
007c9bae  MOV dword ptr [EDX + 0x8],EAX
007c9bb1  MOV ECX,dword ptr [EBP + -0x8]
007c9bb4  MOV EDX,dword ptr [EBP + 0x8]
007c9bb7  MOV dword ptr [ECX],EDX
007c9bb9  MOV EAX,dword ptr [EBP + 0x10]
007c9bbc  PUSH EAX
007c9bbd  MOV ECX,dword ptr [EBP + 0xc]
007c9bc0  PUSH ECX
007c9bc1  MOV EDX,dword ptr [EBP + -0x8]
007c9bc4  PUSH EDX
007c9bc5  CALL 0x007d1390
007c9bca  ADD ESP,0xc
007c9bcd  MOV dword ptr [EBP + -0x4],EAX
007c9bd0  CMP dword ptr [EBP + 0x8],0x0
007c9bd4  JZ 0x007c9c20
007c9bd6  MOV EAX,dword ptr [EBP + -0x8]
007c9bd9  MOV ECX,dword ptr [EAX + 0x4]
007c9bdc  SUB ECX,0x1
007c9bdf  MOV EDX,dword ptr [EBP + -0x8]
007c9be2  MOV dword ptr [EDX + 0x4],ECX
007c9be5  MOV EAX,dword ptr [EBP + -0x8]
007c9be8  CMP dword ptr [EAX + 0x4],0x0
007c9bec  JL 0x007c9c0f
007c9bee  MOV ECX,dword ptr [EBP + -0x8]
007c9bf1  MOV EDX,dword ptr [ECX]
007c9bf3  MOV byte ptr [EDX],0x0
007c9bf6  XOR EAX,EAX
007c9bf8  AND EAX,0xff
007c9bfd  MOV dword ptr [EBP + -0x2c],EAX
007c9c00  MOV ECX,dword ptr [EBP + -0x8]
007c9c03  MOV EDX,dword ptr [ECX]
007c9c05  ADD EDX,0x1
007c9c08  MOV EAX,dword ptr [EBP + -0x8]
007c9c0b  MOV dword ptr [EAX],EDX
007c9c0d  JMP 0x007c9c20
007c9c0f  MOV ECX,dword ptr [EBP + -0x8]
007c9c12  PUSH ECX
007c9c13  PUSH 0x0
007c9c15  CALL 0x007d47d0
007c9c1a  ADD ESP,0x8
007c9c1d  MOV dword ptr [EBP + -0x2c],EAX
007c9c20  MOV EAX,dword ptr [EBP + -0x4]
007c9c23  MOV ESP,EBP
007c9c25  POP EBP
007c9c26  RET
