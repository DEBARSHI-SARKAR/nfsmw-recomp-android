0085dba0  PUSH EBP
0085dba1  MOV EBP,ESP
0085dba3  SUB ESP,0x8
0085dba6  MOV EAX,dword ptr [EBP + 0x8]
0085dba9  CMP dword ptr [EAX],0x0
0085dbac  JGE 0x0085dbb5
0085dbae  XOR EAX,EAX
0085dbb0  JMP 0x0085de0b
0085dbb5  CALL 0x007dbfc0
0085dbba  MOV ECX,dword ptr [EBP + 0x8]
0085dbbd  CMP dword ptr [ECX],0x3f480
0085dbc3  JLE 0x0085dc30
0085dbc5  MOV EDX,dword ptr [EBP + 0x8]
0085dbc8  CMP dword ptr [EDX],0x7ffc0b7f
0085dbce  JGE 0x0085dc30
0085dbd0  MOV EAX,dword ptr [EBP + 0x8]
0085dbd3  MOV ECX,dword ptr [EAX]
0085dbd5  SUB ECX,dword ptr [0x009070b0]
0085dbdb  MOV dword ptr [EBP + -0x8],ECX
0085dbde  LEA EDX,[EBP + -0x8]
0085dbe1  PUSH EDX
0085dbe2  CALL 0x0085f000
0085dbe7  ADD ESP,0x4
0085dbea  MOV dword ptr [EBP + -0x4],EAX
0085dbed  CMP dword ptr [0x009070b4],0x0
0085dbf4  JZ 0x0085dc2b
0085dbf6  MOV EAX,dword ptr [EBP + -0x4]
0085dbf9  PUSH EAX
0085dbfa  CALL 0x007dc4e0
0085dbff  ADD ESP,0x4
0085dc02  TEST EAX,EAX
0085dc04  JZ 0x0085dc2b
0085dc06  MOV ECX,dword ptr [EBP + -0x8]
0085dc09  SUB ECX,dword ptr [0x009070b8]
0085dc0f  MOV dword ptr [EBP + -0x8],ECX
0085dc12  LEA EDX,[EBP + -0x8]
0085dc15  PUSH EDX
0085dc16  CALL 0x0085f000
0085dc1b  ADD ESP,0x4
0085dc1e  MOV dword ptr [EBP + -0x4],EAX
0085dc21  MOV EAX,dword ptr [EBP + -0x4]
0085dc24  MOV dword ptr [EAX + 0x20],0x1
0085dc2b  JMP 0x0085de08
0085dc30  MOV ECX,dword ptr [EBP + 0x8]
0085dc33  PUSH ECX
0085dc34  CALL 0x0085f000
0085dc39  ADD ESP,0x4
0085dc3c  MOV dword ptr [EBP + -0x4],EAX
0085dc3f  CMP dword ptr [0x009070b4],0x0
0085dc46  JZ 0x0085dc79
0085dc48  MOV EDX,dword ptr [EBP + -0x4]
0085dc4b  PUSH EDX
0085dc4c  CALL 0x007dc4e0
0085dc51  ADD ESP,0x4
0085dc54  TEST EAX,EAX
0085dc56  JZ 0x0085dc79
0085dc58  MOV EAX,[0x009070b0]
0085dc5d  ADD EAX,dword ptr [0x009070b8]
0085dc63  MOV ECX,dword ptr [EBP + -0x4]
0085dc66  MOV EDX,dword ptr [ECX]
0085dc68  SUB EDX,EAX
0085dc6a  MOV dword ptr [EBP + -0x8],EDX
0085dc6d  MOV EAX,dword ptr [EBP + -0x4]
0085dc70  MOV dword ptr [EAX + 0x20],0x1
0085dc77  JMP 0x0085dc87
0085dc79  MOV ECX,dword ptr [EBP + -0x4]
0085dc7c  MOV EDX,dword ptr [ECX]
0085dc7e  SUB EDX,dword ptr [0x009070b0]
0085dc84  MOV dword ptr [EBP + -0x8],EDX
0085dc87  MOV EAX,dword ptr [EBP + -0x8]
0085dc8a  CDQ
0085dc8b  MOV ECX,0x3c
0085dc90  IDIV ECX
0085dc92  MOV EAX,dword ptr [EBP + -0x4]
0085dc95  MOV dword ptr [EAX],EDX
0085dc97  MOV ECX,dword ptr [EBP + -0x4]
0085dc9a  CMP dword ptr [ECX],0x0
0085dc9d  JGE 0x0085dcb5
0085dc9f  MOV EDX,dword ptr [EBP + -0x4]
0085dca2  MOV EAX,dword ptr [EDX]
0085dca4  ADD EAX,0x3c
0085dca7  MOV ECX,dword ptr [EBP + -0x4]
0085dcaa  MOV dword ptr [ECX],EAX
0085dcac  MOV EDX,dword ptr [EBP + -0x8]
0085dcaf  SUB EDX,0x3c
0085dcb2  MOV dword ptr [EBP + -0x8],EDX
0085dcb5  MOV EAX,dword ptr [EBP + -0x8]
0085dcb8  CDQ
0085dcb9  MOV ECX,0x3c
0085dcbe  IDIV ECX
0085dcc0  MOV EDX,dword ptr [EBP + -0x4]
0085dcc3  ADD EAX,dword ptr [EDX + 0x4]
0085dcc6  MOV dword ptr [EBP + -0x8],EAX
0085dcc9  MOV EAX,dword ptr [EBP + -0x8]
0085dccc  CDQ
0085dccd  MOV ECX,0x3c
0085dcd2  IDIV ECX
0085dcd4  MOV EAX,dword ptr [EBP + -0x4]
0085dcd7  MOV dword ptr [EAX + 0x4],EDX
0085dcda  MOV ECX,dword ptr [EBP + -0x4]
0085dcdd  CMP dword ptr [ECX + 0x4],0x0
0085dce1  JGE 0x0085dcfb
0085dce3  MOV EDX,dword ptr [EBP + -0x4]
0085dce6  MOV EAX,dword ptr [EDX + 0x4]
0085dce9  ADD EAX,0x3c
0085dcec  MOV ECX,dword ptr [EBP + -0x4]
0085dcef  MOV dword ptr [ECX + 0x4],EAX
0085dcf2  MOV EDX,dword ptr [EBP + -0x8]
0085dcf5  SUB EDX,0x3c
0085dcf8  MOV dword ptr [EBP + -0x8],EDX
0085dcfb  MOV EAX,dword ptr [EBP + -0x8]
0085dcfe  CDQ
0085dcff  MOV ECX,0x3c
0085dd04  IDIV ECX
0085dd06  MOV EDX,dword ptr [EBP + -0x4]
0085dd09  ADD EAX,dword ptr [EDX + 0x8]
0085dd0c  MOV dword ptr [EBP + -0x8],EAX
0085dd0f  MOV EAX,dword ptr [EBP + -0x8]
0085dd12  CDQ
0085dd13  MOV ECX,0x18
0085dd18  IDIV ECX
0085dd1a  MOV EAX,dword ptr [EBP + -0x4]
0085dd1d  MOV dword ptr [EAX + 0x8],EDX
0085dd20  MOV ECX,dword ptr [EBP + -0x4]
0085dd23  CMP dword ptr [ECX + 0x8],0x0
0085dd27  JGE 0x0085dd41
0085dd29  MOV EDX,dword ptr [EBP + -0x4]
0085dd2c  MOV EAX,dword ptr [EDX + 0x8]
0085dd2f  ADD EAX,0x18
0085dd32  MOV ECX,dword ptr [EBP + -0x4]
0085dd35  MOV dword ptr [ECX + 0x8],EAX
0085dd38  MOV EDX,dword ptr [EBP + -0x8]
0085dd3b  SUB EDX,0x18
0085dd3e  MOV dword ptr [EBP + -0x8],EDX
0085dd41  MOV EAX,dword ptr [EBP + -0x8]
0085dd44  CDQ
0085dd45  MOV ECX,0x18
0085dd4a  IDIV ECX
0085dd4c  MOV dword ptr [EBP + -0x8],EAX
0085dd4f  CMP dword ptr [EBP + -0x8],0x0
0085dd53  JLE 0x0085dd8c
0085dd55  MOV EDX,dword ptr [EBP + -0x4]
0085dd58  MOV EAX,dword ptr [EDX + 0x18]
0085dd5b  ADD EAX,dword ptr [EBP + -0x8]
0085dd5e  CDQ
0085dd5f  MOV ECX,0x7
0085dd64  IDIV ECX
0085dd66  MOV EAX,dword ptr [EBP + -0x4]
0085dd69  MOV dword ptr [EAX + 0x18],EDX
0085dd6c  MOV ECX,dword ptr [EBP + -0x4]
0085dd6f  MOV EDX,dword ptr [ECX + 0xc]
0085dd72  ADD EDX,dword ptr [EBP + -0x8]
0085dd75  MOV EAX,dword ptr [EBP + -0x4]
0085dd78  MOV dword ptr [EAX + 0xc],EDX
0085dd7b  MOV ECX,dword ptr [EBP + -0x4]
0085dd7e  MOV EDX,dword ptr [ECX + 0x1c]
0085dd81  ADD EDX,dword ptr [EBP + -0x8]
0085dd84  MOV EAX,dword ptr [EBP + -0x4]
0085dd87  MOV dword ptr [EAX + 0x1c],EDX
0085dd8a  JMP 0x0085de08
0085dd8c  CMP dword ptr [EBP + -0x8],0x0
0085dd90  JGE 0x0085de08
0085dd92  MOV ECX,dword ptr [EBP + -0x4]
0085dd95  MOV EDX,dword ptr [ECX + 0x18]
0085dd98  MOV EAX,dword ptr [EBP + -0x8]
0085dd9b  LEA EAX,[EDX + EAX*0x1 + 0x7]
0085dd9f  CDQ
0085dda0  MOV ECX,0x7
0085dda5  IDIV ECX
0085dda7  MOV EAX,dword ptr [EBP + -0x4]
0085ddaa  MOV dword ptr [EAX + 0x18],EDX
0085ddad  MOV ECX,dword ptr [EBP + -0x4]
0085ddb0  MOV EDX,dword ptr [ECX + 0xc]
0085ddb3  ADD EDX,dword ptr [EBP + -0x8]
0085ddb6  MOV EAX,dword ptr [EBP + -0x4]
0085ddb9  MOV dword ptr [EAX + 0xc],EDX
0085ddbc  MOV ECX,dword ptr [EBP + -0x4]
0085ddbf  CMP dword ptr [ECX + 0xc],0x0
0085ddc3  JG 0x0085ddf9
0085ddc5  MOV EDX,dword ptr [EBP + -0x4]
0085ddc8  MOV EAX,dword ptr [EDX + 0xc]
0085ddcb  ADD EAX,0x1f
0085ddce  MOV ECX,dword ptr [EBP + -0x4]
0085ddd1  MOV dword ptr [ECX + 0xc],EAX
0085ddd4  MOV EDX,dword ptr [EBP + -0x4]
0085ddd7  MOV dword ptr [EDX + 0x1c],0x16c
0085ddde  MOV EAX,dword ptr [EBP + -0x4]
0085dde1  MOV dword ptr [EAX + 0x10],0xb
0085dde8  MOV ECX,dword ptr [EBP + -0x4]
0085ddeb  MOV EDX,dword ptr [ECX + 0x14]
0085ddee  SUB EDX,0x1
0085ddf1  MOV EAX,dword ptr [EBP + -0x4]
0085ddf4  MOV dword ptr [EAX + 0x14],EDX
0085ddf7  JMP 0x0085de08
0085ddf9  MOV ECX,dword ptr [EBP + -0x4]
0085ddfc  MOV EDX,dword ptr [ECX + 0x1c]
0085ddff  ADD EDX,dword ptr [EBP + -0x8]
0085de02  MOV EAX,dword ptr [EBP + -0x4]
0085de05  MOV dword ptr [EAX + 0x1c],EDX
0085de08  MOV EAX,dword ptr [EBP + -0x4]
0085de0b  MOV ESP,EBP
0085de0d  POP EBP
0085de0e  RET
