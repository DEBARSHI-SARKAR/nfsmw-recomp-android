007ee989  PUSH EBP
007ee98a  MOV EBP,ESP
007ee98c  PUSH EBX
007ee98d  PUSH ESI
007ee98e  MOV ESI,ECX
007ee990  MOV EAX,dword ptr [ESI + 0x14]
007ee993  MOV EDX,dword ptr [EAX + 0x4]
007ee996  PUSH EDI
007ee997  PUSH dword ptr [EDX + 0x8]
007ee99a  MOV EDX,dword ptr [EDX + 0xc]
007ee99d  PUSH dword ptr [EDX + 0x80]
007ee9a3  MOV EDI,dword ptr [EBP + 0x8]
007ee9a6  MOV ECX,dword ptr [EDI + 0x80]
007ee9ac  MOV EBX,dword ptr [ECX]
007ee9ae  PUSH 0x0
007ee9b0  PUSH dword ptr [ESI + 0x24]
007ee9b3  PUSH dword ptr [ESI + 0x20]
007ee9b6  PUSH dword ptr [EAX + 0x8]
007ee9b9  CALL dword ptr [EBX + 0x1c]
007ee9bc  MOV ECX,dword ptr [ESI + 0x14]
007ee9bf  MOV ECX,dword ptr [ECX + 0x4]
007ee9c2  MOV dword ptr [ECX + 0x18],EAX
007ee9c5  MOV dword ptr [ECX + 0x1c],EDX
007ee9c8  MOV ECX,dword ptr [EDI + 0x80]
007ee9ce  MOV EAX,dword ptr [ECX]
007ee9d0  MOV EBX,dword ptr [ESI + 0x28]
007ee9d3  CALL dword ptr [EAX + 0x34]
007ee9d6  TEST EAX,EAX
007ee9d8  JZ 0x007ee9e0
007ee9da  CMP EBX,EAX
007ee9dc  JBE 0x007ee9e0
007ee9de  MOV EBX,EAX
007ee9e0  MOV EAX,dword ptr [ESI + 0x14]
007ee9e3  MOV EDX,dword ptr [EAX + 0x4]
007ee9e6  PUSH dword ptr [EDX + 0x8]
007ee9e9  MOV EDX,dword ptr [EDX + 0xc]
007ee9ec  PUSH dword ptr [EDX + 0x80]
007ee9f2  MOV ECX,dword ptr [EDI + 0x80]
007ee9f8  MOV EDI,dword ptr [ECX]
007ee9fa  PUSH EBX
007ee9fb  PUSH dword ptr [ESI + 0x30]
007ee9fe  PUSH dword ptr [EAX + 0x8]
007eea01  CALL dword ptr [EDI + 0x14]
007eea04  XOR ECX,ECX
007eea06  SUB dword ptr [ESI + 0x28],EAX
007eea09  SBB dword ptr [ESI + 0x2c],ECX
007eea0c  ADD dword ptr [ESI + 0x20],EAX
007eea0f  ADC dword ptr [ESI + 0x24],ECX
007eea12  ADD dword ptr [ESI + 0x38],EAX
007eea15  ADC dword ptr [ESI + 0x3c],ECX
007eea18  ADD dword ptr [ESI + 0x30],EAX
007eea1b  CMP dword ptr [ESI + 0x2c],ECX
007eea1e  JL 0x007eea34
007eea20  JG 0x007eea27
007eea22  CMP dword ptr [ESI + 0x28],ECX
007eea25  JBE 0x007eea34
007eea27  CMP EAX,EBX
007eea29  JNZ 0x007eea34
007eea2b  MOV ECX,ESI
007eea2d  CALL 0x007ed884
007eea32  JMP 0x007eea38
007eea34  MOV byte ptr [ESI + 0x11],0x1
007eea38  POP EDI
007eea39  POP ESI
007eea3a  POP EBX
007eea3b  POP EBP
007eea3c  RET 0x4
