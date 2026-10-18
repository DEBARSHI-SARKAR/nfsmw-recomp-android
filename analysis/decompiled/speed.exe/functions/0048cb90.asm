0048cb90  MOV EAX,dword ptr [ESP + 0x8]
0048cb94  PUSH ESI
0048cb95  MOV ESI,ECX
0048cb97  MOV dword ptr [ESI],0x89542c
0048cb9d  MOV ECX,0x8953fc
0048cba2  MOV dword ptr [ESI + 0xc],ECX
0048cba5  MOV EDX,dword ptr [EAX]
0048cba7  MOV dword ptr [ESI + 0x10],EDX
0048cbaa  MOV EDX,dword ptr [EAX + 0x4]
0048cbad  MOV dword ptr [ESI + 0x14],EDX
0048cbb0  MOV EAX,dword ptr [EAX + 0x8]
0048cbb3  MOV EDX,dword ptr [ESP + 0x8]
0048cbb7  MOV dword ptr [ESI + 0x18],EAX
0048cbba  MOV EAX,dword ptr [ESP + 0x18]
0048cbbe  MOV dword ptr [ESI + 0x1c],EDX
0048cbc1  MOV EDX,EAX
0048cbc3  SHR EDX,0x1
0048cbc5  AND DL,0x1
0048cbc8  MOV byte ptr [ESI + 0x20],DL
0048cbcb  MOV dword ptr [ESI + 0x24],ECX
0048cbce  MOV ECX,dword ptr [ESP + 0x14]
0048cbd2  MOV EDX,dword ptr [ECX]
0048cbd4  MOV dword ptr [ESI + 0x28],EDX
0048cbd7  MOV EDX,dword ptr [ECX + 0x4]
0048cbda  MOV dword ptr [ESI + 0x2c],EDX
0048cbdd  MOV ECX,dword ptr [ECX + 0x8]
0048cbe0  MOV EDX,dword ptr [ESP + 0x10]
0048cbe4  MOV dword ptr [ESI + 0x30],ECX
0048cbe7  AND AL,0x1
0048cbe9  MOV byte ptr [ESI + 0x38],AL
0048cbec  MOV dword ptr [ESI + 0x34],EDX
0048cbef  MOV EAX,[0x008ee4c0]
0048cbf4  MOV dword ptr [ESI + 0x3c],EAX
0048cbf7  MOV EAX,[0x008ee4c0]
0048cbfc  PUSH EDI
0048cbfd  ADD EAX,0x4
0048cc00  LEA EDI,[ESI + 0x40]
0048cc03  MOV ECX,EDI
0048cc05  MOV [0x008ee4c0],EAX
0048cc0a  CALL 0x0048c190
0048cc0f  MOV dword ptr [EDI + 0x4],EAX
0048cc12  MOV dword ptr [EDI + 0x8],0x0
0048cc19  POP EDI
0048cc1a  MOV EAX,ESI
0048cc1c  POP ESI
0048cc1d  RET 0x14
