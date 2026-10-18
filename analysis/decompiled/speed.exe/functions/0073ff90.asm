0073ff90  MOV EAX,dword ptr [ESP + 0x4]
0073ff94  MOV ECX,dword ptr [ESP + 0x8]
0073ff98  CMP EAX,ECX
0073ff9a  JZ 0x0073ffad
0073ff9c  MOV EDX,dword ptr [ESP + 0xc]
0073ffa0  PUSH ESI
0073ffa1  MOV ESI,dword ptr [EDX]
0073ffa3  MOV dword ptr [EAX],ESI
0073ffa5  ADD EAX,0x4
0073ffa8  CMP EAX,ECX
0073ffaa  JNZ 0x0073ffa1
0073ffac  POP ESI
0073ffad  RET
