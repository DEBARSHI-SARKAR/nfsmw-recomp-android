007238d0  MOV EAX,dword ptr [ESP + 0x4]
007238d4  IMUL EAX,EAX,0x64
007238d7  LEA EAX,[EAX + ECX*0x1 + 0xc0]
007238de  MOV ECX,dword ptr [ESP + 0x8]
007238e2  MOV EDX,dword ptr [ECX]
007238e4  MOV dword ptr [EAX],EDX
007238e6  MOV EDX,dword ptr [ECX + 0x4]
007238e9  MOV dword ptr [EAX + 0x4],EDX
007238ec  MOV ECX,dword ptr [ECX + 0x8]
007238ef  MOV dword ptr [EAX + 0x8],ECX
007238f2  MOV ECX,dword ptr [ESP + 0xc]
007238f6  MOV EDX,dword ptr [ECX]
007238f8  MOV dword ptr [EAX + 0xc],EDX
007238fb  MOV ECX,dword ptr [ECX + 0x4]
007238fe  MOV dword ptr [EAX + 0x10],ECX
00723901  MOV ECX,dword ptr [ESP + 0x10]
00723905  MOV EDX,dword ptr [ECX]
00723907  MOV dword ptr [EAX + 0x14],EDX
0072390a  MOV ECX,dword ptr [ECX + 0x4]
0072390d  MOV DL,byte ptr [ESP + 0x14]
00723911  MOV dword ptr [EAX + 0x18],ECX
00723914  MOV byte ptr [EAX + 0x1c],0x1
00723918  MOV byte ptr [EAX + 0x1d],DL
0072391b  RET 0x14
