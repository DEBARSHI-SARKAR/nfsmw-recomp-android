007d3eb0  PUSH EBP
007d3eb1  MOV EBP,ESP
007d3eb3  SUB ESP,0xc
007d3eb6  PUSH 0x90
007d3ebb  PUSH 0x0
007d3ebd  MOV EAX,dword ptr [EBP + 0x8]
007d3ec0  PUSH EAX
007d3ec1  CALL 0x007d4aa0
007d3ec6  ADD ESP,0xc
007d3ec9  MOV ECX,dword ptr [EBP + 0xc]
007d3ecc  MOVSX EDX,byte ptr [ECX]
007d3ecf  TEST EDX,EDX
007d3ed1  JNZ 0x007d3eda
007d3ed3  XOR EAX,EAX
007d3ed5  JMP 0x007d401b
007d3eda  MOV EAX,dword ptr [EBP + 0xc]
007d3edd  MOVSX ECX,byte ptr [EAX]
007d3ee0  CMP ECX,0x2e
007d3ee3  JNZ 0x007d3f1c
007d3ee5  MOV EDX,dword ptr [EBP + 0xc]
007d3ee8  MOVSX EAX,byte ptr [EDX + 0x1]
007d3eec  TEST EAX,EAX
007d3eee  JZ 0x007d3f1c
007d3ef0  PUSH 0xf
007d3ef2  MOV ECX,dword ptr [EBP + 0xc]
007d3ef5  ADD ECX,0x1
007d3ef8  PUSH ECX
007d3ef9  MOV EDX,dword ptr [EBP + 0x8]
007d3efc  ADD EDX,0x80
007d3f02  PUSH EDX
007d3f03  CALL 0x007c64e0
007d3f08  ADD ESP,0xc
007d3f0b  MOV EAX,dword ptr [EBP + 0x8]
007d3f0e  MOV byte ptr [EAX + 0x8f],0x0
007d3f15  XOR EAX,EAX
007d3f17  JMP 0x007d401b
007d3f1c  MOV dword ptr [EBP + -0x4],0x0
007d3f23  JMP 0x007d3f2e
007d3f25  MOV ECX,dword ptr [EBP + -0x4]
007d3f28  ADD ECX,0x1
007d3f2b  MOV dword ptr [EBP + -0x4],ECX
007d3f2e  PUSH 0x8bd0f0
007d3f33  MOV EDX,dword ptr [EBP + 0xc]
007d3f36  PUSH EDX
007d3f37  CALL 0x007cae00
007d3f3c  ADD ESP,0x8
007d3f3f  MOV dword ptr [EBP + -0x8],EAX
007d3f42  CMP dword ptr [EBP + -0x8],0x0
007d3f46  JNZ 0x007d3f50
007d3f48  OR EAX,0xffffffff
007d3f4b  JMP 0x007d401b
007d3f50  MOV EAX,dword ptr [EBP + 0xc]
007d3f53  ADD EAX,dword ptr [EBP + -0x8]
007d3f56  MOV CL,byte ptr [EAX]
007d3f58  MOV byte ptr [EBP + -0x9],CL
007d3f5b  CMP dword ptr [EBP + -0x4],0x0
007d3f5f  JNZ 0x007d3f86
007d3f61  CMP dword ptr [EBP + -0x8],0x40
007d3f65  JNC 0x007d3f86
007d3f67  MOVSX EDX,byte ptr [EBP + -0x9]
007d3f6b  CMP EDX,0x2e
007d3f6e  JZ 0x007d3f86
007d3f70  MOV EAX,dword ptr [EBP + -0x8]
007d3f73  PUSH EAX
007d3f74  MOV ECX,dword ptr [EBP + 0xc]
007d3f77  PUSH ECX
007d3f78  MOV EDX,dword ptr [EBP + 0x8]
007d3f7b  PUSH EDX
007d3f7c  CALL 0x007c64e0
007d3f81  ADD ESP,0xc
007d3f84  JMP 0x007d3ff2
007d3f86  CMP dword ptr [EBP + -0x4],0x1
007d3f8a  JNZ 0x007d3fb4
007d3f8c  CMP dword ptr [EBP + -0x8],0x40
007d3f90  JNC 0x007d3fb4
007d3f92  MOVSX EAX,byte ptr [EBP + -0x9]
007d3f96  CMP EAX,0x5f
007d3f99  JZ 0x007d3fb4
007d3f9b  MOV ECX,dword ptr [EBP + -0x8]
007d3f9e  PUSH ECX
007d3f9f  MOV EDX,dword ptr [EBP + 0xc]
007d3fa2  PUSH EDX
007d3fa3  MOV EAX,dword ptr [EBP + 0x8]
007d3fa6  ADD EAX,0x40
007d3fa9  PUSH EAX
007d3faa  CALL 0x007c64e0
007d3faf  ADD ESP,0xc
007d3fb2  JMP 0x007d3ff2
007d3fb4  CMP dword ptr [EBP + -0x4],0x2
007d3fb8  JNZ 0x007d3fed
007d3fba  CMP dword ptr [EBP + -0x8],0x10
007d3fbe  JNC 0x007d3fed
007d3fc0  MOVSX ECX,byte ptr [EBP + -0x9]
007d3fc4  TEST ECX,ECX
007d3fc6  JZ 0x007d3fd1
007d3fc8  MOVSX EDX,byte ptr [EBP + -0x9]
007d3fcc  CMP EDX,0x2c
007d3fcf  JNZ 0x007d3fed
007d3fd1  MOV EAX,dword ptr [EBP + -0x8]
007d3fd4  PUSH EAX
007d3fd5  MOV ECX,dword ptr [EBP + 0xc]
007d3fd8  PUSH ECX
007d3fd9  MOV EDX,dword ptr [EBP + 0x8]
007d3fdc  ADD EDX,0x80
007d3fe2  PUSH EDX
007d3fe3  CALL 0x007c64e0
007d3fe8  ADD ESP,0xc
007d3feb  JMP 0x007d3ff2
007d3fed  OR EAX,0xffffffff
007d3ff0  JMP 0x007d401b
007d3ff2  MOVSX EAX,byte ptr [EBP + -0x9]
007d3ff6  CMP EAX,0x2c
007d3ff9  JNZ 0x007d3ffd
007d3ffb  JMP 0x007d4019
007d3ffd  MOVSX ECX,byte ptr [EBP + -0x9]
007d4001  TEST ECX,ECX
007d4003  JNZ 0x007d4007
007d4005  JMP 0x007d4019
007d4007  MOV EDX,dword ptr [EBP + -0x8]
007d400a  MOV EAX,dword ptr [EBP + 0xc]
007d400d  LEA ECX,[EAX + EDX*0x1 + 0x1]
007d4011  MOV dword ptr [EBP + 0xc],ECX
007d4014  JMP 0x007d3f25
007d4019  XOR EAX,EAX
007d401b  MOV ESP,EBP
007d401d  POP EBP
007d401e  RET
