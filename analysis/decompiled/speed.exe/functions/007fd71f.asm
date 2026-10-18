007fd71f  PUSH EBP
007fd720  MOV EBP,ESP
007fd722  MOV ECX,dword ptr [EBP + 0xc]
007fd725  MOV EAX,dword ptr [EBP + 0x8]
007fd728  PUSH ESI
007fd729  PUSH 0xc
007fd72b  ADD ECX,0x2
007fd72e  ADD EAX,0x2
007fd731  POP ESI
007fd732  MOV DL,byte ptr [EAX + -0x2]
007fd735  MOV byte ptr [ECX + -0x2],DL
007fd738  MOV DL,byte ptr [EAX + -0x1]
007fd73b  MOV byte ptr [ECX + -0x1],DL
007fd73e  MOV DL,byte ptr [EAX]
007fd740  MOV byte ptr [ECX],DL
007fd742  MOV DL,byte ptr [EAX + 0x1]
007fd745  MOV byte ptr [ECX + 0x1],DL
007fd748  MOV DL,byte ptr [EAX + 0x2]
007fd74b  MOV byte ptr [ECX + 0x2],DL
007fd74e  MOV DL,byte ptr [EAX + 0x3]
007fd751  MOV byte ptr [ECX + 0x3],DL
007fd754  MOV DL,byte ptr [EAX + 0x4]
007fd757  MOV byte ptr [ECX + 0x4],DL
007fd75a  MOV DL,byte ptr [EAX + 0x5]
007fd75d  MOV byte ptr [ECX + 0x5],DL
007fd760  MOV DL,byte ptr [EAX + 0x6]
007fd763  MOV byte ptr [ECX + 0x6],DL
007fd766  MOV DL,byte ptr [EAX + 0x7]
007fd769  MOV byte ptr [ECX + 0x7],DL
007fd76c  MOV DL,byte ptr [EAX + 0x8]
007fd76f  MOV byte ptr [ECX + 0x8],DL
007fd772  MOV DL,byte ptr [EAX + 0x9]
007fd775  ADD EAX,dword ptr [EBP + 0x10]
007fd778  MOV byte ptr [ECX + 0x9],DL
007fd77b  ADD ECX,dword ptr [EBP + 0x14]
007fd77e  DEC ESI
007fd77f  JNZ 0x007fd732
007fd781  POP ESI
007fd782  POP EBP
007fd783  RET
