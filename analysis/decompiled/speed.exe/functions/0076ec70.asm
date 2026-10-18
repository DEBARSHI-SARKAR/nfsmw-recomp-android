0076ec70  SUB ESP,0x60
0076ec73  PUSH EBX
0076ec74  MOV EBX,ECX
0076ec76  MOV AL,byte ptr [EBX + 0x50]
0076ec79  TEST AL,AL
0076ec7b  JZ 0x0076eebf
0076ec81  MOV AL,byte ptr [EBX + 0x55]
0076ec84  TEST AL,AL
0076ec86  JZ 0x0076eebf
0076ec8c  MOV EAX,dword ptr [EBX + 0x8]
0076ec8f  TEST EAX,EAX
0076ec91  JZ 0x0076eebf
0076ec97  FLD float ptr [0x00890968]
0076ec9d  PUSH ESI
0076ec9e  PUSH EDI
0076ec9f  MOV EDI,dword ptr [EAX]
0076eca1  TEST EDI,EDI
0076eca3  SETZ CL
0076eca6  TEST CL,CL
0076eca8  JNZ 0x0076ed50
0076ecae  MOV ECX,dword ptr [EAX + 0x4]
0076ecb1  FSTP ST0
0076ecb3  MOV EDX,dword ptr [EBX + 0x9c]
0076ecb9  FLD float ptr [EBX + 0x98]
0076ecbf  SHL ECX,0x6
0076ecc2  FSUB float ptr [ECX + EAX*0x1 + 0x40]
0076ecc6  LEA ESI,[ECX + EAX*0x1 + 0x10]
0076ecca  MOV EAX,dword ptr [EBX + 0xa0]
0076ecd0  MOV dword ptr [ESP + 0x24],EDX
0076ecd4  FLD float ptr [ESP + 0x24]
0076ecd8  FSUB float ptr [ESI + 0x34]
0076ecdb  MOV dword ptr [ESP + 0x28],EAX
0076ecdf  FLD float ptr [ESP + 0x28]
0076ece3  FSUB float ptr [ESI + 0x38]
0076ece6  FSTP float ptr [ESP + 0x1c]
0076ecea  MOV ECX,dword ptr [ESP + 0x1c]
0076ecee  FXCH
0076ecf0  MOV dword ptr [ESP + 0x28],ECX
0076ecf4  FSTP float ptr [ESP + 0x20]
0076ecf8  MOV EDX,dword ptr [ESP + 0x20]
0076ecfc  MOV dword ptr [ESP + 0x14],EDX
0076ed00  FSTP float ptr [ESP + 0x24]
0076ed04  MOV EAX,dword ptr [ESP + 0x24]
0076ed08  LEA EDX,[ESP + 0x14]
0076ed0c  PUSH EDX
0076ed0d  MOV dword ptr [ESP + 0x1c],EAX
0076ed11  MOV dword ptr [ESP + 0x20],ECX
0076ed15  CALL 0x00410180
0076ed1a  FCOM float ptr [ESP + 0x74]
0076ed1e  ADD ESP,0x4
0076ed21  FNSTSW AX
0076ed23  TEST AH,0x1
0076ed26  JNZ 0x0076eebb
0076ed2c  FLD float ptr [ESP + 0x1c]
0076ed30  FMUL float ptr [ESI + 0x14]
0076ed33  FLD float ptr [ESP + 0x14]
0076ed37  FMUL float ptr [ESI + 0x10]
0076ed3a  FADDP
0076ed3c  FCOMP float ptr [0x00895c44]
0076ed42  FNSTSW AX
0076ed44  TEST AH,0x5
0076ed47  JP 0x0076ed50
0076ed49  MOV ECX,EBX
0076ed4b  CALL 0x0076e320
0076ed50  LEA EAX,[EBX + 0x98]
0076ed56  FSTP float ptr [ESP + 0x44]
0076ed5a  MOV ECX,dword ptr [EAX]
0076ed5c  MOV EDX,dword ptr [EAX + 0x4]
0076ed5f  MOV EAX,dword ptr [EAX + 0x8]
0076ed62  MOV dword ptr [ESP + 0x60],EDX
0076ed66  MOVSX DX,byte ptr [EBX + 0x8c]
0076ed6e  MOV dword ptr [ESP + 0x64],EAX
0076ed72  XOR EAX,EAX
0076ed74  MOV AX,word ptr [EBX + 0x8e]
0076ed7b  MOV dword ptr [ESP + 0x5c],ECX
0076ed7f  MOV ECX,dword ptr [EBX + 0x94]
0076ed85  MOV dword ptr [ESP + 0x48],ECX
0076ed89  MOV ECX,dword ptr [EBX + 0x90]
0076ed8f  SHL EDX,0xf
0076ed92  PUSH ECX
0076ed93  AND EAX,0x7fff
0076ed98  OR EDX,EAX
0076ed9a  LEA ECX,[ESP + 0x30]
0076ed9e  MOV dword ptr [ESP + 0x58],0x0
0076eda6  MOV word ptr [ESP + 0x6e],DX
0076edab  CALL 0x00764c20
0076edb0  MOV EDX,dword ptr [EBX + 0xa4]
0076edb6  MOV EAX,dword ptr [EBX + 0xac]
0076edbc  MOV ECX,EDX
0076edbe  MOV dword ptr [ESP + 0x2c],ECX
0076edc2  FLD float ptr [ESP + 0x2c]
0076edc6  MOV ECX,dword ptr [EBX + 0xb8]
0076edcc  FSUB float ptr [ESP + 0x5c]
0076edd0  MOV dword ptr [ESP + 0x14],EDX
0076edd4  MOV EDX,EAX
0076edd6  MOV dword ptr [ESP + 0x30],EDX
0076edda  FSTP float ptr [ESP + 0xc]
0076edde  MOV dword ptr [ESP + 0x18],EAX
0076ede2  MOV EAX,dword ptr [EBX + 0xb0]
0076ede8  FLD float ptr [ESP + 0x30]
0076edec  FSUB float ptr [ESP + 0x64]
0076edf0  MOV EDX,EAX
0076edf2  MOV dword ptr [ESP + 0x34],EDX
0076edf6  MOV dword ptr [ESP + 0x14],EAX
0076edfa  FSTP float ptr [ESP + 0x10]
0076edfe  MOV EAX,ECX
0076ee00  FLD float ptr [ESP + 0x34]
0076ee04  MOV dword ptr [ESP + 0x38],EAX
0076ee08  FSUB float ptr [ESP + 0x5c]
0076ee0c  MOV dword ptr [ESP + 0x18],ECX
0076ee10  LEA ECX,[ESP + 0x20]
0076ee14  PUSH ECX
0076ee15  FSTP float ptr [ESP + 0x18]
0076ee19  LEA EDX,[ESP + 0x40]
0076ee1d  FLD float ptr [ESP + 0x3c]
0076ee21  PUSH EDX
0076ee22  FSUB float ptr [ESP + 0x6c]
0076ee26  FSTP float ptr [ESP + 0x20]
0076ee2a  FLD float ptr [ESP + 0x1c]
0076ee2e  FSUB float ptr [ESP + 0x14]
0076ee32  FLD float ptr [ESP + 0x20]
0076ee36  FSUB float ptr [ESP + 0x18]
0076ee3a  FCHS
0076ee3c  FSTP float ptr [ESP + 0x28]
0076ee40  FSTP float ptr [ESP + 0x2c]
0076ee44  CALL 0x0045f3c0
0076ee49  FLD float ptr [ESP + 0x48]
0076ee4d  ADD ESP,0x8
0076ee50  TEST EDI,EDI
0076ee52  FMUL float ptr [ESP + 0xc]
0076ee56  FLD float ptr [ESP + 0x10]
0076ee5a  FMUL float ptr [ESP + 0x3c]
0076ee5e  FSUBP
0076ee60  FSTP float ptr [ESP + 0x4c]
0076ee64  FLD float ptr [ESP + 0x40]
0076ee68  FMUL float ptr [ESP + 0x14]
0076ee6c  FLD float ptr [ESP + 0x18]
0076ee70  FMUL float ptr [ESP + 0x3c]
0076ee74  FSUBP
0076ee76  FSTP float ptr [ESP + 0x50]
0076ee7a  JNZ 0x0076ee8a
0076ee7c  LEA EDI,[EBX + 0xc]
0076ee7f  MOV ECX,0x10
0076ee84  LEA ESI,[ESP + 0x2c]
0076ee88  MOVSD.REP ES:EDI,ESI
0076ee8a  MOV ESI,dword ptr [EBX + 0x8]
0076ee8d  MOV EAX,dword ptr [ESI]
0076ee8f  CMP EAX,dword ptr [ESI + 0x8]
0076ee92  JNZ 0x0076eea6
0076ee94  MOV EAX,dword ptr [EBX + 0x4]
0076ee97  DEC EAX
0076ee98  MOV ECX,0x0
0076ee9d  SETS CL
0076eea0  DEC ECX
0076eea1  AND EAX,ECX
0076eea3  MOV dword ptr [EBX + 0x4],EAX
0076eea6  LEA EDX,[ESP + 0x2c]
0076eeaa  PUSH EDX
0076eeab  MOV ECX,ESI
0076eead  CALL 0x00769900
0076eeb2  POP EDI
0076eeb3  POP ESI
0076eeb4  POP EBX
0076eeb5  ADD ESP,0x60
0076eeb8  RET 0x4
0076eebb  POP EDI
0076eebc  FSTP ST0
0076eebe  POP ESI
0076eebf  POP EBX
0076eec0  ADD ESP,0x60
0076eec3  RET 0x4
