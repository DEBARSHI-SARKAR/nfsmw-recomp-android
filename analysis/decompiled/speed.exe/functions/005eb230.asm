005eb230  MOV ECX,dword ptr [ESP + 0x4]
005eb234  PUSH ESI
005eb235  MOV ESI,dword ptr [ECX]
005eb237  PUSH EDI
005eb238  MOV EDI,dword ptr [ESP + 0x14]
005eb23c  MOV EAX,EDI
005eb23e  SUB EAX,ECX
005eb240  SAR EAX,0x2
005eb243  CMP EAX,0x28
005eb246  JLE 0x005eb326
005eb24c  INC EAX
005eb24d  CDQ
005eb24e  AND EDX,0x7
005eb251  ADD EAX,EDX
005eb253  SAR EAX,0x3
005eb256  PUSH EBX
005eb257  PUSH EBP
005eb258  LEA EBP,[EAX*0x8 + 0x0]
005eb25f  SHL EAX,0x2
005eb262  MOV EDX,dword ptr [EAX + ECX*0x1]
005eb265  CMP EDX,ESI
005eb267  JNC 0x005eb26e
005eb269  MOV dword ptr [EAX + ECX*0x1],ESI
005eb26c  MOV dword ptr [ECX],EDX
005eb26e  MOV EDX,dword ptr [ECX + EBP*0x1]
005eb271  MOV ESI,dword ptr [EAX + ECX*0x1]
005eb274  CMP EDX,ESI
005eb276  JNC 0x005eb27e
005eb278  MOV dword ptr [ECX + EBP*0x1],ESI
005eb27b  MOV dword ptr [EAX + ECX*0x1],EDX
005eb27e  MOV EDX,dword ptr [EAX + ECX*0x1]
005eb281  MOV ESI,dword ptr [ECX]
005eb283  CMP EDX,ESI
005eb285  JNC 0x005eb28c
005eb287  MOV dword ptr [EAX + ECX*0x1],ESI
005eb28a  MOV dword ptr [ECX],EDX
005eb28c  MOV EDX,dword ptr [ESP + 0x18]
005eb290  MOV EBX,dword ptr [EDX]
005eb292  MOV ESI,EDX
005eb294  SUB ESI,EAX
005eb296  MOV EDI,dword ptr [ESI]
005eb298  CMP EBX,EDI
005eb29a  JNC 0x005eb2a0
005eb29c  MOV dword ptr [EDX],EDI
005eb29e  MOV dword ptr [ESI],EBX
005eb2a0  MOV EDI,dword ptr [EAX + EDX*0x1]
005eb2a3  MOV EBX,dword ptr [EDX]
005eb2a5  CMP EDI,EBX
005eb2a7  JNC 0x005eb2ae
005eb2a9  MOV dword ptr [EAX + EDX*0x1],EBX
005eb2ac  MOV dword ptr [EDX],EDI
005eb2ae  MOV EDI,dword ptr [EDX]
005eb2b0  MOV EBX,dword ptr [ESI]
005eb2b2  CMP EDI,EBX
005eb2b4  JNC 0x005eb2ba
005eb2b6  MOV dword ptr [EDX],EBX
005eb2b8  MOV dword ptr [ESI],EDI
005eb2ba  MOV EDI,dword ptr [ESP + 0x1c]
005eb2be  MOV ESI,EDI
005eb2c0  SUB ESI,EAX
005eb2c2  MOV EBX,dword ptr [ESI]
005eb2c4  SUB EDI,EBP
005eb2c6  MOV EBP,dword ptr [EDI]
005eb2c8  CMP EBX,EBP
005eb2ca  JNC 0x005eb2d0
005eb2cc  MOV dword ptr [ESI],EBP
005eb2ce  MOV dword ptr [EDI],EBX
005eb2d0  MOV EBX,dword ptr [ESP + 0x1c]
005eb2d4  MOV EBP,dword ptr [EBX]
005eb2d6  MOV EBX,dword ptr [ESI]
005eb2d8  CMP EBP,EBX
005eb2da  MOV dword ptr [ESP + 0x14],EBP
005eb2de  JNC 0x005eb2ed
005eb2e0  MOV EBP,dword ptr [ESP + 0x1c]
005eb2e4  MOV dword ptr [EBP],EBX
005eb2e7  MOV EBX,dword ptr [ESP + 0x14]
005eb2eb  MOV dword ptr [ESI],EBX
005eb2ed  MOV EBX,dword ptr [ESI]
005eb2ef  MOV EBP,dword ptr [EDI]
005eb2f1  CMP EBX,EBP
005eb2f3  JNC 0x005eb2f9
005eb2f5  MOV dword ptr [ESI],EBP
005eb2f7  MOV dword ptr [EDI],EBX
005eb2f9  MOV EDI,dword ptr [EDX]
005eb2fb  MOV EBX,dword ptr [EAX + ECX*0x1]
005eb2fe  CMP EDI,EBX
005eb300  JNC 0x005eb307
005eb302  MOV dword ptr [EDX],EBX
005eb304  MOV dword ptr [EAX + ECX*0x1],EDI
005eb307  MOV EDI,dword ptr [ESI]
005eb309  MOV EBX,dword ptr [EDX]
005eb30b  CMP EDI,EBX
005eb30d  JNC 0x005eb313
005eb30f  MOV dword ptr [ESI],EBX
005eb311  MOV dword ptr [EDX],EDI
005eb313  MOV ESI,dword ptr [EDX]
005eb315  MOV EDI,dword ptr [EAX + ECX*0x1]
005eb318  CMP ESI,EDI
005eb31a  POP EBP
005eb31b  POP EBX
005eb31c  JNC 0x005eb34c
005eb31e  MOV dword ptr [EDX],EDI
005eb320  POP EDI
005eb321  MOV dword ptr [EAX + ECX*0x1],ESI
005eb324  POP ESI
005eb325  RET
005eb326  MOV EAX,dword ptr [ESP + 0x10]
005eb32a  MOV EDX,dword ptr [EAX]
005eb32c  CMP EDX,ESI
005eb32e  JNC 0x005eb334
005eb330  MOV dword ptr [EAX],ESI
005eb332  MOV dword ptr [ECX],EDX
005eb334  MOV EDX,dword ptr [EDI]
005eb336  MOV ESI,dword ptr [EAX]
005eb338  CMP EDX,ESI
005eb33a  JNC 0x005eb340
005eb33c  MOV dword ptr [EDI],ESI
005eb33e  MOV dword ptr [EAX],EDX
005eb340  MOV EDX,dword ptr [EAX]
005eb342  MOV ESI,dword ptr [ECX]
005eb344  CMP EDX,ESI
005eb346  JNC 0x005eb34c
005eb348  MOV dword ptr [EAX],ESI
005eb34a  MOV dword ptr [ECX],EDX
005eb34c  POP EDI
005eb34d  POP ESI
005eb34e  RET
