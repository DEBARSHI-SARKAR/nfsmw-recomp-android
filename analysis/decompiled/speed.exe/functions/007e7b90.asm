007e7b90  PUSH EBP
007e7b91  MOV EBP,ESP
007e7b93  SUB ESP,0x8
007e7b96  CALL 0x007cd100
007e7b9b  MOV EAX,dword ptr [EAX + 0x60]
007e7b9e  MOV dword ptr [EBP + -0x8],EAX
007e7ba1  MOV ECX,dword ptr [EBP + -0x8]
007e7ba4  CMP ECX,dword ptr [0x009c50a4]
007e7baa  JZ 0x007e7bb4
007e7bac  CALL 0x007dd1d0
007e7bb1  MOV dword ptr [EBP + -0x8],EAX
007e7bb4  MOV EDX,dword ptr [EBP + -0x8]
007e7bb7  CMP dword ptr [EDX + 0x8],0x0
007e7bbb  JNZ 0x007e7bd2
007e7bbd  MOV EAX,dword ptr [EBP + 0xc]
007e7bc0  PUSH EAX
007e7bc1  MOV ECX,dword ptr [EBP + 0x8]
007e7bc4  PUSH ECX
007e7bc5  CALL 0x007c97c0
007e7bca  ADD ESP,0x8
007e7bcd  JMP 0x007e7c53
007e7bd2  JMP 0x007e7bdd
007e7bd4  MOV EDX,dword ptr [EBP + 0x8]
007e7bd7  ADD EDX,0x1
007e7bda  MOV dword ptr [EBP + 0x8],EDX
007e7bdd  MOV EAX,dword ptr [EBP + 0x8]
007e7be0  MOVZX CX,byte ptr [EAX]
007e7be4  MOV word ptr [EBP + -0x4],CX
007e7be8  MOVZX EDX,word ptr [EBP + -0x4]
007e7bec  TEST EDX,EDX
007e7bee  JZ 0x007e7c43
007e7bf0  MOVZX EAX,byte ptr [EBP + -0x4]
007e7bf4  MOV ECX,dword ptr [EBP + -0x8]
007e7bf7  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x1d]
007e7bfc  AND EDX,0x4
007e7bff  JZ 0x007e7c36
007e7c01  MOV EAX,dword ptr [EBP + 0x8]
007e7c04  ADD EAX,0x1
007e7c07  MOV dword ptr [EBP + 0x8],EAX
007e7c0a  MOV ECX,dword ptr [EBP + 0x8]
007e7c0d  MOVZX EDX,byte ptr [ECX]
007e7c10  TEST EDX,EDX
007e7c12  JNZ 0x007e7c18
007e7c14  XOR EAX,EAX
007e7c16  JMP 0x007e7c53
007e7c18  MOVZX EAX,word ptr [EBP + -0x4]
007e7c1c  SHL EAX,0x8
007e7c1f  MOV ECX,dword ptr [EBP + 0x8]
007e7c22  MOVZX EDX,byte ptr [ECX]
007e7c25  OR EAX,EDX
007e7c27  CMP dword ptr [EBP + 0xc],EAX
007e7c2a  JNZ 0x007e7c34
007e7c2c  MOV EAX,dword ptr [EBP + 0x8]
007e7c2f  SUB EAX,0x1
007e7c32  JMP 0x007e7c53
007e7c34  JMP 0x007e7c41
007e7c36  MOVZX EAX,word ptr [EBP + -0x4]
007e7c3a  CMP dword ptr [EBP + 0xc],EAX
007e7c3d  JNZ 0x007e7c41
007e7c3f  JMP 0x007e7c43
007e7c41  JMP 0x007e7bd4
007e7c43  MOVZX ECX,word ptr [EBP + -0x4]
007e7c47  CMP dword ptr [EBP + 0xc],ECX
007e7c4a  JNZ 0x007e7c51
007e7c4c  MOV EAX,dword ptr [EBP + 0x8]
007e7c4f  JMP 0x007e7c53
007e7c51  XOR EAX,EAX
007e7c53  MOV ESP,EBP
007e7c55  POP EBP
007e7c56  RET
