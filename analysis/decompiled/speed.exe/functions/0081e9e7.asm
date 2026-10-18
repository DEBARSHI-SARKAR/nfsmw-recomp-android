0081e9e7  PUSH EBP
0081e9e8  MOV EBP,ESP
0081e9ea  PUSH ECX
0081e9eb  PUSH ECX
0081e9ec  PUSH EBX
0081e9ed  MOV EBX,dword ptr [EBP + 0x8]
0081e9f0  PUSH ESI
0081e9f1  MOV ESI,dword ptr [0x009c21fc]
0081e9f7  MOV EAX,dword ptr [ESI + 0x14]
0081e9fa  ADD EBX,0xf
0081e9fd  PUSH EDI
0081e9fe  XOR EDI,EDI
0081ea00  AND EBX,0xfffffff0
0081ea03  CMP EAX,EDI
0081ea05  MOV dword ptr [EBP + -0x4],EDI
0081ea08  JNZ 0x0081ea0f
0081ea0a  MOV EAX,dword ptr [ESI + 0xc]
0081ea0d  JMP 0x0081ea6c
0081ea0f  CMP EAX,EDI
0081ea11  MOV dword ptr [EBP + -0x4],EDI
0081ea14  JGE 0x0081ea58
0081ea16  MOV ECX,dword ptr [EBP + -0x4]
0081ea19  TEST ECX,ECX
0081ea1b  MOV EAX,dword ptr [ESI + 0x4]
0081ea1e  LEA EAX,[EAX + ECX*0x8]
0081ea21  JNZ 0x0081ea29
0081ea23  MOV EAX,dword ptr [EAX]
0081ea25  XOR EDI,EDI
0081ea27  JMP 0x0081ea33
0081ea29  MOV EDI,dword ptr [EAX + 0xc]
0081ea2c  ADD EDI,dword ptr [EAX + 0x8]
0081ea2f  MOV EAX,dword ptr [EAX]
0081ea31  SUB EAX,EDI
0081ea33  MOV dword ptr [EBP + 0x8],EAX
0081ea36  LEA EAX,[EBP + 0x8]
0081ea39  PUSH EAX
0081ea3a  LEA EAX,[EBP + -0x8]
0081ea3d  PUSH EAX
0081ea3e  MOV dword ptr [EBP + -0x8],EDI
0081ea41  CALL 0x0081e96b
0081ea46  CMP EBX,dword ptr [EBP + 0x8]
0081ea49  POP ECX
0081ea4a  POP ECX
0081ea4b  JLE 0x0081ea8a
0081ea4d  DEC dword ptr [EBP + -0x4]
0081ea50  MOV EAX,dword ptr [EBP + -0x4]
0081ea53  CMP EAX,dword ptr [ESI + 0x14]
0081ea56  JG 0x0081ea16
0081ea58  MOV EAX,dword ptr [ESI + 0x4]
0081ea5b  MOV ECX,dword ptr [EBP + -0x4]
0081ea5e  LEA EAX,[EAX + ECX*0x8 + 0x8]
0081ea62  MOV EDI,dword ptr [EAX + 0x4]
0081ea65  ADD EDI,dword ptr [EAX]
0081ea67  MOV EAX,dword ptr [ESI + 0xc]
0081ea6a  SUB EAX,EDI
0081ea6c  MOV dword ptr [EBP + 0x8],EAX
0081ea6f  LEA EAX,[EBP + 0x8]
0081ea72  PUSH EAX
0081ea73  LEA EAX,[EBP + -0x8]
0081ea76  PUSH EAX
0081ea77  MOV dword ptr [EBP + -0x8],EDI
0081ea7a  CALL 0x0081e96b
0081ea7f  CMP EBX,dword ptr [EBP + 0x8]
0081ea82  POP ECX
0081ea83  POP ECX
0081ea84  JLE 0x0081eaac
0081ea86  XOR EAX,EAX
0081ea88  JMP 0x0081eae4
0081ea8a  MOV ECX,dword ptr [ESI + 0x14]
0081ea8d  JMP 0x0081eaa7
0081ea8f  MOV EAX,dword ptr [ESI + 0x4]
0081ea92  LEA EAX,[EAX + ECX*0x8]
0081ea95  MOV EDX,dword ptr [EAX + 0x8]
0081ea98  MOV dword ptr [EAX],EDX
0081ea9a  MOV EDX,dword ptr [EAX + 0xc]
0081ea9d  MOV dword ptr [EAX + 0x4],EDX
0081eaa0  MOV ESI,dword ptr [0x009c21fc]
0081eaa6  INC ECX
0081eaa7  CMP ECX,dword ptr [EBP + -0x4]
0081eaaa  JL 0x0081ea8f
0081eaac  MOV EAX,dword ptr [ESI + 0x4]
0081eaaf  MOV ECX,dword ptr [EBP + -0x4]
0081eab2  LEA EAX,[EAX + ECX*0x8]
0081eab5  MOV dword ptr [EAX],EDI
0081eab7  MOV dword ptr [EAX + 0x4],EBX
0081eaba  MOV EAX,[0x009c21fc]
0081eabf  DEC dword ptr [EAX + 0x14]
0081eac2  MOV EAX,[0x009c21fc]
0081eac7  ADD dword ptr [EAX + 0xc],-0x8
0081eacb  MOV ECX,dword ptr [0x009c21fc]
0081ead1  MOV EDX,dword ptr [ECX + 0xc]
0081ead4  MOV EAX,dword ptr [ECX]
0081ead6  SUB EDX,EDI
0081ead8  SUB EDX,EBX
0081eada  ADD EAX,EDI
0081eadc  CMP EDX,dword ptr [ECX + 0x10]
0081eadf  JGE 0x0081eae4
0081eae1  MOV dword ptr [ECX + 0x10],EDX
0081eae4  POP EDI
0081eae5  POP ESI
0081eae6  POP EBX
0081eae7  LEAVE
0081eae8  RET
