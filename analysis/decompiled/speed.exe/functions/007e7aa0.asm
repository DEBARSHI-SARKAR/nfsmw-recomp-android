007e7aa0  PUSH EBP
007e7aa1  MOV EBP,ESP
007e7aa3  SUB ESP,0x10
007e7aa6  MOV dword ptr [EBP + -0x4],0x0
007e7aad  MOV EAX,dword ptr [EBP + 0x8]
007e7ab0  MOV dword ptr [EBP + -0xc],EAX
007e7ab3  CMP dword ptr [EBP + 0x8],0x0
007e7ab7  JNZ 0x007e7ac0
007e7ab9  XOR EAX,EAX
007e7abb  JMP 0x007e7b8a
007e7ac0  MOV ECX,dword ptr [EBP + -0xc]
007e7ac3  MOV EDX,dword ptr [ECX]
007e7ac5  MOV EAX,dword ptr [EBP + -0xc]
007e7ac8  ADD EAX,0x4
007e7acb  MOV dword ptr [EBP + -0xc],EAX
007e7ace  TEST EDX,EDX
007e7ad0  JZ 0x007e7add
007e7ad2  MOV ECX,dword ptr [EBP + -0x4]
007e7ad5  ADD ECX,0x1
007e7ad8  MOV dword ptr [EBP + -0x4],ECX
007e7adb  JMP 0x007e7ac0
007e7add  PUSH 0x19f
007e7ae2  PUSH 0x8bf1bc
007e7ae7  PUSH 0x2
007e7ae9  MOV EDX,dword ptr [EBP + -0x4]
007e7aec  LEA EAX,[EDX*0x4 + 0x4]
007e7af3  PUSH EAX
007e7af4  CALL 0x007c6700
007e7af9  ADD ESP,0x10
007e7afc  MOV dword ptr [EBP + -0x10],EAX
007e7aff  MOV ECX,dword ptr [EBP + -0x10]
007e7b02  MOV dword ptr [EBP + -0x8],ECX
007e7b05  CMP dword ptr [EBP + -0x8],0x0
007e7b09  JNZ 0x007e7b15
007e7b0b  PUSH 0x9
007e7b0d  CALL 0x007c4240
007e7b12  ADD ESP,0x4
007e7b15  MOV EDX,dword ptr [EBP + 0x8]
007e7b18  MOV dword ptr [EBP + -0xc],EDX
007e7b1b  MOV EAX,dword ptr [EBP + -0xc]
007e7b1e  CMP dword ptr [EAX],0x0
007e7b21  JZ 0x007e7b7e
007e7b23  PUSH 0x1a8
007e7b28  PUSH 0x8bf1bc
007e7b2d  PUSH 0x2
007e7b2f  MOV ECX,dword ptr [EBP + -0xc]
007e7b32  MOV EDX,dword ptr [ECX]
007e7b34  PUSH EDX
007e7b35  CALL 0x007d0cd0
007e7b3a  ADD ESP,0x4
007e7b3d  ADD EAX,0x1
007e7b40  PUSH EAX
007e7b41  CALL 0x007c6700
007e7b46  ADD ESP,0x10
007e7b49  MOV ECX,dword ptr [EBP + -0x10]
007e7b4c  MOV dword ptr [ECX],EAX
007e7b4e  MOV EDX,dword ptr [EBP + -0x10]
007e7b51  CMP dword ptr [EDX],0x0
007e7b54  JZ 0x007e7b6a
007e7b56  MOV EAX,dword ptr [EBP + -0xc]
007e7b59  MOV ECX,dword ptr [EAX]
007e7b5b  PUSH ECX
007e7b5c  MOV EDX,dword ptr [EBP + -0x10]
007e7b5f  MOV EAX,dword ptr [EDX]
007e7b61  PUSH EAX
007e7b62  CALL 0x007d0bd0
007e7b67  ADD ESP,0x8
007e7b6a  MOV ECX,dword ptr [EBP + -0xc]
007e7b6d  ADD ECX,0x4
007e7b70  MOV dword ptr [EBP + -0xc],ECX
007e7b73  MOV EDX,dword ptr [EBP + -0x10]
007e7b76  ADD EDX,0x4
007e7b79  MOV dword ptr [EBP + -0x10],EDX
007e7b7c  JMP 0x007e7b1b
007e7b7e  MOV EAX,dword ptr [EBP + -0x10]
007e7b81  MOV dword ptr [EAX],0x0
007e7b87  MOV EAX,dword ptr [EBP + -0x8]
007e7b8a  MOV ESP,EBP
007e7b8c  POP EBP
007e7b8d  RET
