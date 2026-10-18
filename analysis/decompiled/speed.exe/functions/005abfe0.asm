005abfe0  PUSH EBP
005abfe1  MOV EBP,ESP
005abfe3  SUB ESP,0x84
005abfe9  MOV dword ptr [EBP + -0x7c],ECX
005abfec  PUSH EAX
005abfed  MOV EAX,0xcfcecdcc
005abff2  MOV EAX,0x5abff2
005abff7  MOV EAX,0x1
005abffc  MOV EAX,0x0
005ac001  MOV EAX,0xcfcecdcc
005ac006  POP EAX
005ac007  LEA EAX,[EBP + 0x8]
005ac00a  PUSH EAX
005ac00b  LEA ECX,[EBP + -0x4]
005ac00e  PUSH ECX
005ac00f  CALL 0x005abd70
005ac014  MOV ECX,EAX
005ac016  CALL 0x0059c410
005ac01b  LEA EDX,[EBP + -0x18]
005ac01e  PUSH EDX
005ac01f  CALL 0x005abd70
005ac024  MOV ECX,EAX
005ac026  CALL 0x005942c0
005ac02b  PUSH EAX
005ac02c  LEA ECX,[EBP + -0x4]
005ac02f  CALL 0x00577790
005ac034  MOVZX EAX,AL
005ac037  TEST EAX,EAX
005ac039  JZ 0x005ac121
005ac03f  LEA ECX,[EBP + 0x8]
005ac042  PUSH ECX
005ac043  LEA EDX,[EBP + -0x8]
005ac046  PUSH EDX
005ac047  CALL 0x005abbc0
005ac04c  MOV ECX,EAX
005ac04e  CALL 0x0059c330
005ac053  LEA EAX,[EBP + -0x1c]
005ac056  PUSH EAX
005ac057  CALL 0x005abbc0
005ac05c  MOV ECX,EAX
005ac05e  CALL 0x005942a0
005ac063  PUSH EAX
005ac064  LEA ECX,[EBP + -0x8]
005ac067  CALL 0x0058aed0
005ac06c  MOVZX ECX,AL
005ac06f  TEST ECX,ECX
005ac071  JZ 0x005ac121
005ac077  LEA ECX,[EBP + -0x8]
005ac07a  CALL 0x005942d0
005ac07f  PUSH EAX
005ac080  LEA ECX,[EBP + -0x14]
005ac083  CALL 0x005790c0
005ac088  MOV EDX,dword ptr [EBP + -0x10]
005ac08b  MOV dword ptr [EBP + -0xc],EDX
005ac08e  MOV EAX,dword ptr [EBP + -0xc]
005ac091  CMP dword ptr [EAX + 0x30],0x0
005ac095  JNZ 0x005ac110
005ac097  MOV ECX,dword ptr [EBP + -0xc]
005ac09a  MOV EDX,dword ptr [ECX + 0x18]
005ac09d  MOV dword ptr [EBP + -0x80],EDX
005ac0a0  MOV EAX,dword ptr [EBP + -0x80]
005ac0a3  MOV dword ptr [EBP + 0xffffff7c],EAX
005ac0a9  CMP dword ptr [EBP + 0xffffff7c],0x0
005ac0b0  JZ 0x005ac0c6
005ac0b2  SUB dword ptr [EBP + 0xffffff7c],0x1
005ac0b9  JZ 0x005ac0d6
005ac0bb  SUB dword ptr [EBP + 0xffffff7c],0x1
005ac0c2  JZ 0x005ac0ee
005ac0c4  JMP 0x005ac104
005ac0c6  MOV ECX,dword ptr [EBP + -0xc]
005ac0c9  MOV EDX,dword ptr [ECX + 0x24]
005ac0cc  MOV EAX,dword ptr [EBP + -0xc]
005ac0cf  MOV ECX,dword ptr [EAX + 0x20]
005ac0d2  MOV dword ptr [EDX],ECX
005ac0d4  JMP 0x005ac104
005ac0d6  MOV EDX,dword ptr [EBP + -0xc]
005ac0d9  MOV EAX,dword ptr [EDX + 0x24]
005ac0dc  MOV ECX,dword ptr [EAX]
005ac0de  MOV EDX,dword ptr [EBP + -0xc]
005ac0e1  ADD ECX,dword ptr [EDX + 0x20]
005ac0e4  MOV EAX,dword ptr [EBP + -0xc]
005ac0e7  MOV EDX,dword ptr [EAX + 0x24]
005ac0ea  MOV dword ptr [EDX],ECX
005ac0ec  JMP 0x005ac104
005ac0ee  MOV EAX,dword ptr [EBP + -0xc]
005ac0f1  MOV ECX,dword ptr [EAX + 0x24]
005ac0f4  MOV EDX,dword ptr [EBP + -0xc]
005ac0f7  MOV EAX,dword ptr [ECX]
005ac0f9  SUB EAX,dword ptr [EDX + 0x20]
005ac0fc  MOV ECX,dword ptr [EBP + -0xc]
005ac0ff  MOV EDX,dword ptr [ECX + 0x24]
005ac102  MOV dword ptr [EDX],EAX
005ac104  MOV EAX,dword ptr [EBP + -0xc]
005ac107  MOV dword ptr [EAX + 0x30],0x1
005ac10e  JMP 0x005ac121
005ac110  XOR ECX,ECX
005ac112  MOV byte ptr [EBP + -0x1d],CL
005ac115  MOV EDX,dword ptr [EBP + 0x8]
005ac118  PUSH EDX
005ac119  LEA ECX,[EBP + -0x1d]
005ac11c  CALL 0x005abf80
005ac121  PUSH EAX
005ac122  MOV EAX,0xcfcecdcc
005ac127  MOV EAX,0x5abff2
005ac12c  MOV EAX,0x0
005ac131  MOV EAX,0x0
005ac136  MOV EAX,0xcecdcccb
005ac13b  POP EAX
005ac13c  MOV ESP,EBP
005ac13e  POP EBP
005ac13f  RET 0x4
