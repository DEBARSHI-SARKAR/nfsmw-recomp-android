007dd4d0  PUSH EBP
007dd4d1  MOV EBP,ESP
007dd4d3  SUB ESP,0x2c
007dd4d6  MOV EAX,[0x00906980]
007dd4db  MOV dword ptr [EBP + -0x14],EAX
007dd4de  CMP dword ptr [EBP + 0x8],0x0
007dd4e2  JNZ 0x007dd4f5
007dd4e4  CALL 0x007dd840
007dd4e9  CALL 0x007dd8c0
007dd4ee  XOR EAX,EAX
007dd4f0  JMP 0x007dd7ae
007dd4f5  MOV dword ptr [EBP + -0x8],0x0
007dd4fc  JMP 0x007dd507
007dd4fe  MOV EAX,dword ptr [EBP + -0x8]
007dd501  ADD EAX,0x1
007dd504  MOV dword ptr [EBP + -0x8],EAX
007dd507  CMP dword ptr [EBP + -0x8],0x5
007dd50b  JNC 0x007dd64d
007dd511  MOV ECX,dword ptr [EBP + -0x8]
007dd514  IMUL ECX,ECX,0x30
007dd517  MOV EDX,dword ptr [ECX + 0x907168]
007dd51d  CMP EDX,dword ptr [EBP + 0x8]
007dd520  JNZ 0x007dd648
007dd526  MOV dword ptr [EBP + -0x10],0x0
007dd52d  JMP 0x007dd538
007dd52f  MOV EAX,dword ptr [EBP + -0x10]
007dd532  ADD EAX,0x1
007dd535  MOV dword ptr [EBP + -0x10],EAX
007dd538  CMP dword ptr [EBP + -0x10],0x101
007dd53f  JNC 0x007dd54d
007dd541  MOV ECX,dword ptr [EBP + -0x10]
007dd544  MOV byte ptr [ECX + 0x9c50c0],0x0
007dd54b  JMP 0x007dd52f
007dd54d  MOV dword ptr [EBP + -0x4],0x0
007dd554  JMP 0x007dd55f
007dd556  MOV EDX,dword ptr [EBP + -0x4]
007dd559  ADD EDX,0x1
007dd55c  MOV dword ptr [EBP + -0x4],EDX
007dd55f  CMP dword ptr [EBP + -0x4],0x4
007dd563  JNC 0x007dd5e0
007dd565  MOV EAX,dword ptr [EBP + -0x8]
007dd568  IMUL EAX,EAX,0x30
007dd56b  MOV ECX,dword ptr [EBP + -0x4]
007dd56e  LEA EDX,[EAX + ECX*0x8 + 0x907178]
007dd575  MOV dword ptr [EBP + -0xc],EDX
007dd578  JMP 0x007dd583
007dd57a  MOV EAX,dword ptr [EBP + -0xc]
007dd57d  ADD EAX,0x2
007dd580  MOV dword ptr [EBP + -0xc],EAX
007dd583  MOV ECX,dword ptr [EBP + -0xc]
007dd586  MOVZX EDX,byte ptr [ECX]
007dd589  TEST EDX,EDX
007dd58b  JZ 0x007dd5db
007dd58d  MOV EAX,dword ptr [EBP + -0xc]
007dd590  MOVZX ECX,byte ptr [EAX + 0x1]
007dd594  TEST ECX,ECX
007dd596  JZ 0x007dd5db
007dd598  MOV EDX,dword ptr [EBP + -0xc]
007dd59b  MOVZX EAX,byte ptr [EDX]
007dd59e  MOV dword ptr [EBP + -0x10],EAX
007dd5a1  JMP 0x007dd5ac
007dd5a3  MOV ECX,dword ptr [EBP + -0x10]
007dd5a6  ADD ECX,0x1
007dd5a9  MOV dword ptr [EBP + -0x10],ECX
007dd5ac  MOV EDX,dword ptr [EBP + -0xc]
007dd5af  MOVZX EAX,byte ptr [EDX + 0x1]
007dd5b3  CMP dword ptr [EBP + -0x10],EAX
007dd5b6  JA 0x007dd5d9
007dd5b8  MOV ECX,dword ptr [EBP + -0x4]
007dd5bb  MOVSX EDX,byte ptr [ECX + 0x907160]
007dd5c2  MOV EAX,dword ptr [EBP + -0x10]
007dd5c5  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007dd5cc  OR ECX,EDX
007dd5ce  MOV EDX,dword ptr [EBP + -0x10]
007dd5d1  MOV byte ptr [EDX + 0x9c50c1],CL
007dd5d7  JMP 0x007dd5a3
007dd5d9  JMP 0x007dd57a
007dd5db  JMP 0x007dd556
007dd5e0  MOV EAX,dword ptr [EBP + 0x8]
007dd5e3  MOV [0x009c51c4],EAX
007dd5e8  MOV dword ptr [0x009c50a8],0x1
007dd5f2  MOV ECX,dword ptr [0x009c51c4]
007dd5f8  PUSH ECX
007dd5f9  CALL 0x007dd7c0
007dd5fe  ADD ESP,0x4
007dd601  MOV [0x009c50a0],EAX
007dd606  MOV dword ptr [EBP + -0x4],0x0
007dd60d  JMP 0x007dd618
007dd60f  MOV EDX,dword ptr [EBP + -0x4]
007dd612  ADD EDX,0x1
007dd615  MOV dword ptr [EBP + -0x4],EDX
007dd618  CMP dword ptr [EBP + -0x4],0x6
007dd61c  JNC 0x007dd63c
007dd61e  MOV EAX,dword ptr [EBP + -0x8]
007dd621  IMUL EAX,EAX,0x30
007dd624  MOV ECX,dword ptr [EBP + -0x4]
007dd627  MOV EDX,dword ptr [EBP + -0x4]
007dd62a  MOV AX,word ptr [EAX + EDX*0x2 + 0x90716c]
007dd632  MOV word ptr [ECX*0x2 + 0x9c51d0],AX
007dd63a  JMP 0x007dd60f
007dd63c  CALL 0x007dd8c0
007dd641  XOR EAX,EAX
007dd643  JMP 0x007dd7ae
007dd648  JMP 0x007dd4fe
007dd64d  LEA ECX,[EBP + -0x28]
007dd650  PUSH ECX
007dd651  MOV EDX,dword ptr [EBP + 0x8]
007dd654  PUSH EDX
007dd655  CALL dword ptr [0x00890244]
007dd65b  CMP EAX,0x1
007dd65e  JNZ 0x007dd794
007dd664  MOV dword ptr [EBP + -0x10],0x0
007dd66b  JMP 0x007dd676
007dd66d  MOV EAX,dword ptr [EBP + -0x10]
007dd670  ADD EAX,0x1
007dd673  MOV dword ptr [EBP + -0x10],EAX
007dd676  CMP dword ptr [EBP + -0x10],0x101
007dd67d  JNC 0x007dd68b
007dd67f  MOV ECX,dword ptr [EBP + -0x10]
007dd682  MOV byte ptr [ECX + 0x9c50c0],0x0
007dd689  JMP 0x007dd66d
007dd68b  MOV EDX,dword ptr [EBP + 0x8]
007dd68e  MOV dword ptr [0x009c51c4],EDX
007dd694  MOV dword ptr [0x009c50a0],0x0
007dd69e  CMP dword ptr [EBP + -0x28],0x1
007dd6a2  JBE 0x007dd75a
007dd6a8  LEA EAX,[EBP + -0x22]
007dd6ab  MOV dword ptr [EBP + -0x2c],EAX
007dd6ae  JMP 0x007dd6b9
007dd6b0  MOV ECX,dword ptr [EBP + -0x2c]
007dd6b3  ADD ECX,0x2
007dd6b6  MOV dword ptr [EBP + -0x2c],ECX
007dd6b9  MOV EDX,dword ptr [EBP + -0x2c]
007dd6bc  MOVZX EAX,byte ptr [EDX]
007dd6bf  TEST EAX,EAX
007dd6c1  JZ 0x007dd708
007dd6c3  MOV ECX,dword ptr [EBP + -0x2c]
007dd6c6  MOVZX EDX,byte ptr [ECX + 0x1]
007dd6ca  TEST EDX,EDX
007dd6cc  JZ 0x007dd708
007dd6ce  MOV EAX,dword ptr [EBP + -0x2c]
007dd6d1  MOVZX ECX,byte ptr [EAX]
007dd6d4  MOV dword ptr [EBP + -0x10],ECX
007dd6d7  JMP 0x007dd6e2
007dd6d9  MOV EDX,dword ptr [EBP + -0x10]
007dd6dc  ADD EDX,0x1
007dd6df  MOV dword ptr [EBP + -0x10],EDX
007dd6e2  MOV EAX,dword ptr [EBP + -0x2c]
007dd6e5  MOVZX ECX,byte ptr [EAX + 0x1]
007dd6e9  CMP dword ptr [EBP + -0x10],ECX
007dd6ec  JA 0x007dd706
007dd6ee  MOV EDX,dword ptr [EBP + -0x10]
007dd6f1  MOVZX EAX,byte ptr [EDX + 0x9c50c1]
007dd6f8  OR EAX,0x4
007dd6fb  MOV ECX,dword ptr [EBP + -0x10]
007dd6fe  MOV byte ptr [ECX + 0x9c50c1],AL
007dd704  JMP 0x007dd6d9
007dd706  JMP 0x007dd6b0
007dd708  MOV dword ptr [EBP + -0x10],0x1
007dd70f  JMP 0x007dd71a
007dd711  MOV EDX,dword ptr [EBP + -0x10]
007dd714  ADD EDX,0x1
007dd717  MOV dword ptr [EBP + -0x10],EDX
007dd71a  CMP dword ptr [EBP + -0x10],0xff
007dd721  JNC 0x007dd73b
007dd723  MOV EAX,dword ptr [EBP + -0x10]
007dd726  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007dd72d  OR ECX,0x8
007dd730  MOV EDX,dword ptr [EBP + -0x10]
007dd733  MOV byte ptr [EDX + 0x9c50c1],CL
007dd739  JMP 0x007dd711
007dd73b  MOV EAX,[0x009c51c4]
007dd740  PUSH EAX
007dd741  CALL 0x007dd7c0
007dd746  ADD ESP,0x4
007dd749  MOV [0x009c50a0],EAX
007dd74e  MOV dword ptr [0x009c50a8],0x1
007dd758  JMP 0x007dd764
007dd75a  MOV dword ptr [0x009c50a8],0x0
007dd764  MOV dword ptr [EBP + -0x4],0x0
007dd76b  JMP 0x007dd776
007dd76d  MOV ECX,dword ptr [EBP + -0x4]
007dd770  ADD ECX,0x1
007dd773  MOV dword ptr [EBP + -0x4],ECX
007dd776  CMP dword ptr [EBP + -0x4],0x6
007dd77a  JNC 0x007dd78b
007dd77c  MOV EDX,dword ptr [EBP + -0x4]
007dd77f  MOV word ptr [EDX*0x2 + 0x9c51d0],0x0
007dd789  JMP 0x007dd76d
007dd78b  CALL 0x007dd8c0
007dd790  XOR EAX,EAX
007dd792  JMP 0x007dd7ae
007dd794  CMP dword ptr [0x009bae84],0x0
007dd79b  JZ 0x007dd7ab
007dd79d  CALL 0x007dd840
007dd7a2  CALL 0x007dd8c0
007dd7a7  XOR EAX,EAX
007dd7a9  JMP 0x007dd7ae
007dd7ab  OR EAX,0xffffffff
007dd7ae  MOV ECX,dword ptr [EBP + -0x14]
007dd7b1  CALL 0x007d6cb0
007dd7b6  MOV ESP,EBP
007dd7b8  POP EBP
007dd7b9  RET
