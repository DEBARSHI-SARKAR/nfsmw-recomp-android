005ecf10  SUB ESP,0x18
005ecf13  PUSH EBX
005ecf14  MOV EBX,dword ptr [ESP + 0x24]
005ecf18  PUSH EBP
005ecf19  MOV EBP,dword ptr [ESP + 0x2c]
005ecf1d  MOV EAX,EBP
005ecf1f  SUB EAX,EBX
005ecf21  SAR EAX,0x3
005ecf24  CDQ
005ecf25  PUSH ESI
005ecf26  SUB EAX,EDX
005ecf28  PUSH EDI
005ecf29  SAR EAX,0x1
005ecf2b  LEA EDI,[EBX + EAX*0x8]
005ecf2e  LEA EAX,[EBP + -0x8]
005ecf31  PUSH EAX
005ecf32  PUSH EDI
005ecf33  PUSH EBX
005ecf34  CALL 0x005eafc0
005ecf39  ADD ESP,0xc
005ecf3c  CMP EBX,EDI
005ecf3e  MOV ECX,EDI
005ecf40  LEA ESI,[EDI + 0x8]
005ecf43  JNC 0x005ecf57
005ecf45  MOV EAX,dword ptr [ECX + -0x8]
005ecf48  MOV EDX,dword ptr [ECX]
005ecf4a  CMP EDX,EAX
005ecf4c  JA 0x005ecf57
005ecf4e  JC 0x005ecf57
005ecf50  ADD ECX,-0x8
005ecf53  CMP EBX,ECX
005ecf55  JC 0x005ecf45
005ecf57  CMP ESI,EBP
005ecf59  JNC 0x005ecf6f
005ecf5b  MOV EDX,dword ptr [ECX]
005ecf5d  LEA ECX,[ECX]
005ecf60  MOV EAX,dword ptr [ESI]
005ecf62  CMP EDX,EAX
005ecf64  JA 0x005ecf6f
005ecf66  JC 0x005ecf6f
005ecf68  ADD ESI,0x8
005ecf6b  CMP ESI,EBP
005ecf6d  JC 0x005ecf60
005ecf6f  MOV EAX,ESI
005ecf71  MOV EBX,ECX
005ecf73  CMP EAX,dword ptr [ESP + 0x34]
005ecf77  JNC 0x005ecfb6
005ecf79  LEA ESP,[ESP]
005ecf80  MOV EDX,dword ptr [EAX]
005ecf82  MOV EDI,dword ptr [ECX]
005ecf84  CMP EDX,EDI
005ecf86  JA 0x005ecfab
005ecf88  JC 0x005ecfb6
005ecf8a  MOV EDX,ESI
005ecf8c  MOV EBP,dword ptr [EDX + 0x4]
005ecf8f  MOV EDI,dword ptr [EDX]
005ecf91  MOV dword ptr [ESP + 0x1c],EBP
005ecf95  MOV EBP,dword ptr [EAX]
005ecf97  MOV dword ptr [EDX],EBP
005ecf99  MOV EBP,dword ptr [EAX + 0x4]
005ecf9c  MOV dword ptr [EDX + 0x4],EBP
005ecf9f  MOV EDX,dword ptr [ESP + 0x1c]
005ecfa3  ADD ESI,0x8
005ecfa6  MOV dword ptr [EAX],EDI
005ecfa8  MOV dword ptr [EAX + 0x4],EDX
005ecfab  MOV EDX,dword ptr [ESP + 0x34]
005ecfaf  ADD EAX,0x8
005ecfb2  CMP EAX,EDX
005ecfb4  JC 0x005ecf80
005ecfb6  CMP EBX,dword ptr [ESP + 0x30]
005ecfba  JBE 0x005ecffc
005ecfbc  LEA EDX,[EBX + -0x8]
005ecfbf  NOP
005ecfc0  MOV EDI,dword ptr [EDX]
005ecfc2  MOV EBP,dword ptr [ECX]
005ecfc4  CMP EBP,EDI
005ecfc6  JA 0x005ecfea
005ecfc8  JC 0x005ecff8
005ecfca  MOV EBP,dword ptr [ECX + -0x4]
005ecfcd  MOV EDI,dword ptr [ECX + -0x8]
005ecfd0  SUB ECX,0x8
005ecfd3  MOV dword ptr [ESP + 0x24],EBP
005ecfd7  MOV EBP,dword ptr [EDX]
005ecfd9  MOV dword ptr [ECX],EBP
005ecfdb  MOV EBP,dword ptr [EDX + 0x4]
005ecfde  MOV dword ptr [ECX + 0x4],EBP
005ecfe1  MOV dword ptr [EDX],EDI
005ecfe3  MOV EDI,dword ptr [ESP + 0x24]
005ecfe7  MOV dword ptr [EDX + 0x4],EDI
005ecfea  MOV EDI,dword ptr [ESP + 0x30]
005ecfee  SUB EBX,0x8
005ecff1  SUB EDX,0x8
005ecff4  CMP EDI,EBX
005ecff6  JC 0x005ecfc0
005ecff8  CMP EBX,dword ptr [ESP + 0x30]
005ecffc  MOV EDX,dword ptr [ESP + 0x34]
005ed000  JNZ 0x005ed058
005ed002  CMP EAX,EDX
005ed004  JZ 0x005ed0b3
005ed00a  CMP ESI,EAX
005ed00c  JZ 0x005ed022
005ed00e  MOV EBP,dword ptr [ESI]
005ed010  MOV EDX,dword ptr [ECX]
005ed012  MOV EDI,dword ptr [ECX + 0x4]
005ed015  MOV dword ptr [ECX],EBP
005ed017  MOV EBP,dword ptr [ESI + 0x4]
005ed01a  MOV dword ptr [ECX + 0x4],EBP
005ed01d  MOV dword ptr [ESI],EDX
005ed01f  MOV dword ptr [ESI + 0x4],EDI
005ed022  MOV EDI,ECX
005ed024  MOV EBP,dword ptr [EDI]
005ed026  MOV dword ptr [ESP + 0x10],EBP
005ed02a  MOV EBP,dword ptr [EDI + 0x4]
005ed02d  MOV EDX,EAX
005ed02f  MOV dword ptr [ESP + 0x14],EBP
005ed033  MOV EBP,dword ptr [EDX]
005ed035  MOV dword ptr [EDI],EBP
005ed037  MOV EBP,dword ptr [EDX + 0x4]
005ed03a  MOV dword ptr [EDI + 0x4],EBP
005ed03d  MOV EDI,dword ptr [ESP + 0x10]
005ed041  MOV dword ptr [EDX],EDI
005ed043  MOV EDI,dword ptr [ESP + 0x14]
005ed047  ADD ESI,0x8
005ed04a  ADD ECX,0x8
005ed04d  ADD EAX,0x8
005ed050  MOV dword ptr [EDX + 0x4],EDI
005ed053  JMP 0x005ecf73
005ed058  SUB EBX,0x8
005ed05b  CMP EAX,EDX
005ed05d  JNZ 0x005ed097
005ed05f  SUB ECX,0x8
005ed062  CMP EBX,ECX
005ed064  JZ 0x005ed07a
005ed066  MOV EBP,dword ptr [ECX]
005ed068  MOV EDX,dword ptr [EBX]
005ed06a  MOV EDI,dword ptr [EBX + 0x4]
005ed06d  MOV dword ptr [EBX],EBP
005ed06f  MOV EBP,dword ptr [ECX + 0x4]
005ed072  MOV dword ptr [EBX + 0x4],EBP
005ed075  MOV dword ptr [ECX],EDX
005ed077  MOV dword ptr [ECX + 0x4],EDI
005ed07a  MOV EBP,dword ptr [ESI + -0x8]
005ed07d  MOV EDX,dword ptr [ECX]
005ed07f  MOV EDI,dword ptr [ECX + 0x4]
005ed082  SUB ESI,0x8
005ed085  MOV dword ptr [ECX],EBP
005ed087  MOV EBP,dword ptr [ESI + 0x4]
005ed08a  MOV dword ptr [ECX + 0x4],EBP
005ed08d  MOV dword ptr [ESI],EDX
005ed08f  MOV dword ptr [ESI + 0x4],EDI
005ed092  JMP 0x005ecf73
005ed097  MOV EBP,dword ptr [EBX]
005ed099  MOV EDX,dword ptr [EAX]
005ed09b  MOV EDI,dword ptr [EAX + 0x4]
005ed09e  MOV dword ptr [EAX],EBP
005ed0a0  MOV EBP,dword ptr [EBX + 0x4]
005ed0a3  MOV dword ptr [EAX + 0x4],EBP
005ed0a6  MOV dword ptr [EBX],EDX
005ed0a8  MOV dword ptr [EBX + 0x4],EDI
005ed0ab  ADD EAX,0x8
005ed0ae  JMP 0x005ecf73
005ed0b3  MOV EAX,dword ptr [ESP + 0x2c]
005ed0b7  POP EDI
005ed0b8  MOV dword ptr [EAX + 0x4],ESI
005ed0bb  POP ESI
005ed0bc  POP EBP
005ed0bd  MOV dword ptr [EAX],ECX
005ed0bf  POP EBX
005ed0c0  ADD ESP,0x18
005ed0c3  RET
