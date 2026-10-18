0058af10  PUSH ESI
0058af11  MOV ESI,ECX
0058af13  CALL 0x00466410
0058af18  TEST EAX,EAX
0058af1a  JZ 0x0058af34
0058af1c  MOV ECX,dword ptr [ESP + 0x8]
0058af20  MOV dword ptr [EAX + 0x8],ECX
0058af23  MOV ECX,dword ptr [ESI + 0x4]
0058af26  MOV dword ptr [ECX],EAX
0058af28  MOV dword ptr [ESI + 0x4],EAX
0058af2b  MOV dword ptr [EAX],ESI
0058af2d  MOV dword ptr [EAX + 0x4],ECX
0058af30  POP ESI
0058af31  RET 0x4
0058af34  MOV ECX,dword ptr [ESI + 0x4]
0058af37  XOR EAX,EAX
0058af39  MOV dword ptr [ECX],EAX
0058af3b  MOV dword ptr [ESI + 0x4],EAX
0058af3e  MOV dword ptr [EAX],ESI
0058af40  MOV dword ptr [EAX + 0x4],ECX
0058af43  POP ESI
0058af44  RET 0x4
