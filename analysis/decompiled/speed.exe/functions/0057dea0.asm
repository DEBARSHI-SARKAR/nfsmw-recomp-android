0057dea0  PUSH -0x1
0057dea2  PUSH 0x871ee8
0057dea7  MOV EAX,FS:[0x0]
0057dead  PUSH EAX
0057deae  MOV dword ptr FS:[0x0],ESP
0057deb5  SUB ESP,0x8
0057deb8  PUSH ESI
0057deb9  MOV ESI,ECX
0057debb  MOV dword ptr [ESP + 0x8],ESI
0057debf  MOV dword ptr [ESI],0x8a0f70
0057dec5  MOV EAX,dword ptr [ESI + 0x2c]
0057dec8  LEA ECX,[ESP + 0x4]
0057decc  PUSH 0x1
0057dece  PUSH ECX
0057decf  MOV dword ptr [ESP + 0x1c],0x0
0057ded7  MOV dword ptr [ESP + 0xc],EAX
0057dedb  CALL 0x00503360
0057dee0  ADD ESP,0x8
0057dee3  MOV ECX,ESI
0057dee5  MOV dword ptr [ESP + 0x14],0xffffffff
0057deed  CALL 0x00572360
0057def2  MOV ECX,dword ptr [ESP + 0xc]
0057def6  POP ESI
0057def7  MOV dword ptr FS:[0x0],ECX
0057defe  ADD ESP,0x14
0057df01  RET
