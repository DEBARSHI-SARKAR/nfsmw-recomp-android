007e3b90  PUSH EBP
007e3b91  MOV EBP,ESP
007e3b93  SUB ESP,0xc
007e3b96  MOV EAX,dword ptr [EBP + 0x8]
007e3b99  PUSH EAX
007e3b9a  CALL 0x007e44b0
007e3b9f  ADD ESP,0x4
007e3ba2  MOV dword ptr [EBP + -0x8],EAX
007e3ba5  CMP dword ptr [EBP + -0x8],-0x1
007e3ba9  JNZ 0x007e3bbe
007e3bab  CALL 0x007cb270
007e3bb0  MOV dword ptr [EAX],0x9
007e3bb6  OR EAX,0xffffffff
007e3bb9  JMP 0x007e3c3f
007e3bbe  MOV ECX,dword ptr [EBP + 0x10]
007e3bc1  PUSH ECX
007e3bc2  PUSH 0x0
007e3bc4  MOV EDX,dword ptr [EBP + 0xc]
007e3bc7  PUSH EDX
007e3bc8  MOV EAX,dword ptr [EBP + -0x8]
007e3bcb  PUSH EAX
007e3bcc  CALL dword ptr [0x0089029c]
007e3bd2  MOV dword ptr [EBP + -0x4],EAX
007e3bd5  CMP dword ptr [EBP + -0x4],-0x1
007e3bd9  JNZ 0x007e3be6
007e3bdb  CALL dword ptr [0x00890188]
007e3be1  MOV dword ptr [EBP + -0xc],EAX
007e3be4  JMP 0x007e3bed
007e3be6  MOV dword ptr [EBP + -0xc],0x0
007e3bed  CMP dword ptr [EBP + -0xc],0x0
007e3bf1  JZ 0x007e3c04
007e3bf3  MOV ECX,dword ptr [EBP + -0xc]
007e3bf6  PUSH ECX
007e3bf7  CALL 0x007cb1d0
007e3bfc  ADD ESP,0x4
007e3bff  OR EAX,0xffffffff
007e3c02  JMP 0x007e3c3f
007e3c04  MOV EDX,dword ptr [EBP + 0x8]
007e3c07  SAR EDX,0x5
007e3c0a  MOV EAX,dword ptr [EBP + 0x8]
007e3c0d  AND EAX,0x1f
007e3c10  IMUL EAX,EAX,0x24
007e3c13  MOV ECX,dword ptr [EDX*0x4 + 0x9c5340]
007e3c1a  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x4]
007e3c1f  AND EDX,0xfffffffd
007e3c22  MOV EAX,dword ptr [EBP + 0x8]
007e3c25  SAR EAX,0x5
007e3c28  MOV ECX,dword ptr [EBP + 0x8]
007e3c2b  AND ECX,0x1f
007e3c2e  IMUL ECX,ECX,0x24
007e3c31  MOV EAX,dword ptr [EAX*0x4 + 0x9c5340]
007e3c38  MOV byte ptr [EAX + ECX*0x1 + 0x4],DL
007e3c3c  MOV EAX,dword ptr [EBP + -0x4]
007e3c3f  MOV ESP,EBP
007e3c41  POP EBP
007e3c42  RET
