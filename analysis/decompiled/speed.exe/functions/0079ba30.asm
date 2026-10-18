0079ba30  PUSH ESI
0079ba31  PUSH EDI
0079ba32  MOV ESI,ECX
0079ba34  CALL 0x00792860
0079ba39  MOV dword ptr [ESI + 0x4],EAX
0079ba3c  MOV byte ptr [EAX + 0x15],0x1
0079ba40  MOV EAX,dword ptr [ESI + 0x4]
0079ba43  MOV dword ptr [EAX + 0x4],EAX
0079ba46  MOV EAX,dword ptr [ESI + 0x4]
0079ba49  MOV dword ptr [EAX],EAX
0079ba4b  MOV EAX,dword ptr [ESI + 0x4]
0079ba4e  MOV dword ptr [EAX + 0x8],EAX
0079ba51  XOR EAX,EAX
0079ba53  LEA EDX,[ESI + 0x1c]
0079ba56  MOV dword ptr [ESI + 0x8],EAX
0079ba59  MOV dword ptr [ESI + 0xc],EAX
0079ba5c  MOV dword ptr [ESI + 0x10],EAX
0079ba5f  MOV dword ptr [ESI + 0x14],EAX
0079ba62  MOV dword ptr [ESI + 0x18],EAX
0079ba65  MOV dword ptr [ESI + 0xf4],EAX
0079ba6b  MOV byte ptr [ESI + 0x10c],AL
0079ba71  MOV byte ptr [ESI + 0x10d],AL
0079ba77  MOV dword ptr [ESI + 0xf0],0x80000000
0079ba81  MOV dword ptr [ESI + 0x100],0xffffffff
0079ba8b  MOV dword ptr [ESI + 0x104],0xffffffff
0079ba95  MOV dword ptr [ESI + 0x108],0xffffffff
0079ba9f  MOV ECX,0x35
0079baa4  MOV EDI,EDX
0079baa6  STOSD.REP ES:EDI
0079baa8  POP EDI
0079baa9  MOV EAX,ESI
0079baab  MOV dword ptr [EDX],0xffffffff
0079bab1  POP ESI
0079bab2  RET
