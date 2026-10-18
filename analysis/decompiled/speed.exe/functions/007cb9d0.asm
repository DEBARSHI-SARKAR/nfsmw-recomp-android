007cb9d0  PUSH EBP
007cb9d1  MOV EBP,ESP
007cb9d3  SUB ESP,0xc8
007cb9d9  MOV EAX,[0x00906980]
007cb9de  MOV dword ptr [EBP + -0x4],EAX
007cb9e1  CALL 0x007dbfc0
007cb9e6  MOV EAX,[0x009070b0]
007cb9eb  CDQ
007cb9ec  MOV ECX,0x3c
007cb9f1  IDIV ECX
007cb9f3  MOV EDX,dword ptr [EBP + 0x8]
007cb9f6  MOV word ptr [EDX + 0x6],AX
007cb9fa  LEA EAX,[EBP + 0xffffff40]
007cba00  PUSH EAX
007cba01  CALL dword ptr [0x008901cc]
007cba07  PUSH 0x0
007cba09  PUSH 0x23c34600
007cba0e  MOV ECX,dword ptr [EBP + 0xffffff44]
007cba14  PUSH ECX
007cba15  MOV EDX,dword ptr [EBP + 0xffffff40]
007cba1b  PUSH EDX
007cba1c  CALL 0x007dcb40
007cba21  MOV dword ptr [EBP + 0xffffff3c],EAX
007cba27  MOV EAX,dword ptr [EBP + 0xffffff3c]
007cba2d  CMP EAX,dword ptr [0x009baaf0]
007cba33  JZ 0x007cba95
007cba35  LEA ECX,[EBP + 0xffffff48]
007cba3b  PUSH ECX
007cba3c  CALL dword ptr [0x008901c8]
007cba42  MOV dword ptr [EBP + 0xffffff38],EAX
007cba48  CMP dword ptr [EBP + 0xffffff38],-0x1
007cba4f  JZ 0x007cba80
007cba51  CMP dword ptr [EBP + 0xffffff38],0x2
007cba58  JNZ 0x007cba74
007cba5a  MOVZX EDX,word ptr [EBP + -0x1e]
007cba5e  TEST EDX,EDX
007cba60  JZ 0x007cba74
007cba62  CMP dword ptr [EBP + -0x10],0x0
007cba66  JZ 0x007cba74
007cba68  MOV dword ptr [0x00906770],0x1
007cba72  JMP 0x007cba7e
007cba74  MOV dword ptr [0x00906770],0x0
007cba7e  JMP 0x007cba8a
007cba80  MOV dword ptr [0x00906770],0xffffffff
007cba8a  MOV EAX,dword ptr [EBP + 0xffffff3c]
007cba90  MOV [0x009baaf0],EAX
007cba95  MOV ECX,dword ptr [EBP + 0x8]
007cba98  MOV DX,word ptr [0x00906770]
007cba9f  MOV word ptr [ECX + 0x8],DX
007cbaa3  PUSH 0x0
007cbaa5  PUSH 0x2710
007cbaaa  MOV EAX,dword ptr [EBP + 0xffffff44]
007cbab0  PUSH EAX
007cbab1  MOV ECX,dword ptr [EBP + 0xffffff40]
007cbab7  PUSH ECX
007cbab8  CALL 0x007dcb40
007cbabd  PUSH 0x0
007cbabf  PUSH 0x3e8
007cbac4  PUSH EDX
007cbac5  PUSH EAX
007cbac6  CALL 0x007dcac0
007cbacb  MOV EDX,dword ptr [EBP + 0x8]
007cbace  MOV word ptr [EDX + 0x4],AX
007cbad2  MOV EAX,dword ptr [EBP + 0xffffff40]
007cbad8  SUB EAX,0xd53e8000
007cbadd  MOV ECX,dword ptr [EBP + 0xffffff44]
007cbae3  SBB ECX,0x19db1de
007cbae9  PUSH 0x0
007cbaeb  PUSH 0x989680
007cbaf0  PUSH ECX
007cbaf1  PUSH EAX
007cbaf2  CALL 0x007dcb40
007cbaf7  MOV EDX,dword ptr [EBP + 0x8]
007cbafa  MOV dword ptr [EDX],EAX
007cbafc  MOV ECX,dword ptr [EBP + -0x4]
007cbaff  CALL 0x007d6cb0
007cbb04  MOV ESP,EBP
007cbb06  POP EBP
007cbb07  RET
