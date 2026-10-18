0081c675  PUSH EBP
0081c676  MOV EBP,ESP
0081c678  SUB ESP,0x30
0081c67b  MOV ECX,dword ptr [EBP + 0xc]
0081c67e  MOV EAX,dword ptr [ECX + 0x8]
0081c681  PUSH EBX
0081c682  MOV EBX,dword ptr [EBP + 0x8]
0081c685  PUSH ESI
0081c686  MOV ESI,dword ptr [EBX + 0x138]
0081c68c  CMP byte ptr [ESI + 0x25],0x0
0081c690  PUSH EDI
0081c691  MOV EDI,0x7fffffff
0081c696  JZ 0x0081c6b3
0081c698  MOV dword ptr [EBP + 0xc],EAX
0081c69b  MOV DX,word ptr [EBP + 0xe]
0081c69f  MOV byte ptr [EBP + 0xe],AH
0081c6a2  MOV byte ptr [EBP + 0xf],AL
0081c6a5  MOV EAX,dword ptr [EBP + -0x2c]
0081c6a8  MOV byte ptr [EBP + 0xc],DH
0081c6ab  MOV byte ptr [EBP + 0xd],DL
0081c6ae  XOR EAX,dword ptr [EBP + 0xc]
0081c6b1  JMP 0x0081c6b6
0081c6b3  XOR EAX,dword ptr [EBP + -0x2c]
0081c6b6  MOVZX EDX,byte ptr [EBX + 0x16]
0081c6ba  AND EAX,EDI
0081c6bc  XOR dword ptr [EBP + -0x2c],EAX
0081c6bf  LEA EAX,[ECX + 0xc]
0081c6c2  LEA EBX,[EAX + EDX*0x4]
0081c6c5  MOV dword ptr [EBP + -0x4],EBX
0081c6c8  XOR EBX,EBX
0081c6ca  TEST EDX,EDX
0081c6cc  JLE 0x0081c71c
0081c6ce  LEA EDX,[EBP + -0x24]
0081c6d1  SUB EAX,EDX
0081c6d3  MOV dword ptr [EBP + -0x8],EAX
0081c6d6  JMP 0x0081c6db
0081c6d8  MOV EAX,dword ptr [EBP + -0x8]
0081c6db  CMP byte ptr [ESI + 0x25],0x0
0081c6df  LEA EAX,[EAX + EBX*0x4]
0081c6e2  MOV EAX,dword ptr [EBP + EAX*0x1 + -0x24]
0081c6e6  JZ 0x0081c709
0081c6e8  MOV dword ptr [EBP + -0xc],EAX
0081c6eb  MOV DX,word ptr [EBP + -0xa]
0081c6ef  MOV byte ptr [EBP + 0xc],DH
0081c6f2  MOV byte ptr [EBP + 0xd],DL
0081c6f5  MOV EDX,dword ptr [EBP + -0x4]
0081c6f8  MOV byte ptr [EBP + 0xe],AH
0081c6fb  MOV byte ptr [EBP + 0xf],AL
0081c6fe  MOV EAX,dword ptr [EBP + 0xc]
0081c701  ADD EDX,EAX
0081c703  MOV dword ptr [EBP + EBX*0x4 + -0x24],EDX
0081c707  JMP 0x0081c710
0081c709  ADD EAX,dword ptr [EBP + -0x4]
0081c70c  MOV dword ptr [EBP + EBX*0x4 + -0x24],EAX
0081c710  MOV EAX,dword ptr [EBP + 0x8]
0081c713  MOVZX EAX,byte ptr [EAX + 0x16]
0081c717  INC EBX
0081c718  CMP EBX,EAX
0081c71a  JL 0x0081c6d8
0081c71c  TEST dword ptr [EBP + -0x2c],EDI
0081c71f  JNZ 0x0081c72e
0081c721  MOV EAX,dword ptr [EBP + 0x8]
0081c724  PUSH ECX
0081c725  PUSH dword ptr [EAX]
0081c727  CALL 0x00862b92
0081c72c  JMP 0x0081c76a
0081c72e  MOV EAX,dword ptr [EBP + -0x24]
0081c731  MOV dword ptr [EAX + -0x4],ECX
0081c734  MOV EAX,dword ptr [ESI + 0xc]
0081c737  MOV dword ptr [ECX],EAX
0081c739  MOV EAX,dword ptr [EBP + -0x2c]
0081c73c  MOV ECX,dword ptr [ESI + 0x1c]
0081c73f  AND EAX,EDI
0081c741  ADD EAX,ECX
0081c743  MOV dword ptr [ESI + 0x1c],EAX
0081c746  MOVZX EAX,byte ptr [ESI + 0x24]
0081c74a  MOV ECX,dword ptr [EBP + -0x2c]
0081c74d  SHL EAX,0x1f
0081c750  AND ECX,EDI
0081c752  OR EAX,ECX
0081c754  MOV dword ptr [EBP + -0x2c],EAX
0081c757  LEA EAX,[EBP + -0x30]
0081c75a  PUSH EAX
0081c75b  MOV EAX,dword ptr [EBP + 0x8]
0081c75e  PUSH dword ptr [EAX + 0x8]
0081c761  CALL 0x0081deee
0081c766  MOV byte ptr [ESI + 0x24],0x1
0081c76a  POP ECX
0081c76b  POP ECX
0081c76c  POP EDI
0081c76d  POP ESI
0081c76e  POP EBX
0081c76f  LEAVE
0081c770  RET
