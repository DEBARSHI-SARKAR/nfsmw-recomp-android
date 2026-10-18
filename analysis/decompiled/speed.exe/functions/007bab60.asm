007bab60  SUB ESP,0x8
007bab63  MOV EAX,[0x0091cf90]
007bab68  PUSH EBX
007bab69  PUSH EBP
007bab6a  PUSH ESI
007bab6b  PUSH EDI
007bab6c  MOV EDI,ECX
007bab6e  MOV ECX,dword ptr [EAX + 0x10]
007bab71  MOV EDX,dword ptr [EDI + 0x4]
007bab74  XOR EAX,EAX
007bab76  MOV AL,byte ptr [EDX + 0x11]
007bab79  ADD ECX,0x414
007bab7f  MOV dword ptr [ESP + 0x10],EDI
007bab83  PUSH EAX
007bab84  CALL 0x0056f120
007bab89  MOV dword ptr [ESP + 0x14],EAX
007bab8d  MOV EAX,dword ptr [EDI + 0x1b4]
007bab93  TEST EAX,EAX
007bab95  JZ 0x007bab9c
007bab97  LEA EBX,[EAX + -0x4]
007bab9a  JMP 0x007baba0
007bab9c  XOR EBX,EBX
007bab9e  MOV EDI,EDI
007baba0  LEA ESI,[EDI + 0x1b4]
007baba6  TEST ESI,ESI
007baba8  JZ 0x007babaf
007babaa  LEA EAX,[ESI + -0x4]
007babad  JMP 0x007babb1
007babaf  XOR EAX,EAX
007babb1  CMP EBX,EAX
007babb3  JZ 0x007bacde
007babb9  MOV AL,byte ptr [EBX + 0x14]
007babbc  TEST AL,AL
007babbe  JZ 0x007bacd6
007babc4  MOV ECX,dword ptr [0x0091cf90]
007babca  TEST byte ptr [ECX + 0x12c],0x1
007babd1  MOV EBP,dword ptr [EBX + 0xc]
007babd4  JNZ 0x007babe3
007babd6  MOV AL,[0x009b9e8d]
007babdb  TEST AL,AL
007babdd  JZ 0x007bac6d
007babe3  CMP dword ptr [EBP + 0x10],0x72
007babe7  JZ 0x007bac6d
007babed  CALL 0x00575b00
007babf2  TEST AL,AL
007babf4  JNZ 0x007bac4a
007babf6  MOV EAX,dword ptr [EBX + 0x10]
007babf9  TEST EAX,EAX
007babfb  MOV EDX,dword ptr [EBX + 0xc]
007babfe  MOV ESI,dword ptr [EDX + 0x24]
007bac01  JZ 0x007bac13
007bac03  FILD dword ptr [EAX + 0x24]
007bac06  FMUL float ptr [0x0089f71c]
007bac0c  CALL 0x007c4b80
007bac11  JMP 0x007bac15
007bac13  XOR EAX,EAX
007bac15  SUB ESI,EAX
007bac17  JS 0x007bac2f
007bac19  MOV EAX,[0x0091cf90]
007bac1e  MOV ECX,dword ptr [EAX + 0x10]
007bac21  PUSH ESI
007bac22  ADD ECX,0xa8
007bac28  CALL 0x0056d7a0
007bac2d  JMP 0x007bac6d
007bac2f  MOV ECX,dword ptr [0x0091cf90]
007bac35  MOV EAX,dword ptr [ECX + 0x10]
007bac38  MOV ECX,dword ptr [EAX + 0xb4]
007bac3e  ADD EAX,0xa8
007bac43  SUB ECX,ESI
007bac45  MOV dword ptr [EAX + 0xc],ECX
007bac48  JMP 0x007bac6d
007bac4a  MOV EAX,dword ptr [EBX + 0xc]
007bac4d  MOV CL,byte ptr [EAX + 0x1c]
007bac50  TEST CL,CL
007bac52  MOV ECX,0x91d928
007bac57  JZ 0x007bac64
007bac59  MOV EDX,dword ptr [EAX + 0x18]
007bac5c  PUSH EDX
007bac5d  CALL 0x00576e30
007bac62  JMP 0x007bac6d
007bac64  MOV EAX,dword ptr [EAX + 0x10]
007bac67  PUSH EAX
007bac68  CALL 0x00576ce0
007bac6d  MOV AL,byte ptr [EBP + 0x1c]
007bac70  TEST AL,AL
007bac72  JZ 0x007bac8b
007bac74  MOV ECX,dword ptr [EBP + 0x14]
007bac77  MOV EDX,dword ptr [EBP + 0x18]
007bac7a  PUSH ECX
007bac7b  PUSH EDX
007bac7c  MOV ECX,EDI
007bac7e  CALL 0x007a4c20
007bac83  MOV EAX,dword ptr [EBX + 0x4]
007bac86  JMP 0x007bab93
007bac8b  MOV EAX,[0x0091cf90]
007bac90  MOV ECX,dword ptr [EAX + 0x10]
007bac93  MOV EDX,dword ptr [ESP + 0x10]
007bac97  MOV EAX,dword ptr [EDX + 0x4]
007bac9a  MOV ESI,dword ptr [EBP + 0xc]
007bac9d  MOV EDI,dword ptr [EBP + 0x10]
007baca0  XOR EDX,EDX
007baca2  MOV DL,byte ptr [EAX + 0x10]
007baca5  ADD ECX,0x414
007bacab  PUSH EDX
007bacac  CALL 0x0056f100
007bacb1  PUSH ESI
007bacb2  PUSH EDI
007bacb3  MOV ECX,EAX
007bacb5  CALL 0x0056f270
007bacba  PUSH ESI
007bacbb  MOV ESI,dword ptr [ESP + 0x14]
007bacbf  PUSH EDI
007bacc0  MOV ECX,ESI
007bacc2  CALL 0x007af110
007bacc7  MOV EAX,dword ptr [ESP + 0x14]
007baccb  PUSH EAX
007baccc  PUSH EBP
007baccd  MOV ECX,ESI
007baccf  CALL 0x007af330
007bacd4  MOV EDI,ESI
007bacd6  MOV EAX,dword ptr [EBX + 0x4]
007bacd9  JMP 0x007bab93
007bacde  MOV EAX,dword ptr [ESI]
007bace0  CMP EAX,ESI
007bace2  JZ 0x007bad01
007bace4  MOV ECX,dword ptr [EAX]
007bace6  MOV EDX,dword ptr [EAX + 0x4]
007bace9  MOV dword ptr [EDX],ECX
007baceb  MOV dword ptr [ECX + 0x4],EDX
007bacee  LEA ECX,[EAX + -0x4]
007bacf1  TEST ECX,ECX
007bacf3  JZ 0x007bacfb
007bacf5  MOV EDX,dword ptr [ECX]
007bacf7  PUSH 0x1
007bacf9  CALL dword ptr [EDX]
007bacfb  MOV EAX,dword ptr [ESI]
007bacfd  CMP EAX,ESI
007bacff  JNZ 0x007bace4
007bad01  MOV ECX,EDI
007bad03  POP EDI
007bad04  POP ESI
007bad05  POP EBP
007bad06  POP EBX
007bad07  ADD ESP,0x8
007bad0a  JMP 0x007b5a50
