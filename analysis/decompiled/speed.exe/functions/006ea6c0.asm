006ea6c0  PUSH ESI
006ea6c1  MOV ESI,ECX
006ea6c3  MOV EAX,dword ptr [ESI + 0x370]
006ea6c9  TEST EAX,EAX
006ea6cb  JZ 0x006ea6f6
006ea6cd  MOV EDX,dword ptr [0x009885d8]
006ea6d3  MOV ECX,EAX
006ea6d5  MOV EAX,dword ptr [ECX]
006ea6d7  PUSH EDX
006ea6d8  CALL dword ptr [EAX + 0x58]
006ea6db  MOV EDX,dword ptr [0x009885d8]
006ea6e1  MOV ECX,dword ptr [ESI + 0x370]
006ea6e7  MOV EAX,dword ptr [ECX]
006ea6e9  PUSH 0x2
006ea6eb  PUSH 0x0
006ea6ed  PUSH EDX
006ea6ee  PUSH 0xa6a56ea1
006ea6f3  CALL dword ptr [EAX + 0x34]
006ea6f6  POP ESI
006ea6f7  RET
