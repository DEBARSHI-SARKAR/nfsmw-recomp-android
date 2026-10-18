007c8300  PUSH EBP
007c8301  MOV EBP,ESP
007c8303  SUB ESP,0x8
007c8306  PUSH ESI
007c8307  MOV dword ptr [EBP + -0x4],0x0
007c830e  CMP dword ptr [EBP + 0x8],0x0
007c8312  JZ 0x007c8320
007c8314  CMP dword ptr [EBP + 0xc],0x0
007c8318  JZ 0x007c8320
007c831a  CMP dword ptr [EBP + 0x10],0x0
007c831e  JNZ 0x007c8348
007c8320  PUSH 0x8b87d4
007c8325  PUSH 0x8941f8
007c832a  PUSH 0x0
007c832c  PUSH 0x0
007c832e  PUSH 0x0
007c8330  PUSH 0x0
007c8332  CALL 0x007d2670
007c8337  ADD ESP,0x18
007c833a  CMP EAX,0x1
007c833d  JNZ 0x007c8340
007c833f  INT3
007c8340  MOV EAX,dword ptr [EBP + -0x4]
007c8343  JMP 0x007c840e
007c8348  MOV dword ptr [EBP + -0x8],0x0
007c834f  JMP 0x007c835a
007c8351  MOV ECX,dword ptr [EBP + -0x8]
007c8354  ADD ECX,0x1
007c8357  MOV dword ptr [EBP + -0x8],ECX
007c835a  CMP dword ptr [EBP + -0x8],0x5
007c835e  JGE 0x007c83de
007c8360  MOV EDX,dword ptr [EBP + -0x8]
007c8363  MOV EAX,dword ptr [EBP + 0x10]
007c8366  MOV ECX,dword ptr [EBP + -0x8]
007c8369  MOV ESI,dword ptr [EBP + 0xc]
007c836c  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
007c8370  SUB EDX,dword ptr [ESI + ECX*0x4 + 0x18]
007c8374  MOV EAX,dword ptr [EBP + -0x8]
007c8377  MOV ECX,dword ptr [EBP + 0x8]
007c837a  MOV dword ptr [ECX + EAX*0x4 + 0x18],EDX
007c837e  MOV EDX,dword ptr [EBP + -0x8]
007c8381  MOV EAX,dword ptr [EBP + 0x10]
007c8384  MOV ECX,dword ptr [EBP + -0x8]
007c8387  MOV ESI,dword ptr [EBP + 0xc]
007c838a  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
007c838e  SUB EDX,dword ptr [ESI + ECX*0x4 + 0x4]
007c8392  MOV EAX,dword ptr [EBP + -0x8]
007c8395  MOV ECX,dword ptr [EBP + 0x8]
007c8398  MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
007c839c  MOV EDX,dword ptr [EBP + -0x8]
007c839f  MOV EAX,dword ptr [EBP + 0x8]
007c83a2  CMP dword ptr [EAX + EDX*0x4 + 0x18],0x0
007c83a7  JNZ 0x007c83b6
007c83a9  MOV ECX,dword ptr [EBP + -0x8]
007c83ac  MOV EDX,dword ptr [EBP + 0x8]
007c83af  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
007c83b4  JZ 0x007c83d9
007c83b6  CMP dword ptr [EBP + -0x8],0x0
007c83ba  JZ 0x007c83d9
007c83bc  CMP dword ptr [EBP + -0x8],0x2
007c83c0  JNZ 0x007c83d2
007c83c2  CMP dword ptr [EBP + -0x8],0x2
007c83c6  JNZ 0x007c83d9
007c83c8  MOV EAX,[0x00906300]
007c83cd  AND EAX,0x10
007c83d0  JZ 0x007c83d9
007c83d2  MOV dword ptr [EBP + -0x4],0x1
007c83d9  JMP 0x007c8351
007c83de  MOV ECX,dword ptr [EBP + 0x10]
007c83e1  MOV EDX,dword ptr [EBP + 0xc]
007c83e4  MOV EAX,dword ptr [ECX + 0x2c]
007c83e7  SUB EAX,dword ptr [EDX + 0x2c]
007c83ea  MOV ECX,dword ptr [EBP + 0x8]
007c83ed  MOV dword ptr [ECX + 0x2c],EAX
007c83f0  MOV EDX,dword ptr [EBP + 0x10]
007c83f3  MOV EAX,dword ptr [EBP + 0xc]
007c83f6  MOV ECX,dword ptr [EDX + 0x30]
007c83f9  SUB ECX,dword ptr [EAX + 0x30]
007c83fc  MOV EDX,dword ptr [EBP + 0x8]
007c83ff  MOV dword ptr [EDX + 0x30],ECX
007c8402  MOV EAX,dword ptr [EBP + 0x8]
007c8405  MOV dword ptr [EAX],0x0
007c840b  MOV EAX,dword ptr [EBP + -0x4]
007c840e  POP ESI
007c840f  MOV ESP,EBP
007c8411  POP EBP
007c8412  RET
