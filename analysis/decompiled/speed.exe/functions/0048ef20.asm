0048ef20  SUB ESP,0x20
0048ef23  MOV EAX,dword ptr [ESP + 0x28]
0048ef27  MOV EDX,dword ptr [EAX + 0x4]
0048ef2a  PUSH ESI
0048ef2b  PUSH EDI
0048ef2c  MOV ESI,ECX
0048ef2e  MOV ECX,0x8
0048ef33  LEA EDI,[ESP + 0x8]
0048ef37  MOVSD.REP ES:EDI,ESI
0048ef39  MOV ECX,dword ptr [EAX]
0048ef3b  MOV EDI,dword ptr [ESP + 0x8]
0048ef3f  MOV ESI,dword ptr [ESP + 0xc]
0048ef43  OR ESI,EDX
0048ef45  MOV EDX,dword ptr [ESP + 0x10]
0048ef49  OR EDI,ECX
0048ef4b  MOV ECX,dword ptr [EAX + 0x8]
0048ef4e  OR EDX,ECX
0048ef50  MOV ECX,dword ptr [ESP + 0x14]
0048ef54  MOV dword ptr [ESP + 0x10],EDX
0048ef58  MOV EDX,dword ptr [EAX + 0xc]
0048ef5b  OR ECX,EDX
0048ef5d  MOV EDX,dword ptr [EAX + 0x14]
0048ef60  MOV dword ptr [ESP + 0x8],EDI
0048ef64  MOV EDI,dword ptr [ESP + 0x18]
0048ef68  MOV dword ptr [ESP + 0xc],ESI
0048ef6c  MOV ESI,dword ptr [ESP + 0x1c]
0048ef70  OR ESI,EDX
0048ef72  MOV EDX,dword ptr [ESP + 0x20]
0048ef76  MOV dword ptr [ESP + 0x14],ECX
0048ef7a  MOV ECX,dword ptr [EAX + 0x10]
0048ef7d  OR EDI,ECX
0048ef7f  MOV ECX,dword ptr [EAX + 0x18]
0048ef82  OR EDX,ECX
0048ef84  MOV dword ptr [ESP + 0x20],EDX
0048ef88  MOV EDX,dword ptr [EAX + 0x1c]
0048ef8b  OR dword ptr [ESP + 0x24],EDX
0048ef8f  MOV EAX,dword ptr [ESP + 0x2c]
0048ef93  MOV dword ptr [ESP + 0x18],EDI
0048ef97  MOV dword ptr [ESP + 0x1c],ESI
0048ef9b  MOV ECX,0x8
0048efa0  LEA ESI,[ESP + 0x8]
0048efa4  MOV EDI,EAX
0048efa6  MOVSD.REP ES:EDI,ESI
0048efa8  POP EDI
0048efa9  POP ESI
0048efaa  ADD ESP,0x20
0048efad  RET 0x8
