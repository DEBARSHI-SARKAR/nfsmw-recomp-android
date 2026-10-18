0066f740  SUB ESP,0x18
0066f743  MOV EAX,dword ptr [ESP + 0x1c]
0066f747  PUSH EBX
0066f748  PUSH EBP
0066f749  PUSH ESI
0066f74a  MOV ECX,EAX
0066f74c  MOV EDX,dword ptr [ECX]
0066f74e  MOV ESI,dword ptr [ECX + 0x4]
0066f751  PUSH EDI
0066f752  MOV EDI,dword ptr [ECX + 0x8]
0066f755  MOV EBX,dword ptr [ECX + 0xc]
0066f758  MOV dword ptr [ESP + 0x1c],EBX
0066f75c  MOV EBX,dword ptr [ECX + 0x10]
0066f75f  MOV ECX,dword ptr [ECX + 0x14]
0066f762  MOV dword ptr [ESP + 0x20],EBX
0066f766  MOV dword ptr [ESP + 0x24],ECX
0066f76a  MOV ECX,dword ptr [ESP + 0x30]
0066f76e  MOV EBX,ECX
0066f770  MOV EBP,dword ptr [EBX]
0066f772  MOV dword ptr [EAX],EBP
0066f774  MOV EBP,dword ptr [EBX + 0x4]
0066f777  MOV dword ptr [EAX + 0x4],EBP
0066f77a  MOV EBP,dword ptr [EBX + 0x8]
0066f77d  MOV dword ptr [EAX + 0x8],EBP
0066f780  MOV EBP,dword ptr [EBX + 0xc]
0066f783  MOV dword ptr [EAX + 0xc],EBP
0066f786  MOV EBP,dword ptr [EBX + 0x10]
0066f789  MOV dword ptr [EAX + 0x10],EBP
0066f78c  MOV EBX,dword ptr [EBX + 0x14]
0066f78f  MOV dword ptr [EAX + 0x14],EBX
0066f792  MOV EAX,dword ptr [ESP + 0x20]
0066f796  MOV dword ptr [ECX],EDX
0066f798  MOV EDX,dword ptr [ESP + 0x1c]
0066f79c  MOV dword ptr [ECX + 0x4],ESI
0066f79f  MOV dword ptr [ECX + 0x8],EDI
0066f7a2  POP EDI
0066f7a3  MOV dword ptr [ECX + 0xc],EDX
0066f7a6  MOV EDX,dword ptr [ESP + 0x20]
0066f7aa  POP ESI
0066f7ab  POP EBP
0066f7ac  MOV dword ptr [ECX + 0x10],EAX
0066f7af  MOV dword ptr [ECX + 0x14],EDX
0066f7b2  POP EBX
0066f7b3  ADD ESP,0x18
0066f7b6  RET
