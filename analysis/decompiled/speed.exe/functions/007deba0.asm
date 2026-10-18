007deba0  PUSH EBP
007deba1  MOV EBP,ESP
007deba3  SUB ESP,0x2c
007deba6  MOV EAX,[0x00906980]
007debab  MOV dword ptr [EBP + -0x4],EAX
007debae  LEA EAX,[EBP + 0x8]
007debb1  PUSH EAX
007debb2  LEA ECX,[EBP + -0x2c]
007debb5  PUSH ECX
007debb6  CALL 0x007dec30
007debbb  ADD ESP,0x8
007debbe  LEA EDX,[EBP + -0x20]
007debc1  PUSH EDX
007debc2  PUSH 0x0
007debc4  PUSH 0x11
007debc6  SUB ESP,0xc
007debc9  MOV EAX,ESP
007debcb  MOV ECX,dword ptr [EBP + -0x2c]
007debce  MOV dword ptr [EAX],ECX
007debd0  MOV EDX,dword ptr [EBP + -0x28]
007debd3  MOV dword ptr [EAX + 0x4],EDX
007debd6  MOV CX,word ptr [EBP + -0x24]
007debda  MOV word ptr [EAX + 0x8],CX
007debde  CALL 0x007e5ea0
007debe3  ADD ESP,0x18
007debe6  MOV EDX,dword ptr [EBP + 0x10]
007debe9  MOV dword ptr [EDX + 0x8],EAX
007debec  MOVSX EAX,byte ptr [EBP + -0x1e]
007debf0  MOV ECX,dword ptr [EBP + 0x10]
007debf3  MOV dword ptr [ECX],EAX
007debf5  MOVSX EDX,word ptr [EBP + -0x20]
007debf9  MOV EAX,dword ptr [EBP + 0x10]
007debfc  MOV dword ptr [EAX + 0x4],EDX
007debff  LEA ECX,[EBP + -0x1c]
007dec02  PUSH ECX
007dec03  MOV EDX,dword ptr [EBP + 0x14]
007dec06  PUSH EDX
007dec07  CALL 0x007d0bd0
007dec0c  ADD ESP,0x8
007dec0f  MOV EAX,dword ptr [EBP + 0x10]
007dec12  MOV ECX,dword ptr [EBP + 0x14]
007dec15  MOV dword ptr [EAX + 0xc],ECX
007dec18  MOV EAX,dword ptr [EBP + 0x10]
007dec1b  MOV ECX,dword ptr [EBP + -0x4]
007dec1e  CALL 0x007d6cb0
007dec23  MOV ESP,EBP
007dec25  POP EBP
007dec26  RET
