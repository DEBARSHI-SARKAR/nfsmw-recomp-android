0085ecf0  PUSH EBP
0085ecf1  MOV EBP,ESP
0085ecf3  SUB ESP,0x1c
0085ecf6  PUSH ESI
0085ecf7  PUSH EDI
0085ecf8  MOV EAX,dword ptr [EBP + 0x8]
0085ecfb  MOV ECX,dword ptr [EAX + 0x14]
0085ecfe  MOV dword ptr [EBP + -0x10],ECX
0085ed01  CMP dword ptr [EBP + -0x10],0x45
0085ed05  JL 0x0085ed10
0085ed07  CMP dword ptr [EBP + -0x10],0x8b
0085ed0e  JLE 0x0085ed15
0085ed10  JMP 0x0085eff4
0085ed15  MOV EDX,dword ptr [EBP + 0x8]
0085ed18  CMP dword ptr [EDX + 0x10],0x0
0085ed1c  JL 0x0085ed27
0085ed1e  MOV EAX,dword ptr [EBP + 0x8]
0085ed21  CMP dword ptr [EAX + 0x10],0xb
0085ed25  JLE 0x0085ed84
0085ed27  MOV ECX,dword ptr [EBP + 0x8]
0085ed2a  MOV EAX,dword ptr [ECX + 0x10]
0085ed2d  CDQ
0085ed2e  MOV ECX,0xc
0085ed33  IDIV ECX
0085ed35  ADD EAX,dword ptr [EBP + -0x10]
0085ed38  MOV dword ptr [EBP + -0x10],EAX
0085ed3b  MOV EDX,dword ptr [EBP + 0x8]
0085ed3e  MOV EAX,dword ptr [EDX + 0x10]
0085ed41  CDQ
0085ed42  MOV ECX,0xc
0085ed47  IDIV ECX
0085ed49  MOV EAX,dword ptr [EBP + 0x8]
0085ed4c  MOV dword ptr [EAX + 0x10],EDX
0085ed4f  MOV ECX,dword ptr [EBP + 0x8]
0085ed52  CMP dword ptr [ECX + 0x10],0x0
0085ed56  JGE 0x0085ed70
0085ed58  MOV EDX,dword ptr [EBP + 0x8]
0085ed5b  MOV EAX,dword ptr [EDX + 0x10]
0085ed5e  ADD EAX,0xc
0085ed61  MOV ECX,dword ptr [EBP + 0x8]
0085ed64  MOV dword ptr [ECX + 0x10],EAX
0085ed67  MOV EDX,dword ptr [EBP + -0x10]
0085ed6a  SUB EDX,0x1
0085ed6d  MOV dword ptr [EBP + -0x10],EDX
0085ed70  CMP dword ptr [EBP + -0x10],0x45
0085ed74  JL 0x0085ed7f
0085ed76  CMP dword ptr [EBP + -0x10],0x8b
0085ed7d  JLE 0x0085ed84
0085ed7f  JMP 0x0085eff4
0085ed84  MOV EAX,dword ptr [EBP + 0x8]
0085ed87  MOV ECX,dword ptr [EAX + 0x10]
0085ed8a  MOV EDX,dword ptr [ECX*0x4 + 0x9073c8]
0085ed91  MOV dword ptr [EBP + -0xc],EDX
0085ed94  MOV EAX,dword ptr [EBP + -0x10]
0085ed97  AND EAX,0x3
0085ed9a  JNZ 0x0085edae
0085ed9c  MOV ECX,dword ptr [EBP + 0x8]
0085ed9f  CMP dword ptr [ECX + 0x10],0x1
0085eda3  JLE 0x0085edae
0085eda5  MOV EDX,dword ptr [EBP + -0xc]
0085eda8  ADD EDX,0x1
0085edab  MOV dword ptr [EBP + -0xc],EDX
0085edae  MOV EAX,dword ptr [EBP + -0x10]
0085edb1  SUB EAX,0x46
0085edb4  IMUL EAX,EAX,0x16d
0085edba  MOV ECX,dword ptr [EBP + -0x10]
0085edbd  SUB ECX,0x1
0085edc0  SAR ECX,0x2
0085edc3  LEA EDX,[EAX + ECX*0x1 + -0x11]
0085edc7  MOV dword ptr [EBP + -0x4],EDX
0085edca  MOV EAX,dword ptr [EBP + -0x4]
0085edcd  ADD EAX,dword ptr [EBP + -0xc]
0085edd0  MOV dword ptr [EBP + -0x4],EAX
0085edd3  MOV ECX,dword ptr [EBP + 0x8]
0085edd6  MOV EDX,dword ptr [ECX + 0xc]
0085edd9  MOV dword ptr [EBP + -0xc],EDX
0085eddc  MOV EAX,dword ptr [EBP + -0x4]
0085eddf  ADD EAX,dword ptr [EBP + -0xc]
0085ede2  MOV dword ptr [EBP + -0x10],EAX
0085ede5  CMP dword ptr [EBP + -0x4],0x0
0085ede9  JL 0x0085edf7
0085edeb  CMP dword ptr [EBP + -0xc],0x0
0085edef  JL 0x0085edf7
0085edf1  CMP dword ptr [EBP + -0x10],0x0
0085edf5  JL 0x0085ee09
0085edf7  CMP dword ptr [EBP + -0x4],0x0
0085edfb  JGE 0x0085ee0e
0085edfd  CMP dword ptr [EBP + -0xc],0x0
0085ee01  JGE 0x0085ee0e
0085ee03  CMP dword ptr [EBP + -0x10],0x0
0085ee07  JL 0x0085ee0e
0085ee09  JMP 0x0085eff4
0085ee0e  MOV ECX,dword ptr [EBP + -0x10]
0085ee11  IMUL ECX,ECX,0x18
0085ee14  MOV dword ptr [EBP + -0xc],ECX
0085ee17  CMP dword ptr [EBP + -0x10],0x0
0085ee1b  JZ 0x0085ee31
0085ee1d  MOV EAX,dword ptr [EBP + -0xc]
0085ee20  CDQ
0085ee21  IDIV dword ptr [EBP + -0x10]
0085ee24  XOR EDX,EDX
0085ee26  CMP EAX,0x18
0085ee29  SETNZ DL
0085ee2c  MOV dword ptr [EBP + -0x14],EDX
0085ee2f  JMP 0x0085ee38
0085ee31  MOV dword ptr [EBP + -0x14],0x0
0085ee38  CMP dword ptr [EBP + -0x14],0x0
0085ee3c  JZ 0x0085ee43
0085ee3e  JMP 0x0085eff4
0085ee43  MOV EAX,dword ptr [EBP + 0x8]
0085ee46  MOV ECX,dword ptr [EAX + 0x8]
0085ee49  MOV dword ptr [EBP + -0x4],ECX
0085ee4c  MOV EDX,dword ptr [EBP + -0xc]
0085ee4f  ADD EDX,dword ptr [EBP + -0x4]
0085ee52  MOV dword ptr [EBP + -0x10],EDX
0085ee55  CMP dword ptr [EBP + -0xc],0x0
0085ee59  JL 0x0085ee67
0085ee5b  CMP dword ptr [EBP + -0x4],0x0
0085ee5f  JL 0x0085ee67
0085ee61  CMP dword ptr [EBP + -0x10],0x0
0085ee65  JL 0x0085ee79
0085ee67  CMP dword ptr [EBP + -0xc],0x0
0085ee6b  JGE 0x0085ee7e
0085ee6d  CMP dword ptr [EBP + -0x4],0x0
0085ee71  JGE 0x0085ee7e
0085ee73  CMP dword ptr [EBP + -0x10],0x0
0085ee77  JL 0x0085ee7e
0085ee79  JMP 0x0085eff4
0085ee7e  MOV EAX,dword ptr [EBP + -0x10]
0085ee81  IMUL EAX,EAX,0x3c
0085ee84  MOV dword ptr [EBP + -0xc],EAX
0085ee87  CMP dword ptr [EBP + -0x10],0x0
0085ee8b  JZ 0x0085eea1
0085ee8d  MOV EAX,dword ptr [EBP + -0xc]
0085ee90  CDQ
0085ee91  IDIV dword ptr [EBP + -0x10]
0085ee94  XOR ECX,ECX
0085ee96  CMP EAX,0x3c
0085ee99  SETNZ CL
0085ee9c  MOV dword ptr [EBP + -0x18],ECX
0085ee9f  JMP 0x0085eea8
0085eea1  MOV dword ptr [EBP + -0x18],0x0
0085eea8  CMP dword ptr [EBP + -0x18],0x0
0085eeac  JZ 0x0085eeb3
0085eeae  JMP 0x0085eff4
0085eeb3  MOV EDX,dword ptr [EBP + 0x8]
0085eeb6  MOV EAX,dword ptr [EDX + 0x4]
0085eeb9  MOV dword ptr [EBP + -0x4],EAX
0085eebc  MOV ECX,dword ptr [EBP + -0xc]
0085eebf  ADD ECX,dword ptr [EBP + -0x4]
0085eec2  MOV dword ptr [EBP + -0x10],ECX
0085eec5  CMP dword ptr [EBP + -0xc],0x0
0085eec9  JL 0x0085eed7
0085eecb  CMP dword ptr [EBP + -0x4],0x0
0085eecf  JL 0x0085eed7
0085eed1  CMP dword ptr [EBP + -0x10],0x0
0085eed5  JL 0x0085eee9
0085eed7  CMP dword ptr [EBP + -0xc],0x0
0085eedb  JGE 0x0085eeee
0085eedd  CMP dword ptr [EBP + -0x4],0x0
0085eee1  JGE 0x0085eeee
0085eee3  CMP dword ptr [EBP + -0x10],0x0
0085eee7  JL 0x0085eeee
0085eee9  JMP 0x0085eff4
0085eeee  MOV EDX,dword ptr [EBP + -0x10]
0085eef1  IMUL EDX,EDX,0x3c
0085eef4  MOV dword ptr [EBP + -0xc],EDX
0085eef7  CMP dword ptr [EBP + -0x10],0x0
0085eefb  JZ 0x0085ef11
0085eefd  MOV EAX,dword ptr [EBP + -0xc]
0085ef00  CDQ
0085ef01  IDIV dword ptr [EBP + -0x10]
0085ef04  XOR ECX,ECX
0085ef06  CMP EAX,0x3c
0085ef09  SETNZ CL
0085ef0c  MOV dword ptr [EBP + -0x1c],ECX
0085ef0f  JMP 0x0085ef18
0085ef11  MOV dword ptr [EBP + -0x1c],0x0
0085ef18  CMP dword ptr [EBP + -0x1c],0x0
0085ef1c  JZ 0x0085ef23
0085ef1e  JMP 0x0085eff4
0085ef23  MOV EDX,dword ptr [EBP + 0x8]
0085ef26  MOV EAX,dword ptr [EDX]
0085ef28  MOV dword ptr [EBP + -0x4],EAX
0085ef2b  MOV ECX,dword ptr [EBP + -0xc]
0085ef2e  ADD ECX,dword ptr [EBP + -0x4]
0085ef31  MOV dword ptr [EBP + -0x10],ECX
0085ef34  CMP dword ptr [EBP + -0xc],0x0
0085ef38  JL 0x0085ef46
0085ef3a  CMP dword ptr [EBP + -0x4],0x0
0085ef3e  JL 0x0085ef46
0085ef40  CMP dword ptr [EBP + -0x10],0x0
0085ef44  JL 0x0085ef58
0085ef46  CMP dword ptr [EBP + -0xc],0x0
0085ef4a  JGE 0x0085ef5d
0085ef4c  CMP dword ptr [EBP + -0x4],0x0
0085ef50  JGE 0x0085ef5d
0085ef52  CMP dword ptr [EBP + -0x10],0x0
0085ef56  JL 0x0085ef5d
0085ef58  JMP 0x0085eff4
0085ef5d  CMP dword ptr [EBP + 0xc],0x0
0085ef61  JZ 0x0085efcb
0085ef63  CALL 0x007dbfc0
0085ef68  MOV EDX,dword ptr [EBP + -0x10]
0085ef6b  ADD EDX,dword ptr [0x009070b0]
0085ef71  MOV dword ptr [EBP + -0x10],EDX
0085ef74  LEA EAX,[EBP + -0x10]
0085ef77  PUSH EAX
0085ef78  CALL 0x0085dba0
0085ef7d  ADD ESP,0x4
0085ef80  MOV dword ptr [EBP + -0x8],EAX
0085ef83  CMP dword ptr [EBP + -0x8],0x0
0085ef87  JNZ 0x0085ef8b
0085ef89  JMP 0x0085eff4
0085ef8b  MOV ECX,dword ptr [EBP + 0x8]
0085ef8e  CMP dword ptr [ECX + 0x20],0x0
0085ef92  JG 0x0085efa6
0085ef94  MOV EDX,dword ptr [EBP + 0x8]
0085ef97  CMP dword ptr [EDX + 0x20],0x0
0085ef9b  JGE 0x0085efc9
0085ef9d  MOV EAX,dword ptr [EBP + -0x8]
0085efa0  CMP dword ptr [EAX + 0x20],0x0
0085efa4  JLE 0x0085efc9
0085efa6  MOV ECX,dword ptr [EBP + -0x10]
0085efa9  ADD ECX,dword ptr [0x009070b8]
0085efaf  MOV dword ptr [EBP + -0x10],ECX
0085efb2  LEA EDX,[EBP + -0x10]
0085efb5  PUSH EDX
0085efb6  CALL 0x0085dba0
0085efbb  ADD ESP,0x4
0085efbe  MOV dword ptr [EBP + -0x8],EAX
0085efc1  CMP dword ptr [EBP + -0x8],0x0
0085efc5  JNZ 0x0085efc9
0085efc7  JMP 0x0085eff4
0085efc9  JMP 0x0085efe2
0085efcb  LEA EAX,[EBP + -0x10]
0085efce  PUSH EAX
0085efcf  CALL 0x0085f000
0085efd4  ADD ESP,0x4
0085efd7  MOV dword ptr [EBP + -0x8],EAX
0085efda  CMP dword ptr [EBP + -0x8],0x0
0085efde  JNZ 0x0085efe2
0085efe0  JMP 0x0085eff4
0085efe2  MOV ESI,dword ptr [EBP + -0x8]
0085efe5  MOV ECX,0x9
0085efea  MOV EDI,dword ptr [EBP + 0x8]
0085efed  MOVSD.REP ES:EDI,ESI
0085efef  MOV EAX,dword ptr [EBP + -0x10]
0085eff2  JMP 0x0085eff7
0085eff4  OR EAX,0xffffffff
0085eff7  POP EDI
0085eff8  POP ESI
0085eff9  MOV ESP,EBP
0085effb  POP EBP
0085effc  RET
