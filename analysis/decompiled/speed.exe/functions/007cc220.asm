007cc220  PUSH EBP
007cc221  MOV EBP,ESP
007cc223  SUB ESP,0x10
007cc226  CMP dword ptr [0x009c5450],0x0
007cc22d  JNZ 0x007cc234
007cc22f  CALL 0x007ddc00
007cc234  MOV dword ptr [EBP + -0x8],0x0
007cc23b  MOV EAX,[0x009ba9e4]
007cc240  MOV dword ptr [EBP + -0x4],EAX
007cc243  CMP dword ptr [EBP + -0x4],0x0
007cc247  JNZ 0x007cc251
007cc249  OR EAX,0xffffffff
007cc24c  JMP 0x007cc392
007cc251  MOV ECX,dword ptr [EBP + -0x4]
007cc254  MOVSX EDX,byte ptr [ECX]
007cc257  TEST EDX,EDX
007cc259  JZ 0x007cc287
007cc25b  MOV EAX,dword ptr [EBP + -0x4]
007cc25e  MOVSX ECX,byte ptr [EAX]
007cc261  CMP ECX,0x3d
007cc264  JZ 0x007cc26f
007cc266  MOV EDX,dword ptr [EBP + -0x8]
007cc269  ADD EDX,0x1
007cc26c  MOV dword ptr [EBP + -0x8],EDX
007cc26f  MOV EAX,dword ptr [EBP + -0x4]
007cc272  PUSH EAX
007cc273  CALL 0x007d0cd0
007cc278  ADD ESP,0x4
007cc27b  MOV ECX,dword ptr [EBP + -0x4]
007cc27e  LEA EDX,[ECX + EAX*0x1 + 0x1]
007cc282  MOV dword ptr [EBP + -0x4],EDX
007cc285  JMP 0x007cc251
007cc287  PUSH 0x75
007cc289  PUSH 0x8b8cdc
007cc28e  PUSH 0x2
007cc290  MOV EAX,dword ptr [EBP + -0x8]
007cc293  LEA ECX,[EAX*0x4 + 0x4]
007cc29a  PUSH ECX
007cc29b  CALL 0x007c6700
007cc2a0  ADD ESP,0x10
007cc2a3  MOV dword ptr [EBP + -0xc],EAX
007cc2a6  MOV EDX,dword ptr [EBP + -0xc]
007cc2a9  MOV dword ptr [0x009baa40],EDX
007cc2af  CMP dword ptr [0x009baa40],0x0
007cc2b6  JNZ 0x007cc2c0
007cc2b8  OR EAX,0xffffffff
007cc2bb  JMP 0x007cc392
007cc2c0  MOV EAX,[0x009ba9e4]
007cc2c5  MOV dword ptr [EBP + -0x4],EAX
007cc2c8  JMP 0x007cc2d3
007cc2ca  MOV ECX,dword ptr [EBP + -0x4]
007cc2cd  ADD ECX,dword ptr [EBP + -0x10]
007cc2d0  MOV dword ptr [EBP + -0x4],ECX
007cc2d3  MOV EDX,dword ptr [EBP + -0x4]
007cc2d6  MOVSX EAX,byte ptr [EDX]
007cc2d9  TEST EAX,EAX
007cc2db  JZ 0x007cc363
007cc2e1  MOV ECX,dword ptr [EBP + -0x4]
007cc2e4  PUSH ECX
007cc2e5  CALL 0x007d0cd0
007cc2ea  ADD ESP,0x4
007cc2ed  ADD EAX,0x1
007cc2f0  MOV dword ptr [EBP + -0x10],EAX
007cc2f3  MOV EDX,dword ptr [EBP + -0x4]
007cc2f6  MOVSX EAX,byte ptr [EDX]
007cc2f9  CMP EAX,0x3d
007cc2fc  JZ 0x007cc35e
007cc2fe  PUSH 0x82
007cc303  PUSH 0x8b8cdc
007cc308  PUSH 0x2
007cc30a  MOV ECX,dword ptr [EBP + -0x10]
007cc30d  PUSH ECX
007cc30e  CALL 0x007c6700
007cc313  ADD ESP,0x10
007cc316  MOV EDX,dword ptr [EBP + -0xc]
007cc319  MOV dword ptr [EDX],EAX
007cc31b  MOV EAX,dword ptr [EBP + -0xc]
007cc31e  CMP dword ptr [EAX],0x0
007cc321  JNZ 0x007cc343
007cc323  PUSH 0x2
007cc325  MOV ECX,dword ptr [0x009baa40]
007cc32b  PUSH ECX
007cc32c  CALL 0x007c7290
007cc331  ADD ESP,0x8
007cc334  MOV dword ptr [0x009baa40],0x0
007cc33e  OR EAX,0xffffffff
007cc341  JMP 0x007cc392
007cc343  MOV EDX,dword ptr [EBP + -0x4]
007cc346  PUSH EDX
007cc347  MOV EAX,dword ptr [EBP + -0xc]
007cc34a  MOV ECX,dword ptr [EAX]
007cc34c  PUSH ECX
007cc34d  CALL 0x007d0bd0
007cc352  ADD ESP,0x8
007cc355  MOV EDX,dword ptr [EBP + -0xc]
007cc358  ADD EDX,0x4
007cc35b  MOV dword ptr [EBP + -0xc],EDX
007cc35e  JMP 0x007cc2ca
007cc363  PUSH 0x2
007cc365  MOV EAX,[0x009ba9e4]
007cc36a  PUSH EAX
007cc36b  CALL 0x007c7290
007cc370  ADD ESP,0x8
007cc373  MOV dword ptr [0x009ba9e4],0x0
007cc37d  MOV ECX,dword ptr [EBP + -0xc]
007cc380  MOV dword ptr [ECX],0x0
007cc386  MOV dword ptr [0x009c5444],0x1
007cc390  XOR EAX,EAX
007cc392  MOV ESP,EBP
007cc394  POP EBP
007cc395  RET
