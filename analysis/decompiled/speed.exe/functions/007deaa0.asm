007deaa0  PUSH EBP
007deaa1  MOV EBP,ESP
007deaa3  SUB ESP,0xc
007deaa6  MOV EAX,dword ptr [EBP + 0x8]
007deaa9  MOV dword ptr [EBP + -0x4],EAX
007deaac  MOV ECX,dword ptr [EBP + 0x10]
007deaaf  MOV EDX,dword ptr [ECX + 0xc]
007deab2  MOV dword ptr [EBP + -0x8],EDX
007deab5  MOV EAX,dword ptr [EBP + -0x4]
007deab8  MOV byte ptr [EAX],0x30
007deabb  MOV ECX,dword ptr [EBP + -0x4]
007deabe  ADD ECX,0x1
007deac1  MOV dword ptr [EBP + -0x4],ECX
007deac4  CMP dword ptr [EBP + 0xc],0x0
007deac8  JLE 0x007deb0b
007deaca  MOV EDX,dword ptr [EBP + -0x8]
007deacd  MOVSX EAX,byte ptr [EDX]
007dead0  TEST EAX,EAX
007dead2  JZ 0x007deae8
007dead4  MOV ECX,dword ptr [EBP + -0x8]
007dead7  MOVSX EDX,byte ptr [ECX]
007deada  MOV dword ptr [EBP + -0xc],EDX
007deadd  MOV EAX,dword ptr [EBP + -0x8]
007deae0  ADD EAX,0x1
007deae3  MOV dword ptr [EBP + -0x8],EAX
007deae6  JMP 0x007deaef
007deae8  MOV dword ptr [EBP + -0xc],0x30
007deaef  MOV ECX,dword ptr [EBP + -0x4]
007deaf2  MOV DL,byte ptr [EBP + -0xc]
007deaf5  MOV byte ptr [ECX],DL
007deaf7  MOV EAX,dword ptr [EBP + -0x4]
007deafa  ADD EAX,0x1
007deafd  MOV dword ptr [EBP + -0x4],EAX
007deb00  MOV ECX,dword ptr [EBP + 0xc]
007deb03  SUB ECX,0x1
007deb06  MOV dword ptr [EBP + 0xc],ECX
007deb09  JMP 0x007deac4
007deb0b  MOV EDX,dword ptr [EBP + -0x4]
007deb0e  MOV byte ptr [EDX],0x0
007deb11  CMP dword ptr [EBP + 0xc],0x0
007deb15  JL 0x007deb55
007deb17  MOV EAX,dword ptr [EBP + -0x8]
007deb1a  MOVSX ECX,byte ptr [EAX]
007deb1d  CMP ECX,0x35
007deb20  JL 0x007deb55
007deb22  MOV EDX,dword ptr [EBP + -0x4]
007deb25  SUB EDX,0x1
007deb28  MOV dword ptr [EBP + -0x4],EDX
007deb2b  MOV EAX,dword ptr [EBP + -0x4]
007deb2e  MOVSX ECX,byte ptr [EAX]
007deb31  CMP ECX,0x39
007deb34  JNZ 0x007deb47
007deb36  MOV EDX,dword ptr [EBP + -0x4]
007deb39  MOV byte ptr [EDX],0x30
007deb3c  MOV EAX,dword ptr [EBP + -0x4]
007deb3f  SUB EAX,0x1
007deb42  MOV dword ptr [EBP + -0x4],EAX
007deb45  JMP 0x007deb2b
007deb47  MOV ECX,dword ptr [EBP + -0x4]
007deb4a  MOVSX EDX,byte ptr [ECX]
007deb4d  ADD EDX,0x1
007deb50  MOV EAX,dword ptr [EBP + -0x4]
007deb53  MOV byte ptr [EAX],DL
007deb55  MOV ECX,dword ptr [EBP + 0x8]
007deb58  MOVSX EDX,byte ptr [ECX]
007deb5b  CMP EDX,0x31
007deb5e  JNZ 0x007deb71
007deb60  MOV EAX,dword ptr [EBP + 0x10]
007deb63  MOV ECX,dword ptr [EAX + 0x4]
007deb66  ADD ECX,0x1
007deb69  MOV EDX,dword ptr [EBP + 0x10]
007deb6c  MOV dword ptr [EDX + 0x4],ECX
007deb6f  JMP 0x007deb97
007deb71  MOV EAX,dword ptr [EBP + 0x8]
007deb74  ADD EAX,0x1
007deb77  PUSH EAX
007deb78  CALL 0x007d0cd0
007deb7d  ADD ESP,0x4
007deb80  ADD EAX,0x1
007deb83  PUSH EAX
007deb84  MOV ECX,dword ptr [EBP + 0x8]
007deb87  ADD ECX,0x1
007deb8a  PUSH ECX
007deb8b  MOV EDX,dword ptr [EBP + 0x8]
007deb8e  PUSH EDX
007deb8f  CALL 0x007c4840
007deb94  ADD ESP,0xc
007deb97  MOV ESP,EBP
007deb99  POP EBP
007deb9a  RET
