006ecd50  CMP dword ptr [0x009885d0],ECX
006ecd56  JNZ 0x006ecd60
006ecd58  MOV EAX,dword ptr [ECX + 0x14]
006ecd5b  MOV [0x009885d0],EAX
006ecd60  MOV EAX,dword ptr [ECX + 0x10]
006ecd63  TEST EAX,EAX
006ecd65  JZ 0x006ecd6d
006ecd67  MOV EDX,dword ptr [ECX + 0x14]
006ecd6a  MOV dword ptr [EAX + 0x14],EDX
006ecd6d  MOV EAX,dword ptr [ECX + 0x14]
006ecd70  TEST EAX,EAX
006ecd72  JZ 0x006ecd7a
006ecd74  MOV ECX,dword ptr [ECX + 0x10]
006ecd77  MOV dword ptr [EAX + 0x10],ECX
006ecd7a  DEC dword ptr [0x00988ed0]
006ecd80  RET
