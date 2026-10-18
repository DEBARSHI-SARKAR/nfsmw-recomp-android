005fcea0  SUB ESP,0x40
005fcea3  PUSH ESI
005fcea4  MOV ESI,ECX
005fcea6  MOV EAX,dword ptr [ESI + 0x4]
005fcea9  TEST EAX,EAX
005fceab  JZ 0x005fcf17
005fcead  MOVZX ECX,byte ptr [EAX + 0x2c]
005fceb1  MOV EAX,dword ptr [ESP + 0x48]
005fceb5  MOV dword ptr [ESP + 0x14],ECX
005fceb9  FILD dword ptr [ESP + 0x14]
005fcebd  FMUL float ptr [0x00899dd0]
005fcec3  FSTP float ptr [EAX]
005fcec5  MOV EDX,dword ptr [ESI + 0x4]
005fcec8  MOVZX ECX,byte ptr [EDX + 0x2d]
005fcecc  MOV dword ptr [ESP + 0x48],ECX
005fced0  FILD dword ptr [ESP + 0x48]
005fced4  FMUL float ptr [0x00899dd0]
005fceda  FSTP float ptr [EAX + 0x4]
005fcedd  MOV EDX,dword ptr [ESI + 0x4]
005fcee0  MOVZX EAX,byte ptr [EDX + 0x2e]
005fcee4  MOV dword ptr [ESP + 0x48],EAX
005fcee8  MOV EAX,dword ptr [ESP + 0x4c]
005fceec  FILD dword ptr [ESP + 0x48]
005fcef0  FMUL float ptr [0x00899dd0]
005fcef6  FSTP float ptr [EAX]
005fcef8  MOV ECX,dword ptr [ESI + 0x4]
005fcefb  MOVZX EDX,byte ptr [ECX + 0x2f]
005fceff  MOV dword ptr [ESP + 0x48],EDX
005fcf03  POP ESI
005fcf04  FILD dword ptr [ESP + 0x44]
005fcf08  FMUL float ptr [0x00899dd0]
005fcf0e  FSTP float ptr [EAX + 0x4]
005fcf11  ADD ESP,0x40
005fcf14  RET 0x8
005fcf17  MOV EAX,dword ptr [ESI + 0xc]
005fcf1a  TEST EAX,EAX
005fcf1c  JZ 0x005fcf2f
005fcf1e  CMP dword ptr [EAX],0x0
005fcf21  JNZ 0x005fcf2f
005fcf23  MOV ECX,dword ptr [0x0091e00c]
005fcf29  PUSH EAX
005fcf2a  CALL 0x005fa780
005fcf2f  MOV EAX,dword ptr [ESI + 0x10]
005fcf32  TEST EAX,EAX
005fcf34  JZ 0x005fcf47
005fcf36  CMP dword ptr [EAX],0x0
005fcf39  JNZ 0x005fcf47
005fcf3b  MOV ECX,dword ptr [0x0091e00c]
005fcf41  PUSH EAX
005fcf42  CALL 0x005fa780
005fcf47  LEA EAX,[ESP + 0x38]
005fcf4b  PUSH EAX
005fcf4c  MOV ECX,ESI
005fcf4e  CALL 0x005fad10
005fcf53  FLD float ptr [ESP + 0x38]
005fcf57  MOV ECX,dword ptr [ESP + 0x40]
005fcf5b  FCHS
005fcf5d  MOV EDX,ECX
005fcf5f  FST float ptr [ESP + 0x8]
005fcf63  MOV dword ptr [ESP + 0x4],ECX
005fcf67  FSTP float ptr [ESP + 0x10]
005fcf6b  MOV ECX,ESI
005fcf6d  MOV dword ptr [ESP + 0xc],EDX
005fcf71  CALL 0x005faf10
005fcf76  TEST AL,AL
005fcf78  JZ 0x005fd00a
005fcf7e  LEA EAX,[ESP + 0x38]
005fcf82  PUSH EAX
005fcf83  MOV ECX,ESI
005fcf85  CALL 0x005faf70
005fcf8a  FLD float ptr [ESP + 0x40]
005fcf8e  FCOMP float ptr [ESP + 0x4]
005fcf92  FNSTSW AX
005fcf94  TEST AH,0x5
005fcf97  LEA EAX,[ESP + 0x40]
005fcf9b  JNP 0x005fcfa1
005fcf9d  LEA EAX,[ESP + 0x4]
005fcfa1  FLD float ptr [ESP + 0xc]
005fcfa5  MOV ECX,dword ptr [EAX]
005fcfa7  FCOMP float ptr [ESP + 0x40]
005fcfab  MOV dword ptr [ESP + 0x4],ECX
005fcfaf  FNSTSW AX
005fcfb1  TEST AH,0x5
005fcfb4  LEA EAX,[ESP + 0x40]
005fcfb8  JNP 0x005fcfbe
005fcfba  LEA EAX,[ESP + 0xc]
005fcfbe  FLD float ptr [ESP + 0x38]
005fcfc2  MOV EDX,dword ptr [EAX]
005fcfc4  FCHS
005fcfc6  MOV dword ptr [ESP + 0xc],EDX
005fcfca  FLD ST0
005fcfcc  FST float ptr [ESP + 0x14]
005fcfd0  FCOMP float ptr [ESP + 0x8]
005fcfd4  FNSTSW AX
005fcfd6  TEST AH,0x5
005fcfd9  LEA EAX,[ESP + 0x14]
005fcfdd  JNP 0x005fcfe3
005fcfdf  LEA EAX,[ESP + 0x8]
005fcfe3  MOV EAX,dword ptr [EAX]
005fcfe5  FSTP float ptr [ESP + 0x14]
005fcfe9  FLD float ptr [ESP + 0x10]
005fcfed  MOV dword ptr [ESP + 0x8],EAX
005fcff1  FCOMP float ptr [ESP + 0x14]
005fcff5  FNSTSW AX
005fcff7  TEST AH,0x5
005fcffa  LEA EAX,[ESP + 0x14]
005fcffe  JNP 0x005fd004
005fd000  LEA EAX,[ESP + 0x10]
005fd004  MOV ECX,dword ptr [EAX]
005fd006  MOV dword ptr [ESP + 0x10],ECX
005fd00a  PUSH EDI
005fd00b  XOR EDI,EDI
005fd00d  LEA ECX,[ECX]
005fd010  MOV EAX,dword ptr [ESI + 0xc]
005fd013  TEST EAX,EAX
005fd015  JZ 0x005fd028
005fd017  CMP dword ptr [EAX],0x0
005fd01a  JNZ 0x005fd028
005fd01c  MOV ECX,dword ptr [0x0091e00c]
005fd022  PUSH EAX
005fd023  CALL 0x005fa780
005fd028  MOV EAX,dword ptr [ESI + 0x10]
005fd02b  TEST EAX,EAX
005fd02d  JZ 0x005fd040
005fd02f  CMP dword ptr [EAX],0x0
005fd032  JNZ 0x005fd040
005fd034  MOV ECX,dword ptr [0x0091e00c]
005fd03a  PUSH EAX
005fd03b  CALL 0x005fa780
005fd040  MOV ECX,dword ptr [ESI + 0x8]
005fd043  CALL 0x005d9a10
005fd048  CMP EDI,EAX
005fd04a  JNC 0x005fd0e2
005fd050  MOV EDX,dword ptr [ESI]
005fd052  LEA EAX,[ESP + 0x3c]
005fd056  PUSH EAX
005fd057  PUSH EDI
005fd058  MOV ECX,ESI
005fd05a  CALL dword ptr [EDX]
005fd05c  FLD float ptr [ESP + 0x44]
005fd060  FCOMP float ptr [ESP + 0x8]
005fd064  FNSTSW AX
005fd066  TEST AH,0x5
005fd069  LEA EAX,[ESP + 0x44]
005fd06d  JNP 0x005fd073
005fd06f  LEA EAX,[ESP + 0x8]
005fd073  FLD float ptr [ESP + 0x10]
005fd077  MOV ECX,dword ptr [EAX]
005fd079  FCOMP float ptr [ESP + 0x44]
005fd07d  MOV dword ptr [ESP + 0x8],ECX
005fd081  FNSTSW AX
005fd083  TEST AH,0x5
005fd086  LEA EAX,[ESP + 0x44]
005fd08a  JNP 0x005fd090
005fd08c  LEA EAX,[ESP + 0x10]
005fd090  FLD float ptr [ESP + 0x3c]
005fd094  MOV EDX,dword ptr [EAX]
005fd096  FCHS
005fd098  MOV dword ptr [ESP + 0x10],EDX
005fd09c  FLD ST0
005fd09e  FST float ptr [ESP + 0x18]
005fd0a2  FCOMP float ptr [ESP + 0xc]
005fd0a6  FNSTSW AX
005fd0a8  TEST AH,0x5
005fd0ab  LEA EAX,[ESP + 0x18]
005fd0af  JNP 0x005fd0b5
005fd0b1  LEA EAX,[ESP + 0xc]
005fd0b5  MOV EAX,dword ptr [EAX]
005fd0b7  FSTP float ptr [ESP + 0x18]
005fd0bb  FLD float ptr [ESP + 0x14]
005fd0bf  MOV dword ptr [ESP + 0xc],EAX
005fd0c3  FCOMP float ptr [ESP + 0x18]
005fd0c7  FNSTSW AX
005fd0c9  TEST AH,0x5
005fd0cc  LEA EAX,[ESP + 0x18]
005fd0d0  JNP 0x005fd0d6
005fd0d2  LEA EAX,[ESP + 0x14]
005fd0d6  MOV ECX,dword ptr [EAX]
005fd0d8  MOV dword ptr [ESP + 0x14],ECX
005fd0dc  INC EDI
005fd0dd  JMP 0x005fd010
005fd0e2  PUSH 0x7d0
005fd0e7  CALL 0x00722840
005fd0ec  MOV ECX,dword ptr [ESP + 0x14]
005fd0f0  MOV EDX,dword ptr [ESP + 0xc]
005fd0f4  MOV ESI,EAX
005fd0f6  MOV EAX,dword ptr [ESP + 0x10]
005fd0fa  MOV dword ptr [ESP + 0x24],EAX
005fd0fe  PUSH ESI
005fd0ff  LEA EAX,[ESP + 0x34]
005fd103  MOV dword ptr [ESP + 0x2c],ECX
005fd107  MOV dword ptr [ESP + 0x24],EDX
005fd10b  MOV EDX,dword ptr [ESP + 0x1c]
005fd10f  PUSH EAX
005fd110  LEA ECX,[ESP + 0x28]
005fd114  PUSH ECX
005fd115  MOV dword ptr [ESP + 0x38],EDX
005fd119  CALL 0x00567510
005fd11e  PUSH ESI
005fd11f  LEA EDX,[ESP + 0x48]
005fd123  PUSH EDX
005fd124  LEA EAX,[ESP + 0x3c]
005fd128  PUSH EAX
005fd129  CALL 0x00567510
005fd12e  FLD float ptr [ESP + 0x48]
005fd132  MOV EAX,dword ptr [ESP + 0x68]
005fd136  MOV ECX,dword ptr [ESP + 0x4c]
005fd13a  FSTP float ptr [EAX]
005fd13c  FLD float ptr [ESP + 0x50]
005fd140  MOV EDX,dword ptr [ESP + 0x54]
005fd144  ADD ESP,0x1c
005fd147  MOV dword ptr [EAX + 0x4],ECX
005fd14a  MOV EAX,dword ptr [ESP + 0x50]
005fd14e  POP EDI
005fd14f  FSTP float ptr [EAX]
005fd151  MOV dword ptr [EAX + 0x4],EDX
005fd154  POP ESI
005fd155  ADD ESP,0x40
005fd158  RET 0x8
