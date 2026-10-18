005eb0d0  MOV ECX,dword ptr [ESP + 0x4]
005eb0d4  PUSH ESI
005eb0d5  MOV ESI,dword ptr [ECX]
005eb0d7  PUSH EDI
005eb0d8  MOV EDI,dword ptr [ESP + 0x14]
005eb0dc  MOV EAX,EDI
005eb0de  SUB EAX,ECX
005eb0e0  SAR EAX,0x2
005eb0e3  CMP EAX,0x28
005eb0e6  JLE 0x005eb1c6
005eb0ec  INC EAX
005eb0ed  CDQ
005eb0ee  AND EDX,0x7
005eb0f1  ADD EAX,EDX
005eb0f3  SAR EAX,0x3
005eb0f6  PUSH EBX
005eb0f7  PUSH EBP
005eb0f8  LEA EBP,[EAX*0x8 + 0x0]
005eb0ff  SHL EAX,0x2
005eb102  MOV EDX,dword ptr [EAX + ECX*0x1]
005eb105  CMP EDX,ESI
005eb107  JNC 0x005eb10e
005eb109  MOV dword ptr [EAX + ECX*0x1],ESI
005eb10c  MOV dword ptr [ECX],EDX
005eb10e  MOV EDX,dword ptr [ECX + EBP*0x1]
005eb111  MOV ESI,dword ptr [EAX + ECX*0x1]
005eb114  CMP EDX,ESI
005eb116  JNC 0x005eb11e
005eb118  MOV dword ptr [ECX + EBP*0x1],ESI
005eb11b  MOV dword ptr [EAX + ECX*0x1],EDX
005eb11e  MOV EDX,dword ptr [EAX + ECX*0x1]
005eb121  MOV ESI,dword ptr [ECX]
005eb123  CMP EDX,ESI
005eb125  JNC 0x005eb12c
005eb127  MOV dword ptr [EAX + ECX*0x1],ESI
005eb12a  MOV dword ptr [ECX],EDX
005eb12c  MOV EDX,dword ptr [ESP + 0x18]
005eb130  MOV EBX,dword ptr [EDX]
005eb132  MOV ESI,EDX
005eb134  SUB ESI,EAX
005eb136  MOV EDI,dword ptr [ESI]
005eb138  CMP EBX,EDI
005eb13a  JNC 0x005eb140
005eb13c  MOV dword ptr [EDX],EDI
005eb13e  MOV dword ptr [ESI],EBX
005eb140  MOV EDI,dword ptr [EAX + EDX*0x1]
005eb143  MOV EBX,dword ptr [EDX]
005eb145  CMP EDI,EBX
005eb147  JNC 0x005eb14e
005eb149  MOV dword ptr [EAX + EDX*0x1],EBX
005eb14c  MOV dword ptr [EDX],EDI
005eb14e  MOV EDI,dword ptr [EDX]
005eb150  MOV EBX,dword ptr [ESI]
005eb152  CMP EDI,EBX
005eb154  JNC 0x005eb15a
005eb156  MOV dword ptr [EDX],EBX
005eb158  MOV dword ptr [ESI],EDI
005eb15a  MOV EDI,dword ptr [ESP + 0x1c]
005eb15e  MOV ESI,EDI
005eb160  SUB ESI,EAX
005eb162  MOV EBX,dword ptr [ESI]
005eb164  SUB EDI,EBP
005eb166  MOV EBP,dword ptr [EDI]
005eb168  CMP EBX,EBP
005eb16a  JNC 0x005eb170
005eb16c  MOV dword ptr [ESI],EBP
005eb16e  MOV dword ptr [EDI],EBX
005eb170  MOV EBX,dword ptr [ESP + 0x1c]
005eb174  MOV EBP,dword ptr [EBX]
005eb176  MOV EBX,dword ptr [ESI]
005eb178  CMP EBP,EBX
005eb17a  MOV dword ptr [ESP + 0x14],EBP
005eb17e  JNC 0x005eb18d
005eb180  MOV EBP,dword ptr [ESP + 0x1c]
005eb184  MOV dword ptr [EBP],EBX
005eb187  MOV EBX,dword ptr [ESP + 0x14]
005eb18b  MOV dword ptr [ESI],EBX
005eb18d  MOV EBX,dword ptr [ESI]
005eb18f  MOV EBP,dword ptr [EDI]
005eb191  CMP EBX,EBP
005eb193  JNC 0x005eb199
005eb195  MOV dword ptr [ESI],EBP
005eb197  MOV dword ptr [EDI],EBX
005eb199  MOV EDI,dword ptr [EDX]
005eb19b  MOV EBX,dword ptr [EAX + ECX*0x1]
005eb19e  CMP EDI,EBX
005eb1a0  JNC 0x005eb1a7
005eb1a2  MOV dword ptr [EDX],EBX
005eb1a4  MOV dword ptr [EAX + ECX*0x1],EDI
005eb1a7  MOV EDI,dword ptr [ESI]
005eb1a9  MOV EBX,dword ptr [EDX]
005eb1ab  CMP EDI,EBX
005eb1ad  JNC 0x005eb1b3
005eb1af  MOV dword ptr [ESI],EBX
005eb1b1  MOV dword ptr [EDX],EDI
005eb1b3  MOV ESI,dword ptr [EDX]
005eb1b5  MOV EDI,dword ptr [EAX + ECX*0x1]
005eb1b8  CMP ESI,EDI
005eb1ba  POP EBP
005eb1bb  POP EBX
005eb1bc  JNC 0x005eb1ec
005eb1be  MOV dword ptr [EDX],EDI
005eb1c0  POP EDI
005eb1c1  MOV dword ptr [EAX + ECX*0x1],ESI
005eb1c4  POP ESI
005eb1c5  RET
005eb1c6  MOV EAX,dword ptr [ESP + 0x10]
005eb1ca  MOV EDX,dword ptr [EAX]
005eb1cc  CMP EDX,ESI
005eb1ce  JNC 0x005eb1d4
005eb1d0  MOV dword ptr [EAX],ESI
005eb1d2  MOV dword ptr [ECX],EDX
005eb1d4  MOV EDX,dword ptr [EDI]
005eb1d6  MOV ESI,dword ptr [EAX]
005eb1d8  CMP EDX,ESI
005eb1da  JNC 0x005eb1e0
005eb1dc  MOV dword ptr [EDI],ESI
005eb1de  MOV dword ptr [EAX],EDX
005eb1e0  MOV EDX,dword ptr [EAX]
005eb1e2  MOV ESI,dword ptr [ECX]
005eb1e4  CMP EDX,ESI
005eb1e6  JNC 0x005eb1ec
005eb1e8  MOV dword ptr [EAX],ESI
005eb1ea  MOV dword ptr [ECX],EDX
005eb1ec  POP EDI
005eb1ed  POP ESI
005eb1ee  RET
