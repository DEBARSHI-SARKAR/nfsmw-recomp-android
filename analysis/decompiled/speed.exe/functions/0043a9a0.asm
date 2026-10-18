0043a9a0  PUSH -0x1
0043a9a2  PUSH 0x868e5d
0043a9a7  MOV EAX,FS:[0x0]
0043a9ad  PUSH EAX
0043a9ae  MOV dword ptr FS:[0x0],ESP
0043a9b5  SUB ESP,0x14
0043a9b8  PUSH EBX
0043a9b9  PUSH ESI
0043a9ba  PUSH EDI
0043a9bb  MOV EDI,dword ptr [ESP + 0x30]
0043a9bf  XOR EBX,EBX
0043a9c1  PUSH EBX
0043a9c2  MOV ESI,ECX
0043a9c4  PUSH EDI
0043a9c5  MOV dword ptr [ESP + 0x18],ESI
0043a9c9  CALL 0x00677480
0043a9ce  MOV EAX,dword ptr [EDI + 0x4]
0043a9d1  CMP EAX,EBX
0043a9d3  MOV dword ptr [ESP + 0x28],EBX
0043a9d7  JZ 0x0043a9de
0043a9d9  LEA ECX,[EAX + 0x10]
0043a9dc  JMP 0x0043a9e0
0043a9de  XOR ECX,ECX
0043a9e0  PUSH EBP
0043a9e1  LEA EDI,[ESI + 0x4c]
0043a9e4  PUSH EDI
0043a9e5  PUSH 0x403700
0043a9ea  MOV dword ptr [EDI],0x890970
0043a9f0  MOV dword ptr [EDI + 0x4],ECX
0043a9f3  CALL 0x005d7930
0043a9f8  MOV dword ptr [EDI],0x890990
0043a9fe  MOV EAX,dword ptr [ESI + 0x34]
0043aa01  LEA EBP,[ESI + 0x54]
0043aa04  PUSH EAX
0043aa05  MOV ECX,EBP
0043aa07  MOV byte ptr [ESP + 0x30],0x1
0043aa0c  CALL 0x0043a700
0043aa11  MOV dword ptr [ESI],0x891a80
0043aa17  MOV dword ptr [ESI + 0x8],0x891a78
0043aa1e  MOV dword ptr [EDI],0x8919a0
0043aa24  MOV dword ptr [EBP],0x891998
0043aa2b  MOV dword ptr [ESI + 0x84],EBX
0043aa31  MOV dword ptr [ESI + 0xac],EBX
0043aa37  MOV dword ptr [ESI + 0xb8],EBX
0043aa3d  MOV dword ptr [ESI + 0xbc],EBX
0043aa43  MOV dword ptr [ESI + 0xc0],EBX
0043aa49  MOV EAX,[0x0091ddbc]
0043aa4e  MOV dword ptr [ESI + 0xc4],EAX
0043aa54  MOV dword ptr [ESI + 0xc8],0x41a00000
0043aa5e  MOV dword ptr [ESI + 0xcc],EBX
0043aa64  MOV dword ptr [ESI + 0xec],EBX
0043aa6a  MOV dword ptr [ESI + 0xf0],EBX
0043aa70  MOV ECX,0x40b33333
0043aa75  MOV dword ptr [ESI + 0xf4],ECX
0043aa7b  MOV EAX,0x40400000
0043aa80  MOV dword ptr [ESI + 0xf8],EAX
0043aa86  MOV byte ptr [ESP + 0x2c],0x2
0043aa8b  MOV dword ptr [ESI + 0xfc],EBX
0043aa91  MOV dword ptr [ESI + 0x100],EBX
0043aa97  MOV dword ptr [ESI + 0x104],ECX
0043aa9d  MOV dword ptr [ESI + 0x108],EAX
0043aaa3  CALL 0x006e8de0
0043aaa8  FSUB float ptr [0x00890fc8]
0043aaae  FSTP float ptr [ESI + 0x10c]
0043aab4  CALL 0x006e8de0
0043aab9  FSUB float ptr [0x00890fc8]
0043aabf  FSTP float ptr [ESI + 0x110]
0043aac5  CALL 0x006e8de0
0043aaca  FSUB float ptr [0x00890fc8]
0043aad0  MOV dword ptr [ESP + 0x18],0x0
0043aad8  MOV EDX,dword ptr [ESP + 0x18]
0043aadc  LEA ECX,[ESI + 0x118]
0043aae2  MOV dword ptr [ECX],EDX
0043aae4  FSTP float ptr [ESI + 0x114]
0043aaea  MOV dword ptr [ESP + 0x1c],0x0
0043aaf2  MOV EAX,dword ptr [ESP + 0x1c]
0043aaf6  MOV dword ptr [ECX + 0x4],EAX
0043aaf9  MOV dword ptr [ESP + 0x20],0x0
0043ab01  MOV EDX,dword ptr [ESP + 0x20]
0043ab05  MOV dword ptr [ECX + 0x8],EDX
0043ab08  LEA ECX,[ESI + 0x140]
0043ab0e  MOV word ptr [ESI + 0x13c],0xffff
0043ab17  CALL 0x0077b9e0
0043ab1c  LEA ECX,[ESI + 0x428]
0043ab22  MOV byte ptr [ESP + 0x2c],0x3
0043ab27  CALL 0x0077b9e0
0043ab2c  MOV EAX,dword ptr [ESI + 0x34]
0043ab2f  LEA EDI,[ESI + 0x738]
0043ab35  MOV dword ptr [EDI],EBX
0043ab37  MOV dword ptr [ESI + 0x44],EBX
0043ab3a  MOV ECX,dword ptr [EAX + 0x4]
0043ab3d  PUSH 0x4039c0
0043ab42  MOV byte ptr [ESP + 0x30],0x4
0043ab47  CALL 0x005d59f0
0043ab4c  MOV dword ptr [ESI + 0xd0],EAX
0043ab52  MOV ECX,dword ptr [ESI + 0x48]
0043ab55  MOV EAX,dword ptr [ECX]
0043ab57  CALL dword ptr [EAX + 0x48]
0043ab5a  MOV EBP,EAX
0043ab5c  LEA EAX,[ESI + 0x710]
0043ab62  XOR ECX,ECX
0043ab64  MOV EDX,EAX
0043ab66  MOV dword ptr [EDX],ECX
0043ab68  MOV dword ptr [EDX + 0x4],ECX
0043ab6b  MOV dword ptr [EDX + 0x8],ECX
0043ab6e  MOV dword ptr [EDX + 0xc],ECX
0043ab71  MOV dword ptr [EDX + 0x10],ECX
0043ab74  MOV dword ptr [EDX + 0x14],ECX
0043ab77  MOV dword ptr [EDX + 0x18],ECX
0043ab7a  PUSH 0xa
0043ab7c  PUSH EAX
0043ab7d  MOV dword ptr [EDX + 0x1c],ECX
0043ab80  MOV dword ptr [EDX + 0x20],ECX
0043ab83  PUSH EDI
0043ab84  PUSH EBP
0043ab85  MOV dword ptr [EDX + 0x24],ECX
0043ab88  CALL 0x00673810
0043ab8d  PUSH 0x1
0043ab8f  PUSH 0x14
0043ab91  CALL 0x00452880
0043ab96  MOV ECX,dword ptr [0x008f7ea8]
0043ab9c  MOV EAX,dword ptr [ECX]
0043ab9e  ADD ESP,0x18
0043aba1  PUSH EBX
0043aba2  PUSH 0x14
0043aba4  CALL dword ptr [EAX]
0043aba6  MOV EDI,EAX
0043aba8  MOV dword ptr [ESP + 0x34],EDI
0043abac  CMP EDI,EBX
0043abae  MOV byte ptr [ESP + 0x2c],0x5
0043abb3  JZ 0x0043abdc
0043abb5  PUSH EBX
0043abb6  PUSH 0x22515733
0043abbb  MOV ECX,EBP
0043abbd  CALL 0x00454810
0043abc2  CMP EAX,EBX
0043abc4  JNZ 0x0043abd0
0043abc6  PUSH 0xc
0043abc8  CALL 0x006269b0
0043abcd  ADD ESP,0x4
0043abd0  PUSH EBX
0043abd1  PUSH EBX
0043abd2  PUSH EAX
0043abd3  MOV ECX,EDI
0043abd5  CALL 0x00402bb0
0043abda  JMP 0x0043abde
0043abdc  XOR EAX,EAX
0043abde  PUSH EBX
0043abdf  PUSH 0x2e8
0043abe4  MOV ECX,0x925b30
0043abe9  MOV byte ptr [ESP + 0x34],0x4
0043abee  MOV dword ptr [ESI + 0xe8],EAX
0043abf4  CALL 0x005d29d0
0043abf9  MOV dword ptr [ESP + 0x34],EAX
0043abfd  CMP EAX,EBX
0043abff  MOV byte ptr [ESP + 0x2c],0x6
0043ac04  POP EBP
0043ac05  JZ 0x0043ac10
0043ac07  MOV ECX,EAX
0043ac09  CALL 0x0077b9e0
0043ac0e  JMP 0x0043ac12
0043ac10  XOR EAX,EAX
0043ac12  MOV ECX,dword ptr [ESI + 0x34]
0043ac15  MOV dword ptr [ESI + 0x70],EAX
0043ac18  MOV byte ptr [ESI + 0x80],BL
0043ac1e  MOV EDX,dword ptr [ECX]
0043ac20  MOV byte ptr [ESP + 0x28],0x4
0043ac25  CALL dword ptr [EDX + 0x54]
0043ac28  MOV EDX,dword ptr [EAX]
0043ac2a  MOV ECX,EAX
0043ac2c  CALL dword ptr [EDX + 0x20]
0043ac2f  MOV EDX,dword ptr [EAX]
0043ac31  LEA ECX,[ESI + 0x88]
0043ac37  MOV dword ptr [ECX],EDX
0043ac39  MOV EDX,dword ptr [EAX + 0x4]
0043ac3c  MOV dword ptr [ECX + 0x4],EDX
0043ac3f  MOV EAX,dword ptr [EAX + 0x8]
0043ac42  MOV dword ptr [ECX + 0x8],EAX
0043ac45  MOV ECX,dword ptr [ESI + 0x48]
0043ac48  MOV EDX,dword ptr [ECX]
0043ac4a  MOV byte ptr [ESP + 0xc],BL
0043ac4e  MOV byte ptr [ESP + 0x30],BL
0043ac52  MOV EDI,0x1
0043ac57  CALL dword ptr [EDX + 0x44]
0043ac5a  MOV EAX,dword ptr [EAX]
0043ac5c  CMP EAX,dword ptr [0x0092c4f4]
0043ac62  JNZ 0x0043ac6b
0043ac64  MOV EDI,0x5
0043ac69  JMP 0x0043ac9d
0043ac6b  MOV ECX,dword ptr [ESI + 0x48]
0043ac6e  MOV EAX,dword ptr [ECX]
0043ac70  CALL dword ptr [EAX + 0x58]
0043ac73  CMP EAX,0x6
0043ac76  JA 0x0043ac9d
0043ac78  JMP dword ptr [EAX*0x4 + 0x43ad84]
0043ac7f  XOR EDI,EDI
0043ac81  MOV byte ptr [ESP + 0x30],BL
0043ac85  JMP 0x0043ac98
0043ac87  MOV EDI,0x4
0043ac8c  JMP 0x0043ac93
0043ac8e  MOV EDI,0x2
0043ac93  MOV byte ptr [ESP + 0x30],0x1
0043ac98  MOV byte ptr [ESP + 0xc],0x1
0043ac9d  MOV ECX,dword ptr [ESI + 0x70]
0043aca0  PUSH ESI
0043aca1  CALL 0x0076f480
0043aca6  MOV ECX,dword ptr [ESI + 0x70]
0043aca9  PUSH EDI
0043acaa  CALL 0x007658a0
0043acaf  MOV ECX,dword ptr [ESP + 0xc]
0043acb3  PUSH ECX
0043acb4  MOV ECX,dword ptr [ESI + 0x70]
0043acb7  CALL 0x0076e2d0
0043acbc  MOV EAX,dword ptr [ESI + 0x70]
0043acbf  MOV DL,byte ptr [ESP + 0x30]
0043acc3  PUSH EBX
0043acc4  PUSH 0x40
0043acc6  MOV ECX,0x925b30
0043accb  MOV byte ptr [EAX + 0x54],DL
0043acce  CALL 0x005d29d0
0043acd3  CMP EAX,EBX
0043acd5  JZ 0x0043ace4
0043acd7  MOV ECX,dword ptr [ESI + 0x34]
0043acda  PUSH ECX
0043acdb  MOV ECX,EAX
0043acdd  CALL 0x00418000
0043ace2  JMP 0x0043ace6
0043ace4  XOR EAX,EAX
0043ace6  PUSH EBX
0043ace7  PUSH 0x2e8
0043acec  MOV ECX,0x925b30
0043acf1  MOV dword ptr [ESI + 0xa0],EAX
0043acf7  CALL 0x005d29d0
0043acfc  MOV dword ptr [ESP + 0x30],EAX
0043ad00  CMP EAX,EBX
0043ad02  MOV byte ptr [ESP + 0x28],0x7
0043ad07  JZ 0x0043ad12
0043ad09  MOV ECX,EAX
0043ad0b  CALL 0x0077b9e0
0043ad10  JMP 0x0043ad14
0043ad12  XOR EAX,EAX
0043ad14  MOV ECX,ESI
0043ad16  MOV byte ptr [ESP + 0x28],0x4
0043ad1b  MOV dword ptr [ESI + 0xe4],EAX
0043ad21  CALL 0x00414ce0
0043ad26  PUSH 0x892bb8
0043ad2b  CALL 0x005cc240
0043ad30  MOV ECX,dword ptr [ESP + 0x3c]
0043ad34  MOV EDX,dword ptr [ESP + 0x38]
0043ad38  ADD ESP,0x4
0043ad3b  MOV dword ptr [ESP + 0x30],EAX
0043ad3f  MOV EAX,dword ptr [ESP + 0x3c]
0043ad43  PUSH EAX
0043ad44  PUSH ECX
0043ad45  PUSH EDX
0043ad46  LEA EAX,[ESP + 0x3c]
0043ad4a  PUSH EAX
0043ad4b  MOV ECX,ESI
0043ad4d  CALL 0x006ee9b0
0043ad52  PUSH 0x892bac
0043ad57  PUSH EAX
0043ad58  MOV dword ptr [ESI + 0xac],EAX
0043ad5e  CALL 0x006e8e90
0043ad63  MOV ECX,dword ptr [ESI + 0x48]
0043ad66  MOV EDX,dword ptr [ECX]
0043ad68  ADD ESP,0x8
0043ad6b  CALL dword ptr [EDX + 0x58]
0043ad6e  MOV ECX,dword ptr [ESP + 0x20]
0043ad72  POP EDI
0043ad73  MOV EAX,ESI
0043ad75  POP ESI
0043ad76  POP EBX
0043ad77  MOV dword ptr FS:[0x0],ECX
0043ad7e  ADD ESP,0x20
0043ad81  RET 0x10
