0067ff80  PUSH -0x1
0067ff82  PUSH 0x87b456
0067ff87  MOV EAX,FS:[0x0]
0067ff8d  PUSH EAX
0067ff8e  MOV dword ptr FS:[0x0],ESP
0067ff95  PUSH ECX
0067ff96  PUSH ESI
0067ff97  MOV ESI,ECX
0067ff99  XOR EAX,EAX
0067ff9b  PUSH EDI
0067ff9c  MOV dword ptr [ESP + 0x8],ESI
0067ffa0  MOV dword ptr [ESI + 0x4],EAX
0067ffa3  MOV dword ptr [ESI + 0x8],EAX
0067ffa6  MOV dword ptr [ESI + 0xc],EAX
0067ffa9  MOV dword ptr [ESI],0x8aa038
0067ffaf  LEA EDI,[ESI + 0x510]
0067ffb5  MOV dword ptr [ESP + 0x14],EAX
0067ffb9  MOV dword ptr [EDI + 0x4],EAX
0067ffbc  MOV dword ptr [EDI + 0x8],EAX
0067ffbf  MOV dword ptr [EDI + 0xc],EAX
0067ffc2  MOV dword ptr [EDI],0x8aa038
0067ffc8  PUSH 0xa0
0067ffcd  MOV byte ptr [ESP + 0x18],0x1
0067ffd2  CALL 0x006749e0
0067ffd7  PUSH 0xa0
0067ffdc  MOV ECX,EDI
0067ffde  CALL 0x006749e0
0067ffe3  MOV ECX,dword ptr [ESP + 0xc]
0067ffe7  POP EDI
0067ffe8  MOV EAX,ESI
0067ffea  POP ESI
0067ffeb  MOV dword ptr FS:[0x0],ECX
0067fff2  ADD ESP,0x10
0067fff5  RET
