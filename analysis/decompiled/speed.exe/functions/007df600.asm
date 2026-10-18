007df600  PUSH EBP
007df601  MOV EBP,ESP
007df603  SUB ESP,0x14
007df606  PUSH ESI
007df607  MOV EAX,[0x0090729c]
007df60c  MOV dword ptr [EBP + -0xc],EAX
007df60f  MOV dword ptr [EBP + -0x10],0x0
007df616  MOV dword ptr [EBP + -0x8],0x0
007df61d  JMP 0x007df628
007df61f  MOV ECX,dword ptr [EBP + -0x8]
007df622  ADD ECX,0x1
007df625  MOV dword ptr [EBP + -0x8],ECX
007df628  CMP dword ptr [EBP + -0x8],0x7
007df62c  JNC 0x007df661
007df62e  MOV EDX,dword ptr [EBP + -0x8]
007df631  MOV EAX,dword ptr [EBP + -0xc]
007df634  MOV ECX,dword ptr [EAX + EDX*0x4]
007df637  PUSH ECX
007df638  CALL 0x007d0cd0
007df63d  ADD ESP,0x4
007df640  MOV ESI,EAX
007df642  MOV EDX,dword ptr [EBP + -0x8]
007df645  MOV EAX,dword ptr [EBP + -0xc]
007df648  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c]
007df64c  PUSH ECX
007df64d  CALL 0x007d0cd0
007df652  ADD ESP,0x4
007df655  ADD EAX,dword ptr [EBP + -0x10]
007df658  LEA EDX,[EAX + ESI*0x1 + 0x2]
007df65c  MOV dword ptr [EBP + -0x10],EDX
007df65f  JMP 0x007df61f
007df661  PUSH 0x75
007df663  PUSH 0x8bdf70
007df668  PUSH 0x2
007df66a  MOV EAX,dword ptr [EBP + -0x10]
007df66d  ADD EAX,0x1
007df670  PUSH EAX
007df671  CALL 0x007c6700
007df676  ADD ESP,0x10
007df679  MOV dword ptr [EBP + -0x4],EAX
007df67c  CMP dword ptr [EBP + -0x4],0x0
007df680  JZ 0x007df71e
007df686  MOV ECX,dword ptr [EBP + -0x4]
007df689  MOV dword ptr [EBP + -0x14],ECX
007df68c  MOV dword ptr [EBP + -0x8],0x0
007df693  JMP 0x007df69e
007df695  MOV EDX,dword ptr [EBP + -0x8]
007df698  ADD EDX,0x1
007df69b  MOV dword ptr [EBP + -0x8],EDX
007df69e  CMP dword ptr [EBP + -0x8],0x7
007df6a2  JNC 0x007df70f
007df6a4  MOV EAX,dword ptr [EBP + -0x14]
007df6a7  MOV byte ptr [EAX],0x3a
007df6aa  MOV ECX,dword ptr [EBP + -0x14]
007df6ad  ADD ECX,0x1
007df6b0  MOV dword ptr [EBP + -0x14],ECX
007df6b3  MOV EDX,dword ptr [EBP + -0x8]
007df6b6  MOV EAX,dword ptr [EBP + -0xc]
007df6b9  MOV ECX,dword ptr [EAX + EDX*0x4]
007df6bc  PUSH ECX
007df6bd  MOV EDX,dword ptr [EBP + -0x14]
007df6c0  PUSH EDX
007df6c1  CALL 0x007d0bd0
007df6c6  ADD ESP,0x8
007df6c9  PUSH EAX
007df6ca  CALL 0x007d0cd0
007df6cf  ADD ESP,0x4
007df6d2  ADD EAX,dword ptr [EBP + -0x14]
007df6d5  MOV dword ptr [EBP + -0x14],EAX
007df6d8  MOV EAX,dword ptr [EBP + -0x14]
007df6db  MOV byte ptr [EAX],0x3a
007df6de  MOV ECX,dword ptr [EBP + -0x14]
007df6e1  ADD ECX,0x1
007df6e4  MOV dword ptr [EBP + -0x14],ECX
007df6e7  MOV EDX,dword ptr [EBP + -0x8]
007df6ea  MOV EAX,dword ptr [EBP + -0xc]
007df6ed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x1c]
007df6f1  PUSH ECX
007df6f2  MOV EDX,dword ptr [EBP + -0x14]
007df6f5  PUSH EDX
007df6f6  CALL 0x007d0bd0
007df6fb  ADD ESP,0x8
007df6fe  PUSH EAX
007df6ff  CALL 0x007d0cd0
007df704  ADD ESP,0x4
007df707  ADD EAX,dword ptr [EBP + -0x14]
007df70a  MOV dword ptr [EBP + -0x14],EAX
007df70d  JMP 0x007df695
007df70f  MOV EAX,dword ptr [EBP + -0x14]
007df712  MOV byte ptr [EAX],0x0
007df715  MOV ECX,dword ptr [EBP + -0x14]
007df718  ADD ECX,0x1
007df71b  MOV dword ptr [EBP + -0x14],ECX
007df71e  MOV EAX,dword ptr [EBP + -0x4]
007df721  POP ESI
007df722  MOV ESP,EBP
007df724  POP EBP
007df725  RET
