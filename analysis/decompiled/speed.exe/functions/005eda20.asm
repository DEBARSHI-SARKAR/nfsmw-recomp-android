005eda20  SUB ESP,0x1c
005eda23  PUSH EBX
005eda24  PUSH EBP
005eda25  PUSH ESI
005eda26  MOV ESI,dword ptr [ESP + 0x2c]
005eda2a  PUSH EDI
005eda2b  PUSH ESI
005eda2c  MOV EDI,ECX
005eda2e  CALL 0x00454640
005eda33  ADD ESP,0x4
005eda36  MOV dword ptr [ESP + 0x30],EAX
005eda3a  LEA EAX,[ESP + 0x30]
005eda3e  PUSH EAX
005eda3f  LEA ECX,[ESP + 0x14]
005eda43  PUSH ECX
005eda44  LEA ECX,[EDI + 0x98]
005eda4a  CALL 0x005ec420
005eda4f  MOV EBX,dword ptr [ESP + 0x10]
005eda53  CMP dword ptr [EBX + 0x18],0xbf800000
005eda5a  MOV EDX,dword ptr [ESP + 0x34]
005eda5e  MOV dword ptr [EBX + 0x14],EDX
005eda61  JZ 0x005eda87
005eda63  FLD float ptr [ESP + 0x34]
005eda67  MOV AL,byte ptr [EBX + 0x1c]
005eda6a  FCOMP float ptr [EBX + 0x18]
005eda6d  TEST AL,0x1
005eda6f  FNSTSW AX
005eda71  JZ 0x005eda82
005eda73  TEST AH,0x41
005eda76  JZ 0x005eda87
005eda78  POP EDI
005eda79  POP ESI
005eda7a  POP EBP
005eda7b  POP EBX
005eda7c  ADD ESP,0x1c
005eda7f  RET 0x8
005eda82  TEST AH,0x5
005eda85  JP 0x005eda78
005eda87  MOV EAX,dword ptr [ESP + 0x34]
005eda8b  MOV EBP,dword ptr [ESP + 0x34]
005eda8f  PUSH ECX
005eda90  MOV dword ptr [EBX + 0x18],EAX
005eda93  MOV EAX,ESP
005eda95  MOV dword ptr [ESP + 0x34],ESP
005eda99  PUSH EBP
005eda9a  PUSH ESI
005eda9b  LEA ECX,[ESP + 0x20]
005eda9f  MOV dword ptr [EAX],0x20d60dbf
005edaa5  CALL 0x005dd670
005edaaa  MOV ECX,EAX
005edaac  CALL 0x00654af0
005edab1  MOV EAX,[0x0091e000]
005edab6  TEST EAX,EAX
005edab8  JZ 0x005eda78
005edaba  MOV ECX,dword ptr [EAX + 0x1960]
005edac0  TEST ECX,ECX
005edac2  JNZ 0x005eda78
005edac4  MOV EDX,dword ptr [EDI + 0xa4]
005edaca  MOV ECX,dword ptr [EDI + 0xa8]
005edad0  LEA EDX,[EDX + EDX*0x4]
005edad3  LEA EAX,[ECX + -0x14]
005edad6  LEA EDX,[ECX + EDX*0x4]
005edad9  LEA ESP,[ESP]
005edae0  ADD EAX,0x14
005edae3  CMP EAX,EDX
005edae5  JNC 0x005edaf6
005edae7  MOV CL,byte ptr [EAX + 0x8]
005edaea  CMP CL,0x2
005edaed  JZ 0x005edaf8
005edaef  CMP CL,0x3
005edaf2  JNZ 0x005edae0
005edaf4  JMP 0x005edaf8
005edaf6  XOR EAX,EAX
005edaf8  TEST EAX,EAX
005edafa  MOV ESI,EAX
005edafc  JZ 0x005eda78
005edb02  MOV EAX,dword ptr [ESI]
005edb04  CMP EAX,dword ptr [EBX + 0x10]
005edb07  JNZ 0x005edb11
005edb09  PUSH EBP
005edb0a  MOV ECX,ESI
005edb0c  CALL 0x005de4b0
005edb11  MOV ECX,dword ptr [EDI + 0xa4]
005edb17  MOV EDX,dword ptr [EDI + 0xa8]
005edb1d  LEA ECX,[ECX + ECX*0x4]
005edb20  MOV EAX,ESI
005edb22  LEA EDX,[EDX + ECX*0x4]
005edb25  ADD EAX,0x14
005edb28  CMP EAX,EDX
005edb2a  JNC 0x005eda78
005edb30  MOV CL,byte ptr [EAX + 0x8]
005edb33  CMP CL,0x2
005edb36  JZ 0x005edb3d
005edb38  CMP CL,0x3
005edb3b  JNZ 0x005edb25
005edb3d  MOV ESI,EAX
005edb3f  JMP 0x005edb02
