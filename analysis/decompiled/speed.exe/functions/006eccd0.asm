006eccd0  FLD float ptr [ESP + 0x8]
006eccd4  MOV EAX,[0x00988ed0]
006eccd9  FCOMP float ptr [0x0089096c]
006eccdf  INC EAX
006ecce0  MOV [0x00988ed0],EAX
006ecce5  FNSTSW AX
006ecce7  TEST AH,0x5
006eccea  JP 0x006eccf2
006eccec  FLD float ptr [ESP + 0x8]
006eccf0  JMP 0x006eccf8
006eccf2  FLD float ptr [0x0089096c]
006eccf8  MOV EDX,dword ptr [ESP + 0x4]
006eccfc  FSTP float ptr [ECX]
006eccfe  MOV EAX,dword ptr [ESP + 0xc]
006ecd02  FLD float ptr [ESP + 0x10]
006ecd06  MOV dword ptr [ECX + 0xc],EDX
006ecd09  FCHS
006ecd0b  MOV EDX,dword ptr [ESP + 0x14]
006ecd0f  FSTP float ptr [ECX + 0x8]
006ecd12  MOV dword ptr [ECX + 0x4],EAX
006ecd15  XOR EAX,EAX
006ecd17  AND EDX,0xf
006ecd1a  MOV dword ptr [ECX + 0x18],EDX
006ecd1d  MOV dword ptr [ECX + 0x10],EAX
006ecd20  MOV dword ptr [ECX + 0x14],EAX
006ecd23  MOV dword ptr [ECX + 0x1c],EAX
006ecd26  MOV EDX,dword ptr [0x00901ae0]
006ecd2c  MOV dword ptr [ECX + 0x20],EDX
006ecd2f  INC dword ptr [0x00901ae0]
006ecd35  MOV dword ptr [ECX + 0x24],EAX
006ecd38  CALL 0x006e89a0
006ecd3d  MOV EAX,ECX
006ecd3f  RET 0x14
