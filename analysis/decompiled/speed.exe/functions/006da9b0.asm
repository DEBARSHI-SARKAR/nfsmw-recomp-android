006da9b0  PUSH EBP
006da9b1  MOV EBP,ESP
006da9b3  AND ESP,0xfffffff0
006da9b6  SUB ESP,0x2b4
006da9bc  MOV dword ptr [ESP + 0x1c],ECX
006da9c0  MOV ECX,dword ptr [EBP + 0x8]
006da9c3  MOV EAX,dword ptr [ECX + 0x8]
006da9c6  CMP EAX,0x90f70174
006da9cb  PUSH EBX
006da9cc  PUSH ESI
006da9cd  PUSH EDI
006da9ce  JZ 0x006dadd2
006da9d4  CMP EAX,0xed85ba82
006da9d9  JNZ 0x006da9ed
006da9db  MOV EAX,[0x0093dec4]
006da9e0  MOV DL,byte ptr [EAX + 0x40]
006da9e3  TEST DL,DL
006da9e5  JZ 0x006dadd2
006da9eb  JMP 0x006daa05
006da9ed  CMP EAX,0xbe43edbb
006da9f2  JNZ 0x006daa05
006da9f4  MOV EDX,dword ptr [0x0093dec4]
006da9fa  MOV AL,byte ptr [EDX + 0x40]
006da9fd  TEST AL,AL
006da9ff  JNZ 0x006dadd2
006daa05  MOV ESI,dword ptr [ECX + 0xc]
006daa08  TEST ESI,ESI
006daa0a  MOV dword ptr [ESP + 0x18],ESI
006daa0e  JZ 0x006dadd2
006daa14  MOV EDI,dword ptr [ESI]
006daa16  MOV EAX,dword ptr [EDI + 0x28]
006daa19  TEST EAX,EAX
006daa1b  MOV dword ptr [ESP + 0x2c],EDI
006daa1f  JZ 0x006dadd2
006daa25  MOV EBX,dword ptr [EBP + 0xc]
006daa28  PUSH EBX
006daa29  PUSH ESI
006daa2a  PUSH ECX
006daa2b  CALL 0x0073d3c0
006daa30  MOV EAX,[0x00982b38]
006daa35  ADD ESP,0xc
006daa38  TEST EAX,EAX
006daa3a  JZ 0x006daa93
006daa3c  LEA EAX,[ESP + 0x50]
006daa40  PUSH EAX
006daa41  LEA ECX,[ESP + 0x34]
006daa45  PUSH ECX
006daa46  MOV ECX,ESI
006daa48  CALL 0x004fb8f0
006daa4d  MOV EDX,dword ptr [0x00982d04]
006daa53  PUSH EDX
006daa54  PUSH EBX
006daa55  LEA EAX,[ESP + 0x88]
006daa5c  PUSH EAX
006daa5d  CALL 0x007e7d5e
006daa62  LEA ECX,[ESP + 0x50]
006daa66  PUSH ECX
006daa67  LEA EDX,[ESP + 0x34]
006daa6b  PUSH EDX
006daa6c  LEA EAX,[ESP + 0x88]
006daa73  PUSH EAX
006daa74  CALL 0x006be800
006daa79  LEA ECX,[ESP + 0x5c]
006daa7d  PUSH ECX
006daa7e  LEA EDX,[ESP + 0x40]
006daa82  PUSH EDX
006daa83  CALL 0x006d7a40
006daa88  ADD ESP,0x14
006daa8b  TEST AL,AL
006daa8d  JZ 0x006dadd2
006daa93  MOV ESI,dword ptr [EBP + 0x8]
006daa96  MOV EAX,dword ptr [ESI + 0x10]
006daa99  TEST EAX,EAX
006daa9b  JZ 0x006daaac
006daa9d  LEA EAX,[ESP + 0xc0]
006daaa4  PUSH EAX
006daaa5  MOV ECX,ESI
006daaa7  CALL 0x00504f70
006daaac  MOV EDX,dword ptr [EDI + 0x10]
006daaaf  XOR ECX,ECX
006daab1  XOR EAX,EAX
006daab3  CMP EDX,ECX
006daab5  MOV dword ptr [ESP + 0x14],EAX
006daab9  MOV dword ptr [ESP + 0x1c],ECX
006daabd  MOV dword ptr [ESP + 0x24],0xffffffff
006daac5  MOV dword ptr [ESP + 0x20],ECX
006daac9  JLE 0x006dad52
006daacf  MOV EAX,dword ptr [EBP + 0x14]
006daad2  AND EAX,0x4
006daad5  MOV dword ptr [ESP + 0x4c],EAX
006daad9  MOV dword ptr [ESP + 0xc],ECX
006daadd  JMP 0x006daaf0
006daadf  MOV EAX,dword ptr [ESP + 0x4c]
006daae3  MOV EDI,dword ptr [ESP + 0x2c]
006daae7  JMP 0x006daaf0
006daaf0  MOV ESI,dword ptr [EDI + 0x14]
006daaf3  MOV EDX,dword ptr [ESP + 0xc]
006daaf7  MOV EDI,dword ptr [ESI + EDX*0x1 + 0x34]
006daafb  ADD ESI,EDX
006daafd  TEST EAX,EAX
006daaff  JNZ 0x006dab1e
006dab01  TEST byte ptr [ESI + 0x38],0x1
006dab05  JNZ 0x006dab1e
006dab07  PUSH EBX
006dab08  LEA ECX,[ESI + 0xc]
006dab0b  PUSH ECX
006dab0c  MOV ECX,dword ptr [ESP + 0x30]
006dab10  PUSH ESI
006dab11  CALL 0x006cf2b0
006dab16  TEST EAX,EAX
006dab18  JZ 0x006dad24
006dab1e  MOV EAX,[0x00982b38]
006dab23  TEST EAX,EAX
006dab25  JZ 0x006dab96
006dab27  MOV EDX,dword ptr [ESI]
006dab29  MOV EAX,dword ptr [ESI + 0x4]
006dab2c  MOV ECX,dword ptr [ESI + 0x8]
006dab2f  MOV dword ptr [ESP + 0x50],EDX
006dab33  MOV EDX,dword ptr [ESI + 0xc]
006dab36  MOV dword ptr [ESP + 0x54],EAX
006dab3a  MOV EAX,dword ptr [ESI + 0x10]
006dab3d  MOV dword ptr [ESP + 0x30],EDX
006dab41  MOV EDX,dword ptr [0x00982d04]
006dab47  PUSH EDX
006dab48  MOV dword ptr [ESP + 0x38],EAX
006dab4c  MOV dword ptr [ESP + 0x5c],ECX
006dab50  MOV ECX,dword ptr [ESI + 0x14]
006dab53  PUSH EBX
006dab54  LEA EAX,[ESP + 0x88]
006dab5b  PUSH EAX
006dab5c  MOV dword ptr [ESP + 0x44],ECX
006dab60  CALL 0x007e7d5e
006dab65  LEA ECX,[ESP + 0x30]
006dab69  PUSH ECX
006dab6a  LEA EDX,[ESP + 0x54]
006dab6e  PUSH EDX
006dab6f  LEA EAX,[ESP + 0x88]
006dab76  PUSH EAX
006dab77  CALL 0x006be800
006dab7c  LEA ECX,[ESP + 0x3c]
006dab80  PUSH ECX
006dab81  LEA EDX,[ESP + 0x60]
006dab85  PUSH EDX
006dab86  CALL 0x006d7a40
006dab8b  ADD ESP,0x14
006dab8e  TEST AL,AL
006dab90  JZ 0x006dad24
006dab96  MOV EAX,[0x00982a20]
006dab9b  MOV EAX,dword ptr [EAX]
006dab9d  CMP EAX,0x4
006daba0  JNZ 0x006dabd4
006daba2  CMP dword ptr [EDI + 0x4],0x4
006daba6  JNZ 0x006dabae
006daba8  MOV EDI,dword ptr [0x0093ded4]
006dabae  MOV EAX,dword ptr [EDI + 0x4]
006dabb1  TEST EAX,EAX
006dabb3  JNZ 0x006dabbd
006dabb5  MOV EDI,dword ptr [0x0093de98]
006dabbb  JMP 0x006dabfc
006dabbd  CMP EAX,0x3
006dabc0  JZ 0x006dabf6
006dabc2  CMP EAX,0x1
006dabc5  JZ 0x006dabf6
006dabc7  CMP EAX,0x5
006dabca  JNZ 0x006dabfc
006dabcc  MOV EDI,dword ptr [0x0093de98]
006dabd2  JMP 0x006dabfc
006dabd4  TEST EAX,EAX
006dabd6  JZ 0x006dabfc
006dabd8  MOV EAX,dword ptr [EDI + 0x4]
006dabdb  CMP EAX,0x4
006dabde  JZ 0x006dabfc
006dabe0  TEST EAX,EAX
006dabe2  JNZ 0x006dabec
006dabe4  MOV EDI,dword ptr [0x0093de98]
006dabea  JMP 0x006dabfc
006dabec  CMP EAX,0x3
006dabef  JZ 0x006dabf6
006dabf1  CMP EAX,0x1
006dabf4  JNZ 0x006dabfc
006dabf6  MOV EDI,dword ptr [0x0093def0]
006dabfc  TEST dword ptr [EBP + 0x14],0x20000
006dac03  JZ 0x006dac17
006dac05  MOV EAX,dword ptr [EDI + 0x4]
006dac08  TEST EAX,EAX
006dac0a  JZ 0x006dac11
006dac0c  CMP EAX,0x8
006dac0f  JNZ 0x006dac17
006dac11  MOV EDI,dword ptr [0x0093ded0]
006dac17  MOVZX EDX,byte ptr [ESI + 0x18]
006dac1b  MOV ECX,dword ptr [ESP + 0x18]
006dac1f  MOV EAX,dword ptr [ECX + 0x2c]
006dac22  MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
006dac26  MOV dword ptr [ESP + 0x6c],ECX
006dac2a  MOVZX EDX,byte ptr [ESI + 0x19]
006dac2e  MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
006dac32  MOV dword ptr [ESP + 0x70],ECX
006dac36  MOVZX EDX,byte ptr [ESI + 0x1a]
006dac3a  MOV EDX,dword ptr [EAX + EDX*0x8 + 0x4]
006dac3e  MOV dword ptr [ESP + 0x74],EDX
006dac42  MOVZX EBX,byte ptr [ESI + 0x1b]
006dac46  MOV EBX,dword ptr [EAX + EBX*0x8 + 0x4]
006dac4a  MOV dword ptr [ESP + 0x78],EBX
006dac4e  MOVZX EBX,byte ptr [ESI + 0x1c]
006dac52  MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
006dac56  MOV EBX,dword ptr [ESP + 0x78]
006dac5a  TEST EBX,EBX
006dac5c  SETZ BL
006dac5f  TEST EDX,EDX
006dac61  SETZ DL
006dac64  OR BL,DL
006dac66  TEST ECX,ECX
006dac68  SETZ CL
006dac6b  OR BL,CL
006dac6d  TEST EAX,EAX
006dac6f  SETZ DL
006dac72  MOV dword ptr [ESP + 0x7c],EAX
006dac76  MOV EAX,dword ptr [ESP + 0x6c]
006dac7a  OR BL,DL
006dac7c  TEST EAX,EAX
006dac7e  SETZ CL
006dac81  OR BL,CL
006dac83  MOV byte ptr [ESP + 0x13],BL
006dac87  JNZ 0x006dac90
006dac89  MOV ECX,dword ptr [EDI + 0x10]
006dac8c  TEST ECX,ECX
006dac8e  JNZ 0x006daca0
006dac90  CMP dword ptr [EDI + 0x4],0x5
006dac94  JNZ 0x006dad21
006dac9a  MOV EDI,dword ptr [0x0093de78]
006daca0  MOV EDX,dword ptr [EAX + 0x24]
006daca3  CMP EDX,dword ptr [0x00982d40]
006daca9  JZ 0x006dad21
006dacab  MOV EDX,dword ptr [ESP + 0x14]
006dacaf  MOV EAX,dword ptr [EDI + 0x4]
006dacb2  MOV ECX,dword ptr [ESP + 0x24]
006dacb6  INC EDX
006dacb7  CMP EAX,ECX
006dacb9  MOV dword ptr [ESP + 0x14],EDX
006dacbd  JZ 0x006dacc7
006dacbf  INC dword ptr [ESP + 0x1c]
006dacc3  MOV dword ptr [ESP + 0x24],EAX
006dacc7  MOV AL,byte ptr [ESI + 0x1d]
006dacca  CMP AL,0xff
006daccc  JZ 0x006dacde
006dacce  MOV ECX,dword ptr [ESP + 0x18]
006dacd2  MOV EDX,dword ptr [ECX + 0x3c]
006dacd5  MOVZX EAX,AL
006dacd8  MOV EAX,dword ptr [EDX + EAX*0x8 + 0x4]
006dacdc  JMP 0x006dace3
006dacde  CALL 0x004fca10
006dace3  CMP dword ptr [EDI + 0x4],0x4
006dace7  JNZ 0x006dacfa
006dace9  MOV ECX,dword ptr [EBP + 0x10]
006dacec  TEST ECX,ECX
006dacee  JNZ 0x006dacfa
006dacf0  MOV ECX,dword ptr [ESP + 0x28]
006dacf4  MOV EDX,dword ptr [ECX + 0x5c]
006dacf7  MOV dword ptr [EBP + 0x10],EDX
006dacfa  MOV ECX,dword ptr [EBP + 0x18]
006dacfd  MOV EDX,dword ptr [EBP + 0x10]
006dad00  MOV EBX,dword ptr [EBP + 0xc]
006dad03  PUSH ECX
006dad04  MOV ECX,dword ptr [EBP + 0x14]
006dad07  PUSH EAX
006dad08  PUSH EDX
006dad09  MOV EDX,dword ptr [ESP + 0x24]
006dad0d  PUSH EBX
006dad0e  LEA EAX,[ESP + 0x7c]
006dad12  PUSH EAX
006dad13  PUSH EDI
006dad14  PUSH ECX
006dad15  PUSH EDX
006dad16  PUSH ESI
006dad17  CALL 0x006e0ab0
006dad1c  ADD ESP,0x24
006dad1f  JMP 0x006dad24
006dad21  MOV EBX,dword ptr [EBP + 0xc]
006dad24  MOV EAX,dword ptr [ESP + 0x20]
006dad28  MOV ESI,dword ptr [ESP + 0xc]
006dad2c  MOV ECX,dword ptr [ESP + 0x2c]
006dad30  MOV EDX,dword ptr [ECX + 0x10]
006dad33  INC EAX
006dad34  ADD ESI,0x68
006dad37  CMP EAX,EDX
006dad39  MOV dword ptr [ESP + 0x20],EAX
006dad3d  MOV dword ptr [ESP + 0xc],ESI
006dad41  JL 0x006daadf
006dad47  MOV EAX,dword ptr [ESP + 0x14]
006dad4b  MOV ECX,dword ptr [ESP + 0x1c]
006dad4f  MOV ESI,dword ptr [EBP + 0x8]
006dad52  MOV EBX,dword ptr [0x00982b90]
006dad58  MOV EDI,dword ptr [0x00982b98]
006dad5e  ADD EBX,EAX
006dad60  ADD EDI,ECX
006dad62  TEST EAX,EAX
006dad64  MOV dword ptr [0x00982b90],EBX
006dad6a  MOV dword ptr [0x00982b98],EDI
006dad70  JLE 0x006dad78
006dad72  INC dword ptr [0x00982b94]
006dad78  CMP EAX,0x7
006dad7b  JGE 0x006dad86
006dad7d  INC dword ptr [EAX*0x4 + 0x9828a0]
006dad84  JMP 0x006dad8c
006dad86  INC dword ptr [0x009828bc]
006dad8c  CMP ECX,0x7
006dad8f  JGE 0x006dadb8
006dad91  MOV EAX,dword ptr [ECX*0x4 + 0x93de38]
006dad98  INC EAX
006dad99  LEA EDX,[ESP + 0xc0]
006dada0  MOV dword ptr [ECX*0x4 + 0x93de38],EAX
006dada7  PUSH EDX
006dada8  MOV ECX,ESI
006dadaa  CALL 0x004fb710
006dadaf  POP EDI
006dadb0  POP ESI
006dadb1  POP EBX
006dadb2  MOV ESP,EBP
006dadb4  POP EBP
006dadb5  RET 0x14
006dadb8  MOV EAX,[0x0093de54]
006dadbd  LEA EDX,[ESP + 0xc0]
006dadc4  INC EAX
006dadc5  PUSH EDX
006dadc6  MOV ECX,ESI
006dadc8  MOV [0x0093de54],EAX
006dadcd  CALL 0x004fb710
006dadd2  POP EDI
006dadd3  POP ESI
006dadd4  POP EBX
006dadd5  MOV ESP,EBP
006dadd7  POP EBP
006dadd8  RET 0x14
