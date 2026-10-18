007d2380  PUSH EBP
007d2381  MOV EBP,ESP
007d2383  PUSH ECX
007d2384  CMP dword ptr [EBP + 0x8],0x0
007d2388  JL 0x007d2390
007d238a  CMP dword ptr [EBP + 0x8],0x3
007d238e  JL 0x007d2397
007d2390  MOV EAX,0xfffffffe
007d2395  JMP 0x007d23fa
007d2397  CMP dword ptr [EBP + 0xc],-0x6
007d239b  JNZ 0x007d23a9
007d239d  MOV EAX,dword ptr [EBP + 0x8]
007d23a0  MOV EAX,dword ptr [EAX*0x4 + 0x906ac8]
007d23a7  JMP 0x007d23fa
007d23a9  MOV ECX,dword ptr [EBP + 0x8]
007d23ac  MOV EDX,dword ptr [ECX*0x4 + 0x906ac8]
007d23b3  MOV dword ptr [EBP + -0x4],EDX
007d23b6  CMP dword ptr [EBP + 0xc],-0x4
007d23ba  JNZ 0x007d23d0
007d23bc  PUSH -0xb
007d23be  CALL dword ptr [0x008901f0]
007d23c4  MOV ECX,dword ptr [EBP + 0x8]
007d23c7  MOV dword ptr [ECX*0x4 + 0x906ac8],EAX
007d23ce  JMP 0x007d23f7
007d23d0  CMP dword ptr [EBP + 0xc],-0x5
007d23d4  JNZ 0x007d23ea
007d23d6  PUSH -0xc
007d23d8  CALL dword ptr [0x008901f0]
007d23de  MOV EDX,dword ptr [EBP + 0x8]
007d23e1  MOV dword ptr [EDX*0x4 + 0x906ac8],EAX
007d23e8  JMP 0x007d23f7
007d23ea  MOV EAX,dword ptr [EBP + 0x8]
007d23ed  MOV ECX,dword ptr [EBP + 0xc]
007d23f0  MOV dword ptr [EAX*0x4 + 0x906ac8],ECX
007d23f7  MOV EAX,dword ptr [EBP + -0x4]
007d23fa  MOV ESP,EBP
007d23fc  POP EBP
007d23fd  RET
