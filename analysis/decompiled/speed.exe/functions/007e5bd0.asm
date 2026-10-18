007e5bd0  PUSH EBP
007e5bd1  MOV EBP,ESP
007e5bd3  SUB ESP,0xc
007e5bd6  MOV EAX,dword ptr [EBP + 0x8]
007e5bd9  PUSH EAX
007e5bda  MOV ECX,dword ptr [EBP + 0xc]
007e5bdd  MOV EDX,dword ptr [ECX]
007e5bdf  PUSH EDX
007e5be0  MOV EAX,dword ptr [EBP + 0x8]
007e5be3  MOV ECX,dword ptr [EAX]
007e5be5  PUSH ECX
007e5be6  CALL 0x007e5b90
007e5beb  ADD ESP,0xc
007e5bee  MOV dword ptr [EBP + -0x4],EAX
007e5bf1  CMP dword ptr [EBP + -0x4],0x0
007e5bf5  JZ 0x007e5c27
007e5bf7  MOV EDX,dword ptr [EBP + 0x8]
007e5bfa  ADD EDX,0x4
007e5bfd  PUSH EDX
007e5bfe  PUSH 0x1
007e5c00  MOV EAX,dword ptr [EBP + 0x8]
007e5c03  MOV ECX,dword ptr [EAX + 0x4]
007e5c06  PUSH ECX
007e5c07  CALL 0x007e5b90
007e5c0c  ADD ESP,0xc
007e5c0f  MOV dword ptr [EBP + -0x8],EAX
007e5c12  CMP dword ptr [EBP + -0x8],0x0
007e5c16  JZ 0x007e5c27
007e5c18  MOV EDX,dword ptr [EBP + 0x8]
007e5c1b  MOV EAX,dword ptr [EDX + 0x8]
007e5c1e  ADD EAX,0x1
007e5c21  MOV ECX,dword ptr [EBP + 0x8]
007e5c24  MOV dword ptr [ECX + 0x8],EAX
007e5c27  MOV EDX,dword ptr [EBP + 0x8]
007e5c2a  ADD EDX,0x4
007e5c2d  PUSH EDX
007e5c2e  MOV EAX,dword ptr [EBP + 0xc]
007e5c31  MOV ECX,dword ptr [EAX + 0x4]
007e5c34  PUSH ECX
007e5c35  MOV EDX,dword ptr [EBP + 0x8]
007e5c38  MOV EAX,dword ptr [EDX + 0x4]
007e5c3b  PUSH EAX
007e5c3c  CALL 0x007e5b90
007e5c41  ADD ESP,0xc
007e5c44  MOV dword ptr [EBP + -0xc],EAX
007e5c47  CMP dword ptr [EBP + -0xc],0x0
007e5c4b  JZ 0x007e5c5c
007e5c4d  MOV ECX,dword ptr [EBP + 0x8]
007e5c50  MOV EDX,dword ptr [ECX + 0x8]
007e5c53  ADD EDX,0x1
007e5c56  MOV EAX,dword ptr [EBP + 0x8]
007e5c59  MOV dword ptr [EAX + 0x8],EDX
007e5c5c  MOV ECX,dword ptr [EBP + 0x8]
007e5c5f  ADD ECX,0x8
007e5c62  PUSH ECX
007e5c63  MOV EDX,dword ptr [EBP + 0xc]
007e5c66  MOV EAX,dword ptr [EDX + 0x8]
007e5c69  PUSH EAX
007e5c6a  MOV ECX,dword ptr [EBP + 0x8]
007e5c6d  MOV EDX,dword ptr [ECX + 0x8]
007e5c70  PUSH EDX
007e5c71  CALL 0x007e5b90
007e5c76  ADD ESP,0xc
007e5c79  MOV ESP,EBP
007e5c7b  POP EBP
007e5c7c  RET
