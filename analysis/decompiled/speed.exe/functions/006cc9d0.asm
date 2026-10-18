006cc9d0  PUSH EBP
006cc9d1  MOV EBP,ESP
006cc9d3  SUB ESP,0x28
006cc9d6  PUSH ESI
006cc9d7  PUSH EAX
006cc9d8  MOV EAX,0xcfcecdcc
006cc9dd  MOV EAX,0x6cc9dd
006cc9e2  MOV EAX,0x1
006cc9e7  MOV EAX,0x0
006cc9ec  MOV EAX,0xcfcecdcc
006cc9f1  POP EAX
006cc9f2  MOV EAX,dword ptr [EBP + 0x8]
006cc9f5  MOV ECX,dword ptr [EAX + 0x14]
006cc9f8  MOV dword ptr [EBP + -0x20],ECX
006cc9fb  MOV EDX,dword ptr [EBP + 0x8]
006cc9fe  MOV EAX,dword ptr [EDX + 0x18]
006cca01  MOV dword ptr [EBP + -0x1c],EAX
006cca04  MOV ECX,dword ptr [EBP + 0x8]
006cca07  MOV EDX,dword ptr [ECX + 0x1c]
006cca0a  MOV dword ptr [EBP + -0x18],EDX
006cca0d  MOV EAX,dword ptr [EBP + 0x8]
006cca10  MOV ECX,dword ptr [EAX + 0x20]
006cca13  MOV dword ptr [EBP + -0x14],ECX
006cca16  MOV EDX,dword ptr [EBP + 0x8]
006cca19  MOV EAX,dword ptr [EDX + 0x24]
006cca1c  MOV dword ptr [EBP + -0xc],EAX
006cca1f  MOV ECX,dword ptr [EBP + 0x8]
006cca22  MOV EDX,dword ptr [ECX + 0x28]
006cca25  MOV dword ptr [EBP + -0x4],EDX
006cca28  MOV EAX,dword ptr [EBP + 0x8]
006cca2b  MOV ECX,dword ptr [EAX + 0x2c]
006cca2e  MOV dword ptr [EBP + -0x28],ECX
006cca31  MOV EDX,dword ptr [EBP + 0x8]
006cca34  MOV EAX,dword ptr [EDX + 0x30]
006cca37  MOV dword ptr [EBP + -0x24],EAX
006cca3a  MOV ECX,dword ptr [EBP + 0x8]
006cca3d  MOV EDX,dword ptr [ECX + 0x34]
006cca40  MOV dword ptr [EBP + -0x8],EDX
006cca43  MOV EAX,dword ptr [EBP + 0xc]
006cca46  AND EAX,dword ptr [EBP + -0x20]
006cca49  MOV ECX,dword ptr [EBP + 0xc]
006cca4c  AND ECX,dword ptr [EBP + -0x20]
006cca4f  ADD ECX,dword ptr [EBP + -0x4]
006cca52  IMUL ECX,dword ptr [EBP + -0x28]
006cca56  XOR EAX,ECX
006cca58  MOV EDX,dword ptr [EBP + 0xc]
006cca5b  AND EDX,dword ptr [EBP + -0x20]
006cca5e  ADD EDX,dword ptr [EBP + -0x24]
006cca61  IMUL EDX,dword ptr [EBP + -0x8]
006cca65  XOR EAX,EDX
006cca67  MOV ECX,dword ptr [EBP + -0x20]
006cca6a  NOT ECX
006cca6c  AND EAX,ECX
006cca6e  XOR EAX,dword ptr [EBP + 0xc]
006cca71  MOV EDX,dword ptr [EBP + 0xc]
006cca74  AND EDX,dword ptr [EBP + -0x20]
006cca77  MOV ECX,dword ptr [EBP + 0xc]
006cca7a  AND ECX,dword ptr [EBP + -0x20]
006cca7d  ADD ECX,dword ptr [EBP + -0x4]
006cca80  IMUL ECX,dword ptr [EBP + -0x28]
006cca84  XOR EDX,ECX
006cca86  MOV ECX,dword ptr [EBP + 0xc]
006cca89  AND ECX,dword ptr [EBP + -0x20]
006cca8c  ADD ECX,dword ptr [EBP + -0x24]
006cca8f  IMUL ECX,dword ptr [EBP + -0x8]
006cca93  XOR EDX,ECX
006cca95  MOV ECX,dword ptr [EBP + -0x20]
006cca98  NOT ECX
006cca9a  AND EDX,ECX
006cca9c  XOR EDX,dword ptr [EBP + 0xc]
006cca9f  MOV ECX,dword ptr [EBP + -0x20]
006ccaa2  NOT ECX
006ccaa4  AND EDX,ECX
006ccaa6  MOV ECX,dword ptr [EBP + 0xc]
006ccaa9  AND ECX,dword ptr [EBP + -0x20]
006ccaac  MOV ESI,dword ptr [EBP + 0xc]
006ccaaf  AND ESI,dword ptr [EBP + -0x20]
006ccab2  ADD ESI,dword ptr [EBP + -0x4]
006ccab5  IMUL ESI,dword ptr [EBP + -0x28]
006ccab9  XOR ECX,ESI
006ccabb  MOV ESI,dword ptr [EBP + 0xc]
006ccabe  AND ESI,dword ptr [EBP + -0x20]
006ccac1  ADD ESI,dword ptr [EBP + -0x24]
006ccac4  IMUL ESI,dword ptr [EBP + -0x8]
006ccac8  XOR ECX,ESI
006ccaca  MOV ESI,dword ptr [EBP + -0x20]
006ccacd  NOT ESI
006ccacf  AND ECX,ESI
006ccad1  XOR ECX,dword ptr [EBP + 0xc]
006ccad4  MOV ESI,dword ptr [EBP + -0x20]
006ccad7  NOT ESI
006ccad9  AND ECX,ESI
006ccadb  ADD ECX,dword ptr [EBP + -0x18]
006ccade  IMUL ECX,dword ptr [EBP + -0x1c]
006ccae2  XOR EDX,ECX
006ccae4  MOV ECX,dword ptr [EBP + 0xc]
006ccae7  AND ECX,dword ptr [EBP + -0x20]
006ccaea  MOV ESI,dword ptr [EBP + 0xc]
006ccaed  AND ESI,dword ptr [EBP + -0x20]
006ccaf0  ADD ESI,dword ptr [EBP + -0x4]
006ccaf3  IMUL ESI,dword ptr [EBP + -0x28]
006ccaf7  XOR ECX,ESI
006ccaf9  MOV ESI,dword ptr [EBP + 0xc]
006ccafc  AND ESI,dword ptr [EBP + -0x20]
006ccaff  ADD ESI,dword ptr [EBP + -0x24]
006ccb02  IMUL ESI,dword ptr [EBP + -0x8]
006ccb06  XOR ECX,ESI
006ccb08  MOV ESI,dword ptr [EBP + -0x20]
006ccb0b  NOT ESI
006ccb0d  AND ECX,ESI
006ccb0f  XOR ECX,dword ptr [EBP + 0xc]
006ccb12  MOV ESI,dword ptr [EBP + -0x20]
006ccb15  NOT ESI
006ccb17  AND ECX,ESI
006ccb19  ADD ECX,dword ptr [EBP + -0xc]
006ccb1c  IMUL ECX,dword ptr [EBP + -0x14]
006ccb20  XOR EDX,ECX
006ccb22  AND EDX,dword ptr [EBP + -0x20]
006ccb25  XOR EAX,EDX
006ccb27  MOV dword ptr [EBP + -0x10],EAX
006ccb2a  PUSH EAX
006ccb2b  MOV EAX,0xcfcecdcc
006ccb30  MOV EAX,0x6cc9dd
006ccb35  MOV EAX,0x0
006ccb3a  MOV EAX,0x0
006ccb3f  MOV EAX,0xcecdcccb
006ccb44  POP EAX
006ccb45  MOV EAX,dword ptr [EBP + -0x10]
006ccb48  POP ESI
006ccb49  MOV ESP,EBP
006ccb4b  POP EBP
006ccb4c  RET
