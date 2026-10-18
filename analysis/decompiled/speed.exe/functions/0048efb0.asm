0048efb0  SUB ESP,0x20
0048efb3  MOV EAX,dword ptr [ESP + 0x28]
0048efb7  MOV EDX,dword ptr [EAX + 0x4]
0048efba  PUSH ESI
0048efbb  PUSH EDI
0048efbc  MOV ESI,ECX
0048efbe  MOV ECX,0x8
0048efc3  LEA EDI,[ESP + 0x8]
0048efc7  MOVSD.REP ES:EDI,ESI
0048efc9  MOV ECX,dword ptr [EAX]
0048efcb  MOV EDI,dword ptr [ESP + 0x8]
0048efcf  MOV ESI,dword ptr [ESP + 0xc]
0048efd3  XOR ESI,EDX
0048efd5  MOV EDX,dword ptr [ESP + 0x10]
0048efd9  XOR EDI,ECX
0048efdb  MOV ECX,dword ptr [EAX + 0x8]
0048efde  XOR EDX,ECX
0048efe0  MOV ECX,dword ptr [ESP + 0x14]
0048efe4  MOV dword ptr [ESP + 0x10],EDX
0048efe8  MOV EDX,dword ptr [EAX + 0xc]
0048efeb  XOR ECX,EDX
0048efed  MOV EDX,dword ptr [EAX + 0x14]
0048eff0  MOV dword ptr [ESP + 0x8],EDI
0048eff4  MOV EDI,dword ptr [ESP + 0x18]
0048eff8  MOV dword ptr [ESP + 0xc],ESI
0048effc  MOV ESI,dword ptr [ESP + 0x1c]
0048f000  XOR ESI,EDX
0048f002  MOV EDX,dword ptr [ESP + 0x20]
0048f006  MOV dword ptr [ESP + 0x14],ECX
0048f00a  MOV ECX,dword ptr [EAX + 0x10]
0048f00d  XOR EDI,ECX
0048f00f  MOV ECX,dword ptr [EAX + 0x18]
0048f012  XOR EDX,ECX
0048f014  MOV dword ptr [ESP + 0x20],EDX
0048f018  MOV EDX,dword ptr [EAX + 0x1c]
0048f01b  XOR dword ptr [ESP + 0x24],EDX
0048f01f  MOV EAX,dword ptr [ESP + 0x2c]
0048f023  MOV dword ptr [ESP + 0x18],EDI
0048f027  MOV dword ptr [ESP + 0x1c],ESI
0048f02b  MOV ECX,0x8
0048f030  LEA ESI,[ESP + 0x8]
0048f034  MOV EDI,EAX
0048f036  MOVSD.REP ES:EDI,ESI
0048f038  POP EDI
0048f039  POP ESI
0048f03a  ADD ESP,0x20
0048f03d  RET 0x8
