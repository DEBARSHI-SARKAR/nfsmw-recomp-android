007c6270  PUSH EBP
007c6271  MOV EBP,ESP
007c6273  SUB ESP,0x18
007c6276  CALL 0x007cd100
007c627b  MOV EAX,dword ptr [EAX + 0x64]
007c627e  MOV dword ptr [EBP + -0x4],EAX
007c6281  MOV ECX,dword ptr [EBP + -0x4]
007c6284  CMP ECX,dword ptr [0x00906b3c]
007c628a  JZ 0x007c6294
007c628c  CALL 0x007d2f80
007c6291  MOV dword ptr [EBP + -0x4],EAX
007c6294  MOV EDX,dword ptr [EBP + -0x4]
007c6297  CMP dword ptr [EDX + 0x28],0x1
007c629b  JLE 0x007c62b7
007c629d  PUSH 0x8
007c629f  MOV EAX,dword ptr [EBP + 0x8]
007c62a2  MOVZX ECX,byte ptr [EAX]
007c62a5  PUSH ECX
007c62a6  MOV EDX,dword ptr [EBP + -0x4]
007c62a9  PUSH EDX
007c62aa  CALL 0x007d4710
007c62af  ADD ESP,0xc
007c62b2  MOV dword ptr [EBP + -0x14],EAX
007c62b5  JMP 0x007c62cf
007c62b7  PUSH 0x8
007c62b9  MOV EAX,dword ptr [EBP + 0x8]
007c62bc  MOVZX ECX,byte ptr [EAX]
007c62bf  PUSH ECX
007c62c0  MOV EDX,dword ptr [EBP + -0x4]
007c62c3  PUSH EDX
007c62c4  CALL 0x007d4690
007c62c9  ADD ESP,0xc
007c62cc  MOV dword ptr [EBP + -0x14],EAX
007c62cf  CMP dword ptr [EBP + -0x14],0x0
007c62d3  JZ 0x007c62e0
007c62d5  MOV EAX,dword ptr [EBP + 0x8]
007c62d8  ADD EAX,0x1
007c62db  MOV dword ptr [EBP + 0x8],EAX
007c62de  JMP 0x007c6294
007c62e0  MOV ECX,dword ptr [EBP + 0x8]
007c62e3  MOVZX EDX,byte ptr [ECX]
007c62e6  MOV dword ptr [EBP + -0x10],EDX
007c62e9  MOV EAX,dword ptr [EBP + 0x8]
007c62ec  ADD EAX,0x1
007c62ef  MOV dword ptr [EBP + 0x8],EAX
007c62f2  MOV ECX,dword ptr [EBP + -0x10]
007c62f5  MOV dword ptr [EBP + -0x8],ECX
007c62f8  CMP dword ptr [EBP + -0x10],0x2d
007c62fc  JZ 0x007c6304
007c62fe  CMP dword ptr [EBP + -0x10],0x2b
007c6302  JNZ 0x007c6316
007c6304  MOV EDX,dword ptr [EBP + 0x8]
007c6307  MOVZX EAX,byte ptr [EDX]
007c630a  MOV dword ptr [EBP + -0x10],EAX
007c630d  MOV ECX,dword ptr [EBP + 0x8]
007c6310  ADD ECX,0x1
007c6313  MOV dword ptr [EBP + 0x8],ECX
007c6316  MOV dword ptr [EBP + -0xc],0x0
007c631d  CMP dword ptr [EBP + -0x10],0x30
007c6321  JL 0x007c6334
007c6323  CMP dword ptr [EBP + -0x10],0x39
007c6327  JG 0x007c6334
007c6329  MOV EDX,dword ptr [EBP + -0x10]
007c632c  SUB EDX,0x30
007c632f  MOV dword ptr [EBP + -0x18],EDX
007c6332  JMP 0x007c633b
007c6334  MOV dword ptr [EBP + -0x18],0xffffffff
007c633b  MOV EAX,dword ptr [EBP + -0x18]
007c633e  MOV dword ptr [EBP + -0x10],EAX
007c6341  CMP dword ptr [EBP + -0x10],-0x1
007c6345  JZ 0x007c6367
007c6347  MOV ECX,dword ptr [EBP + -0xc]
007c634a  IMUL ECX,ECX,0xa
007c634d  ADD ECX,dword ptr [EBP + -0x10]
007c6350  MOV dword ptr [EBP + -0xc],ECX
007c6353  MOV EDX,dword ptr [EBP + 0x8]
007c6356  MOVZX EAX,byte ptr [EDX]
007c6359  MOV dword ptr [EBP + -0x10],EAX
007c635c  MOV ECX,dword ptr [EBP + 0x8]
007c635f  ADD ECX,0x1
007c6362  MOV dword ptr [EBP + 0x8],ECX
007c6365  JMP 0x007c631d
007c6367  CMP dword ptr [EBP + -0x8],0x2d
007c636b  JNZ 0x007c6374
007c636d  MOV EAX,dword ptr [EBP + -0xc]
007c6370  NEG EAX
007c6372  JMP 0x007c6377
007c6374  MOV EAX,dword ptr [EBP + -0xc]
007c6377  MOV ESP,EBP
007c6379  POP EBP
007c637a  RET
