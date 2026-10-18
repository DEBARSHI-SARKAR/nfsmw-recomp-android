007f9db7  PUSH EBP
007f9db8  MOV EBP,ESP
007f9dba  SUB ESP,0xc0
007f9dc0  PUSH ESI
007f9dc1  MOV ESI,ECX
007f9dc3  PUSH 0x3
007f9dc5  POP EAX
007f9dc6  MOV dword ptr [ESI + 0x8],EAX
007f9dc9  MOV dword ptr [ESI + 0xc],EAX
007f9dcc  AND dword ptr [ESI + 0x10],0x0
007f9dd0  LEA ECX,[EBP + 0xffffff40]
007f9dd6  MOV dword ptr [ESI],EAX
007f9dd8  CALL 0x007e9b30
007f9ddd  MOV EAX,dword ptr [EBP + 0x8]
007f9de0  PUSH dword ptr [0x00909e5c]
007f9de6  MOV dword ptr [EBP + 0xffffff58],EAX
007f9dec  MOV EAX,dword ptr [EBP + 0xc]
007f9def  MOV dword ptr [EBP + 0xffffff5c],EAX
007f9df5  LEA EAX,[EBP + 0xffffff40]
007f9dfb  PUSH EAX
007f9dfc  MOV dword ptr [EBP + 0xffffff44],0x2
007f9e06  MOV dword ptr [EBP + 0xffffff54],0x6c
007f9e10  MOV dword ptr [EBP + -0x70],0x1
007f9e17  CALL 0x007eada0
007f9e1c  POP ECX
007f9e1d  MOV dword ptr [ESI + 0x4],EAX
007f9e20  POP ECX
007f9e21  MOV EAX,ESI
007f9e23  POP ESI
007f9e24  LEAVE
007f9e25  RET 0x8
