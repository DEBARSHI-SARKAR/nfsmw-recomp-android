007de3f0  PUSH EBP
007de3f1  MOV EBP,ESP
007de3f3  SUB ESP,0x1c
007de3f6  MOV dword ptr [EBP + -0x10],0x0
007de3fd  MOV EAX,dword ptr [EBP + 0xc]
007de400  SUB EAX,0x1
007de403  MOV dword ptr [EBP + -0x4],EAX
007de406  MOV ECX,dword ptr [EBP + -0x4]
007de409  ADD ECX,0x1
007de40c  MOV dword ptr [EBP + -0x18],ECX
007de40f  MOV EAX,dword ptr [EBP + -0x18]
007de412  CDQ
007de413  AND EDX,0x1f
007de416  ADD EAX,EDX
007de418  SAR EAX,0x5
007de41b  MOV dword ptr [EBP + -0x14],EAX
007de41e  MOV EDX,dword ptr [EBP + -0x18]
007de421  AND EDX,0x8000001f
007de427  JNS 0x007de42e
007de429  DEC EDX
007de42a  OR EDX,0xffffffe0
007de42d  INC EDX
007de42e  MOV EAX,0x1f
007de433  SUB EAX,EDX
007de435  MOV dword ptr [EBP + -0x1c],EAX
007de438  MOV EDX,0x1
007de43d  MOV ECX,dword ptr [EBP + -0x1c]
007de440  SHL EDX,CL
007de442  MOV dword ptr [EBP + -0x8],EDX
007de445  MOV EAX,dword ptr [EBP + -0x14]
007de448  MOV ECX,dword ptr [EBP + 0x8]
007de44b  MOV EDX,dword ptr [ECX + EAX*0x4]
007de44e  AND EDX,dword ptr [EBP + -0x8]
007de451  JZ 0x007de47a
007de453  MOV EAX,dword ptr [EBP + -0x18]
007de456  PUSH EAX
007de457  MOV ECX,dword ptr [EBP + 0x8]
007de45a  PUSH ECX
007de45b  CALL 0x007de2b0
007de460  ADD ESP,0x8
007de463  TEST EAX,EAX
007de465  JNZ 0x007de47a
007de467  MOV EDX,dword ptr [EBP + -0x4]
007de46a  PUSH EDX
007de46b  MOV EAX,dword ptr [EBP + 0x8]
007de46e  PUSH EAX
007de46f  CALL 0x007de340
007de474  ADD ESP,0x8
007de477  MOV dword ptr [EBP + -0x10],EAX
007de47a  OR EDX,0xffffffff
007de47d  MOV ECX,dword ptr [EBP + -0x1c]
007de480  SHL EDX,CL
007de482  MOV EAX,dword ptr [EBP + -0x14]
007de485  MOV ECX,dword ptr [EBP + 0x8]
007de488  AND EDX,dword ptr [ECX + EAX*0x4]
007de48b  MOV EAX,dword ptr [EBP + -0x14]
007de48e  MOV ECX,dword ptr [EBP + 0x8]
007de491  MOV dword ptr [ECX + EAX*0x4],EDX
007de494  MOV EDX,dword ptr [EBP + -0x14]
007de497  ADD EDX,0x1
007de49a  MOV dword ptr [EBP + -0xc],EDX
007de49d  JMP 0x007de4a8
007de49f  MOV EAX,dword ptr [EBP + -0xc]
007de4a2  ADD EAX,0x1
007de4a5  MOV dword ptr [EBP + -0xc],EAX
007de4a8  CMP dword ptr [EBP + -0xc],0x3
007de4ac  JGE 0x007de4bd
007de4ae  MOV ECX,dword ptr [EBP + -0xc]
007de4b1  MOV EDX,dword ptr [EBP + 0x8]
007de4b4  MOV dword ptr [EDX + ECX*0x4],0x0
007de4bb  JMP 0x007de49f
007de4bd  MOV EAX,dword ptr [EBP + -0x10]
007de4c0  MOV ESP,EBP
007de4c2  POP EBP
007de4c3  RET
