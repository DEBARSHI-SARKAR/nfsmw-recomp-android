007ea130  PUSH EBP
007ea131  MOV EBP,ESP
007ea133  PUSH ESI
007ea134  MOV ESI,dword ptr [EBP + 0x8]
007ea137  PUSH ESI
007ea138  CALL 0x007e9ef0
007ea13d  MOV byte ptr [ECX],0x7c
007ea140  MOV EAX,dword ptr [ESI + 0x74]
007ea143  MOV dword ptr [ECX + 0x10],EAX
007ea146  MOV EDX,dword ptr [ESI + 0x78]
007ea149  MOV dword ptr [ECX + 0x14],EDX
007ea14c  MOV EAX,dword ptr [ESI + 0x7c]
007ea14f  MOV dword ptr [ECX + 0x18],EAX
007ea152  MOV EDX,dword ptr [ESI + 0x80]
007ea158  MOV dword ptr [ECX + 0x1c],EDX
007ea15b  MOV EDX,dword ptr [ESI + 0x7c]
007ea15e  IMUL EDX,dword ptr [ESI + 0x80]
007ea165  LEA EAX,[ECX + 0x20]
007ea168  XOR ESI,ESI
007ea16a  CMP EAX,ESI
007ea16c  LEA EDX,[EDX*0x4 + 0x20]
007ea173  JNZ 0x007ea180
007ea175  MOV dword ptr [ECX + 0x8],ESI
007ea178  MOV dword ptr [ECX + 0xc],ESI
007ea17b  POP ESI
007ea17c  POP EBP
007ea17d  RET 0x4
007ea180  SUB EAX,ECX
007ea182  ADD EDX,-0x20
007ea185  MOV dword ptr [ECX + 0x8],EAX
007ea188  MOV dword ptr [ECX + 0xc],EDX
007ea18b  POP ESI
007ea18c  POP EBP
007ea18d  RET 0x4
