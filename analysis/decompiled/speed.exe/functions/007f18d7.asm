007f18d7  MOV ECX,dword ptr [0x009bb414]
007f18dd  TEST ECX,ECX
007f18df  JZ 0x007f18ed
007f18e1  MOV EAX,dword ptr [ECX]
007f18e3  CALL dword ptr [EAX + 0xc]
007f18e6  AND dword ptr [0x009bb414],0x0
007f18ed  RET
