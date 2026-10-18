0062df40  PUSH -0x1
0062df42  PUSH 0x877ce8
0062df47  MOV EAX,FS:[0x0]
0062df4d  PUSH EAX
0062df4e  MOV dword ptr FS:[0x0],ESP
0062df55  PUSH ECX
0062df56  PUSH ESI
0062df57  MOV ESI,ECX
0062df59  MOV dword ptr [ESP + 0x4],ESI
0062df5d  MOV dword ptr [ESI + 0x4],0x10
0062df64  MOV EAX,dword ptr [ESP + 0x18]
0062df68  MOV dword ptr [ESI],0x8a7b08
0062df6e  MOV dword ptr [ESI + 0x8],EAX
0062df71  MOV ECX,dword ptr [0x009885c8]
0062df77  TEST ECX,ECX
0062df79  MOV dword ptr [ESP + 0x10],0x0
0062df81  JZ 0x0062dfa5
0062df83  TEST EAX,EAX
0062df85  JZ 0x0062dfa0
0062df87  MOV EAX,dword ptr [ECX]
0062df89  CALL dword ptr [EAX + 0x30]
0062df8c  MOV EAX,ESI
0062df8e  POP ESI
0062df8f  MOV ECX,dword ptr [ESP + 0x4]
0062df93  MOV dword ptr FS:[0x0],ECX
0062df9a  ADD ESP,0x10
0062df9d  RET 0x4
0062dfa0  MOV EDX,dword ptr [ECX]
0062dfa2  CALL dword ptr [EDX + 0x34]
0062dfa5  MOV ECX,dword ptr [ESP + 0x8]
0062dfa9  MOV EAX,ESI
0062dfab  POP ESI
0062dfac  MOV dword ptr FS:[0x0],ECX
0062dfb3  ADD ESP,0x10
0062dfb6  RET 0x4
