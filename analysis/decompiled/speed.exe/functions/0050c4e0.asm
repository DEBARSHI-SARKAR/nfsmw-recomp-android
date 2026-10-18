0050c4e0  PUSH ESI
0050c4e1  MOV ESI,ECX
0050c4e3  CALL 0x005048f0
0050c4e8  MOV dword ptr [ESI + 0x4],EAX
0050c4eb  MOV byte ptr [EAX + 0x15],0x1
0050c4ef  MOV EAX,dword ptr [ESI + 0x4]
0050c4f2  MOV dword ptr [EAX + 0x4],EAX
0050c4f5  MOV EAX,dword ptr [ESI + 0x4]
0050c4f8  MOV dword ptr [EAX],EAX
0050c4fa  MOV EAX,dword ptr [ESI + 0x4]
0050c4fd  MOV dword ptr [EAX + 0x8],EAX
0050c500  MOV dword ptr [ESI + 0x8],0x0
0050c507  MOV EAX,ESI
0050c509  POP ESI
0050c50a  RET
