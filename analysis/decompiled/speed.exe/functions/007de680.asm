007de680  PUSH EBP
007de681  MOV EBP,ESP
007de683  SUB ESP,0x34
007de686  MOV EAX,dword ptr [EBP + 0x8]
007de689  MOVZX ECX,word ptr [EAX + 0xa]
007de68d  AND ECX,0x7fff
007de693  SUB ECX,0x3fff
007de699  MOV dword ptr [EBP + -0xc],ECX
007de69c  MOV EDX,dword ptr [EBP + 0x8]
007de69f  MOVZX EAX,word ptr [EDX + 0xa]
007de6a3  AND EAX,0x8000
007de6a8  MOV dword ptr [EBP + -0x14],EAX
007de6ab  MOV ECX,dword ptr [EBP + 0x8]
007de6ae  MOV EDX,dword ptr [ECX + 0x6]
007de6b1  MOV dword ptr [EBP + -0x20],EDX
007de6b4  MOV EAX,dword ptr [EBP + 0x8]
007de6b7  MOV ECX,dword ptr [EAX + 0x2]
007de6ba  MOV dword ptr [EBP + -0x1c],ECX
007de6bd  MOV EDX,dword ptr [EBP + 0x8]
007de6c0  MOVZX EAX,word ptr [EDX]
007de6c3  SHL EAX,0x10
007de6c6  MOV dword ptr [EBP + -0x18],EAX
007de6c9  CMP dword ptr [EBP + -0xc],0xffffc001
007de6d0  JNZ 0x007de70a
007de6d2  MOV dword ptr [EBP + -0x4],0x0
007de6d9  LEA ECX,[EBP + -0x20]
007de6dc  PUSH ECX
007de6dd  CALL 0x007de550
007de6e2  ADD ESP,0x4
007de6e5  TEST EAX,EAX
007de6e7  JZ 0x007de6f2
007de6e9  MOV dword ptr [EBP + -0x8],0x0
007de6f0  JMP 0x007de705
007de6f2  LEA EDX,[EBP + -0x20]
007de6f5  PUSH EDX
007de6f6  CALL 0x007de520
007de6fb  ADD ESP,0x4
007de6fe  MOV dword ptr [EBP + -0x8],0x2
007de705  JMP 0x007de856
007de70a  LEA EAX,[EBP + -0x20]
007de70d  PUSH EAX
007de70e  LEA ECX,[EBP + -0x30]
007de711  PUSH ECX
007de712  CALL 0x007de4d0
007de717  ADD ESP,0x8
007de71a  MOV EDX,dword ptr [EBP + 0x10]
007de71d  MOV EAX,dword ptr [EDX + 0x8]
007de720  PUSH EAX
007de721  LEA ECX,[EBP + -0x20]
007de724  PUSH ECX
007de725  CALL 0x007de3f0
007de72a  ADD ESP,0x8
007de72d  TEST EAX,EAX
007de72f  JZ 0x007de73a
007de731  MOV EDX,dword ptr [EBP + -0xc]
007de734  ADD EDX,0x1
007de737  MOV dword ptr [EBP + -0xc],EDX
007de73a  MOV EAX,dword ptr [EBP + 0x10]
007de73d  MOV ECX,dword ptr [EBP + 0x10]
007de740  MOV EDX,dword ptr [EAX + 0x4]
007de743  SUB EDX,dword ptr [ECX + 0x8]
007de746  CMP dword ptr [EBP + -0xc],EDX
007de749  JGE 0x007de76a
007de74b  LEA EAX,[EBP + -0x20]
007de74e  PUSH EAX
007de74f  CALL 0x007de520
007de754  ADD ESP,0x4
007de757  MOV dword ptr [EBP + -0x4],0x0
007de75e  MOV dword ptr [EBP + -0x8],0x2
007de765  JMP 0x007de856
007de76a  MOV ECX,dword ptr [EBP + 0x10]
007de76d  MOV EDX,dword ptr [EBP + -0xc]
007de770  CMP EDX,dword ptr [ECX + 0x4]
007de773  JG 0x007de7da
007de775  MOV EAX,dword ptr [EBP + 0x10]
007de778  MOV ECX,dword ptr [EAX + 0x4]
007de77b  SUB ECX,dword ptr [EBP + -0xc]
007de77e  MOV dword ptr [EBP + -0x34],ECX
007de781  LEA EDX,[EBP + -0x30]
007de784  PUSH EDX
007de785  LEA EAX,[EBP + -0x20]
007de788  PUSH EAX
007de789  CALL 0x007de4d0
007de78e  ADD ESP,0x8
007de791  MOV ECX,dword ptr [EBP + -0x34]
007de794  PUSH ECX
007de795  LEA EDX,[EBP + -0x20]
007de798  PUSH EDX
007de799  CALL 0x007de590
007de79e  ADD ESP,0x8
007de7a1  MOV EAX,dword ptr [EBP + 0x10]
007de7a4  MOV ECX,dword ptr [EAX + 0x8]
007de7a7  PUSH ECX
007de7a8  LEA EDX,[EBP + -0x20]
007de7ab  PUSH EDX
007de7ac  CALL 0x007de3f0
007de7b1  ADD ESP,0x8
007de7b4  MOV EAX,dword ptr [EBP + 0x10]
007de7b7  MOV ECX,dword ptr [EAX + 0xc]
007de7ba  ADD ECX,0x1
007de7bd  PUSH ECX
007de7be  LEA EDX,[EBP + -0x20]
007de7c1  PUSH EDX
007de7c2  CALL 0x007de590
007de7c7  ADD ESP,0x8
007de7ca  MOV dword ptr [EBP + -0x4],0x0
007de7d1  MOV dword ptr [EBP + -0x8],0x2
007de7d8  JMP 0x007de856
007de7da  MOV EAX,dword ptr [EBP + 0x10]
007de7dd  MOV ECX,dword ptr [EBP + -0xc]
007de7e0  CMP ECX,dword ptr [EAX]
007de7e2  JL 0x007de825
007de7e4  LEA EDX,[EBP + -0x20]
007de7e7  PUSH EDX
007de7e8  CALL 0x007de520
007de7ed  ADD ESP,0x4
007de7f0  MOV EAX,dword ptr [EBP + -0x20]
007de7f3  OR EAX,0x80000000
007de7f8  MOV dword ptr [EBP + -0x20],EAX
007de7fb  MOV ECX,dword ptr [EBP + 0x10]
007de7fe  MOV EDX,dword ptr [ECX + 0xc]
007de801  PUSH EDX
007de802  LEA EAX,[EBP + -0x20]
007de805  PUSH EAX
007de806  CALL 0x007de590
007de80b  ADD ESP,0x8
007de80e  MOV ECX,dword ptr [EBP + 0x10]
007de811  MOV EDX,dword ptr [ECX]
007de813  MOV EAX,dword ptr [EBP + 0x10]
007de816  ADD EDX,dword ptr [EAX + 0x14]
007de819  MOV dword ptr [EBP + -0x4],EDX
007de81c  MOV dword ptr [EBP + -0x8],0x1
007de823  JMP 0x007de856
007de825  MOV ECX,dword ptr [EBP + 0x10]
007de828  MOV EDX,dword ptr [EBP + -0xc]
007de82b  ADD EDX,dword ptr [ECX + 0x14]
007de82e  MOV dword ptr [EBP + -0x4],EDX
007de831  MOV EAX,dword ptr [EBP + -0x20]
007de834  AND EAX,0x7fffffff
007de839  MOV dword ptr [EBP + -0x20],EAX
007de83c  MOV ECX,dword ptr [EBP + 0x10]
007de83f  MOV EDX,dword ptr [ECX + 0xc]
007de842  PUSH EDX
007de843  LEA EAX,[EBP + -0x20]
007de846  PUSH EAX
007de847  CALL 0x007de590
007de84c  ADD ESP,0x8
007de84f  MOV dword ptr [EBP + -0x8],0x0
007de856  MOV ECX,dword ptr [EBP + 0x10]
007de859  MOV EDX,dword ptr [ECX + 0xc]
007de85c  ADD EDX,0x1
007de85f  MOV EAX,0x20
007de864  SUB EAX,EDX
007de866  MOV dword ptr [EBP + -0x10],EAX
007de869  MOV EDX,dword ptr [EBP + -0x4]
007de86c  MOV ECX,dword ptr [EBP + -0x10]
007de86f  SHL EDX,CL
007de871  OR EDX,dword ptr [EBP + -0x20]
007de874  MOV EAX,dword ptr [EBP + -0x14]
007de877  NEG EAX
007de879  SBB EAX,EAX
007de87b  AND EAX,0x80000000
007de880  OR EDX,EAX
007de882  MOV dword ptr [EBP + -0x24],EDX
007de885  MOV ECX,dword ptr [EBP + 0x10]
007de888  CMP dword ptr [ECX + 0x10],0x40
007de88c  JNZ 0x007de8a1
007de88e  MOV EDX,dword ptr [EBP + 0xc]
007de891  MOV EAX,dword ptr [EBP + -0x24]
007de894  MOV dword ptr [EDX + 0x4],EAX
007de897  MOV ECX,dword ptr [EBP + 0xc]
007de89a  MOV EDX,dword ptr [EBP + -0x1c]
007de89d  MOV dword ptr [ECX],EDX
007de89f  JMP 0x007de8b2
007de8a1  MOV EAX,dword ptr [EBP + 0x10]
007de8a4  CMP dword ptr [EAX + 0x10],0x20
007de8a8  JNZ 0x007de8b2
007de8aa  MOV ECX,dword ptr [EBP + 0xc]
007de8ad  MOV EDX,dword ptr [EBP + -0x24]
007de8b0  MOV dword ptr [ECX],EDX
007de8b2  MOV EAX,dword ptr [EBP + -0x8]
007de8b5  MOV ESP,EBP
007de8b7  POP EBP
007de8b8  RET
