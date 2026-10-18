0085d930  PUSH EBP
0085d931  MOV EBP,ESP
0085d933  SUB ESP,0x34
0085d936  MOV EAX,[0x00906980]
0085d93b  MOV dword ptr [EBP + -0x10],EAX
0085d93e  MOV EAX,dword ptr [EBP + 0xc]
0085d941  MOV dword ptr [EBP + -0xc],EAX
0085d944  CALL 0x007cd100
0085d949  MOV dword ptr [EBP + -0x8],EAX
0085d94c  MOV dword ptr [EBP + -0x4],0x0
0085d953  JMP 0x0085d95e
0085d955  MOV ECX,dword ptr [EBP + -0x4]
0085d958  ADD ECX,0x1
0085d95b  MOV dword ptr [EBP + -0x4],ECX
0085d95e  CMP dword ptr [EBP + -0x4],0x20
0085d962  JGE 0x0085d96e
0085d964  MOV EDX,dword ptr [EBP + -0x4]
0085d967  MOV byte ptr [EBP + EDX*0x1 + -0x30],0x0
0085d96c  JMP 0x0085d955
0085d96e  MOV EAX,dword ptr [EBP + -0xc]
0085d971  MOVZX EDX,byte ptr [EAX]
0085d974  SAR EDX,0x3
0085d977  MOV EAX,dword ptr [EBP + -0xc]
0085d97a  MOVZX ECX,byte ptr [EAX]
0085d97d  AND ECX,0x7
0085d980  MOV EAX,0x1
0085d985  SHL EAX,CL
0085d987  MOVZX ECX,byte ptr [EBP + EDX*0x1 + -0x30]
0085d98c  OR ECX,EAX
0085d98e  MOV EDX,dword ptr [EBP + -0xc]
0085d991  MOVZX EAX,byte ptr [EDX]
0085d994  SAR EAX,0x3
0085d997  MOV byte ptr [EBP + EAX*0x1 + -0x30],CL
0085d99b  MOV ECX,dword ptr [EBP + -0xc]
0085d99e  MOVZX EDX,byte ptr [ECX]
0085d9a1  MOV EAX,dword ptr [EBP + -0xc]
0085d9a4  ADD EAX,0x1
0085d9a7  MOV dword ptr [EBP + -0xc],EAX
0085d9aa  TEST EDX,EDX
0085d9ac  JNZ 0x0085d96e
0085d9ae  CMP dword ptr [EBP + 0x8],0x0
0085d9b2  JZ 0x0085d9bc
0085d9b4  MOV ECX,dword ptr [EBP + 0x8]
0085d9b7  MOV dword ptr [EBP + -0x34],ECX
0085d9ba  JMP 0x0085d9c5
0085d9bc  MOV EDX,dword ptr [EBP + -0x8]
0085d9bf  MOV EAX,dword ptr [EDX + 0x18]
0085d9c2  MOV dword ptr [EBP + -0x34],EAX
0085d9c5  MOV ECX,dword ptr [EBP + -0x34]
0085d9c8  MOVZX EDX,byte ptr [ECX]
0085d9cb  SAR EDX,0x3
0085d9ce  MOVZX EAX,byte ptr [EBP + EDX*0x1 + -0x30]
0085d9d3  MOV ECX,dword ptr [EBP + -0x34]
0085d9d6  MOVZX ECX,byte ptr [ECX]
0085d9d9  AND ECX,0x7
0085d9dc  MOV EDX,0x1
0085d9e1  SHL EDX,CL
0085d9e3  AND EAX,EDX
0085d9e5  JZ 0x0085d9fc
0085d9e7  MOV EAX,dword ptr [EBP + -0x34]
0085d9ea  MOVZX ECX,byte ptr [EAX]
0085d9ed  TEST ECX,ECX
0085d9ef  JZ 0x0085d9fc
0085d9f1  MOV EDX,dword ptr [EBP + -0x34]
0085d9f4  ADD EDX,0x1
0085d9f7  MOV dword ptr [EBP + -0x34],EDX
0085d9fa  JMP 0x0085d9c5
0085d9fc  MOV EAX,dword ptr [EBP + -0x34]
0085d9ff  MOV dword ptr [EBP + 0x8],EAX
0085da02  JMP 0x0085da0d
0085da04  MOV ECX,dword ptr [EBP + -0x34]
0085da07  ADD ECX,0x1
0085da0a  MOV dword ptr [EBP + -0x34],ECX
0085da0d  MOV EDX,dword ptr [EBP + -0x34]
0085da10  MOVZX EAX,byte ptr [EDX]
0085da13  TEST EAX,EAX
0085da15  JZ 0x0085da4c
0085da17  MOV ECX,dword ptr [EBP + -0x34]
0085da1a  MOVZX EDX,byte ptr [ECX]
0085da1d  SAR EDX,0x3
0085da20  MOVZX EAX,byte ptr [EBP + EDX*0x1 + -0x30]
0085da25  MOV ECX,dword ptr [EBP + -0x34]
0085da28  MOVZX ECX,byte ptr [ECX]
0085da2b  AND ECX,0x7
0085da2e  MOV EDX,0x1
0085da33  SHL EDX,CL
0085da35  AND EAX,EDX
0085da37  JZ 0x0085da4a
0085da39  MOV EAX,dword ptr [EBP + -0x34]
0085da3c  MOV byte ptr [EAX],0x0
0085da3f  MOV ECX,dword ptr [EBP + -0x34]
0085da42  ADD ECX,0x1
0085da45  MOV dword ptr [EBP + -0x34],ECX
0085da48  JMP 0x0085da4c
0085da4a  JMP 0x0085da04
0085da4c  MOV EDX,dword ptr [EBP + -0x8]
0085da4f  MOV EAX,dword ptr [EBP + -0x34]
0085da52  MOV dword ptr [EDX + 0x18],EAX
0085da55  MOV ECX,dword ptr [EBP + 0x8]
0085da58  CMP ECX,dword ptr [EBP + -0x34]
0085da5b  JNZ 0x0085da61
0085da5d  XOR EAX,EAX
0085da5f  JMP 0x0085da64
0085da61  MOV EAX,dword ptr [EBP + 0x8]
0085da64  MOV ECX,dword ptr [EBP + -0x10]
0085da67  CALL 0x007d6cb0
0085da6c  MOV ESP,EBP
0085da6e  POP EBP
0085da6f  RET
