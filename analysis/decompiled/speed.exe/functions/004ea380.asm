004ea380  SUB ESP,0x10
004ea383  PUSH EBP
004ea384  PUSH ESI
004ea385  MOV ESI,ECX
004ea387  MOV EAX,dword ptr [ESI + 0x1c]
004ea38a  MOV ECX,dword ptr [EAX + 0x4]
004ea38d  XOR EBP,EBP
004ea38f  CMP ECX,EBP
004ea391  MOV dword ptr [ESI + 0x48],EBP
004ea394  JL 0x004ea4f1
004ea39a  ADD EAX,ECX
004ea39c  MOV dword ptr [ESI + 0x20],EAX
004ea39f  CMP dword ptr [EAX],EBP
004ea3a1  JLE 0x004ea4f1
004ea3a7  MOV ECX,dword ptr [ESI + 0x4]
004ea3aa  MOV EDX,dword ptr [ECX + 0xe8]
004ea3b0  MOV ECX,dword ptr [ECX + 0x13c]
004ea3b6  LEA EDX,[ECX + EDX*0x8]
004ea3b9  MOV dword ptr [ESI + 0x8],EDX
004ea3bc  CMP dword ptr [EAX],EBP
004ea3be  PUSH EBX
004ea3bf  LEA EBX,[EAX + 0x10]
004ea3c2  JLE 0x004ea4f0
004ea3c8  PUSH EDI
004ea3c9  LEA ESP,[ESP]
004ea3d0  MOV EAX,dword ptr [EBX]
004ea3d2  MOV EDX,dword ptr [ESI + 0x40]
004ea3d5  MOV ECX,dword ptr [EBX + 0x4]
004ea3d8  AND EAX,0xffff07ff
004ea3dd  SHL EDX,0xb
004ea3e0  OR EAX,EDX
004ea3e2  MOV dword ptr [ESP + 0x18],EAX
004ea3e6  LEA EAX,[ESP + 0x18]
004ea3ea  MOV dword ptr [ESP + 0x1c],ECX
004ea3ee  MOV ECX,dword ptr [ESI + 0x4]
004ea3f1  PUSH EAX
004ea3f2  CALL 0x004e2c30
004ea3f7  MOV ECX,dword ptr [ESI + 0x40]
004ea3fa  PUSH ECX
004ea3fb  MOV ECX,dword ptr [ESI + 0x4]
004ea3fe  PUSH EBX
004ea3ff  MOV dword ptr [ESP + 0x18],EAX
004ea403  CALL 0x004e2cc0
004ea408  MOV dword ptr [ESP + 0x14],EAX
004ea40c  MOV EAX,dword ptr [ESI + 0x4]
004ea40f  MOV ECX,dword ptr [EAX + 0xe8]
004ea415  MOV EDX,dword ptr [EAX + 0x13c]
004ea41b  LEA EDI,[EDX + ECX*0x8]
004ea41e  INC ECX
004ea41f  MOV dword ptr [EAX + 0xe8],ECX
004ea425  MOV EAX,dword ptr [ESI + 0x40]
004ea428  MOV ECX,dword ptr [ESI + 0x4]
004ea42b  PUSH EBP
004ea42c  PUSH EAX
004ea42d  PUSH EBX
004ea42e  PUSH EDI
004ea42f  CALL 0x004e2f40
004ea434  MOV ECX,dword ptr [ESI + 0x4]
004ea437  MOV EDX,dword ptr [ECX + 0x3c]
004ea43a  MOV EAX,dword ptr [EBX]
004ea43c  MOV ECX,EAX
004ea43e  SAR ECX,0x10
004ea441  SHL EDX,0x8
004ea444  AND ECX,0xe000
004ea44a  OR EDX,ECX
004ea44c  AND EAX,0xfff0000
004ea451  OR EDX,EAX
004ea453  MOV EAX,dword ptr [EDI]
004ea455  OR EDX,EBP
004ea457  MOV dword ptr [EAX + 0x4],EDX
004ea45a  MOV ECX,dword ptr [EDI]
004ea45c  MOV dword ptr [ECX],EBX
004ea45e  MOV EDX,dword ptr [EDI]
004ea460  XOR EAX,EAX
004ea462  MOV dword ptr [EDX + 0x8],EAX
004ea465  MOV ECX,dword ptr [EDI]
004ea467  MOV dword ptr [ECX + 0xc],EAX
004ea46a  MOV EAX,dword ptr [EBX + 0x4]
004ea46d  TEST AH,AH
004ea46f  JS 0x004ea499
004ea471  MOV EDX,dword ptr [EDI]
004ea473  AND EAX,0x7fff
004ea478  MOV dword ptr [EDX + 0x8],EAX
004ea47b  MOV EAX,dword ptr [EDI]
004ea47d  MOV ECX,dword ptr [EAX + 0x8]
004ea480  NEG ECX
004ea482  PUSH ECX
004ea483  CALL 0x004e4120
004ea488  MOV EDX,0x7fff
004ea48d  ADD ESP,0x4
004ea490  SUB EDX,EAX
004ea492  MOV EAX,dword ptr [EDI]
004ea494  MOV dword ptr [EAX + 0xc],EDX
004ea497  JMP 0x004ea4b3
004ea499  OR EAX,0xffff0000
004ea49e  PUSH EAX
004ea49f  CALL 0x004e4120
004ea4a4  MOV EDX,dword ptr [EDI]
004ea4a6  MOV ECX,0x7fff
004ea4ab  ADD ESP,0x4
004ea4ae  SUB ECX,EAX
004ea4b0  MOV dword ptr [EDX + 0xc],ECX
004ea4b3  MOV EAX,dword ptr [EDI + 0x4]
004ea4b6  MOV EDX,dword ptr [ESP + 0x10]
004ea4ba  MOV dword ptr [EAX + 0x8],0x0
004ea4c1  MOV ECX,dword ptr [EDI + 0x4]
004ea4c4  MOV dword ptr [ECX],EDX
004ea4c6  MOV EAX,dword ptr [EDI + 0x4]
004ea4c9  MOV ECX,dword ptr [ESP + 0x14]
004ea4cd  MOV dword ptr [EAX + 0x4],ECX
004ea4d0  INC dword ptr [ESI + 0x48]
004ea4d3  MOV EAX,dword ptr [ESP + 0x1c]
004ea4d7  MOV EDX,dword ptr [ESI + 0x20]
004ea4da  SAR EAX,0x10
004ea4dd  AND EAX,0x1f
004ea4e0  LEA EBX,[EBX + EAX*0x4 + 0x8]
004ea4e4  MOV EAX,dword ptr [EDX]
004ea4e6  INC EBP
004ea4e7  CMP EBP,EAX
004ea4e9  JL 0x004ea3d0
004ea4ef  POP EDI
004ea4f0  POP EBX
004ea4f1  POP ESI
004ea4f2  POP EBP
004ea4f3  ADD ESP,0x10
004ea4f6  RET
