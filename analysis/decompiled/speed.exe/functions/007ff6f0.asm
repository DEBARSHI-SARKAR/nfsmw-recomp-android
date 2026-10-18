007ff6f0  PUSH EBP
007ff6f1  MOV EBP,ESP
007ff6f3  SUB ESP,0x28
007ff6f6  MOV ECX,dword ptr [EBP + 0x8]
007ff6f9  MOV EAX,dword ptr [ECX + 0x5c]
007ff6fc  LEA EAX,[EAX + EAX*0x4]
007ff6ff  SHL EAX,0x1
007ff701  CDQ
007ff702  IDIV dword ptr [ECX + 0x58]
007ff705  AND dword ptr [EBP + 0x8],0x0
007ff709  PUSH EBX
007ff70a  PUSH ESI
007ff70b  MOV ESI,dword ptr [ECX + 0x64]
007ff70e  PUSH EDI
007ff70f  MOV EDI,dword ptr [ECX + 0x60]
007ff712  XOR EBX,EBX
007ff714  PUSH 0x5
007ff716  INC EBX
007ff717  POP ECX
007ff718  MOV dword ptr [EBP + -0x18],EBX
007ff71b  SUB EAX,ECX
007ff71d  JZ 0x007ff747
007ff71f  DEC EAX
007ff720  JZ 0x007ff740
007ff722  DEC EAX
007ff723  DEC EAX
007ff724  JZ 0x007ff739
007ff726  DEC EAX
007ff727  DEC EAX
007ff728  JZ 0x007ff730
007ff72a  AND dword ptr [EBP + -0x18],0x0
007ff72e  JMP 0x007ff74f
007ff730  MOV dword ptr [EBP + 0x8],0x7fe8f2
007ff737  JMP 0x007ff74f
007ff739  MOV EAX,[0x009c6a78]
007ff73e  JMP 0x007ff74c
007ff740  MOV EAX,[0x009c6acc]
007ff745  JMP 0x007ff74c
007ff747  MOV EAX,[0x009c6a9c]
007ff74c  MOV dword ptr [EBP + 0x8],EAX
007ff74f  LEA EAX,[ESI + ESI*0x4]
007ff752  SHL EAX,0x1
007ff754  CDQ
007ff755  IDIV EDI
007ff757  SUB EAX,ECX
007ff759  JZ 0x007ff7ab
007ff75b  DEC EAX
007ff75c  JZ 0x007ff792
007ff75e  DEC EAX
007ff75f  DEC EAX
007ff760  JZ 0x007ff77c
007ff762  DEC EAX
007ff763  DEC EAX
007ff764  JNZ 0x007ff7cb
007ff766  MOV EAX,0x7fe912
007ff76b  PUSH 0x4
007ff76d  MOV dword ptr [EBP + -0xc],EAX
007ff770  MOV dword ptr [EBP + -0x10],EAX
007ff773  POP EAX
007ff774  MOV dword ptr [EBP + -0x4],EAX
007ff777  MOV dword ptr [EBP + -0x8],EAX
007ff77a  JMP 0x007ff7c5
007ff77c  MOV EAX,[0x009c6a98]
007ff781  MOV dword ptr [EBP + -0xc],EAX
007ff784  MOV EAX,[0x009c6a94]
007ff789  MOV dword ptr [EBP + -0x4],0x4
007ff790  JMP 0x007ff7a6
007ff792  MOV EAX,[0x009c6ac4]
007ff797  MOV dword ptr [EBP + -0xc],EAX
007ff79a  MOV EAX,[0x009c6aac]
007ff79f  MOV dword ptr [EBP + -0x4],0x3
007ff7a6  MOV dword ptr [EBP + -0x8],ECX
007ff7a9  JMP 0x007ff7c2
007ff7ab  MOV EAX,[0x009c6a8c]
007ff7b0  MOV dword ptr [EBP + -0xc],EAX
007ff7b3  MOV EAX,[0x009c6ac0]
007ff7b8  MOV dword ptr [EBP + -0x4],EBX
007ff7bb  MOV dword ptr [EBP + -0x8],0x2
007ff7c2  MOV dword ptr [EBP + -0x10],EAX
007ff7c5  CMP dword ptr [EBP + -0x18],0x0
007ff7c9  JNZ 0x007ff7d2
007ff7cb  XOR EAX,EAX
007ff7cd  JMP 0x007ff8c7
007ff7d2  PUSH dword ptr [EBP + 0x24]
007ff7d5  MOV ESI,dword ptr [EBP + 0x1c]
007ff7d8  MOV EDI,dword ptr [EBP + 0xc]
007ff7db  PUSH ESI
007ff7dc  PUSH dword ptr [EBP + 0x14]
007ff7df  PUSH EDI
007ff7e0  CALL dword ptr [EBP + 0x8]
007ff7e3  MOV ECX,dword ptr [EBP + -0x8]
007ff7e6  MOV EAX,dword ptr [EBP + 0x28]
007ff7e9  XOR EDX,EDX
007ff7eb  LEA EAX,[ECX + EAX*0x1 + -0x1]
007ff7ef  DIV ECX
007ff7f1  MOV EBX,dword ptr [EBP + 0x20]
007ff7f4  ADD ESP,0x10
007ff7f7  LEA EDX,[EAX + -0x1]
007ff7fa  TEST EDX,EDX
007ff7fc  JBE 0x007ff885
007ff802  MOV ECX,dword ptr [EBP + -0x4]
007ff805  IMUL ECX,dword ptr [EBP + 0x10]
007ff809  MOV EAX,dword ptr [EBP + -0x8]
007ff80c  IMUL EAX,EBX
007ff80f  MOV dword ptr [EBP + -0x24],ECX
007ff812  MOV dword ptr [EBP + -0x20],EAX
007ff815  MOV dword ptr [EBP + -0x28],EDX
007ff818  JMP 0x007ff820
007ff81a  MOV EAX,dword ptr [EBP + -0x20]
007ff81d  MOV ECX,dword ptr [EBP + -0x24]
007ff820  MOV EDX,dword ptr [EBP + -0x4]
007ff823  CMP EDX,0x1
007ff826  JBE 0x007ff860
007ff828  MOV EAX,dword ptr [EBP + 0x10]
007ff82b  ADD EAX,EDI
007ff82d  MOV dword ptr [EBP + -0x14],EAX
007ff830  LEA EAX,[ESI + EBX*0x1]
007ff833  DEC EDX
007ff834  MOV dword ptr [EBP + -0x8],EAX
007ff837  MOV dword ptr [EBP + -0x1c],EDX
007ff83a  PUSH dword ptr [EBP + 0x24]
007ff83d  PUSH dword ptr [EBP + -0x8]
007ff840  PUSH dword ptr [EBP + 0x14]
007ff843  PUSH dword ptr [EBP + -0x14]
007ff846  CALL dword ptr [EBP + 0x8]
007ff849  MOV EAX,dword ptr [EBP + 0x10]
007ff84c  ADD dword ptr [EBP + -0x8],EBX
007ff84f  ADD dword ptr [EBP + -0x14],EAX
007ff852  ADD ESP,0x10
007ff855  DEC dword ptr [EBP + -0x1c]
007ff858  JNZ 0x007ff83a
007ff85a  MOV EAX,dword ptr [EBP + -0x20]
007ff85d  MOV ECX,dword ptr [EBP + -0x24]
007ff860  PUSH dword ptr [EBP + 0x24]
007ff863  ADD EAX,ESI
007ff865  PUSH EAX
007ff866  PUSH dword ptr [EBP + 0x14]
007ff869  ADD EDI,ECX
007ff86b  PUSH EDI
007ff86c  MOV dword ptr [EBP + -0x1c],EAX
007ff86f  CALL dword ptr [EBP + 0x8]
007ff872  PUSH dword ptr [EBP + 0x24]
007ff875  PUSH EBX
007ff876  PUSH ESI
007ff877  CALL dword ptr [EBP + -0xc]
007ff87a  MOV ESI,dword ptr [EBP + -0x1c]
007ff87d  ADD ESP,0x1c
007ff880  DEC dword ptr [EBP + -0x28]
007ff883  JNZ 0x007ff81a
007ff885  MOV EAX,dword ptr [EBP + -0x4]
007ff888  CMP EAX,0x1
007ff88b  JBE 0x007ff8b9
007ff88d  MOV ECX,dword ptr [EBP + 0x10]
007ff890  ADD EDI,ECX
007ff892  DEC EAX
007ff893  MOV dword ptr [EBP + -0x14],EDI
007ff896  LEA EDI,[ESI + EBX*0x1]
007ff899  MOV dword ptr [EBP + -0x28],EAX
007ff89c  PUSH dword ptr [EBP + 0x24]
007ff89f  PUSH EDI
007ff8a0  PUSH dword ptr [EBP + 0x14]
007ff8a3  PUSH dword ptr [EBP + -0x14]
007ff8a6  CALL dword ptr [EBP + 0x8]
007ff8a9  MOV EAX,dword ptr [EBP + 0x10]
007ff8ac  ADD dword ptr [EBP + -0x14],EAX
007ff8af  ADD ESP,0x10
007ff8b2  ADD EDI,EBX
007ff8b4  DEC dword ptr [EBP + -0x28]
007ff8b7  JNZ 0x007ff89c
007ff8b9  PUSH dword ptr [EBP + 0x24]
007ff8bc  PUSH EBX
007ff8bd  PUSH ESI
007ff8be  CALL dword ptr [EBP + -0x10]
007ff8c1  MOV EAX,dword ptr [EBP + -0x18]
007ff8c4  ADD ESP,0xc
007ff8c7  POP EDI
007ff8c8  POP ESI
007ff8c9  POP EBX
007ff8ca  LEAVE
007ff8cb  RET
