006c6880  XOR EAX,EAX
006c6882  MOV [0x00982cb4],EAX
006c6887  MOV [0x00982cb8],EAX
006c688c  MOV [0x00982cbc],EAX
006c6891  MOV [0x00982cc0],EAX
006c6896  MOV [0x00982cc4],EAX
006c689b  RET
006cfce0  MOV EAX,[0x00982bdc]
006cfce5  MOV ECX,dword ptr [EAX]
006cfce7  PUSH ESI
006cfce8  PUSH 0x1
006cfcea  PUSH 0x7
006cfcec  PUSH EAX
006cfced  CALL dword ptr [ECX + 0xe4]
006cfcf3  MOV EAX,[0x00982bdc]
006cfcf8  MOV EDX,dword ptr [EAX]
006cfcfa  PUSH 0x1
006cfcfc  PUSH 0xe
006cfcfe  PUSH EAX
006cfcff  CALL dword ptr [EDX + 0xe4]
006cfd05  MOV EAX,[0x00982bdc]
006cfd0a  MOV ECX,dword ptr [EAX]
006cfd0c  PUSH 0x4
006cfd0e  PUSH 0x17
006cfd10  PUSH EAX
006cfd11  CALL dword ptr [ECX + 0xe4]
006cfd17  MOV EAX,[0x00982bdc]
006cfd1c  MOV EDX,dword ptr [EAX]
006cfd1e  PUSH 0x5
006cfd20  PUSH 0x19
006cfd22  PUSH EAX
006cfd23  CALL dword ptr [EDX + 0xe4]
006cfd29  MOV EAX,[0x00982bdc]
006cfd2e  MOV ECX,dword ptr [EAX]
006cfd30  PUSH 0x1
006cfd32  PUSH 0x1d
006cfd34  PUSH EAX
006cfd35  CALL dword ptr [ECX + 0xe4]
006cfd3b  MOV EAX,[0x00982bdc]
006cfd40  MOV EDX,dword ptr [EAX]
006cfd42  PUSH 0x0
006cfd44  PUSH 0x89
006cfd49  PUSH EAX
006cfd4a  CALL dword ptr [EDX + 0xe4]
006cfd50  MOV EAX,[0x00982bdc]
006cfd55  MOV ECX,dword ptr [EAX]
006cfd57  PUSH 0x0
006cfd59  PUSH 0x1c
006cfd5b  PUSH EAX
006cfd5c  CALL dword ptr [ECX + 0xe4]
006cfd62  MOV EAX,[0x00982bdc]
006cfd67  MOV EDX,dword ptr [EAX]
006cfd69  PUSH 0xf
006cfd6b  PUSH 0xa8
006cfd70  PUSH EAX
006cfd71  MOV dword ptr [0x008fae6c],0x2
006cfd7b  CALL dword ptr [EDX + 0xe4]
006cfd81  MOV EAX,[0x0093d9ac]
006cfd86  XOR ESI,ESI
006cfd88  TEST EAX,EAX
006cfd8a  JBE 0x006cfe72
006cfd90  PUSH EBX
006cfd91  MOV EBX,0x102b
006cfd96  MOV EAX,[0x00901818]
006cfd9b  CMP EAX,0x1
006cfd9e  JLE 0x006cfdc1
006cfda0  CMP EAX,0x2
006cfda3  JNZ 0x006cfdc1
006cfda5  MOV EAX,[0x0093d958]
006cfdaa  TEST AH,0x4
006cfdad  JZ 0x006cfdc1
006cfdaf  MOV EDX,dword ptr [0x0093d898]
006cfdb5  XOR EAX,EAX
006cfdb7  CMP EDX,EBX
006cfdb9  SETNZ AL
006cfdbc  ADD EAX,0x2
006cfdbf  JMP 0x006cfdc6
006cfdc1  MOV EAX,0x2
006cfdc6  MOV ECX,dword ptr [0x00982bdc]
006cfdcc  MOV EDX,dword ptr [ECX]
006cfdce  PUSH EAX
006cfdcf  PUSH 0x6
006cfdd1  PUSH ESI
006cfdd2  PUSH ECX
006cfdd3  CALL dword ptr [EDX + 0x114]
006cfdd9  MOV EAX,[0x00901818]
006cfdde  CMP EAX,0x1
006cfde1  JLE 0x006cfe06
006cfde3  CMP EAX,0x2
006cfde6  JNZ 0x006cfe06
006cfde8  TEST dword ptr [0x0093d958],0x4000000
006cfdf2  JZ 0x006cfe06
006cfdf4  MOV EDX,dword ptr [0x0093d898]
006cfdfa  XOR ECX,ECX
006cfdfc  CMP EDX,EBX
006cfdfe  SETNZ CL
006cfe01  ADD ECX,0x2
006cfe04  JMP 0x006cfe0b
006cfe06  MOV ECX,0x2
006cfe0b  MOV EAX,[0x00982bdc]
006cfe10  MOV EDX,dword ptr [EAX]
006cfe12  PUSH ECX
006cfe13  PUSH 0x5
006cfe15  PUSH ESI
006cfe16  PUSH EAX
006cfe17  CALL dword ptr [EDX + 0x114]
006cfe1d  MOV EDX,dword ptr [0x00901818]
006cfe23  MOV ECX,dword ptr [0x00982bdc]
006cfe29  XOR EAX,EAX
006cfe2b  TEST EDX,EDX
006cfe2d  MOV EDX,dword ptr [ECX]
006cfe2f  SETNZ AL
006cfe32  INC EAX
006cfe33  PUSH EAX
006cfe34  PUSH 0x7
006cfe36  PUSH ESI
006cfe37  PUSH ECX
006cfe38  CALL dword ptr [EDX + 0x114]
006cfe3e  CMP dword ptr [0x00901818],0x2
006cfe45  MOV EAX,[0x00982bdc]
006cfe4a  MOV ECX,dword ptr [EAX]
006cfe4c  JNZ 0x006cfe57
006cfe4e  MOV EDX,dword ptr [0x0093d984]
006cfe54  PUSH EDX
006cfe55  JMP 0x006cfe59
006cfe57  PUSH 0x1
006cfe59  PUSH 0xa
006cfe5b  PUSH ESI
006cfe5c  PUSH EAX
006cfe5d  CALL dword ptr [ECX + 0x114]
006cfe63  MOV EAX,[0x0093d9ac]
006cfe68  INC ESI
006cfe69  CMP ESI,EAX
006cfe6b  JC 0x006cfd96
006cfe71  POP EBX
006cfe72  MOV EAX,[0x008f921c]
006cfe77  TEST EAX,EAX
006cfe79  JZ 0x006cfe9b
006cfe7b  MOV EAX,[0x00901808]
006cfe80  TEST EAX,EAX
006cfe82  JLE 0x006cfe9b
006cfe84  MOV EAX,[0x00982bdc]
006cfe89  MOV EDX,dword ptr [EAX]
006cfe8b  PUSH 0x1
006cfe8d  PUSH 0xa1
006cfe92  PUSH EAX
006cfe93  CALL dword ptr [EDX + 0xe4]
006cfe99  JMP 0x006cfeb0
006cfe9b  MOV EAX,[0x00982bdc]
006cfea0  MOV ECX,dword ptr [EAX]
006cfea2  PUSH 0x0
006cfea4  PUSH 0xa1
006cfea9  PUSH EAX
006cfeaa  CALL dword ptr [ECX + 0xe4]
006cfeb0  MOV EAX,[0x0093d9ac]
006cfeb5  XOR ESI,ESI
006cfeb7  TEST EAX,EAX
006cfeb9  JBE 0x006cff15
006cfebb  JMP 0x006cfec0
006cfec0  MOV EAX,[0x00982bdc]
006cfec5  MOV EDX,dword ptr [EAX]
006cfec7  PUSH 0x1
006cfec9  PUSH 0x1
006cfecb  PUSH ESI
006cfecc  PUSH EAX
006cfecd  CALL dword ptr [EDX + 0x10c]
006cfed3  MOV EAX,[0x00982bdc]
006cfed8  MOV ECX,dword ptr [EAX]
006cfeda  PUSH 0x1
006cfedc  PUSH 0x4
006cfede  PUSH ESI
006cfedf  PUSH EAX
006cfee0  CALL dword ptr [ECX + 0x10c]
006cfee6  MOV EAX,[0x00982bdc]
006cfeeb  MOV EDX,dword ptr [EAX]
006cfeed  PUSH 0x0
006cfeef  PUSH 0x18
006cfef1  PUSH ESI
006cfef2  PUSH EAX
006cfef3  CALL dword ptr [EDX + 0x10c]
006cfef9  MOV EAX,[0x00982bdc]
006cfefe  MOV ECX,dword ptr [EAX]
006cff00  PUSH ESI
006cff01  PUSH 0xb
006cff03  PUSH ESI
006cff04  PUSH EAX
006cff05  CALL dword ptr [ECX + 0x10c]
006cff0b  MOV EAX,[0x0093d9ac]
006cff10  INC ESI
006cff11  CMP ESI,EAX
006cff13  JC 0x006cfec0
006cff15  MOV ECX,dword ptr [0x0093de78]
006cff1b  MOV EAX,dword ptr [ECX + 0x48]
006cff1e  MOV ECX,dword ptr [ECX + 0x44]
006cff21  MOV ECX,dword ptr [ECX + 0x18c]
006cff27  MOV EDX,dword ptr [EAX]
006cff29  PUSH 0x7
006cff2b  PUSH ECX
006cff2c  PUSH EAX
006cff2d  CALL dword ptr [EDX + 0x68]
006cff30  POP ESI
006cff31  JMP 0x006c6880
