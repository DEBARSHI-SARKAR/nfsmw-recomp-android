007fef9c  PUSH EBP
007fef9d  MOV EBP,ESP
007fef9f  SUB ESP,0xc
007fefa2  MOV ECX,dword ptr [EBP + 0x8]
007fefa5  MOV AL,byte ptr [ECX]
007fefa7  MOV EDX,dword ptr [EBP + 0x20]
007fefaa  AND dword ptr [EBP + -0x8],0x0
007fefae  AND dword ptr [EBP + -0xc],0x0
007fefb2  PUSH ESI
007fefb3  MOV ESI,dword ptr [EBP + 0x1c]
007fefb6  IMUL ESI,dword ptr [EBP + 0x24]
007fefba  MOV byte ptr [EBP + 0xb],AL
007fefbd  MOV EAX,dword ptr [EBP + 0xc]
007fefc0  PUSH EDI
007fefc1  ADD ECX,EAX
007fefc3  MOV AL,byte ptr [ECX]
007fefc5  MOV EDI,EDX
007fefc7  SHR EDI,0x1
007fefc9  TEST ESI,ESI
007fefcb  MOV byte ptr [EBP + -0x1],AL
007fefce  JBE 0x007ff027
007fefd0  PUSH EBX
007fefd1  MOVZX EBX,byte ptr [EBP + -0x1]
007fefd5  IMUL EBX,dword ptr [EBP + -0x8]
007fefd9  MOVZX EAX,byte ptr [EBP + 0xb]
007fefdd  IMUL EAX,EDX
007fefe0  ADD EBX,EDI
007fefe2  ADD EAX,EBX
007fefe4  XOR EDX,EDX
007fefe6  DIV dword ptr [EBP + 0x20]
007fefe9  MOV EDX,dword ptr [EBP + 0x18]
007fefec  MOV EBX,dword ptr [EBP + -0xc]
007fefef  MOV byte ptr [EBX + EDX*0x1],AL
007feff2  MOV EAX,dword ptr [EBP + -0x8]
007feff5  ADD EAX,dword ptr [EBP + 0x10]
007feff8  MOV EDX,dword ptr [EBP + 0x20]
007feffb  CMP EAX,EDX
007feffd  MOV dword ptr [EBP + -0x8],EAX
007ff000  JBE 0x007ff019
007ff002  MOV AL,byte ptr [ECX]
007ff004  SUB dword ptr [EBP + -0x8],EDX
007ff007  MOV byte ptr [EBP + 0xb],AL
007ff00a  MOV EAX,dword ptr [EBP + 0xc]
007ff00d  ADD ECX,EAX
007ff00f  CMP dword ptr [EBP + -0x8],EDX
007ff012  MOV AL,byte ptr [ECX]
007ff014  MOV byte ptr [EBP + -0x1],AL
007ff017  JA 0x007ff002
007ff019  ADD EBX,dword ptr [EBP + 0x1c]
007ff01c  SUB EDX,dword ptr [EBP + -0x8]
007ff01f  CMP EBX,ESI
007ff021  MOV dword ptr [EBP + -0xc],EBX
007ff024  JC 0x007fefd1
007ff026  POP EBX
007ff027  POP EDI
007ff028  POP ESI
007ff029  LEAVE
007ff02a  RET
