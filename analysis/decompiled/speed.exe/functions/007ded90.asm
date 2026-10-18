007ded90  PUSH EBX
007ded91  MOV EBX,ESP
007ded93  SUB ESP,0x8
007ded96  AND ESP,0xfffffff0
007ded99  ADD ESP,0x4
007ded9c  PUSH EBP
007ded9d  MOV EBP,dword ptr [EBX + 0x4]
007deda0  MOV dword ptr [ESP + 0x4],EBP
007deda4  MOV EBP,ESP
007deda6  SUB ESP,0xa0
007dedac  MOV EAX,[0x00906980]
007dedb1  MOV dword ptr [EBP + -0x4],EAX
007dedb4  MOV EAX,dword ptr [EBX + 0x10]
007dedb7  MOVZX ECX,word ptr [EAX]
007dedba  MOV dword ptr [EBP + -0x8],ECX
007dedbd  LEA EDX,[EBP + -0x8]
007dedc0  MOV dword ptr [EBP + -0xc],EDX
007dedc3  MOV EAX,dword ptr [EBX + 0xc]
007dedc6  MOV ECX,dword ptr [EAX]
007dedc8  MOV dword ptr [EBP + -0x10],ECX
007dedcb  MOV EDX,dword ptr [EBP + -0x10]
007dedce  SUB EDX,0x1
007dedd1  MOV dword ptr [EBP + -0x10],EDX
007dedd4  CMP dword ptr [EBP + -0x10],0x7
007dedd8  JA 0x007dee1a
007dedda  MOV EAX,dword ptr [EBP + -0x10]
007deddd  JMP dword ptr [EAX*0x4 + 0x7def1a]
007dede4  MOV dword ptr [EBP + -0x14],0x8
007dedeb  JMP 0x007dee21
007deded  MOV dword ptr [EBP + -0x14],0x11
007dedf4  JMP 0x007dee21
007dedf6  MOV dword ptr [EBP + -0x14],0x12
007dedfd  JMP 0x007dee21
007dedff  MOV dword ptr [EBP + -0x14],0x4
007dee06  JMP 0x007dee21
007dee08  MOV dword ptr [EBP + -0x14],0x10
007dee0f  JMP 0x007dee21
007dee11  MOV ECX,dword ptr [EBX + 0xc]
007dee14  MOV dword ptr [ECX],0x1
007dee1a  MOV dword ptr [EBP + -0x14],0x0
007dee21  CMP dword ptr [EBP + -0x14],0x0
007dee25  JZ 0x007deeb4
007dee2b  MOV EDX,dword ptr [EBP + -0xc]
007dee2e  MOV EAX,dword ptr [EDX]
007dee30  PUSH EAX
007dee31  MOV ECX,dword ptr [EBX + 0xc]
007dee34  ADD ECX,0x18
007dee37  PUSH ECX
007dee38  MOV EDX,dword ptr [EBP + -0x14]
007dee3b  PUSH EDX
007dee3c  CALL 0x007da730
007dee41  ADD ESP,0xc
007dee44  TEST EAX,EAX
007dee46  JNZ 0x007deeb4
007dee48  MOV EAX,dword ptr [EBX + 0x8]
007dee4b  MOV dword ptr [EBP + -0x18],EAX
007dee4e  CMP dword ptr [EBP + -0x18],0x10
007dee52  JZ 0x007dee62
007dee54  CMP dword ptr [EBP + -0x18],0x16
007dee58  JZ 0x007dee62
007dee5a  CMP dword ptr [EBP + -0x18],0x1d
007dee5e  JZ 0x007dee62
007dee60  JMP 0x007dee82
007dee62  MOV ECX,dword ptr [EBP + -0x50]
007dee65  OR ECX,0x1
007dee68  MOV dword ptr [EBP + -0x50],ECX
007dee6b  MOV EDX,dword ptr [EBP + -0x50]
007dee6e  AND EDX,0xffffffe1
007dee71  OR EDX,0x2
007dee74  MOV dword ptr [EBP + -0x50],EDX
007dee77  MOV EAX,dword ptr [EBX + 0xc]
007dee7a  FLD double ptr [EAX + 0x10]
007dee7d  FSTP double ptr [EBP + -0x60]
007dee80  JMP 0x007dee8b
007dee82  MOV ECX,dword ptr [EBP + -0x50]
007dee85  AND ECX,0xfffffffe
007dee88  MOV dword ptr [EBP + -0x50],ECX
007dee8b  MOV EDX,dword ptr [EBX + 0xc]
007dee8e  ADD EDX,0x18
007dee91  PUSH EDX
007dee92  MOV EAX,dword ptr [EBX + 0xc]
007dee95  ADD EAX,0x8
007dee98  PUSH EAX
007dee99  MOV ECX,dword ptr [EBX + 0x8]
007dee9c  PUSH ECX
007dee9d  MOV EDX,dword ptr [EBP + -0x14]
007deea0  PUSH EDX
007deea1  MOV EAX,dword ptr [EBP + -0xc]
007deea4  PUSH EAX
007deea5  LEA ECX,[EBP + 0xffffff70]
007deeab  PUSH ECX
007deeac  CALL 0x007da280
007deeb1  ADD ESP,0x18
007deeb4  PUSH 0xffff
007deeb9  MOV EDX,dword ptr [EBP + -0xc]
007deebc  MOV EAX,dword ptr [EDX]
007deebe  PUSH EAX
007deebf  CALL 0x007dac10
007deec4  ADD ESP,0x8
007deec7  MOV dword ptr [EBP + 0xffffff6c],0x0
007deed1  MOV ECX,dword ptr [EBX + 0xc]
007deed4  CMP dword ptr [ECX],0x8
007deed7  JZ 0x007deef4
007deed9  CMP dword ptr [0x00907390],0x0
007deee0  JNZ 0x007deef4
007deee2  MOV EDX,dword ptr [EBX + 0xc]
007deee5  PUSH EDX
007deee6  CALL 0x007e4df0
007deeeb  ADD ESP,0x4
007deeee  MOV dword ptr [EBP + 0xffffff6c],EAX
007deef4  CMP dword ptr [EBP + 0xffffff6c],0x0
007deefb  JNZ 0x007def0b
007deefd  MOV EAX,dword ptr [EBX + 0xc]
007def00  MOV ECX,dword ptr [EAX]
007def02  PUSH ECX
007def03  CALL 0x007daaf0
007def08  ADD ESP,0x4
007def0b  MOV ECX,dword ptr [EBP + -0x4]
007def0e  CALL 0x007d6cb0
007def13  MOV ESP,EBP
007def15  POP EBP
007def16  MOV ESP,EBX
007def18  POP EBX
007def19  RET
