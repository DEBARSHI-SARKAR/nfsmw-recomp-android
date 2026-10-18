007ad730  MOV EAX,dword ptr [ESP + 0x4]
007ad734  PUSH ESI
007ad735  MOV ESI,ECX
007ad737  MOV dword ptr [ESI + 0x8],EAX
007ad73a  MOV ECX,dword ptr [0x0091cf90]
007ad740  MOV ECX,dword ptr [ECX + 0x10]
007ad743  XOR EDX,EDX
007ad745  MOV DL,byte ptr [EAX + 0x11]
007ad748  ADD ECX,0x414
007ad74e  PUSH EDX
007ad74f  CALL 0x0056f120
007ad754  MOV dword ptr [ESI + 0x4],EAX
007ad757  MOV CL,byte ptr [0x009b9e78]
007ad75d  TEST CL,CL
007ad75f  JZ 0x007ad78b
007ad761  MOV CL,byte ptr [0x009b9e74]
007ad767  MOV byte ptr [EAX + 0x2],CL
007ad76a  MOV EDX,dword ptr [ESI + 0x4]
007ad76d  MOV AL,[0x009b9e74]
007ad772  MOV byte ptr [EDX + 0x3],AL
007ad775  MOV ECX,dword ptr [ESI + 0x4]
007ad778  PUSH 0x2
007ad77a  ADD ECX,0x2
007ad77d  CALL 0x0056f630
007ad782  MOV dword ptr [ESI + 0xc],0x2
007ad789  JMP 0x007ad7ab
007ad78b  MOV ECX,dword ptr [0x009b9e70]
007ad791  TEST ECX,ECX
007ad793  JZ 0x007ad7ab
007ad795  MOV byte ptr [EAX + 0x3],CL
007ad798  MOV DL,byte ptr [0x009b9e74]
007ad79e  MOV ECX,dword ptr [ESI + 0x4]
007ad7a1  MOV byte ptr [ECX + 0x2],DL
007ad7a4  MOV dword ptr [ESI + 0xc],0x1
007ad7ab  MOV AL,[0x009b9e7b]
007ad7b0  TEST AL,AL
007ad7b2  JZ 0x007ad7c3
007ad7b4  MOV ECX,dword ptr [ESI + 0x4]
007ad7b7  ADD ECX,0x2
007ad7ba  CALL 0x0056f670
007ad7bf  TEST AL,AL
007ad7c1  JZ 0x007ad7b4
007ad7c3  MOV ECX,ESI
007ad7c5  CALL 0x007a34f0
007ad7ca  POP ESI
007ad7cb  RET 0x4
