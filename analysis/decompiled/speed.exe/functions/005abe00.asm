005abe00  PUSH EBP
005abe01  MOV EBP,ESP
005abe03  SUB ESP,0xcc
005abe09  MOV dword ptr [EBP + 0xffffff34],ECX
005abe0f  PUSH EAX
005abe10  MOV EAX,0xcfcecdcc
005abe15  MOV EAX,0x5abe15
005abe1a  MOV EAX,0x1
005abe1f  MOV EAX,0x0
005abe24  MOV EAX,0xcfcecdcc
005abe29  POP EAX
005abe2a  MOV EAX,dword ptr [EBP + 0x8]
005abe2d  MOV ECX,dword ptr [EAX]
005abe2f  MOV dword ptr [EBP + -0x8],ECX
005abe32  MOV EDX,dword ptr [EBP + -0x8]
005abe35  ADD EDX,0x8
005abe38  PUSH EDX
005abe39  LEA EAX,[EBP + -0x4]
005abe3c  PUSH EAX
005abe3d  CALL 0x005abd70
005abe42  MOV ECX,EAX
005abe44  CALL 0x0059c410
005abe49  LEA ECX,[EBP + -0x28]
005abe4c  PUSH ECX
005abe4d  CALL 0x005abd70
005abe52  MOV ECX,EAX
005abe54  CALL 0x005942c0
005abe59  PUSH EAX
005abe5a  LEA ECX,[EBP + -0x4]
005abe5d  CALL 0x00577790
005abe62  MOVZX EDX,AL
005abe65  TEST EDX,EDX
005abe67  JZ 0x005abf5a
005abe6d  MOV EAX,dword ptr [EBP + 0x8]
005abe70  MOV ECX,dword ptr [EAX + 0x4]
005abe73  MOV dword ptr [EBP + -0xc],ECX
005abe76  MOV EDX,dword ptr [EBP + -0x8]
005abe79  MOV EAX,dword ptr [EDX + 0x28]
005abe7c  SHL EAX,0x2
005abe7f  PUSH EAX
005abe80  CALL 0x00652ad0
005abe85  ADD ESP,0x4
005abe88  MOV dword ptr [EBP + -0x2c],EAX
005abe8b  MOV ECX,dword ptr [EBP + -0xc]
005abe8e  MOV EDX,dword ptr [EBP + -0x2c]
005abe91  MOV dword ptr [ECX],EDX
005abe93  MOV EAX,dword ptr [EBP + -0x8]
005abe96  MOV ECX,dword ptr [EAX + 0x2c]
005abe99  MOV EDX,dword ptr [EBP + -0xc]
005abe9c  MOV EAX,dword ptr [EDX]
005abe9e  MOV EDX,dword ptr [EBP + -0x8]
005abea1  MOV EDX,dword ptr [EDX + 0x1c]
005abea4  MOV dword ptr [EAX + ECX*0x4],EDX
005abea7  MOV EAX,dword ptr [EBP + -0x8]
005abeaa  MOV ECX,dword ptr [EAX + 0x2c]
005abead  MOV EDX,dword ptr [EBP + -0xc]
005abeb0  MOV EAX,dword ptr [EDX]
005abeb2  LEA ECX,[EAX + ECX*0x4]
005abeb5  MOV EDX,dword ptr [EBP + -0x8]
005abeb8  MOV dword ptr [EDX + 0x24],ECX
005abebb  LEA EAX,[EBP + -0x8]
005abebe  PUSH EAX
005abebf  MOV ECX,dword ptr [EBP + -0x8]
005abec2  ADD ECX,0x8
005abec5  PUSH ECX
005abec6  LEA ECX,[EBP + -0x1c]
005abec9  CALL 0x005777a0
005abece  LEA EDX,[EBP + -0x1c]
005abed1  PUSH EDX
005abed2  LEA ECX,[EBP + -0x34]
005abed5  CALL 0x00579080
005abeda  LEA EAX,[EBP + -0x34]
005abedd  PUSH EAX
005abede  LEA ECX,[EBP + -0x3c]
005abee1  PUSH ECX
005abee2  CALL 0x005abbc0
005abee7  MOV ECX,EAX
005abee9  CALL 0x005aae30
005abeee  MOV EDX,dword ptr [EBP + -0x8]
005abef1  ADD EDX,0x8
005abef4  PUSH EDX
005abef5  MOV EAX,dword ptr [EBP + -0x8]
005abef8  ADD EAX,0x10
005abefb  PUSH EAX
005abefc  LEA ECX,[EBP + -0x24]
005abeff  CALL 0x00577770
005abf04  LEA ECX,[EBP + -0x24]
005abf07  PUSH ECX
005abf08  LEA ECX,[EBP + -0x44]
005abf0b  CALL 0x005790a0
005abf10  LEA EDX,[EBP + -0x44]
005abf13  PUSH EDX
005abf14  LEA EAX,[EBP + -0x4c]
005abf17  PUSH EAX
005abf18  CALL 0x005abce0
005abf1d  MOV ECX,EAX
005abf1f  CALL 0x005aaef0
005abf24  MOV ECX,dword ptr [EBP + -0x8]
005abf27  ADD ECX,0x8
005abf2a  PUSH ECX
005abf2b  MOV EDX,dword ptr [EBP + -0x8]
005abf2e  ADD EDX,0x14
005abf31  PUSH EDX
005abf32  LEA ECX,[EBP + -0x14]
005abf35  CALL 0x00577770
005abf3a  LEA EAX,[EBP + -0x14]
005abf3d  PUSH EAX
005abf3e  LEA ECX,[EBP + -0x54]
005abf41  CALL 0x005790a0
005abf46  LEA ECX,[EBP + -0x54]
005abf49  PUSH ECX
005abf4a  LEA EDX,[EBP + -0x5c]
005abf4d  PUSH EDX
005abf4e  CALL 0x005abc50
005abf53  MOV ECX,EAX
005abf55  CALL 0x005aaef0
005abf5a  PUSH EAX
005abf5b  MOV EAX,0xcfcecdcc
005abf60  MOV EAX,0x5abe15
005abf65  MOV EAX,0x0
005abf6a  MOV EAX,0x0
005abf6f  MOV EAX,0xcecdcccb
005abf74  POP EAX
005abf75  MOV ESP,EBP
005abf77  POP EBP
005abf78  RET 0x4
