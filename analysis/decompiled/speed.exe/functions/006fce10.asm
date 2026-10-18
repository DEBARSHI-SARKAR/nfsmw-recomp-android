006fce10  PUSH -0x1
006fce12  PUSH 0x87f784
006fce17  MOV EAX,FS:[0x0]
006fce1d  PUSH EAX
006fce1e  MOV dword ptr FS:[0x0],ESP
006fce25  SUB ESP,0x38
006fce28  PUSH EBX
006fce29  PUSH EBP
006fce2a  PUSH ESI
006fce2b  PUSH EDI
006fce2c  MOV EDI,ECX
006fce2e  MOV dword ptr [ESP + 0x24],EDI
006fce32  MOV dword ptr [EDI],0x8b0e18
006fce38  MOV dword ptr [EDI + 0x8],0x8b0e10
006fce3f  MOV dword ptr [EDI + 0x2c],0x8b0dfc
006fce46  MOV dword ptr [EDI + 0x38],0x8b0de0
006fce4d  MOV dword ptr [EDI + 0x48],0x8b0d78
006fce54  MOV dword ptr [EDI + 0x50],0x8b0d70
006fce5b  MOV dword ptr [EDI + 0x58],0x8b0d60
006fce62  MOV EAX,dword ptr [EDI + 0x2f8]
006fce68  PUSH EAX
006fce69  MOV dword ptr [ESP + 0x54],0x5
006fce71  CALL 0x00664cc0
006fce76  MOV ECX,dword ptr [EDI + 0x60]
006fce79  ADD ESP,0x4
006fce7c  TEST ECX,ECX
006fce7e  JZ 0x006fcea2
006fce80  DEC dword ptr [EDI + 0x24]
006fce83  MOV EAX,[0x009885d0]
006fce88  TEST EAX,EAX
006fce8a  JZ 0x006fce9c
006fce8c  LEA ESP,[ESP]
006fce90  CMP dword ptr [EAX + 0x20],ECX
006fce93  JZ 0x006fce9e
006fce95  MOV EAX,dword ptr [EAX + 0x14]
006fce98  TEST EAX,EAX
006fce9a  JNZ 0x006fce90
006fce9c  XOR EAX,EAX
006fce9e  OR dword ptr [EAX + 0x18],0x10
006fcea2  MOV ECX,EDI
006fcea4  CALL 0x006ea5a0
006fcea9  MOV ECX,dword ptr [0x00911fa8]
006fceaf  CALL 0x004c1c60
006fceb4  PUSH 0x8b0d50
006fceb9  CALL 0x00460bf0
006fcebe  MOV ECX,dword ptr [EDI + 0x394]
006fcec4  ADD ESP,0x4
006fcec7  CMP EAX,ECX
006fcec9  JNZ 0x006fcedc
006fcecb  PUSH 0x8b0d44
006fced0  PUSH 0x8
006fced2  PUSH 0x0
006fced4  CALL 0x004b9080
006fced9  ADD ESP,0xc
006fcedc  XOR EAX,EAX
006fcede  LEA EBX,[EDI + 0x3ac]
006fcee4  LEA EBP,[EAX + 0x1]
006fcee7  PUSH EBP
006fcee8  LEA ECX,[ESP + 0x2c]
006fceec  PUSH 0x89372c
006fcef1  PUSH ECX
006fcef2  CALL 0x004647c0
006fcef7  LEA EDX,[ESP + 0x34]
006fcefb  PUSH EDX
006fcefc  CALL 0x005cc240
006fcf01  ADD ESP,0x10
006fcf04  MOV dword ptr [ESP + 0x1c],EAX
006fcf08  LEA EAX,[ESP + 0x1c]
006fcf0c  PUSH EAX
006fcf0d  LEA ECX,[ESP + 0x24]
006fcf11  PUSH ECX
006fcf12  MOV ECX,EBX
006fcf14  CALL 0x006f61d0
006fcf19  MOV EAX,dword ptr [EDI + 0x3b0]
006fcf1f  MOV ECX,dword ptr [ESP + 0x20]
006fcf23  CMP ECX,EAX
006fcf25  JZ 0x006fcf50
006fcf27  MOV ECX,dword ptr [ECX + 0x10]
006fcf2a  MOV ESI,dword ptr [ECX]
006fcf2c  TEST ESI,ESI
006fcf2e  JZ 0x006fcf50
006fcf30  PUSH ESI
006fcf31  MOV ECX,EDI
006fcf33  CALL 0x006fb930
006fcf38  MOV ECX,dword ptr [ESI + 0x4]
006fcf3b  PUSH 0x402830
006fcf40  CALL 0x005d59f0
006fcf45  TEST EAX,EAX
006fcf47  JZ 0x006fcf50
006fcf49  MOV EDX,dword ptr [EAX]
006fcf4b  MOV ECX,EAX
006fcf4d  CALL dword ptr [EDX + 0x8]
006fcf50  MOV EAX,EBP
006fcf52  CMP EAX,0x8
006fcf55  JL 0x006fcee4
006fcf57  MOV EAX,dword ptr [EDI + 0x3b0]
006fcf5d  MOV ESI,dword ptr [EAX]
006fcf5f  CMP ESI,EAX
006fcf61  JZ 0x006fcfe4
006fcf67  MOV EBP,dword ptr [ESI + 0x10]
006fcf6a  MOV ECX,dword ptr [EBP]
006fcf6d  XOR EBX,EBX
006fcf6f  CMP ECX,EBX
006fcf71  JZ 0x006fcf7c
006fcf73  MOV EAX,dword ptr [ECX]
006fcf75  PUSH EBX
006fcf76  CALL dword ptr [EAX + 0xc0]
006fcf7c  CMP dword ptr [EBP],EBX
006fcf7f  JZ 0x006fcf84
006fcf81  MOV dword ptr [EBP],EBX
006fcf84  PUSH EBX
006fcf85  PUSH 0x8
006fcf87  PUSH EBP
006fcf88  MOV ECX,0x925b30
006fcf8d  CALL 0x005d0370
006fcf92  MOV AL,byte ptr [ESI + 0x15]
006fcf95  TEST AL,AL
006fcf97  JNZ 0x006fcfda
006fcf99  MOV EAX,dword ptr [ESI + 0x8]
006fcf9c  MOV CL,byte ptr [EAX + 0x15]
006fcf9f  TEST CL,CL
006fcfa1  JNZ 0x006fcfbd
006fcfa3  MOV ESI,EAX
006fcfa5  MOV EAX,dword ptr [ESI]
006fcfa7  MOV CL,byte ptr [EAX + 0x15]
006fcfaa  TEST CL,CL
006fcfac  JNZ 0x006fcfda
006fcfae  MOV EDI,EDI
006fcfb0  MOV ESI,EAX
006fcfb2  MOV EAX,dword ptr [ESI]
006fcfb4  MOV CL,byte ptr [EAX + 0x15]
006fcfb7  TEST CL,CL
006fcfb9  JZ 0x006fcfb0
006fcfbb  JMP 0x006fcfda
006fcfbd  MOV EAX,dword ptr [ESI + 0x4]
006fcfc0  MOV CL,byte ptr [EAX + 0x15]
006fcfc3  TEST CL,CL
006fcfc5  JNZ 0x006fcfd8
006fcfc7  CMP ESI,dword ptr [EAX + 0x8]
006fcfca  JNZ 0x006fcfd8
006fcfcc  MOV ESI,EAX
006fcfce  MOV EAX,dword ptr [EAX + 0x4]
006fcfd1  MOV CL,byte ptr [EAX + 0x15]
006fcfd4  TEST CL,CL
006fcfd6  JZ 0x006fcfc7
006fcfd8  MOV ESI,EAX
006fcfda  CMP ESI,dword ptr [EDI + 0x3b0]
006fcfe0  JNZ 0x006fcf67
006fcfe2  JMP 0x006fcfe6
006fcfe4  XOR EBX,EBX
006fcfe6  MOV ECX,dword ptr [EDI + 0x3b0]
006fcfec  MOV EDX,dword ptr [ECX + 0x4]
006fcfef  LEA ESI,[EDI + 0x3ac]
006fcff5  PUSH EDX
006fcff6  MOV ECX,ESI
006fcff8  CALL 0x006efc40
006fcffd  MOV EAX,dword ptr [ESI + 0x4]
006fd000  MOV dword ptr [EAX + 0x4],EAX
006fd003  MOV EAX,dword ptr [ESI + 0x4]
006fd006  MOV dword ptr [ESI + 0x8],EBX
006fd009  MOV dword ptr [EAX],EAX
006fd00b  MOV EAX,dword ptr [ESI + 0x4]
006fd00e  MOV dword ptr [EAX + 0x8],EAX
006fd011  MOV ECX,dword ptr [EDI + 0x3e0]
006fd017  CMP ECX,EBX
006fd019  JZ 0x006fd028
006fd01b  MOV EAX,dword ptr [ECX]
006fd01d  PUSH 0x1
006fd01f  CALL dword ptr [EAX + 0x34]
006fd022  MOV dword ptr [EDI + 0x3e0],EBX
006fd028  OR EBP,0xffffffff
006fd02b  PUSH 0x10
006fd02d  MOV dword ptr [0x00902144],EBP
006fd033  CALL 0x00627400
006fd038  ADD ESP,0x4
006fd03b  MOV dword ptr [ESP + 0x20],EAX
006fd03f  CMP EAX,EBX
006fd041  MOV byte ptr [ESP + 0x50],0x6
006fd046  JZ 0x006fd052
006fd048  PUSH EBX
006fd049  PUSH 0x4
006fd04b  MOV ECX,EAX
006fd04d  CALL 0x006253d0
006fd052  MOV AL,byte ptr [EDI + 0x3f9]
006fd058  TEST AL,AL
006fd05a  MOV byte ptr [ESP + 0x50],0x5
006fd05f  JZ 0x006fd088
006fd061  PUSH 0xc
006fd063  CALL 0x00627400
006fd068  ADD ESP,0x4
006fd06b  MOV dword ptr [ESP + 0x20],EAX
006fd06f  CMP EAX,EBX
006fd071  MOV byte ptr [ESP + 0x50],0x7
006fd076  JZ 0x006fd0c7
006fd078  LEA ECX,[EDI + 0x3e9]
006fd07e  PUSH ECX
006fd07f  MOV ECX,EAX
006fd081  CALL 0x0062f420
006fd086  JMP 0x006fd0c7
006fd088  PUSH ECX
006fd089  MOV EAX,ESP
006fd08b  LEA EDX,[ESP + 0x24]
006fd08f  MOV dword ptr [ESP + 0x24],ESP
006fd093  PUSH EDX
006fd094  MOV dword ptr [EAX],0x20d60dbf
006fd09a  CALL 0x00604270
006fd09f  MOV EAX,dword ptr [ESP + 0x28]
006fd0a3  ADD ESP,0x4
006fd0a6  LEA ECX,[ESP + 0x2c]
006fd0aa  MOV dword ptr [ESP + 0x2c],EAX
006fd0ae  MOV dword ptr [ESP + 0x30],EBX
006fd0b2  MOV dword ptr [ESP + 0x34],0x14
006fd0ba  MOV dword ptr [ESP + 0x38],EBX
006fd0be  MOV dword ptr [ESP + 0x3c],EBX
006fd0c2  CALL 0x00654af0
006fd0c7  MOV EAX,dword ptr [ESI + 0x4]
006fd0ca  MOV ECX,dword ptr [EAX]
006fd0cc  PUSH EAX
006fd0cd  PUSH ECX
006fd0ce  LEA ECX,[ESP + 0x28]
006fd0d2  PUSH ECX
006fd0d3  MOV ECX,ESI
006fd0d5  MOV byte ptr [ESP + 0x5c],0x4
006fd0da  CALL 0x006fb7f0
006fd0df  MOV EAX,dword ptr [ESI + 0x4]
006fd0e2  CMP EAX,EBX
006fd0e4  JZ 0x006fd0f4
006fd0e6  PUSH EBX
006fd0e7  PUSH 0x18
006fd0e9  PUSH EAX
006fd0ea  MOV ECX,0x925b30
006fd0ef  CALL 0x005d0370
006fd0f4  LEA ECX,[EDI + 0x68]
006fd0f7  MOV dword ptr [ESI + 0x4],EBX
006fd0fa  MOV dword ptr [ESI + 0x8],EBX
006fd0fd  MOV byte ptr [ESP + 0x50],0x3
006fd102  CALL 0x006466b0
006fd107  LEA ESI,[EDI + 0x58]
006fd10a  LEA ECX,[ESI + 0x8]
006fd10d  MOV byte ptr [ESP + 0x50],0x2
006fd112  MOV dword ptr [ESI],0x89187c
006fd118  CALL 0x004258d0
006fd11d  MOV dword ptr [ESI],0x890970
006fd123  MOV ECX,dword ptr [ESI + 0x4]
006fd126  PUSH ESI
006fd127  CALL 0x005d5a50
006fd12c  LEA EAX,[EDI + 0x50]
006fd12f  MOV dword ptr [EAX],0x890970
006fd135  MOV ECX,dword ptr [EAX + 0x4]
006fd138  PUSH EAX
006fd139  MOV byte ptr [ESP + 0x54],0x1
006fd13e  CALL 0x005d5a50
006fd143  LEA EAX,[EDI + 0x48]
006fd146  MOV dword ptr [0x009885c8],EBX
006fd14c  MOV dword ptr [EAX],0x890970
006fd152  MOV ECX,dword ptr [EAX + 0x4]
006fd155  PUSH EAX
006fd156  MOV byte ptr [ESP + 0x54],0x0
006fd15b  CALL 0x005d5a50
006fd160  MOV ECX,EDI
006fd162  MOV dword ptr [ESP + 0x50],EBP
006fd166  CALL 0x006f82f0
006fd16b  MOV ECX,dword ptr [ESP + 0x48]
006fd16f  POP EDI
006fd170  POP ESI
006fd171  POP EBP
006fd172  MOV dword ptr FS:[0x0],ECX
006fd179  POP EBX
006fd17a  ADD ESP,0x44
006fd17d  RET
