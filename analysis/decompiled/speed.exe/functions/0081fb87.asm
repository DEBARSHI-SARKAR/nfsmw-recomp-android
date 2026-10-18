0081fb87  PUSH EBP
0081fb88  MOV EBP,ESP
0081fb8a  SUB ESP,0x30
0081fb8d  PUSH EBX
0081fb8e  PUSH ESI
0081fb8f  PUSH EDI
0081fb90  CALL 0x0081bccb
0081fb95  MOVZX EAX,byte ptr [0x009c205f]
0081fb9c  SHL EAX,0x8
0081fb9f  PUSH EAX
0081fba0  CALL 0x0081e9e7
0081fba5  POP ECX
0081fba6  MOV [0x009c2284],EAX
0081fbab  CALL 0x0081bcd9
0081fbb0  MOV DL,byte ptr [0x009c205f]
0081fbb6  MOVZX ECX,DL
0081fbb9  XOR EAX,EAX
0081fbbb  TEST ECX,ECX
0081fbbd  JLE 0x0081fbd7
0081fbbf  MOV ESI,dword ptr [0x009c2284]
0081fbc5  MOV dword ptr [EAX*0x4 + 0x9c226c],ESI
0081fbcc  INC EAX
0081fbcd  ADD ESI,0x100
0081fbd3  CMP EAX,ECX
0081fbd5  JL 0x0081fbc5
0081fbd7  XOR EBX,EBX
0081fbd9  JMP 0x0081fbe1
0081fbdb  MOV DL,byte ptr [0x009c205f]
0081fbe1  XOR EAX,EAX
0081fbe3  CMP DL,0x1
0081fbe6  MOV AH,BL
0081fbe8  MOVZX EAX,AX
0081fbeb  MOV dword ptr [EBP + -0x4],EAX
0081fbee  FILD dword ptr [EBP + -0x4]
0081fbf1  FMUL float ptr [0x00894958]
0081fbf7  FSTP float ptr [EBP + -0x4]
0081fbfa  JNZ 0x0081fc0a
0081fbfc  MOV EAX,[0x009c226c]
0081fc01  MOV byte ptr [EAX + EBX*0x1],0x7f
0081fc05  JMP 0x0081fe52
0081fc0a  XOR EAX,EAX
0081fc0c  TEST DL,DL
0081fc0e  JBE 0x0081fc2d
0081fc10  MOV ECX,dword ptr [EAX*0x4 + 0x9c226c]
0081fc17  MOV byte ptr [EBX + ECX*0x1],0x0
0081fc1b  MOVZX ECX,byte ptr [0x009c205f]
0081fc22  INC EAX
0081fc23  CMP EAX,ECX
0081fc25  JL 0x0081fc10
0081fc27  MOV DL,byte ptr [0x009c205f]
0081fc2d  FLD float ptr [EBP + -0x4]
0081fc30  FCOMP float ptr [0x009c1fc4]
0081fc36  FLD float ptr [EBP + -0x4]
0081fc39  FNSTSW AX
0081fc3b  TEST AH,0x41
0081fc3e  JP 0x0081fd28
0081fc44  SUB ESP,0xc
0081fc47  CMP DL,0x5
0081fc4a  FSTP float ptr [ESP + 0x8]
0081fc4e  JC 0x0081fcb0
0081fc50  FLD float ptr [0x009c1fc8]
0081fc56  LEA EAX,[EBP + -0x30]
0081fc59  FSTP float ptr [ESP + 0x4]
0081fc5d  FLD float ptr [0x009c1fc4]
0081fc63  FSTP float ptr [ESP]
0081fc66  PUSH EAX
0081fc67  CALL 0x0081fb38
0081fc6c  FLD float ptr [EBP + -0x30]
0081fc6f  FMUL float ptr [0x00899dd8]
0081fc75  ADD ESP,0x10
0081fc78  FSTP float ptr [EBP + -0x4]
0081fc7b  FLD float ptr [EBP + -0x4]
0081fc7e  FISTP dword ptr [EBP + -0x8]
0081fc81  FLD float ptr [EBP + -0x2c]
0081fc84  MOV AL,byte ptr [EBP + -0x8]
0081fc87  FMUL float ptr [0x00899dd8]
0081fc8d  MOV ECX,dword ptr [0x009c226c]
0081fc93  MOV byte ptr [ECX + EBX*0x1],AL
0081fc96  FSTP float ptr [EBP + -0x4]
0081fc99  FLD float ptr [EBP + -0x4]
0081fc9c  FISTP dword ptr [EBP + -0xc]
0081fc9f  MOV AL,byte ptr [EBP + -0xc]
0081fca2  MOV ECX,dword ptr [0x009c2270]
0081fca8  MOV byte ptr [ECX + EBX*0x1],AL
0081fcab  JMP 0x0081fe52
0081fcb0  FLD float ptr [0x00890960]
0081fcb6  MOVZX EAX,DL
0081fcb9  FSUB float ptr [EAX*0x4 + 0x9c1fc0]
0081fcc0  LEA EAX,[EBP + -0x30]
0081fcc3  FMUL float ptr [0x00890da8]
0081fcc9  FSTP float ptr [ESP + 0x4]
0081fccd  FLD float ptr [0x009c1fc4]
0081fcd3  FSTP float ptr [ESP]
0081fcd6  PUSH EAX
0081fcd7  CALL 0x0081fb38
0081fcdc  FLD float ptr [EBP + -0x30]
0081fcdf  FMUL float ptr [0x00899dd8]
0081fce5  ADD ESP,0x10
0081fce8  FSTP float ptr [EBP + -0x4]
0081fceb  FLD float ptr [EBP + -0x4]
0081fcee  FISTP dword ptr [EBP + -0x10]
0081fcf1  FLD float ptr [EBP + -0x2c]
0081fcf4  MOV AL,byte ptr [EBP + -0x10]
0081fcf7  FMUL float ptr [0x00899dd8]
0081fcfd  MOV ECX,dword ptr [0x009c226c]
0081fd03  MOV byte ptr [ECX + EBX*0x1],AL
0081fd06  FSTP float ptr [EBP + -0x4]
0081fd09  FLD float ptr [EBP + -0x4]
0081fd0c  FISTP dword ptr [EBP + -0x14]
0081fd0f  MOV CL,byte ptr [EBP + -0x14]
0081fd12  MOVZX EAX,byte ptr [0x009c205f]
0081fd19  MOV EAX,dword ptr [EAX*0x4 + 0x9c2268]
0081fd20  MOV byte ptr [EBX + EAX*0x1],CL
0081fd23  JMP 0x0081fe52
0081fd28  MOVZX EDX,DL
0081fd2b  LEA ECX,[EDX*0x4 + 0x9c1fc0]
0081fd32  FCOMP float ptr [ECX]
0081fd34  FNSTSW AX
0081fd36  TEST AH,0x1
0081fd39  JNZ 0x0081fdb0
0081fd3b  FLD float ptr [0x00890960]
0081fd41  SUB ESP,0xc
0081fd44  FSUB float ptr [EBP + -0x4]
0081fd47  LEA EAX,[EBP + -0x30]
0081fd4a  FMUL float ptr [0x00890da8]
0081fd50  FSTP float ptr [ESP + 0x8]
0081fd54  FLD float ptr [0x00890960]
0081fd5a  FSUB float ptr [ECX]
0081fd5c  FMUL float ptr [0x00890da8]
0081fd62  FSTP float ptr [ESP + 0x4]
0081fd66  FLD float ptr [0x009c1fc4]
0081fd6c  FSTP float ptr [ESP]
0081fd6f  PUSH EAX
0081fd70  CALL 0x0081fb38
0081fd75  FLD float ptr [EBP + -0x30]
0081fd78  FMUL float ptr [0x00899dd8]
0081fd7e  ADD ESP,0x10
0081fd81  FSTP float ptr [EBP + -0x4]
0081fd84  FLD float ptr [EBP + -0x4]
0081fd87  FISTP dword ptr [EBP + -0x18]
0081fd8a  FLD float ptr [EBP + -0x2c]
0081fd8d  MOV AL,byte ptr [EBP + -0x18]
0081fd90  FMUL float ptr [0x00899dd8]
0081fd96  MOV ECX,dword ptr [0x009c226c]
0081fd9c  MOV byte ptr [ECX + EBX*0x1],AL
0081fd9f  FSTP float ptr [EBP + -0x4]
0081fda2  FLD float ptr [EBP + -0x4]
0081fda5  FISTP dword ptr [EBP + -0x1c]
0081fda8  MOV CL,byte ptr [EBP + -0x1c]
0081fdab  JMP 0x0081fd12
0081fdb0  XOR EDI,EDI
0081fdb2  TEST EDX,EDX
0081fdb4  JLE 0x0081fe52
0081fdba  FLD float ptr [EBP + -0x4]
0081fdbd  MOV ESI,EDI
0081fdbf  SHL ESI,0x2
0081fdc2  FCOMP float ptr [ESI + 0x9c1fc4]
0081fdc8  FNSTSW AX
0081fdca  TEST AH,0x1
0081fdcd  JNZ 0x0081fe42
0081fdcf  FLD float ptr [EBP + -0x4]
0081fdd2  LEA ECX,[ESI + 0x9c1fc8]
0081fdd8  FCOMP float ptr [ECX]
0081fdda  FNSTSW AX
0081fddc  TEST AH,0x41
0081fddf  JP 0x0081fe42
0081fde1  FLD float ptr [EBP + -0x4]
0081fde4  SUB ESP,0xc
0081fde7  FSTP float ptr [ESP + 0x8]
0081fdeb  LEA EAX,[EBP + -0x30]
0081fdee  FLD float ptr [ECX]
0081fdf0  FSTP float ptr [ESP + 0x4]
0081fdf4  FLD float ptr [ESI + 0x9c1fc4]
0081fdfa  FSTP float ptr [ESP]
0081fdfd  PUSH EAX
0081fdfe  CALL 0x0081fb38
0081fe03  FLD float ptr [EBP + -0x30]
0081fe06  FMUL float ptr [0x00899dd8]
0081fe0c  ADD ESP,0x10
0081fe0f  FSTP float ptr [EBP + -0x20]
0081fe12  FLD float ptr [EBP + -0x20]
0081fe15  FISTP dword ptr [EBP + -0x24]
0081fe18  FLD float ptr [EBP + -0x2c]
0081fe1b  MOV EAX,dword ptr [ESI + 0x9c226c]
0081fe21  FMUL float ptr [0x00899dd8]
0081fe27  MOV CL,byte ptr [EBP + -0x24]
0081fe2a  MOV byte ptr [EBX + EAX*0x1],CL
0081fe2d  FSTP float ptr [EBP + -0x20]
0081fe30  FLD float ptr [EBP + -0x20]
0081fe33  FISTP dword ptr [EBP + -0x28]
0081fe36  MOV EAX,dword ptr [ESI + 0x9c2270]
0081fe3c  MOV CL,byte ptr [EBP + -0x28]
0081fe3f  MOV byte ptr [EBX + EAX*0x1],CL
0081fe42  MOVZX EAX,byte ptr [0x009c205f]
0081fe49  INC EDI
0081fe4a  CMP EDI,EAX
0081fe4c  JL 0x0081fdba
0081fe52  INC EBX
0081fe53  CMP EBX,0x100
0081fe59  JL 0x0081fbdb
0081fe5f  POP EDI
0081fe60  POP ESI
0081fe61  POP EBX
0081fe62  LEAVE
0081fe63  RET
