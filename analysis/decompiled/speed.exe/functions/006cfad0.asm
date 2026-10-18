006cfad0  MOV EAX,[0x00982b44]
006cfad5  TEST EAX,EAX
006cfad7  MOV ECX,dword ptr [0x00982b3c]
006cfadd  JZ 0x006cfaee
006cfadf  CMP dword ptr [0x00982b40],EAX
006cfae5  JZ 0x006cfafc
006cfae7  MOV [0x00982b40],EAX
006cfaec  JMP 0x006cfafc
006cfaee  CMP dword ptr [0x00982b40],ECX
006cfaf4  JZ 0x006cfafc
006cfaf6  MOV dword ptr [0x00982b40],ECX
006cfafc  PUSH EBX
006cfafd  MOV EBX,0x1
006cfb02  CMP ECX,EBX
006cfb04  JNZ 0x006cfb8d
006cfb0a  MOV EAX,[0x00919694]
006cfb0f  CMP EAX,0x919694
006cfb14  JZ 0x006cfb1f
006cfb16  TEST EAX,EAX
006cfb18  JZ 0x006cfb1f
006cfb1a  LEA ECX,[EAX + -0x4]
006cfb1d  JMP 0x006cfb21
006cfb1f  XOR ECX,ECX
006cfb21  CMP EAX,0x919694
006cfb26  MOV dword ptr [0x0093da4c],ECX
006cfb2c  JZ 0x006cfbda
006cfb32  TEST EAX,EAX
006cfb34  JZ 0x006cfbda
006cfb3a  LEA ECX,[EAX + -0x4]
006cfb3d  TEST ECX,ECX
006cfb3f  JZ 0x006cfbda
006cfb45  MOV ECX,dword ptr [0x00919774]
006cfb4b  CMP ECX,0x919774
006cfb51  JZ 0x006cfbda
006cfb57  TEST ECX,ECX
006cfb59  JZ 0x006cfbda
006cfb5b  ADD ECX,-0x4
006cfb5e  JZ 0x006cfbda
006cfb60  TEST EAX,EAX
006cfb62  JZ 0x006cfb69
006cfb64  LEA ECX,[EAX + -0x4]
006cfb67  JMP 0x006cfb6b
006cfb69  XOR ECX,ECX
006cfb6b  MOV EAX,dword ptr [ECX]
006cfb6d  CALL dword ptr [EAX + 0x24]
006cfb70  TEST AL,AL
006cfb72  JNZ 0x006cfbda
006cfb74  PUSH EBX
006cfb75  CALL 0x00595d40
006cfb7a  ADD ESP,0x4
006cfb7d  TEST AL,AL
006cfb7f  JZ 0x006cfbda
006cfb81  MOV dword ptr [0x00982b3c],0x2
006cfb8b  JMP 0x006cfbda
006cfb8d  CMP ECX,0x2
006cfb90  JNZ 0x006cfbda
006cfb92  MOV EAX,[0x00919774]
006cfb97  CMP EAX,0x919774
006cfb9c  JZ 0x006cfbd4
006cfb9e  TEST EAX,EAX
006cfba0  JZ 0x006cfbd4
006cfba2  ADD EAX,-0x4
006cfba5  JZ 0x006cfbd4
006cfba7  MOV EAX,[0x00919694]
006cfbac  CMP EAX,0x919694
006cfbb1  JZ 0x006cfbbc
006cfbb3  TEST EAX,EAX
006cfbb5  JZ 0x006cfbbc
006cfbb7  LEA ECX,[EAX + -0x4]
006cfbba  JMP 0x006cfbbe
006cfbbc  XOR ECX,ECX
006cfbbe  MOV EDX,dword ptr [ECX]
006cfbc0  CALL dword ptr [EDX + 0x24]
006cfbc3  TEST AL,AL
006cfbc5  JNZ 0x006cfbd4
006cfbc7  PUSH EBX
006cfbc8  CALL 0x00595d40
006cfbcd  ADD ESP,0x4
006cfbd0  TEST AL,AL
006cfbd2  JNZ 0x006cfbda
006cfbd4  MOV dword ptr [0x00982b3c],EBX
006cfbda  MOV EAX,[0x009196b0]
006cfbdf  MOV EDX,dword ptr [0x00919790]
006cfbe5  MOV ECX,dword ptr [0x00919800]
006cfbeb  PUSH EBP
006cfbec  MOV EBP,dword ptr [0x00982b40]
006cfbf2  SUB EBP,0x0
006cfbf5  PUSH ESI
006cfbf6  MOV ESI,dword ptr [0x00982be4]
006cfbfc  PUSH EDI
006cfbfd  MOV EDI,dword ptr [0x00982be8]
006cfc03  JZ 0x006cfc61
006cfc05  DEC EBP
006cfc06  JZ 0x006cfc42
006cfc08  DEC EBP
006cfc09  JNZ 0x006cfc88
006cfc0b  MOV dword ptr [EAX + 0x14],ESI
006cfc0e  MOV dword ptr [EAX + 0x18],EDI
006cfc11  MOV dword ptr [EAX + 0x10],EBX
006cfc14  MOV byte ptr [0x00919658],BL
006cfc1a  MOV dword ptr [EDX + 0x10],EBX
006cfc1d  MOV byte ptr [0x00919738],BL
006cfc23  MOV dword ptr [ECX + 0x14],0x140
006cfc2a  MOV dword ptr [ECX + 0x18],0xf0
006cfc31  MOV dword ptr [ECX + 0x10],EBX
006cfc34  MOV byte ptr [0x009197a8],BL
006cfc3a  MOV byte ptr [0x00919968],BL
006cfc40  JMP 0x006cfc88
006cfc42  MOV dword ptr [EAX + 0x14],ESI
006cfc45  MOV dword ptr [EAX + 0x18],EDI
006cfc48  MOV dword ptr [EAX + 0x10],EBX
006cfc4b  MOV byte ptr [0x00919658],BL
006cfc51  MOV dword ptr [EDX + 0x10],0x0
006cfc58  MOV byte ptr [0x00919738],0x0
006cfc5f  JMP 0x006cfc23
006cfc61  XOR ESI,ESI
006cfc63  MOV dword ptr [EAX + 0x10],ESI
006cfc66  MOV byte ptr [0x00919658],0x0
006cfc6d  MOV dword ptr [EDX + 0x10],ESI
006cfc70  MOV byte ptr [0x00919738],0x0
006cfc77  MOV dword ptr [ECX + 0x10],ESI
006cfc7a  MOV byte ptr [0x009197a8],0x0
006cfc81  MOV byte ptr [0x00919968],0x0
006cfc88  CMP dword ptr [0x00925e90],0x6
006cfc8f  POP EDI
006cfc90  POP ESI
006cfc91  POP EBP
006cfc92  JZ 0x006cfcdc
006cfc94  CALL 0x00738840
006cfc99  TEST EAX,EAX
006cfc9b  JZ 0x006cfcdc
006cfc9d  MOV EAX,[0x009b27ec]
006cfca2  CMP EAX,0x9b27ec
006cfca7  JZ 0x006cfcdc
006cfca9  LEA ESP,[ESP]
006cfcb0  MOV ECX,dword ptr [EAX + 0x57c]
006cfcb6  TEST ECX,ECX
006cfcb8  JNZ 0x006cfcd3
006cfcba  CMP dword ptr [EAX + 0x31c],EBX
006cfcc0  JNZ 0x006cfcd3
006cfcc2  MOV ECX,dword ptr [EAX + 0x318]
006cfcc8  TEST ECX,ECX
006cfcca  SETNZ CL
006cfccd  MOV byte ptr [0x00919968],CL
006cfcd3  MOV EAX,dword ptr [EAX]
006cfcd5  CMP EAX,0x9b27ec
006cfcda  JNZ 0x006cfcb0
006cfcdc  POP EBX
006cfcdd  RET
