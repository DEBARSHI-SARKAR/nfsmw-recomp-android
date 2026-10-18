0065ce30  PUSH 0x890f10
0065ce35  PUSH 0x20
0065ce37  MOV ECX,0x925b30
0065ce3c  CALL 0x005d29d0
0065ce41  TEST EAX,EAX
0065ce43  JZ 0x0065ce83
0065ce45  MOV ECX,dword ptr [ESP + 0x4]
0065ce49  MOV EDX,dword ptr [ESP + 0x8]
0065ce4d  MOV dword ptr [EAX],ECX
0065ce4f  MOV ECX,dword ptr [ESP + 0xc]
0065ce53  MOV dword ptr [EAX + 0x4],EDX
0065ce56  MOV dword ptr [EAX + 0x8],ECX
0065ce59  MOV ECX,dword ptr [ESP + 0x10]
0065ce5d  PUSH ESI
0065ce5e  MOV ESI,dword ptr [ECX]
0065ce60  LEA EDX,[EAX + 0xc]
0065ce63  MOV dword ptr [EDX],ESI
0065ce65  MOV ESI,dword ptr [ECX + 0x4]
0065ce68  MOV dword ptr [EDX + 0x4],ESI
0065ce6b  MOV ESI,dword ptr [ECX + 0x8]
0065ce6e  MOV dword ptr [EDX + 0x8],ESI
0065ce71  MOV ECX,dword ptr [ECX + 0xc]
0065ce74  MOV dword ptr [EDX + 0xc],ECX
0065ce77  MOV DL,byte ptr [ESP + 0x18]
0065ce7b  MOV byte ptr [EAX + 0x1c],DL
0065ce7e  MOV byte ptr [EAX + 0x1d],0x0
0065ce82  POP ESI
0065ce83  RET 0x14
