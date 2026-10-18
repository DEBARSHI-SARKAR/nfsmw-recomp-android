006ee490  PUSH -0x1
006ee492  PUSH 0x87e971
006ee497  MOV EAX,FS:[0x0]
006ee49d  PUSH EAX
006ee49e  MOV dword ptr FS:[0x0],ESP
006ee4a5  SUB ESP,0x50
006ee4a8  PUSH EBP
006ee4a9  XOR EBP,EBP
006ee4ab  PUSH EDI
006ee4ac  MOV EDI,ECX
006ee4ae  MOV dword ptr [ESP + 0x8],EBP
006ee4b2  CMP dword ptr [EDI + 0x58],EBP
006ee4b5  JZ 0x006ee840
006ee4bb  CALL 0x006ee400
006ee4c0  TEST AL,AL
006ee4c2  JNZ 0x006ee4dd
006ee4c4  MOV ECX,dword ptr [EDI + 0x58]
006ee4c7  MOV EAX,dword ptr [ECX]
006ee4c9  CALL dword ptr [EAX + 0x4]
006ee4cc  POP EDI
006ee4cd  POP EBP
006ee4ce  MOV ECX,dword ptr [ESP + 0x50]
006ee4d2  MOV dword ptr FS:[0x0],ECX
006ee4d9  ADD ESP,0x5c
006ee4dc  RET
006ee4dd  MOV EAX,dword ptr [EDI + 0x5c]
006ee4e0  CMP EAX,EBP
006ee4e2  JZ 0x006ee50c
006ee4e4  MOV ECX,EAX
006ee4e6  MOV EDX,dword ptr [ECX]
006ee4e8  CALL dword ptr [EDX + 0xc]
006ee4eb  TEST AL,AL
006ee4ed  JZ 0x006ee50c
006ee4ef  MOV ECX,dword ptr [EDI + 0x5c]
006ee4f2  MOV EAX,dword ptr [ECX]
006ee4f4  ADD EDI,0x4c
006ee4f7  PUSH EDI
006ee4f8  CALL dword ptr [EAX + 0x4]
006ee4fb  POP EDI
006ee4fc  POP EBP
006ee4fd  MOV ECX,dword ptr [ESP + 0x50]
006ee501  MOV dword ptr FS:[0x0],ECX
006ee508  ADD ESP,0x5c
006ee50b  RET
006ee50c  MOV EDX,dword ptr [EDI + 0x2c]
006ee50f  LEA ECX,[EDI + 0x2c]
006ee512  PUSH EBX
006ee513  CALL dword ptr [EDX + 0xc]
006ee516  MOV EBX,EAX
006ee518  CMP EBX,EBP
006ee51a  MOV dword ptr [ESP + 0x14],EBX
006ee51e  JZ 0x006ee83f
006ee524  MOV ECX,dword ptr [EBX + 0x4]
006ee527  PUSH 0x403f90
006ee52c  CALL 0x005d59f0
006ee531  CMP EAX,EBP
006ee533  MOV dword ptr [ESP + 0x2c],EAX
006ee537  JZ 0x006ee83f
006ee53d  LEA EAX,[ESP + 0x1c]
006ee541  PUSH EAX
006ee542  MOV ECX,EBX
006ee544  CALL 0x0040e040
006ee549  TEST AL,AL
006ee54b  JZ 0x006ee83f
006ee551  LEA ECX,[ESP + 0x10]
006ee555  PUSH ECX
006ee556  MOV ECX,EBX
006ee558  CALL 0x0040e4e0
006ee55d  TEST AL,AL
006ee55f  JZ 0x006ee83f
006ee565  LEA EDX,[ESP + 0x30]
006ee569  PUSH EDX
006ee56a  MOV ECX,EBX
006ee56c  CALL 0x0040e4a0
006ee571  TEST AL,AL
006ee573  JZ 0x006ee83f
006ee579  LEA EAX,[ESP + 0x18]
006ee57d  PUSH EAX
006ee57e  MOV ECX,EBX
006ee580  CALL 0x0040e440
006ee585  TEST AL,AL
006ee587  JZ 0x006ee83f
006ee58d  MOV ECX,dword ptr [EDI + 0x58]
006ee590  MOV EDX,dword ptr [ECX]
006ee592  PUSH ESI
006ee593  CALL dword ptr [EDX + 0x8]
006ee596  MOV ECX,dword ptr [EDI + 0x58]
006ee599  MOV EAX,dword ptr [ECX]
006ee59b  CALL dword ptr [EAX + 0x10]
006ee59e  MOV ESI,dword ptr [ESP + 0x14]
006ee5a2  MOV EDX,dword ptr [ESI]
006ee5a4  MOV ECX,ESI
006ee5a6  CALL dword ptr [EDX + 0x8]
006ee5a9  TEST EAX,EAX
006ee5ab  JBE 0x006ee6fa
006ee5b1  LEA EAX,[ESP + 0x24]
006ee5b5  PUSH EAX
006ee5b6  MOV ECX,EBX
006ee5b8  CALL 0x00695850
006ee5bd  TEST AL,AL
006ee5bf  JZ 0x006ee5d3
006ee5c1  MOV ECX,dword ptr [ESP + 0x24]
006ee5c5  MOV EDX,dword ptr [ECX]
006ee5c7  PUSH EBP
006ee5c8  CALL dword ptr [EDX + 0x4]
006ee5cb  TEST EAX,EAX
006ee5cd  JZ 0x006ee5d3
006ee5cf  MOV BL,0x1
006ee5d1  JMP 0x006ee5d5
006ee5d3  XOR BL,BL
006ee5d5  MOV EAX,dword ptr [ESI]
006ee5d7  PUSH EBP
006ee5d8  MOV ECX,ESI
006ee5da  CALL dword ptr [EAX + 0x24]
006ee5dd  TEST AL,AL
006ee5df  JZ 0x006ee61a
006ee5e1  TEST BL,BL
006ee5e3  JZ 0x006ee610
006ee5e5  LEA ECX,[ESP + 0x28]
006ee5e9  PUSH ECX
006ee5ea  LEA ECX,[ESP + 0x50]
006ee5ee  MOV dword ptr [ESP + 0x2c],0xd929e923
006ee5f6  CALL 0x006edb10
006ee5fb  MOV ECX,dword ptr [ESP + 0x10]
006ee5ff  OR ECX,0x1
006ee602  MOV dword ptr [ESP + 0x68],0x0
006ee60a  MOV dword ptr [ESP + 0x10],ECX
006ee60e  JMP 0x006ee61f
006ee610  MOV EDX,dword ptr [ESI]
006ee612  PUSH EBP
006ee613  MOV ECX,ESI
006ee615  CALL dword ptr [EDX + 0x44]
006ee618  JMP 0x006ee61f
006ee61a  MOV EAX,0x988e80
006ee61f  PUSH EAX
006ee620  LEA ECX,[ESP + 0x3c]
006ee624  CALL 0x00467ce0
006ee629  TEST byte ptr [ESP + 0x10],0x1
006ee62e  MOV dword ptr [ESP + 0x68],0x2
006ee636  JZ 0x006ee64c
006ee638  MOV EAX,dword ptr [ESP + 0x10]
006ee63c  AND EAX,0xfffffffe
006ee63f  LEA ECX,[ESP + 0x4c]
006ee643  MOV dword ptr [ESP + 0x10],EAX
006ee647  CALL 0x0045a430
006ee64c  MOV EAX,dword ptr [ESI]
006ee64e  PUSH EBP
006ee64f  MOV ECX,ESI
006ee651  CALL dword ptr [EAX + 0x30]
006ee654  PUSH ECX
006ee655  FSTP float ptr [ESP]
006ee658  CALL 0x00401d10
006ee65d  MOV EDX,dword ptr [ESI]
006ee65f  FSTP float ptr [ESP + 0x2c]
006ee663  ADD ESP,0x4
006ee666  PUSH EBP
006ee667  MOV ECX,ESI
006ee669  CALL dword ptr [EDX + 0x38]
006ee66c  PUSH ECX
006ee66d  FSTP float ptr [ESP]
006ee670  CALL 0x00401d10
006ee675  MOV ECX,dword ptr [EDI + 0x58]
006ee678  FSTP float ptr [ESP + 0x30]
006ee67c  MOV EDX,dword ptr [ECX]
006ee67e  ADD ESP,0x4
006ee681  CMP EBP,0x2
006ee684  SETC AL
006ee687  MOV byte ptr [ESP + 0x14],AL
006ee68b  MOV EAX,dword ptr [ESP + 0x28]
006ee68f  MOV EBX,dword ptr [ESP + 0x14]
006ee693  PUSH EAX
006ee694  LEA EAX,[ESP + 0x3c]
006ee698  PUSH EAX
006ee699  PUSH EBX
006ee69a  CALL dword ptr [EDX + 0x20]
006ee69d  MOV EAX,dword ptr [ESP + 0x2c]
006ee6a1  MOV ECX,dword ptr [EDI + 0x58]
006ee6a4  MOV EDX,dword ptr [ECX]
006ee6a6  PUSH EAX
006ee6a7  LEA EAX,[ESP + 0x3c]
006ee6ab  PUSH EAX
006ee6ac  PUSH EBX
006ee6ad  CALL dword ptr [EDX + 0x1c]
006ee6b0  MOV ECX,dword ptr [EDI + 0x58]
006ee6b3  MOV EBX,dword ptr [ECX]
006ee6b5  MOV ECX,dword ptr [ESP + 0x20]
006ee6b9  MOV EDX,dword ptr [ECX]
006ee6bb  CALL dword ptr [EDX + 0x98]
006ee6c1  PUSH ECX
006ee6c2  MOV ECX,dword ptr [ESP + 0x18]
006ee6c6  FSTP float ptr [ESP]
006ee6c9  LEA EAX,[ESP + 0x3c]
006ee6cd  PUSH EAX
006ee6ce  PUSH ECX
006ee6cf  MOV ECX,dword ptr [EDI + 0x58]
006ee6d2  CALL dword ptr [EBX + 0x18]
006ee6d5  LEA ECX,[ESP + 0x38]
006ee6d9  MOV dword ptr [ESP + 0x68],0xffffffff
006ee6e1  CALL 0x0045a430
006ee6e6  MOV EDX,dword ptr [ESI]
006ee6e8  MOV ECX,ESI
006ee6ea  INC EBP
006ee6eb  CALL dword ptr [EDX + 0x8]
006ee6ee  CMP EBP,EAX
006ee6f0  MOV EBX,dword ptr [ESP + 0x18]
006ee6f4  JC 0x006ee5b1
006ee6fa  MOV ECX,dword ptr [ESP + 0x30]
006ee6fe  MOV EAX,dword ptr [ECX]
006ee700  CALL dword ptr [EAX + 0x8]
006ee703  MOV ECX,dword ptr [EAX + 0x14]
006ee706  MOV ESI,dword ptr [ESP + 0x34]
006ee70a  MOV EDX,dword ptr [ESI]
006ee70c  MOV dword ptr [ESP + 0x30],ECX
006ee710  MOV ECX,ESI
006ee712  CALL dword ptr [EDX + 0x10]
006ee715  FSTP float ptr [ESP + 0x18]
006ee719  MOV EAX,dword ptr [ESI]
006ee71b  MOV ECX,ESI
006ee71d  CALL dword ptr [EAX + 0x4]
006ee720  FSTP float ptr [ESP + 0x34]
006ee724  MOV EDX,dword ptr [ESI]
006ee726  MOV ECX,ESI
006ee728  CALL dword ptr [EDX + 0x8]
006ee72b  FSUB float ptr [ESP + 0x18]
006ee72f  MOV dword ptr [ESP + 0x14],0x0
006ee737  FCOM float ptr [0x00890968]
006ee73d  FNSTSW AX
006ee73f  TEST AH,0x41
006ee742  JNZ 0x006ee769
006ee744  FLD float ptr [ESP + 0x34]
006ee748  PUSH 0x3f800000
006ee74d  FSUB float ptr [ESP + 0x1c]
006ee751  PUSH 0x0
006ee753  PUSH ECX
006ee754  FDIV ST0,ST1
006ee756  FSTP float ptr [ESP]
006ee759  FSTP ST0
006ee75b  CALL 0x00401d70
006ee760  FSTP float ptr [ESP + 0x20]
006ee764  ADD ESP,0xc
006ee767  JMP 0x006ee76b
006ee769  FSTP ST0
006ee76b  MOV EDX,dword ptr [ESP + 0x30]
006ee76f  MOV ECX,dword ptr [EDI + 0x58]
006ee772  MOV EAX,dword ptr [ECX]
006ee774  PUSH EDX
006ee775  MOV EDX,dword ptr [ESP + 0x18]
006ee779  PUSH 0x0
006ee77b  PUSH EDX
006ee77c  CALL dword ptr [EAX + 0x24]
006ee77f  MOV ECX,dword ptr [ESP + 0x1c]
006ee783  MOV EAX,dword ptr [EDI + 0x58]
006ee786  MOV EDX,dword ptr [ECX]
006ee788  MOV EBP,dword ptr [EAX]
006ee78a  CALL dword ptr [EDX + 0x2c]
006ee78d  MOV ECX,dword ptr [EDI + 0x58]
006ee790  PUSH EAX
006ee791  CALL dword ptr [EBP + 0x28]
006ee794  MOV EAX,dword ptr [ESI]
006ee796  MOV ECX,ESI
006ee798  CALL dword ptr [EAX + 0x2c]
006ee79b  TEST AL,AL
006ee79d  JZ 0x006ee7bd
006ee79f  MOV ECX,dword ptr [EDI + 0x58]
006ee7a2  MOV EBP,dword ptr [ECX]
006ee7a4  MOV EDX,dword ptr [ESI]
006ee7a6  MOV ECX,ESI
006ee7a8  CALL dword ptr [EDX + 0x1c]
006ee7ab  MOV EAX,dword ptr [ESI]
006ee7ad  PUSH ECX
006ee7ae  MOV ECX,ESI
006ee7b0  FSTP float ptr [ESP]
006ee7b3  CALL dword ptr [EAX + 0x20]
006ee7b6  MOV ECX,dword ptr [EDI + 0x58]
006ee7b9  PUSH EAX
006ee7ba  CALL dword ptr [EBP + 0x2c]
006ee7bd  LEA ECX,[ESP + 0x34]
006ee7c1  PUSH ECX
006ee7c2  MOV ECX,EBX
006ee7c4  CALL 0x00609c20
006ee7c9  MOV ESI,dword ptr [ESP + 0x34]
006ee7cd  TEST ESI,ESI
006ee7cf  JZ 0x006ee801
006ee7d1  MOV EDX,dword ptr [ESI]
006ee7d3  MOV ECX,ESI
006ee7d5  CALL dword ptr [EDX + 0x4]
006ee7d8  TEST AL,AL
006ee7da  JNZ 0x006ee7f2
006ee7dc  MOV EAX,dword ptr [ESI]
006ee7de  MOV ECX,ESI
006ee7e0  CALL dword ptr [EAX + 0x10]
006ee7e3  TEST AL,AL
006ee7e5  JNZ 0x006ee7f2
006ee7e7  MOV ECX,dword ptr [EDI + 0x58]
006ee7ea  MOV EDX,dword ptr [ECX]
006ee7ec  PUSH EAX
006ee7ed  CALL dword ptr [EDX + 0x30]
006ee7f0  JMP 0x006ee836
006ee7f2  MOV ECX,dword ptr [EDI + 0x58]
006ee7f5  MOV EDX,dword ptr [ECX]
006ee7f7  XOR EAX,EAX
006ee7f9  MOV AL,0x1
006ee7fb  PUSH EAX
006ee7fc  CALL dword ptr [EDX + 0x30]
006ee7ff  JMP 0x006ee836
006ee801  MOV ECX,dword ptr [ESP + 0x1c]
006ee805  MOV EAX,dword ptr [ECX]
006ee807  CALL dword ptr [EAX + 0x10]
006ee80a  TEST AL,AL
006ee80c  JZ 0x006ee82b
006ee80e  MOV ECX,dword ptr [ESP + 0x20]
006ee812  MOV EDX,dword ptr [ECX]
006ee814  CALL dword ptr [EDX + 0x90]
006ee81a  FCOMP float ptr [0x00890cd4]
006ee820  FNSTSW AX
006ee822  TEST AH,0x41
006ee825  JNZ 0x006ee82b
006ee827  MOV AL,0x1
006ee829  JMP 0x006ee82d
006ee82b  XOR AL,AL
006ee82d  MOV ECX,dword ptr [EDI + 0x58]
006ee830  MOV EDX,dword ptr [ECX]
006ee832  PUSH EAX
006ee833  CALL dword ptr [EDX + 0x34]
006ee836  MOV ECX,dword ptr [EDI + 0x58]
006ee839  MOV EAX,dword ptr [ECX]
006ee83b  CALL dword ptr [EAX + 0x14]
006ee83e  POP ESI
006ee83f  POP EBX
006ee840  MOV ECX,dword ptr [ESP + 0x58]
006ee844  POP EDI
006ee845  POP EBP
006ee846  MOV dword ptr FS:[0x0],ECX
006ee84d  ADD ESP,0x5c
006ee850  RET
