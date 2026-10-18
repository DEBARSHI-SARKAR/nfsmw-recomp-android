007cabc0  PUSH EBP
007cabc1  MOV EBP,ESP
007cabc3  SUB ESP,0x30
007cabc6  MOV EAX,dword ptr [EBP + 0x8]
007cabc9  MOV dword ptr [EBP + -0x8],EAX
007cabcc  MOV ECX,dword ptr [EBP + -0x8]
007cabcf  MOVZX EDX,byte ptr [ECX]
007cabd2  PUSH EDX
007cabd3  CALL 0x007ca8b0
007cabd8  ADD ESP,0x4
007cabdb  TEST EAX,EAX
007cabdd  JZ 0x007cabea
007cabdf  MOV EAX,dword ptr [EBP + -0x8]
007cabe2  ADD EAX,0x1
007cabe5  MOV dword ptr [EBP + -0x8],EAX
007cabe8  JMP 0x007cabcc
007cabea  PUSH 0x0
007cabec  PUSH 0x0
007cabee  MOV ECX,dword ptr [EBP + -0x8]
007cabf1  PUSH ECX
007cabf2  CALL 0x007d0cd0
007cabf7  ADD ESP,0x4
007cabfa  PUSH EAX
007cabfb  MOV EDX,dword ptr [EBP + -0x8]
007cabfe  PUSH EDX
007cabff  LEA EAX,[EBP + -0x30]
007cac02  PUSH EAX
007cac03  CALL 0x007dad40
007cac08  ADD ESP,0x14
007cac0b  MOV dword ptr [EBP + -0x14],EAX
007cac0e  CMP dword ptr [EBP + 0xc],0x0
007cac12  JZ 0x007cac22
007cac14  MOV ECX,dword ptr [EBP + -0x14]
007cac17  MOV EDX,dword ptr [EBP + -0x8]
007cac1a  ADD EDX,dword ptr [ECX + 0x4]
007cac1d  MOV EAX,dword ptr [EBP + 0xc]
007cac20  MOV dword ptr [EAX],EDX
007cac22  MOV ECX,dword ptr [EBP + -0x14]
007cac25  MOV EDX,dword ptr [ECX]
007cac27  MOV dword ptr [EBP + -0x4],EDX
007cac2a  MOV EAX,dword ptr [EBP + -0x4]
007cac2d  AND EAX,0x240
007cac32  JZ 0x007cac4d
007cac34  FLD double ptr [0x008942e0]
007cac3a  FSTP double ptr [EBP + -0x10]
007cac3d  CMP dword ptr [EBP + 0xc],0x0
007cac41  JZ 0x007cac4b
007cac43  MOV ECX,dword ptr [EBP + 0xc]
007cac46  MOV EDX,dword ptr [EBP + 0x8]
007cac49  MOV dword ptr [ECX],EDX
007cac4b  JMP 0x007cacae
007cac4d  MOV EAX,dword ptr [EBP + -0x4]
007cac50  AND EAX,0x81
007cac55  JZ 0x007cac85
007cac57  MOV ECX,dword ptr [EBP + -0x8]
007cac5a  MOVSX EDX,byte ptr [ECX]
007cac5d  CMP EDX,0x2d
007cac60  JNZ 0x007cac6f
007cac62  FLD double ptr [0x00906fe8]
007cac68  FCHS
007cac6a  FSTP double ptr [EBP + -0x10]
007cac6d  JMP 0x007cac78
007cac6f  FLD double ptr [0x00906fe8]
007cac75  FSTP double ptr [EBP + -0x10]
007cac78  CALL 0x007cb270
007cac7d  MOV dword ptr [EAX],0x22
007cac83  JMP 0x007cacae
007cac85  MOV EAX,dword ptr [EBP + -0x4]
007cac88  AND EAX,0x100
007cac8d  JZ 0x007caca5
007cac8f  FLD double ptr [0x008942e0]
007cac95  FSTP double ptr [EBP + -0x10]
007cac98  CALL 0x007cb270
007cac9d  MOV dword ptr [EAX],0x22
007caca3  JMP 0x007cacae
007caca5  MOV ECX,dword ptr [EBP + -0x14]
007caca8  FLD double ptr [ECX + 0x10]
007cacab  FSTP double ptr [EBP + -0x10]
007cacae  FLD double ptr [EBP + -0x10]
007cacb1  MOV ESP,EBP
007cacb3  POP EBP
007cacb4  RET
