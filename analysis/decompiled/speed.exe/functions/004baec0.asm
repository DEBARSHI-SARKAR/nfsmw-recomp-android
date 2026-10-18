004baec0  PUSH EBX
004baec1  PUSH EBP
004baec2  PUSH ESI
004baec3  MOV ESI,dword ptr [ESP + 0x10]
004baec7  MOV EAX,dword ptr [ESI + 0x5c]
004baeca  CMP EAX,dword ptr [ESI + 0x60]
004baecd  PUSH EDI
004baece  JZ 0x004baef7
004baed0  MOV EAX,dword ptr [ESI + 0x5c]
004baed3  MOV ECX,dword ptr [EAX]
004baed5  CMP ECX,-0x1
004baed8  JNZ 0x004baee2
004baeda  MOV ECX,dword ptr [ESI + 0x3c]
004baedd  MOV dword ptr [ESI + 0x5c],ECX
004baee0  JMP 0x004baeef
004baee2  CMP ECX,-0x2
004baee5  JNZ 0x004baef7
004baee7  MOV EDX,dword ptr [EAX + 0x4]
004baeea  ADD EDX,EAX
004baeec  MOV dword ptr [ESI + 0x5c],EDX
004baeef  MOV EAX,dword ptr [ESI + 0x5c]
004baef2  CMP EAX,dword ptr [ESI + 0x60]
004baef5  JNZ 0x004baed0
004baef7  LEA EBX,[ESI + 0x4]
004baefa  MOV ECX,EBX
004baefc  CALL 0x007ec1bd
004baf01  MOV EAX,dword ptr [ESI + 0x68]
004baf04  MOV ECX,dword ptr [EAX + 0xc]
004baf07  TEST ECX,ECX
004baf09  JZ 0x004baf87
004baf0b  JMP 0x004baf10
004baf10  MOV EBP,dword ptr [EAX + 0xc]
004baf13  CMP dword ptr [EBP + 0x4],0x1
004baf17  JZ 0x004baf87
004baf19  MOV ECX,dword ptr [EBP + 0x124]
004baf1f  MOV EDI,dword ptr [ESI + 0x64]
004baf22  MOV EDX,dword ptr [ESI + 0x5c]
004baf25  DEC ECX
004baf26  CMP EDX,EDI
004baf28  JA 0x004baf30
004baf2a  CMP ECX,EDX
004baf2c  JC 0x004baf38
004baf2e  JMP 0x004baf34
004baf30  CMP ECX,EDX
004baf32  JNC 0x004baf87
004baf34  CMP ECX,EDI
004baf36  JC 0x004baf87
004baf38  CMP EAX,dword ptr [ESI + 0x68]
004baf3b  JNZ 0x004baf42
004baf3d  MOV dword ptr [ESI + 0x68],EBP
004baf40  JMP 0x004baf48
004baf42  MOV ECX,dword ptr [EAX + 0x8]
004baf45  MOV dword ptr [ECX + 0xc],EBP
004baf48  CMP EAX,dword ptr [ESI + 0x70]
004baf4b  MOV EDX,dword ptr [EAX + 0x8]
004baf4e  JNZ 0x004baf55
004baf50  MOV dword ptr [ESI + 0x70],EDX
004baf53  JMP 0x004baf5b
004baf55  MOV ECX,dword ptr [EAX + 0xc]
004baf58  MOV dword ptr [ECX + 0x8],EDX
004baf5b  CMP EAX,dword ptr [ESI + 0x6c]
004baf5e  JNZ 0x004baf6d
004baf60  MOV ECX,dword ptr [EAX + 0xc]
004baf63  TEST ECX,ECX
004baf65  JNZ 0x004baf6a
004baf67  MOV ECX,dword ptr [EAX + 0x8]
004baf6a  MOV dword ptr [ESI + 0x6c],ECX
004baf6d  MOV dword ptr [EAX + 0x4],0x0
004baf74  MOV EDX,dword ptr [ESI + 0x74]
004baf77  MOV dword ptr [EAX + 0xc],EDX
004baf7a  MOV dword ptr [ESI + 0x74],EAX
004baf7d  MOV EAX,dword ptr [ESI + 0x68]
004baf80  MOV ECX,dword ptr [EAX + 0xc]
004baf83  TEST ECX,ECX
004baf85  JNZ 0x004baf10
004baf87  MOV ECX,EBX
004baf89  CALL 0x007ec1c8
004baf8e  MOV EAX,dword ptr [ESI + 0x5c]
004baf91  MOV ECX,dword ptr [ESI + 0x64]
004baf94  CMP EAX,ECX
004baf96  JBE 0x004bafa4
004baf98  SUB EAX,ECX
004baf9a  SUB EAX,0x41
004baf9d  MOV EDI,EAX
004baf9f  JMP 0x004bb05c
004bafa4  MOV EDI,dword ptr [ESI + 0x40]
004bafa7  MOV EDX,dword ptr [ESI + 0x18c]
004bafad  SUB EDI,ECX
004bafaf  SUB EDI,0x40
004bafb2  CMP EDI,EDX
004bafb4  JGE 0x004bb05c
004bafba  SUB ECX,dword ptr [ESI + 0x60]
004bafbd  MOV EDI,ECX
004bafbf  MOV ECX,dword ptr [ESI + 0x6c]
004bafc2  MOV ECX,dword ptr [ECX + 0x10]
004bafc5  CMP ECX,0x1
004bafc8  JNZ 0x004bafe0
004bafca  SUB EAX,dword ptr [ESI + 0x3c]
004bafcd  LEA EDX,[EDI + 0x1]
004bafd0  CMP EAX,EDX
004bafd2  JGE 0x004bafed
004bafd4  MOV dword ptr [ESI + 0x44],0x2
004bafdb  POP EDI
004bafdc  POP ESI
004bafdd  POP EBP
004bafde  POP EBX
004bafdf  RET
004bafe0  SUB EAX,dword ptr [ESI + 0x3c]
004bafe3  SUB EAX,0x40
004bafe6  LEA EDX,[EDI + 0x1]
004bafe9  CMP EAX,EDX
004bafeb  JL 0x004bafd4
004bafed  MOV EAX,EDI
004bafef  AND EAX,0x8000003f
004baff4  JNS 0x004baffb
004baff6  DEC EAX
004baff7  OR EAX,0xffffffc0
004baffa  INC EAX
004baffb  JZ 0x004bb00f
004baffd  CMP ECX,0x1
004bb000  JZ 0x004bb00f
004bb002  MOV ECX,dword ptr [ESI + 0x38]
004bb005  SUB ECX,EAX
004bb007  ADD ECX,0x40
004bb00a  MOV dword ptr [ESI + 0x3c],ECX
004bb00d  JMP 0x004bb015
004bb00f  MOV EDX,dword ptr [ESI + 0x38]
004bb012  MOV dword ptr [ESI + 0x3c],EDX
004bb015  MOV EAX,dword ptr [ESI + 0x60]
004bb018  MOV ECX,dword ptr [ESI + 0x3c]
004bb01b  PUSH EDI
004bb01c  PUSH EAX
004bb01d  PUSH ECX
004bb01e  CALL 0x007f0e0f
004bb023  MOV EAX,dword ptr [ESI + 0x60]
004bb026  MOV dword ptr [EAX],0xffffffff
004bb02c  MOV dword ptr [EAX + 0x4],0x8
004bb033  MOV EAX,dword ptr [ESI + 0x3c]
004bb036  LEA ECX,[EAX + EDI*0x1]
004bb039  MOV EDI,dword ptr [ESI + 0x5c]
004bb03c  MOV dword ptr [ESI + 0x60],EAX
004bb03f  MOV dword ptr [ESI + 0x64],ECX
004bb042  MOV EDX,dword ptr [EDI]
004bb044  ADD ESP,0xc
004bb047  CMP EDX,-0x1
004bb04a  JNZ 0x004bb059
004bb04c  MOV EDI,dword ptr [ESI + 0x40]
004bb04f  SUB EDI,ECX
004bb051  MOV dword ptr [ESI + 0x5c],EAX
004bb054  SUB EDI,0x40
004bb057  JMP 0x004bb05c
004bb059  SUB EDI,ECX
004bb05b  DEC EDI
004bb05c  MOV EAX,dword ptr [ESI + 0x54]
004bb05f  TEST EAX,EAX
004bb061  MOV EBX,dword ptr [ESP + 0x18]
004bb065  JNZ 0x004bb0a9
004bb067  CMP EBX,dword ptr [ESI + 0x4c]
004bb06a  JLE 0x004bb0a9
004bb06c  MOV EDX,dword ptr [ESI + 0x30]
004bb06f  PUSH EDX
004bb070  CALL 0x004b1dd0
004bb075  ADD ESP,0x4
004bb078  TEST AL,AL
004bb07a  JZ 0x004bb0a9
004bb07c  MOV EAX,[0x009120e8]
004bb081  PUSH EAX
004bb082  CALL 0x00462430
004bb087  FSTP ST0
004bb089  MOV byte ptr [0x00911e98],0x1
004bb090  ADD ESP,0x4
004bb093  MOV dword ptr [ESI + 0x44],0x2
004bb09a  CALL 0x0045ce40
004bb09f  POP EDI
004bb0a0  POP ESI
004bb0a1  POP EBP
004bb0a2  MOV [0x009120ec],EAX
004bb0a7  POP EBX
004bb0a8  RET
004bb0a9  MOV EAX,dword ptr [ESI + 0x17c]
004bb0af  TEST EAX,EAX
004bb0b1  JZ 0x004bb0c9
004bb0b3  MOV ECX,dword ptr [0x00912840]
004bb0b9  CMP EAX,ECX
004bb0bb  JBE 0x004bb0e4
004bb0bd  MOV EDX,dword ptr [0x00912848]
004bb0c3  ADD EDX,ECX
004bb0c5  CMP EAX,EDX
004bb0c7  JNC 0x004bb0e4
004bb0c9  MOV EAX,[0x009b2c14]
004bb0ce  TEST EAX,EAX
004bb0d0  JNZ 0x004bb0db
004bb0d2  MOV EAX,[0x009aab58]
004bb0d7  TEST EAX,EAX
004bb0d9  JZ 0x004bb0e4
004bb0db  MOV byte ptr [0x00911ec0],0x1
004bb0e2  JMP 0x004bb0eb
004bb0e4  MOV byte ptr [0x00911ec0],0x0
004bb0eb  MOV byte ptr [0x00911e98],0x0
004bb0f2  MOV ECX,dword ptr [ESI + 0x18c]
004bb0f8  CMP EDI,ECX
004bb0fa  JL 0x004bafd4
004bb100  MOV EBP,dword ptr [ESI + 0x6c]
004bb103  CMP dword ptr [EBP + 0x10],0x1
004bb107  JNZ 0x004bb169
004bb109  MOV ECX,dword ptr [ESI + 0x180]
004bb10f  MOV EAX,dword ptr [EBP + 0x11c]
004bb115  LEA EDX,[ECX + EDI*0x1]
004bb118  CMP EDX,EAX
004bb11a  JLE 0x004bb126
004bb11c  SUB EAX,ECX
004bb11e  MOV dword ptr [ESI + 0x188],EAX
004bb124  JMP 0x004bb12c
004bb126  MOV dword ptr [ESI + 0x188],EDI
004bb12c  MOV EAX,dword ptr [ESI + 0x188]
004bb132  MOV ECX,dword ptr [EBP + 0x118]
004bb138  MOV EDX,dword ptr [ESI + 0x64]
004bb13b  PUSH EAX
004bb13c  PUSH ECX
004bb13d  PUSH EDX
004bb13e  CALL 0x007f0e0f
004bb143  MOV EAX,dword ptr [ESI + 0x188]
004bb149  MOV EBX,dword ptr [EBP + 0x118]
004bb14f  PUSH ESI
004bb150  ADD EBX,EAX
004bb152  PUSH 0x0
004bb154  PUSH 0x0
004bb156  MOV dword ptr [EBP + 0x118],EBX
004bb15c  CALL 0x004badf0
004bb161  ADD ESP,0x18
004bb164  POP EDI
004bb165  POP ESI
004bb166  POP EBP
004bb167  POP EBX
004bb168  RET
004bb169  CMP EDI,ECX
004bb16b  JLE 0x004bb17d
004bb16d  MOV EAX,EDI
004bb16f  CDQ
004bb170  IDIV ECX
004bb172  IMUL EAX,ECX
004bb175  MOV dword ptr [ESI + 0x188],EAX
004bb17b  JMP 0x004bb183
004bb17d  MOV dword ptr [ESI + 0x188],ECX
004bb183  PUSH ESI
004bb184  MOV byte ptr [0x00911f94],0x0
004bb18b  MOV ECX,dword ptr [ESI + 0x188]
004bb191  MOV EDX,dword ptr [ESI + 0x64]
004bb194  MOV EAX,dword ptr [ESI + 0x180]
004bb19a  PUSH EBX
004bb19b  PUSH ECX
004bb19c  MOV ECX,dword ptr [ESI + 0x17c]
004bb1a2  PUSH EDX
004bb1a3  PUSH EAX
004bb1a4  PUSH ECX
004bb1a5  CALL 0x007edb85
004bb1aa  ADD ESP,0x18
004bb1ad  TEST EAX,EAX
004bb1af  MOV dword ptr [ESI + 0x184],EAX
004bb1b5  JZ 0x004bafdb
004bb1bb  POP EDI
004bb1bc  POP ESI
004bb1bd  POP EBP
004bb1be  POP EBX
004bb1bf  MOV dword ptr [ESP + 0x8],0x4badf0
004bb1c7  MOV dword ptr [ESP + 0x4],EAX
004bb1cb  JMP 0x007edabb
