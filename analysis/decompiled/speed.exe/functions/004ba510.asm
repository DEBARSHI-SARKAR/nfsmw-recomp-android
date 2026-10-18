004ba510  FLD float ptr [ESP + 0x10]
004ba514  MOV EAX,dword ptr [ESP + 0x4]
004ba518  FSUB float ptr [ESP + 0xc]
004ba51c  MOV EDX,dword ptr [ESP + 0x8]
004ba520  MOV dword ptr [ECX],EAX
004ba522  MOV EAX,dword ptr [ESP + 0xc]
004ba526  FABS
004ba528  FCOMP float ptr [0x00896abc]
004ba52e  MOV dword ptr [ECX + 0x8],EAX
004ba531  MOV dword ptr [ECX + 0x4],EDX
004ba534  MOV EDX,dword ptr [ESP + 0x10]
004ba538  FNSTSW AX
004ba53a  MOV dword ptr [ECX + 0xc],EDX
004ba53d  TEST AH,0x5
004ba540  JP 0x004ba54f
004ba542  FLD float ptr [ESP + 0x10]
004ba546  FADD float ptr [0x00896abc]
004ba54c  FSTP float ptr [ECX + 0xc]
004ba54f  MOV EAX,dword ptr [ESP + 0x4]
004ba553  MOV dword ptr [ECX + 0x14],EAX
004ba556  MOV dword ptr [ECX + 0x10],0x0
004ba55d  MOV EAX,ECX
004ba55f  RET 0x10
