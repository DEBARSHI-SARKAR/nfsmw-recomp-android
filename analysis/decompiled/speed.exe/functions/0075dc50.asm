0075dc50  MOV EAX,FS:[0x0]
0075dc56  PUSH -0x1
0075dc58  PUSH 0x881548
0075dc5d  PUSH EAX
0075dc5e  MOV EAX,dword ptr [ESP + 0x14]
0075dc62  MOV dword ptr FS:[0x0],ESP
0075dc69  SUB ESP,0x48
0075dc6c  PUSH EBP
0075dc6d  MOV EBP,ECX
0075dc6f  MOV CL,byte ptr [EAX + 0x15]
0075dc72  TEST CL,CL
0075dc74  PUSH ESI
0075dc75  JZ 0x0075dcc3
0075dc77  PUSH 0x1b
0075dc79  XOR ESI,ESI
0075dc7b  PUSH 0x892920
0075dc80  LEA ECX,[ESP + 0x14]
0075dc84  MOV dword ptr [ESP + 0x2c],0xf
0075dc8c  MOV dword ptr [ESP + 0x28],ESI
0075dc90  MOV byte ptr [ESP + 0x18],0x0
0075dc95  CALL 0x004303b0
0075dc9a  LEA EAX,[ESP + 0xc]
0075dc9e  PUSH EAX
0075dc9f  LEA ECX,[ESP + 0x2c]
0075dca3  MOV dword ptr [ESP + 0x5c],ESI
0075dca7  CALL 0x00432d50
0075dcac  PUSH 0x8c9f78
0075dcb1  LEA ECX,[ESP + 0x2c]
0075dcb5  PUSH ECX
0075dcb6  MOV dword ptr [ESP + 0x30],0x8bf2c0
0075dcbe  CALL 0x007c56b0
0075dcc3  PUSH EBX
0075dcc4  MOV EBX,EAX
0075dcc6  PUSH EDI
0075dcc7  LEA ECX,[ESP + 0x6c]
0075dccb  MOV dword ptr [ESP + 0x10],EBX
0075dccf  CALL 0x0073fb50
0075dcd4  MOV EAX,dword ptr [EBX]
0075dcd6  MOV CL,byte ptr [EAX + 0x15]
0075dcd9  TEST CL,CL
0075dcdb  JZ 0x0075dce2
0075dcdd  MOV EDI,dword ptr [EBX + 0x8]
0075dce0  JMP 0x0075dcfb
0075dce2  MOV EDX,dword ptr [EBX + 0x8]
0075dce5  MOV CL,byte ptr [EDX + 0x15]
0075dce8  TEST CL,CL
0075dcea  JZ 0x0075dcf0
0075dcec  MOV EDI,EAX
0075dcee  JMP 0x0075dcfb
0075dcf0  MOV ECX,dword ptr [ESP + 0x6c]
0075dcf4  CMP ECX,EBX
0075dcf6  MOV EDI,dword ptr [ECX + 0x8]
0075dcf9  JNZ 0x0075dd69
0075dcfb  MOV AL,byte ptr [EDI + 0x15]
0075dcfe  TEST AL,AL
0075dd00  MOV ESI,dword ptr [EBX + 0x4]
0075dd03  JNZ 0x0075dd08
0075dd05  MOV dword ptr [EDI + 0x4],ESI
0075dd08  MOV EAX,dword ptr [EBP + 0x4]
0075dd0b  CMP dword ptr [EAX + 0x4],EBX
0075dd0e  JNZ 0x0075dd15
0075dd10  MOV dword ptr [EAX + 0x4],EDI
0075dd13  JMP 0x0075dd20
0075dd15  CMP dword ptr [ESI],EBX
0075dd17  JNZ 0x0075dd1d
0075dd19  MOV dword ptr [ESI],EDI
0075dd1b  JMP 0x0075dd20
0075dd1d  MOV dword ptr [ESI + 0x8],EDI
0075dd20  MOV EBX,dword ptr [EBP + 0x4]
0075dd23  MOV EAX,dword ptr [EBX]
0075dd25  CMP EAX,dword ptr [ESP + 0x10]
0075dd29  JNZ 0x0075dd41
0075dd2b  MOV AL,byte ptr [EDI + 0x15]
0075dd2e  TEST AL,AL
0075dd30  JZ 0x0075dd36
0075dd32  MOV EAX,ESI
0075dd34  JMP 0x0075dd3f
0075dd36  PUSH EDI
0075dd37  CALL 0x0073f6f0
0075dd3c  ADD ESP,0x4
0075dd3f  MOV dword ptr [EBX],EAX
0075dd41  MOV EBX,dword ptr [EBP + 0x4]
0075dd44  MOV ECX,dword ptr [ESP + 0x10]
0075dd48  CMP dword ptr [EBX + 0x8],ECX
0075dd4b  JNZ 0x0075ddc1
0075dd4d  MOV AL,byte ptr [EDI + 0x15]
0075dd50  TEST AL,AL
0075dd52  JZ 0x0075dd5b
0075dd54  MOV EAX,ESI
0075dd56  MOV dword ptr [EBX + 0x8],EAX
0075dd59  JMP 0x0075ddc1
0075dd5b  PUSH EDI
0075dd5c  CALL 0x0073f6d0
0075dd61  ADD ESP,0x4
0075dd64  MOV dword ptr [EBX + 0x8],EAX
0075dd67  JMP 0x0075ddc1
0075dd69  MOV dword ptr [EAX + 0x4],ECX
0075dd6c  MOV EDX,dword ptr [EBX]
0075dd6e  MOV dword ptr [ECX],EDX
0075dd70  CMP ECX,dword ptr [EBX + 0x8]
0075dd73  JNZ 0x0075dd79
0075dd75  MOV ESI,ECX
0075dd77  JMP 0x0075dd94
0075dd79  MOV AL,byte ptr [EDI + 0x15]
0075dd7c  TEST AL,AL
0075dd7e  MOV ESI,dword ptr [ECX + 0x4]
0075dd81  JNZ 0x0075dd86
0075dd83  MOV dword ptr [EDI + 0x4],ESI
0075dd86  MOV dword ptr [ESI],EDI
0075dd88  MOV EAX,dword ptr [EBX + 0x8]
0075dd8b  MOV dword ptr [ECX + 0x8],EAX
0075dd8e  MOV EDX,dword ptr [EBX + 0x8]
0075dd91  MOV dword ptr [EDX + 0x4],ECX
0075dd94  MOV EAX,dword ptr [EBP + 0x4]
0075dd97  CMP dword ptr [EAX + 0x4],EBX
0075dd9a  JNZ 0x0075dda1
0075dd9c  MOV dword ptr [EAX + 0x4],ECX
0075dd9f  JMP 0x0075ddaf
0075dda1  MOV EAX,dword ptr [EBX + 0x4]
0075dda4  CMP dword ptr [EAX],EBX
0075dda6  JNZ 0x0075ddac
0075dda8  MOV dword ptr [EAX],ECX
0075ddaa  JMP 0x0075ddaf
0075ddac  MOV dword ptr [EAX + 0x8],ECX
0075ddaf  MOV EAX,dword ptr [EBX + 0x4]
0075ddb2  MOV dword ptr [ECX + 0x4],EAX
0075ddb5  MOV DL,byte ptr [EBX + 0x14]
0075ddb8  MOV AL,byte ptr [ECX + 0x14]
0075ddbb  MOV byte ptr [ECX + 0x14],DL
0075ddbe  MOV byte ptr [EBX + 0x14],AL
0075ddc1  MOV EAX,dword ptr [ESP + 0x10]
0075ddc5  MOV CL,byte ptr [EAX + 0x14]
0075ddc8  MOV BL,0x1
0075ddca  CMP CL,BL
0075ddcc  JNZ 0x0075ded1
0075ddd2  MOV ECX,dword ptr [EBP + 0x4]
0075ddd5  CMP EDI,dword ptr [ECX + 0x4]
0075ddd8  JZ 0x0075dece
0075ddde  MOV EDI,EDI
0075dde0  CMP byte ptr [EDI + 0x14],BL
0075dde3  JNZ 0x0075dece
0075dde9  MOV EAX,dword ptr [ESI]
0075ddeb  CMP EDI,EAX
0075dded  JNZ 0x0075de56
0075ddef  MOV EAX,dword ptr [ESI + 0x8]
0075ddf2  MOV CL,byte ptr [EAX + 0x14]
0075ddf5  TEST CL,CL
0075ddf7  JNZ 0x0075de0b
0075ddf9  MOV byte ptr [EAX + 0x14],BL
0075ddfc  PUSH ESI
0075ddfd  MOV ECX,EBP
0075ddff  MOV byte ptr [ESI + 0x14],0x0
0075de03  CALL 0x0074ca70
0075de08  MOV EAX,dword ptr [ESI + 0x8]
0075de0b  MOV CL,byte ptr [EAX + 0x15]
0075de0e  TEST CL,CL
0075de10  JNZ 0x0075de88
0075de12  MOV EDX,dword ptr [EAX]
0075de14  CMP byte ptr [EDX + 0x14],BL
0075de17  JNZ 0x0075de21
0075de19  MOV ECX,dword ptr [EAX + 0x8]
0075de1c  CMP byte ptr [ECX + 0x14],BL
0075de1f  JZ 0x0075de84
0075de21  MOV ECX,dword ptr [EAX + 0x8]
0075de24  CMP byte ptr [ECX + 0x14],BL
0075de27  JNZ 0x0075de3d
0075de29  MOV EDX,dword ptr [EAX]
0075de2b  MOV byte ptr [EDX + 0x14],BL
0075de2e  PUSH EAX
0075de2f  MOV ECX,EBP
0075de31  MOV byte ptr [EAX + 0x14],0x0
0075de35  CALL 0x0073f730
0075de3a  MOV EAX,dword ptr [ESI + 0x8]
0075de3d  MOV CL,byte ptr [ESI + 0x14]
0075de40  MOV byte ptr [EAX + 0x14],CL
0075de43  MOV byte ptr [ESI + 0x14],BL
0075de46  MOV EDX,dword ptr [EAX + 0x8]
0075de49  PUSH ESI
0075de4a  MOV ECX,EBP
0075de4c  MOV byte ptr [EDX + 0x14],BL
0075de4f  CALL 0x0074ca70
0075de54  JMP 0x0075dece
0075de56  MOV CL,byte ptr [EAX + 0x14]
0075de59  TEST CL,CL
0075de5b  JNZ 0x0075de6e
0075de5d  MOV byte ptr [EAX + 0x14],BL
0075de60  PUSH ESI
0075de61  MOV ECX,EBP
0075de63  MOV byte ptr [ESI + 0x14],0x0
0075de67  CALL 0x0073f730
0075de6c  MOV EAX,dword ptr [ESI]
0075de6e  MOV CL,byte ptr [EAX + 0x15]
0075de71  TEST CL,CL
0075de73  JNZ 0x0075de88
0075de75  MOV EDX,dword ptr [EAX + 0x8]
0075de78  CMP byte ptr [EDX + 0x14],BL
0075de7b  JNZ 0x0075de9d
0075de7d  MOV ECX,dword ptr [EAX]
0075de7f  CMP byte ptr [ECX + 0x14],BL
0075de82  JNZ 0x0075de9d
0075de84  MOV byte ptr [EAX + 0x14],0x0
0075de88  MOV EDX,dword ptr [EBP + 0x4]
0075de8b  MOV EAX,dword ptr [EDX + 0x4]
0075de8e  MOV EDI,ESI
0075de90  CMP EDI,EAX
0075de92  MOV ESI,dword ptr [ESI + 0x4]
0075de95  JNZ 0x0075dde0
0075de9b  JMP 0x0075dece
0075de9d  MOV ECX,dword ptr [EAX]
0075de9f  CMP byte ptr [ECX + 0x14],BL
0075dea2  JNZ 0x0075deb8
0075dea4  MOV EDX,dword ptr [EAX + 0x8]
0075dea7  MOV byte ptr [EDX + 0x14],BL
0075deaa  PUSH EAX
0075deab  MOV ECX,EBP
0075dead  MOV byte ptr [EAX + 0x14],0x0
0075deb1  CALL 0x0074ca70
0075deb6  MOV EAX,dword ptr [ESI]
0075deb8  MOV CL,byte ptr [ESI + 0x14]
0075debb  MOV byte ptr [EAX + 0x14],CL
0075debe  MOV byte ptr [ESI + 0x14],BL
0075dec1  MOV EDX,dword ptr [EAX]
0075dec3  PUSH ESI
0075dec4  MOV ECX,EBP
0075dec6  MOV byte ptr [EDX + 0x14],BL
0075dec9  CALL 0x0073f730
0075dece  MOV byte ptr [EDI + 0x14],BL
0075ded1  MOV EAX,dword ptr [ESP + 0x10]
0075ded5  PUSH 0x0
0075ded7  PUSH 0x18
0075ded9  PUSH EAX
0075deda  MOV ECX,0x925b30
0075dedf  CALL 0x005d0370
0075dee4  MOV EAX,dword ptr [EBP + 0x8]
0075dee7  TEST EAX,EAX
0075dee9  POP EDI
0075deea  POP EBX
0075deeb  JBE 0x0075def1
0075deed  DEC EAX
0075deee  MOV dword ptr [EBP + 0x8],EAX
0075def1  MOV ECX,dword ptr [ESP + 0x64]
0075def5  MOV EAX,dword ptr [ESP + 0x60]
0075def9  MOV dword ptr [EAX],ECX
0075defb  MOV ECX,dword ptr [ESP + 0x50]
0075deff  POP ESI
0075df00  POP EBP
0075df01  MOV dword ptr FS:[0x0],ECX
0075df08  ADD ESP,0x54
0075df0b  RET 0x8
