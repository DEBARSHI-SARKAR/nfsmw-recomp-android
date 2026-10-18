007e0520  PUSH EBP
007e0521  MOV EBP,ESP
007e0523  SUB ESP,0xc
007e0526  MOV EAX,dword ptr [EBP + 0xc]
007e0529  MOV ECX,dword ptr [EAX]
007e052b  MOV dword ptr [EBP + -0x4],ECX
007e052e  MOV EDX,dword ptr [EBP + 0x10]
007e0531  CMP dword ptr [EDX],0x1
007e0534  JBE 0x007e057b
007e0536  MOV EAX,dword ptr [EBP + 0x8]
007e0539  CDQ
007e053a  MOV ECX,0xa
007e053f  IDIV ECX
007e0541  ADD EDX,0x30
007e0544  MOV EAX,dword ptr [EBP + -0x4]
007e0547  MOV byte ptr [EAX],DL
007e0549  MOV ECX,dword ptr [EBP + -0x4]
007e054c  ADD ECX,0x1
007e054f  MOV dword ptr [EBP + -0x4],ECX
007e0552  MOV EDX,dword ptr [EBP + 0x10]
007e0555  MOV EAX,dword ptr [EDX]
007e0557  SUB EAX,0x1
007e055a  MOV ECX,dword ptr [EBP + 0x10]
007e055d  MOV dword ptr [ECX],EAX
007e055f  MOV EAX,dword ptr [EBP + 0x8]
007e0562  CDQ
007e0563  MOV ECX,0xa
007e0568  IDIV ECX
007e056a  MOV dword ptr [EBP + 0x8],EAX
007e056d  CMP dword ptr [EBP + 0x8],0x0
007e0571  JLE 0x007e057b
007e0573  MOV EDX,dword ptr [EBP + 0x10]
007e0576  CMP dword ptr [EDX],0x1
007e0579  JA 0x007e0536
007e057b  MOV EAX,dword ptr [EBP + 0xc]
007e057e  MOV ECX,dword ptr [EAX]
007e0580  MOV dword ptr [EBP + -0xc],ECX
007e0583  MOV EDX,dword ptr [EBP + 0xc]
007e0586  MOV EAX,dword ptr [EBP + -0x4]
007e0589  MOV dword ptr [EDX],EAX
007e058b  MOV ECX,dword ptr [EBP + -0x4]
007e058e  SUB ECX,0x1
007e0591  MOV dword ptr [EBP + -0x4],ECX
007e0594  MOV EDX,dword ptr [EBP + -0x4]
007e0597  MOV AL,byte ptr [EDX]
007e0599  MOV byte ptr [EBP + -0x5],AL
007e059c  MOV ECX,dword ptr [EBP + -0x4]
007e059f  MOV EDX,dword ptr [EBP + -0xc]
007e05a2  MOV AL,byte ptr [EDX]
007e05a4  MOV byte ptr [ECX],AL
007e05a6  MOV ECX,dword ptr [EBP + -0x4]
007e05a9  SUB ECX,0x1
007e05ac  MOV dword ptr [EBP + -0x4],ECX
007e05af  MOV EDX,dword ptr [EBP + -0xc]
007e05b2  MOV AL,byte ptr [EBP + -0x5]
007e05b5  MOV byte ptr [EDX],AL
007e05b7  MOV ECX,dword ptr [EBP + -0xc]
007e05ba  ADD ECX,0x1
007e05bd  MOV dword ptr [EBP + -0xc],ECX
007e05c0  MOV EDX,dword ptr [EBP + -0xc]
007e05c3  CMP EDX,dword ptr [EBP + -0x4]
007e05c6  JC 0x007e0594
007e05c8  MOV ESP,EBP
007e05ca  POP EBP
007e05cb  RET
