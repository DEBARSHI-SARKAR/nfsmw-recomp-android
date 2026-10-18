006ccce0  PUSH EBP
006ccce1  MOV EBP,ESP
006ccce3  SUB ESP,0x28
006ccce6  PUSH ESI
006ccce7  PUSH EAX
006ccce8  MOV EAX,0xcfcecdcc
006ccced  MOV EAX,0x6ccced
006cccf2  MOV EAX,0x1
006cccf7  MOV EAX,0x0
006cccfc  MOV EAX,0xcfcecdcc
006ccd01  POP EAX
006ccd02  MOV EAX,dword ptr [EBP + 0x8]
006ccd05  MOV ECX,dword ptr [EAX + 0x14]
006ccd08  MOV dword ptr [EBP + -0x20],ECX
006ccd0b  MOV EDX,dword ptr [EBP + 0x8]
006ccd0e  MOV EAX,dword ptr [EDX + 0x18]
006ccd11  MOV dword ptr [EBP + -0x1c],EAX
006ccd14  MOV ECX,dword ptr [EBP + 0x8]
006ccd17  MOV EDX,dword ptr [ECX + 0x1c]
006ccd1a  MOV dword ptr [EBP + -0x18],EDX
006ccd1d  MOV EAX,dword ptr [EBP + 0x8]
006ccd20  MOV ECX,dword ptr [EAX + 0x20]
006ccd23  MOV dword ptr [EBP + -0x14],ECX
006ccd26  MOV EDX,dword ptr [EBP + 0x8]
006ccd29  MOV EAX,dword ptr [EDX + 0x24]
006ccd2c  MOV dword ptr [EBP + -0xc],EAX
006ccd2f  MOV ECX,dword ptr [EBP + 0x8]
006ccd32  MOV EDX,dword ptr [ECX + 0x28]
006ccd35  MOV dword ptr [EBP + -0x4],EDX
006ccd38  MOV EAX,dword ptr [EBP + 0x8]
006ccd3b  MOV ECX,dword ptr [EAX + 0x2c]
006ccd3e  MOV dword ptr [EBP + -0x28],ECX
006ccd41  MOV EDX,dword ptr [EBP + 0x8]
006ccd44  MOV EAX,dword ptr [EDX + 0x30]
006ccd47  MOV dword ptr [EBP + -0x24],EAX
006ccd4a  MOV ECX,dword ptr [EBP + 0x8]
006ccd4d  MOV EDX,dword ptr [ECX + 0x34]
006ccd50  MOV dword ptr [EBP + -0x8],EDX
006ccd53  MOV EAX,dword ptr [EBP + 0xc]
006ccd56  AND EAX,dword ptr [EBP + -0x20]
006ccd59  MOV ECX,dword ptr [EBP + 0xc]
006ccd5c  AND ECX,dword ptr [EBP + -0x20]
006ccd5f  ADD ECX,dword ptr [EBP + -0x4]
006ccd62  IMUL ECX,dword ptr [EBP + -0x28]
006ccd66  XOR EAX,ECX
006ccd68  MOV EDX,dword ptr [EBP + 0xc]
006ccd6b  AND EDX,dword ptr [EBP + -0x20]
006ccd6e  ADD EDX,dword ptr [EBP + -0x24]
006ccd71  IMUL EDX,dword ptr [EBP + -0x8]
006ccd75  XOR EAX,EDX
006ccd77  MOV ECX,dword ptr [EBP + -0x20]
006ccd7a  NOT ECX
006ccd7c  AND EAX,ECX
006ccd7e  XOR EAX,dword ptr [EBP + 0xc]
006ccd81  MOV EDX,dword ptr [EBP + 0xc]
006ccd84  AND EDX,dword ptr [EBP + -0x20]
006ccd87  MOV ECX,dword ptr [EBP + 0xc]
006ccd8a  AND ECX,dword ptr [EBP + -0x20]
006ccd8d  ADD ECX,dword ptr [EBP + -0x4]
006ccd90  IMUL ECX,dword ptr [EBP + -0x28]
006ccd94  XOR EDX,ECX
006ccd96  MOV ECX,dword ptr [EBP + 0xc]
006ccd99  AND ECX,dword ptr [EBP + -0x20]
006ccd9c  ADD ECX,dword ptr [EBP + -0x24]
006ccd9f  IMUL ECX,dword ptr [EBP + -0x8]
006ccda3  XOR EDX,ECX
006ccda5  MOV ECX,dword ptr [EBP + -0x20]
006ccda8  NOT ECX
006ccdaa  AND EDX,ECX
006ccdac  XOR EDX,dword ptr [EBP + 0xc]
006ccdaf  MOV ECX,dword ptr [EBP + -0x20]
006ccdb2  NOT ECX
006ccdb4  AND EDX,ECX
006ccdb6  MOV ECX,dword ptr [EBP + 0xc]
006ccdb9  AND ECX,dword ptr [EBP + -0x20]
006ccdbc  MOV ESI,dword ptr [EBP + 0xc]
006ccdbf  AND ESI,dword ptr [EBP + -0x20]
006ccdc2  ADD ESI,dword ptr [EBP + -0x4]
006ccdc5  IMUL ESI,dword ptr [EBP + -0x28]
006ccdc9  XOR ECX,ESI
006ccdcb  MOV ESI,dword ptr [EBP + 0xc]
006ccdce  AND ESI,dword ptr [EBP + -0x20]
006ccdd1  ADD ESI,dword ptr [EBP + -0x24]
006ccdd4  IMUL ESI,dword ptr [EBP + -0x8]
006ccdd8  XOR ECX,ESI
006ccdda  MOV ESI,dword ptr [EBP + -0x20]
006ccddd  NOT ESI
006ccddf  AND ECX,ESI
006ccde1  XOR ECX,dword ptr [EBP + 0xc]
006ccde4  MOV ESI,dword ptr [EBP + -0x20]
006ccde7  NOT ESI
006ccde9  AND ECX,ESI
006ccdeb  ADD ECX,dword ptr [EBP + -0x18]
006ccdee  IMUL ECX,dword ptr [EBP + -0x1c]
006ccdf2  XOR EDX,ECX
006ccdf4  MOV ECX,dword ptr [EBP + 0xc]
006ccdf7  AND ECX,dword ptr [EBP + -0x20]
006ccdfa  MOV ESI,dword ptr [EBP + 0xc]
006ccdfd  AND ESI,dword ptr [EBP + -0x20]
006cce00  ADD ESI,dword ptr [EBP + -0x4]
006cce03  IMUL ESI,dword ptr [EBP + -0x28]
006cce07  XOR ECX,ESI
006cce09  MOV ESI,dword ptr [EBP + 0xc]
006cce0c  AND ESI,dword ptr [EBP + -0x20]
006cce0f  ADD ESI,dword ptr [EBP + -0x24]
006cce12  IMUL ESI,dword ptr [EBP + -0x8]
006cce16  XOR ECX,ESI
006cce18  MOV ESI,dword ptr [EBP + -0x20]
006cce1b  NOT ESI
006cce1d  AND ECX,ESI
006cce1f  XOR ECX,dword ptr [EBP + 0xc]
006cce22  MOV ESI,dword ptr [EBP + -0x20]
006cce25  NOT ESI
006cce27  AND ECX,ESI
006cce29  ADD ECX,dword ptr [EBP + -0xc]
006cce2c  IMUL ECX,dword ptr [EBP + -0x14]
006cce30  XOR EDX,ECX
006cce32  AND EDX,dword ptr [EBP + -0x20]
006cce35  XOR EAX,EDX
006cce37  MOV dword ptr [EBP + -0x10],EAX
006cce3a  PUSH EAX
006cce3b  MOV EAX,0xcfcecdcc
006cce40  MOV EAX,0x6ccced
006cce45  MOV EAX,0x0
006cce4a  MOV EAX,0x0
006cce4f  MOV EAX,0xcecdcccb
006cce54  POP EAX
006cce55  MOV EAX,dword ptr [EBP + -0x10]
006cce58  POP ESI
006cce59  MOV ESP,EBP
006cce5b  POP EBP
006cce5c  RET
