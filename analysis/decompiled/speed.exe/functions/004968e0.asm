004968e0  PUSH ECX
004968e1  PUSH ESI
004968e2  MOV ESI,ECX
004968e4  PUSH EDI
004968e5  MOV EDI,dword ptr [ESI + 0xc]
004968e8  MOV AX,word ptr [EDI + 0xe]
004968ec  TEST AX,AX
004968ef  JBE 0x00496acf
004968f5  MOV ECX,dword ptr [0x009117f4]
004968fb  MOV EDX,dword ptr [ECX]
004968fd  MOVZX EAX,AX
00496900  PUSH EBX
00496901  SHL EAX,0x4
00496904  PUSH EAX
00496905  CALL dword ptr [EDX + 0x14]
00496908  MOV dword ptr [ESI + 0x18],EAX
0049690b  MOV dword ptr [ESI + 0x14],EAX
0049690e  MOV AX,word ptr [EDI + 0xe]
00496912  MOV ECX,dword ptr [0x009117f4]
00496918  MOV EDX,dword ptr [ECX]
0049691a  MOVZX EAX,AX
0049691d  SHL EAX,0x4
00496920  PUSH EAX
00496921  CALL dword ptr [EDX + 0x14]
00496924  MOV dword ptr [ESI + 0x24],EAX
00496927  MOV dword ptr [ESI + 0x20],EAX
0049692a  MOV AX,word ptr [EDI + 0xe]
0049692e  MOV ECX,dword ptr [0x009117f4]
00496934  MOV EDX,dword ptr [ECX]
00496936  MOVZX EAX,AX
00496939  LEA EAX,[EAX + EAX*0x2]
0049693c  SHL EAX,0x4
0049693f  PUSH EAX
00496940  CALL dword ptr [EDX + 0x14]
00496943  MOV dword ptr [ESI + 0x2c],EAX
00496946  XOR EBX,EBX
00496948  CMP word ptr [EDI + 0xe],BX
0049694c  LEA EAX,[EDI + 0x14]
0049694f  JBE 0x00496ace
00496955  MOV ECX,0xc
0049695a  PUSH EBP
0049695b  JMP 0x00496960
00496960  MOV EDX,dword ptr [ESI + 0x2c]
00496963  MOV EBP,dword ptr [EAX]
00496965  MOV dword ptr [ECX + EDX*0x1 + -0xc],EBP
00496969  MOV EDX,dword ptr [ESI + 0x2c]
0049696c  MOV EBP,dword ptr [EAX + 0xc]
0049696f  MOV dword ptr [ECX + EDX*0x1],EBP
00496972  MOV EDX,dword ptr [ESI + 0x2c]
00496975  FLD float ptr [EDX + ECX*0x1]
00496978  ADD EDX,ECX
0049697a  FMUL float ptr [0x00895500]
00496980  FSTP float ptr [EDX]
00496982  MOVZX EDX,word ptr [EAX + 0x18]
00496986  MOV dword ptr [ESP + 0x10],EDX
0049698a  MOV EDX,dword ptr [ESI + 0x2c]
0049698d  FILD dword ptr [ESP + 0x10]
00496991  FMUL float ptr [EAX + 0xc]
00496994  FMUL float ptr [0x008957bc]
0049699a  FSUB float ptr [EAX + 0xc]
0049699d  FSTP float ptr [ECX + EDX*0x1 + 0xc]
004969a1  MOVZX EDX,word ptr [EAX + 0x1e]
004969a5  MOV dword ptr [ESP + 0x10],EDX
004969a9  MOV EDX,dword ptr [ESI + 0x2c]
004969ac  FILD dword ptr [ESP + 0x10]
004969b0  FMUL float ptr [EAX + 0xc]
004969b3  FMUL float ptr [0x008957bc]
004969b9  FSTP float ptr [ECX + EDX*0x1 + 0x18]
004969bd  MOV EDX,dword ptr [ESI + 0x2c]
004969c0  FLD float ptr [ECX + EDX*0x1 + 0x18]
004969c4  LEA EDX,[ECX + EDX*0x1 + 0x18]
004969c8  FMUL float ptr [0x008954f8]
004969ce  FSTP float ptr [EDX]
004969d0  MOV EDX,dword ptr [ESI + 0x2c]
004969d3  MOV EBP,dword ptr [EAX + 0x4]
004969d6  MOV dword ptr [EDX + ECX*0x1 + -0x8],EBP
004969da  MOV EDX,dword ptr [ESI + 0x2c]
004969dd  MOV EBP,dword ptr [EAX + 0x10]
004969e0  MOV dword ptr [ECX + EDX*0x1 + 0x4],EBP
004969e4  MOV EDX,dword ptr [ESI + 0x2c]
004969e7  FLD float ptr [ECX + EDX*0x1 + 0x4]
004969eb  LEA EDX,[ECX + EDX*0x1 + 0x4]
004969ef  FMUL float ptr [0x00895500]
004969f5  FSTP float ptr [EDX]
004969f7  MOVZX EDX,word ptr [EAX + 0x1a]
004969fb  MOV dword ptr [ESP + 0x10],EDX
004969ff  MOV EDX,dword ptr [ESI + 0x2c]
00496a02  FILD dword ptr [ESP + 0x10]
00496a06  FMUL float ptr [EAX + 0x10]
00496a09  FMUL float ptr [0x008957bc]
00496a0f  FSUB float ptr [EAX + 0x10]
00496a12  FSTP float ptr [ECX + EDX*0x1 + 0x10]
00496a16  MOVZX EDX,word ptr [EAX + 0x20]
00496a1a  MOV dword ptr [ESP + 0x10],EDX
00496a1e  MOV EDX,dword ptr [ESI + 0x2c]
00496a21  FILD dword ptr [ESP + 0x10]
00496a25  FMUL float ptr [EAX + 0x10]
00496a28  FMUL float ptr [0x008957bc]
00496a2e  FSTP float ptr [ECX + EDX*0x1 + 0x1c]
00496a32  MOV EDX,dword ptr [ESI + 0x2c]
00496a35  FLD float ptr [ECX + EDX*0x1 + 0x1c]
00496a39  LEA EDX,[ECX + EDX*0x1 + 0x1c]
00496a3d  FMUL float ptr [0x008954f8]
00496a43  FSTP float ptr [EDX]
00496a45  MOV EDX,dword ptr [ESI + 0x2c]
00496a48  MOV EBP,dword ptr [EAX + 0x8]
00496a4b  MOV dword ptr [ECX + EDX*0x1 + -0x4],EBP
00496a4f  MOV EDX,dword ptr [ESI + 0x2c]
00496a52  MOV EBP,dword ptr [EAX + 0x14]
00496a55  MOV dword ptr [ECX + EDX*0x1 + 0x8],EBP
00496a59  MOV EDX,dword ptr [ESI + 0x2c]
00496a5c  FLD float ptr [ECX + EDX*0x1 + 0x8]
00496a60  LEA EDX,[ECX + EDX*0x1 + 0x8]
00496a64  FMUL float ptr [0x00895500]
00496a6a  FSTP float ptr [EDX]
00496a6c  MOVZX EDX,word ptr [EAX + 0x1c]
00496a70  MOV dword ptr [ESP + 0x10],EDX
00496a74  MOV EDX,dword ptr [ESI + 0x2c]
00496a77  FILD dword ptr [ESP + 0x10]
00496a7b  FMUL float ptr [EAX + 0x14]
00496a7e  FMUL float ptr [0x008957bc]
00496a84  FSUB float ptr [EAX + 0x14]
00496a87  FSTP float ptr [ECX + EDX*0x1 + 0x14]
00496a8b  MOVZX EDX,word ptr [EAX + 0x22]
00496a8f  MOV dword ptr [ESP + 0x10],EDX
00496a93  MOV EDX,dword ptr [ESI + 0x2c]
00496a96  ADD EAX,0x24
00496a99  FILD dword ptr [ESP + 0x10]
00496a9d  INC EBX
00496a9e  FMUL float ptr [EAX + -0x10]
00496aa1  FMUL float ptr [0x008957bc]
00496aa7  FSTP float ptr [ECX + EDX*0x1 + 0x20]
00496aab  MOV EDX,dword ptr [ESI + 0x2c]
00496aae  FLD float ptr [ECX + EDX*0x1 + 0x20]
00496ab2  LEA EDX,[ECX + EDX*0x1 + 0x20]
00496ab6  FMUL float ptr [0x008954f8]
00496abc  ADD ECX,0x30
00496abf  FSTP float ptr [EDX]
00496ac1  MOVZX EDX,word ptr [EDI + 0xe]
00496ac5  CMP EBX,EDX
00496ac7  JL 0x00496960
00496acd  POP EBP
00496ace  POP EBX
00496acf  POP EDI
00496ad0  POP ESI
00496ad1  POP ECX
00496ad2  RET
