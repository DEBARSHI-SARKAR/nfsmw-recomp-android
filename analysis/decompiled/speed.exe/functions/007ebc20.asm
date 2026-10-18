007ebc20  PUSH EBP
007ebc21  MOV EBP,ESP
007ebc23  PUSH ECX
007ebc24  MOV EAX,dword ptr [EBP + 0x8]
007ebc27  PUSH EBX
007ebc28  MOV EBX,dword ptr [EAX + 0x4]
007ebc2b  PUSH ESI
007ebc2c  PUSH EDI
007ebc2d  XOR EDI,EDI
007ebc2f  XOR ESI,ESI
007ebc31  TEST ECX,ECX
007ebc33  MOV dword ptr [EBP + -0x4],ECX
007ebc36  JZ 0x007ebe88
007ebc3c  LEA ESP,[ESP]
007ebc40  CALL 0x007e8ca0
007ebc45  CMP EAX,0x10
007ebc48  JG 0x007ebd5d
007ebc4e  JZ 0x007ebd0c
007ebc54  DEC EAX
007ebc55  JZ 0x007ebe65
007ebc5b  DEC EAX
007ebc5c  JZ 0x007ebcb8
007ebc5e  SUB EAX,0x2
007ebc61  JNZ 0x007ebe7d
007ebc67  MOV EAX,EBX
007ebc69  AND EAX,0x4
007ebc6c  JZ 0x007ebc7c
007ebc6e  CMP dword ptr [EBP + 0xc],0x2
007ebc72  JNZ 0x007ebc7c
007ebc74  AND EBX,0xfffffffb
007ebc77  JMP 0x007ebe65
007ebc7c  TEST EDI,EDI
007ebc7e  JZ 0x007ebc86
007ebc80  ADD ESI,0xf
007ebc83  AND ESI,0xfffffff0
007ebc86  TEST EAX,EAX
007ebc88  JZ 0x007ebca6
007ebc8a  CMP dword ptr [EBP + 0xc],0x3
007ebc8e  JNZ 0x007ebca6
007ebc90  MOV ECX,dword ptr [EBP + 0x8]
007ebc93  PUSH ECX
007ebc94  CALL 0x007e9d50
007ebc99  ADD ESP,0x4
007ebc9c  ADD ESI,EAX
007ebc9e  AND EBX,0xfffffffb
007ebca1  JMP 0x007ebe65
007ebca6  MOV EDX,dword ptr [EBP + -0x4]
007ebca9  MOV EAX,dword ptr [EDX + 0xc]
007ebcac  LEA ESI,[ESI + EAX*0x1 + 0x20]
007ebcb0  AND EBX,0xfffffffb
007ebcb3  JMP 0x007ebe65
007ebcb8  MOV EAX,EBX
007ebcba  AND EAX,0x2
007ebcbd  JZ 0x007ebccd
007ebcbf  CMP dword ptr [EBP + 0xc],0x2
007ebcc3  JNZ 0x007ebccd
007ebcc5  AND EBX,0xfffffffd
007ebcc8  JMP 0x007ebe65
007ebccd  TEST EDI,EDI
007ebccf  JZ 0x007ebcda
007ebcd1  ADD ESI,0x7f
007ebcd4  AND ESI,0xffffff80
007ebcd7  SUB ESI,0x20
007ebcda  TEST EAX,EAX
007ebcdc  JZ 0x007ebcfa
007ebcde  CMP dword ptr [EBP + 0xc],0x3
007ebce2  JNZ 0x007ebcfa
007ebce4  MOV ECX,dword ptr [EBP + 0x8]
007ebce7  PUSH ECX
007ebce8  CALL 0x007e9bf0
007ebced  ADD ESP,0x4
007ebcf0  ADD ESI,EAX
007ebcf2  AND EBX,0xfffffffd
007ebcf5  JMP 0x007ebe65
007ebcfa  MOV EDX,dword ptr [EBP + -0x4]
007ebcfd  MOV EAX,dword ptr [EDX + 0xc]
007ebd00  LEA ESI,[ESI + EAX*0x1 + 0x20]
007ebd04  AND EBX,0xfffffffd
007ebd07  JMP 0x007ebe65
007ebd0c  MOV EAX,EBX
007ebd0e  AND EAX,0x10
007ebd11  JZ 0x007ebd21
007ebd13  CMP dword ptr [EBP + 0xc],0x2
007ebd17  JNZ 0x007ebd21
007ebd19  AND EBX,0xffffffef
007ebd1c  JMP 0x007ebe65
007ebd21  TEST EDI,EDI
007ebd23  JZ 0x007ebd2b
007ebd25  ADD ESI,0xf
007ebd28  AND ESI,0xfffffff0
007ebd2b  TEST EAX,EAX
007ebd2d  JZ 0x007ebd4b
007ebd2f  CMP dword ptr [EBP + 0xc],0x3
007ebd33  JNZ 0x007ebd4b
007ebd35  MOV ECX,dword ptr [EBP + 0x8]
007ebd38  PUSH ECX
007ebd39  CALL 0x007e9e20
007ebd3e  ADD ESP,0x4
007ebd41  ADD ESI,EAX
007ebd43  AND EBX,0xffffffef
007ebd46  JMP 0x007ebe65
007ebd4b  MOV EDX,dword ptr [EBP + -0x4]
007ebd4e  MOV EAX,dword ptr [EDX + 0xc]
007ebd51  LEA ESI,[ESI + EAX*0x1 + 0x20]
007ebd55  AND EBX,0xffffffef
007ebd58  JMP 0x007ebe65
007ebd5d  SUB EAX,0x20
007ebd60  JZ 0x007ebe26
007ebd66  SUB EAX,0x60
007ebd69  JZ 0x007ebdd2
007ebd6b  SUB EAX,0x80
007ebd70  JNZ 0x007ebe7d
007ebd76  MOV EAX,EBX
007ebd78  AND EAX,0x100
007ebd7d  JZ 0x007ebd90
007ebd7f  CMP dword ptr [EBP + 0xc],0x2
007ebd83  JNZ 0x007ebd90
007ebd85  AND EBX,0xfffffeff
007ebd8b  JMP 0x007ebe65
007ebd90  TEST EDI,EDI
007ebd92  JZ 0x007ebd9a
007ebd94  ADD ESI,0xf
007ebd97  AND ESI,0xfffffff0
007ebd9a  TEST EAX,EAX
007ebd9c  JZ 0x007ebdbd
007ebd9e  CMP dword ptr [EBP + 0xc],0x3
007ebda2  JNZ 0x007ebdbd
007ebda4  MOV ECX,dword ptr [EBP + 0x8]
007ebda7  PUSH ECX
007ebda8  CALL 0x007e9dd0
007ebdad  ADD ESP,0x4
007ebdb0  ADD ESI,EAX
007ebdb2  AND EBX,0xfffffeff
007ebdb8  JMP 0x007ebe65
007ebdbd  MOV ECX,dword ptr [EBP + -0x4]
007ebdc0  CALL 0x007ebab0
007ebdc5  ADD ESI,EAX
007ebdc7  AND EBX,0xfffffeff
007ebdcd  JMP 0x007ebe65
007ebdd2  MOV EAX,EBX
007ebdd4  AND EAX,0x80
007ebdd9  JZ 0x007ebde9
007ebddb  CMP dword ptr [EBP + 0xc],0x2
007ebddf  JNZ 0x007ebde9
007ebde1  AND EBX,0xffffff7f
007ebde7  JMP 0x007ebe65
007ebde9  TEST EDI,EDI
007ebdeb  JZ 0x007ebdf4
007ebded  DEC ESI
007ebdee  AND ESI,0xfffffff0
007ebdf1  ADD ESI,0x10
007ebdf4  TEST EAX,EAX
007ebdf6  JZ 0x007ebe14
007ebdf8  CMP dword ptr [EBP + 0xc],0x3
007ebdfc  JNZ 0x007ebe14
007ebdfe  MOV EDX,dword ptr [EBP + 0x8]
007ebe01  PUSH EDX
007ebe02  CALL 0x007e9e00
007ebe07  ADD ESP,0x4
007ebe0a  ADD ESI,EAX
007ebe0c  AND EBX,0xffffff7f
007ebe12  JMP 0x007ebe65
007ebe14  MOV EAX,dword ptr [EBP + -0x4]
007ebe17  MOV ECX,dword ptr [EAX + 0xc]
007ebe1a  LEA ESI,[ESI + ECX*0x1 + 0x10]
007ebe1e  AND EBX,0xffffff7f
007ebe24  JMP 0x007ebe65
007ebe26  MOV EAX,EBX
007ebe28  AND EAX,0x20
007ebe2b  JZ 0x007ebe33
007ebe2d  CMP dword ptr [EBP + 0xc],0x2
007ebe31  JZ 0x007ebe62
007ebe33  TEST EDI,EDI
007ebe35  JZ 0x007ebe3e
007ebe37  DEC ESI
007ebe38  AND ESI,0xfffffff0
007ebe3b  ADD ESI,0x10
007ebe3e  TEST EAX,EAX
007ebe40  JZ 0x007ebe58
007ebe42  CMP dword ptr [EBP + 0xc],0x3
007ebe46  JNZ 0x007ebe58
007ebe48  MOV EDX,dword ptr [EBP + 0x8]
007ebe4b  PUSH EDX
007ebe4c  CALL 0x007e9de0
007ebe51  ADD ESP,0x4
007ebe54  ADD ESI,EAX
007ebe56  JMP 0x007ebe62
007ebe58  MOV EAX,dword ptr [EBP + -0x4]
007ebe5b  MOV ECX,dword ptr [EAX + 0xc]
007ebe5e  LEA ESI,[ESI + ECX*0x1 + 0x10]
007ebe62  AND EBX,0xffffffdf
007ebe65  MOV ECX,dword ptr [EBP + -0x4]
007ebe68  MOV EAX,dword ptr [ECX + 0x4]
007ebe6b  TEST EAX,EAX
007ebe6d  MOV EDI,ECX
007ebe6f  JZ 0x007ebe88
007ebe71  ADD ECX,EAX
007ebe73  MOV dword ptr [EBP + -0x4],ECX
007ebe76  JZ 0x007ebe88
007ebe78  JMP 0x007ebc40
007ebe7d  POP EDI
007ebe7e  POP ESI
007ebe7f  XOR EAX,EAX
007ebe81  POP EBX
007ebe82  MOV ESP,EBP
007ebe84  POP EBP
007ebe85  RET 0x8
007ebe88  MOV EAX,dword ptr [EBP + 0xc]
007ebe8b  CMP EAX,0x3
007ebe8e  JZ 0x007ebe99
007ebe90  CMP EAX,0x1
007ebe93  JNZ 0x007ebf37
007ebe99  TEST BL,0x2
007ebe9c  JZ 0x007ebeb4
007ebe9e  MOV EDX,dword ptr [EBP + 0x8]
007ebea1  PUSH EDX
007ebea2  CALL 0x007e9bf0
007ebea7  ADD ESI,0x7f
007ebeaa  ADD ESP,0x4
007ebead  AND ESI,0xffffff80
007ebeb0  LEA ESI,[EAX + ESI*0x1 + -0x20]
007ebeb4  TEST BL,0x4
007ebeb7  JZ 0x007ebecd
007ebeb9  MOV EAX,dword ptr [EBP + 0x8]
007ebebc  PUSH EAX
007ebebd  CALL 0x007e9d50
007ebec2  ADD ESI,0xf
007ebec5  AND ESI,0xfffffff0
007ebec8  ADD ESP,0x4
007ebecb  ADD ESI,EAX
007ebecd  TEST BH,0x1
007ebed0  JZ 0x007ebee6
007ebed2  MOV ECX,dword ptr [EBP + 0x8]
007ebed5  PUSH ECX
007ebed6  CALL 0x007e9dd0
007ebedb  ADD ESI,0xf
007ebede  AND ESI,0xfffffff0
007ebee1  ADD ESP,0x4
007ebee4  ADD ESI,EAX
007ebee6  TEST BL,0x10
007ebee9  JZ 0x007ebeff
007ebeeb  MOV EDX,dword ptr [EBP + 0x8]
007ebeee  PUSH EDX
007ebeef  CALL 0x007e9e20
007ebef4  ADD ESI,0xf
007ebef7  AND ESI,0xfffffff0
007ebefa  ADD ESP,0x4
007ebefd  ADD ESI,EAX
007ebeff  MOV EAX,EBX
007ebf01  AND EAX,0x80
007ebf06  CMP AL,0x80
007ebf08  JNZ 0x007ebf1e
007ebf0a  MOV ECX,dword ptr [EBP + 0x8]
007ebf0d  PUSH ECX
007ebf0e  CALL 0x007e9e00
007ebf13  ADD ESP,0x4
007ebf16  DEC ESI
007ebf17  AND ESI,0xfffffff0
007ebf1a  LEA ESI,[EAX + ESI*0x1 + 0x10]
007ebf1e  TEST BL,0x20
007ebf21  JZ 0x007ebf37
007ebf23  MOV EDX,dword ptr [EBP + 0x8]
007ebf26  PUSH EDX
007ebf27  CALL 0x007e9de0
007ebf2c  ADD ESP,0x4
007ebf2f  DEC ESI
007ebf30  AND ESI,0xfffffff0
007ebf33  LEA ESI,[EAX + ESI*0x1 + 0x10]
007ebf37  POP EDI
007ebf38  MOV EAX,ESI
007ebf3a  POP ESI
007ebf3b  POP EBX
007ebf3c  MOV ESP,EBP
007ebf3e  POP EBP
007ebf3f  RET 0x8
