006cdca0  PUSH EBP
006cdca1  MOV EBP,ESP
006cdca3  SUB ESP,0x28
006cdca6  PUSH ESI
006cdca7  PUSH EAX
006cdca8  MOV EAX,0xcfcecdcc
006cdcad  MOV EAX,0x6cdcad
006cdcb2  MOV EAX,0x1
006cdcb7  MOV EAX,0x0
006cdcbc  MOV EAX,0xcfcecdcc
006cdcc1  POP EAX
006cdcc2  MOV EAX,dword ptr [EBP + 0x8]
006cdcc5  MOV ECX,dword ptr [EAX + 0x14]
006cdcc8  MOV dword ptr [EBP + -0x20],ECX
006cdccb  MOV EDX,dword ptr [EBP + 0x8]
006cdcce  MOV EAX,dword ptr [EDX + 0x18]
006cdcd1  MOV dword ptr [EBP + -0x1c],EAX
006cdcd4  MOV ECX,dword ptr [EBP + 0x8]
006cdcd7  MOV EDX,dword ptr [ECX + 0x1c]
006cdcda  MOV dword ptr [EBP + -0x18],EDX
006cdcdd  MOV EAX,dword ptr [EBP + 0x8]
006cdce0  MOV ECX,dword ptr [EAX + 0x20]
006cdce3  MOV dword ptr [EBP + -0x14],ECX
006cdce6  MOV EDX,dword ptr [EBP + 0x8]
006cdce9  MOV EAX,dword ptr [EDX + 0x24]
006cdcec  MOV dword ptr [EBP + -0xc],EAX
006cdcef  MOV ECX,dword ptr [EBP + 0x8]
006cdcf2  MOV EDX,dword ptr [ECX + 0x28]
006cdcf5  MOV dword ptr [EBP + -0x4],EDX
006cdcf8  MOV EAX,dword ptr [EBP + 0x8]
006cdcfb  MOV ECX,dword ptr [EAX + 0x2c]
006cdcfe  MOV dword ptr [EBP + -0x28],ECX
006cdd01  MOV EDX,dword ptr [EBP + 0x8]
006cdd04  MOV EAX,dword ptr [EDX + 0x30]
006cdd07  MOV dword ptr [EBP + -0x24],EAX
006cdd0a  MOV ECX,dword ptr [EBP + 0x8]
006cdd0d  MOV EDX,dword ptr [ECX + 0x34]
006cdd10  MOV dword ptr [EBP + -0x8],EDX
006cdd13  MOV EAX,dword ptr [EBP + 0xc]
006cdd16  AND EAX,dword ptr [EBP + -0x20]
006cdd19  MOV ECX,dword ptr [EBP + 0xc]
006cdd1c  AND ECX,dword ptr [EBP + -0x20]
006cdd1f  ADD ECX,dword ptr [EBP + -0x4]
006cdd22  IMUL ECX,dword ptr [EBP + -0x28]
006cdd26  XOR EAX,ECX
006cdd28  MOV EDX,dword ptr [EBP + 0xc]
006cdd2b  AND EDX,dword ptr [EBP + -0x20]
006cdd2e  ADD EDX,dword ptr [EBP + -0x24]
006cdd31  IMUL EDX,dword ptr [EBP + -0x8]
006cdd35  XOR EAX,EDX
006cdd37  MOV ECX,dword ptr [EBP + -0x20]
006cdd3a  NOT ECX
006cdd3c  AND EAX,ECX
006cdd3e  XOR EAX,dword ptr [EBP + 0xc]
006cdd41  MOV EDX,dword ptr [EBP + 0xc]
006cdd44  AND EDX,dword ptr [EBP + -0x20]
006cdd47  MOV ECX,dword ptr [EBP + 0xc]
006cdd4a  AND ECX,dword ptr [EBP + -0x20]
006cdd4d  ADD ECX,dword ptr [EBP + -0x4]
006cdd50  IMUL ECX,dword ptr [EBP + -0x28]
006cdd54  XOR EDX,ECX
006cdd56  MOV ECX,dword ptr [EBP + 0xc]
006cdd59  AND ECX,dword ptr [EBP + -0x20]
006cdd5c  ADD ECX,dword ptr [EBP + -0x24]
006cdd5f  IMUL ECX,dword ptr [EBP + -0x8]
006cdd63  XOR EDX,ECX
006cdd65  MOV ECX,dword ptr [EBP + -0x20]
006cdd68  NOT ECX
006cdd6a  AND EDX,ECX
006cdd6c  XOR EDX,dword ptr [EBP + 0xc]
006cdd6f  MOV ECX,dword ptr [EBP + -0x20]
006cdd72  NOT ECX
006cdd74  AND EDX,ECX
006cdd76  MOV ECX,dword ptr [EBP + 0xc]
006cdd79  AND ECX,dword ptr [EBP + -0x20]
006cdd7c  MOV ESI,dword ptr [EBP + 0xc]
006cdd7f  AND ESI,dword ptr [EBP + -0x20]
006cdd82  ADD ESI,dword ptr [EBP + -0x4]
006cdd85  IMUL ESI,dword ptr [EBP + -0x28]
006cdd89  XOR ECX,ESI
006cdd8b  MOV ESI,dword ptr [EBP + 0xc]
006cdd8e  AND ESI,dword ptr [EBP + -0x20]
006cdd91  ADD ESI,dword ptr [EBP + -0x24]
006cdd94  IMUL ESI,dword ptr [EBP + -0x8]
006cdd98  XOR ECX,ESI
006cdd9a  MOV ESI,dword ptr [EBP + -0x20]
006cdd9d  NOT ESI
006cdd9f  AND ECX,ESI
006cdda1  XOR ECX,dword ptr [EBP + 0xc]
006cdda4  MOV ESI,dword ptr [EBP + -0x20]
006cdda7  NOT ESI
006cdda9  AND ECX,ESI
006cddab  ADD ECX,dword ptr [EBP + -0x18]
006cddae  IMUL ECX,dword ptr [EBP + -0x1c]
006cddb2  XOR EDX,ECX
006cddb4  MOV ECX,dword ptr [EBP + 0xc]
006cddb7  AND ECX,dword ptr [EBP + -0x20]
006cddba  MOV ESI,dword ptr [EBP + 0xc]
006cddbd  AND ESI,dword ptr [EBP + -0x20]
006cddc0  ADD ESI,dword ptr [EBP + -0x4]
006cddc3  IMUL ESI,dword ptr [EBP + -0x28]
006cddc7  XOR ECX,ESI
006cddc9  MOV ESI,dword ptr [EBP + 0xc]
006cddcc  AND ESI,dword ptr [EBP + -0x20]
006cddcf  ADD ESI,dword ptr [EBP + -0x24]
006cddd2  IMUL ESI,dword ptr [EBP + -0x8]
006cddd6  XOR ECX,ESI
006cddd8  MOV ESI,dword ptr [EBP + -0x20]
006cdddb  NOT ESI
006cdddd  AND ECX,ESI
006cdddf  XOR ECX,dword ptr [EBP + 0xc]
006cdde2  MOV ESI,dword ptr [EBP + -0x20]
006cdde5  NOT ESI
006cdde7  AND ECX,ESI
006cdde9  ADD ECX,dword ptr [EBP + -0xc]
006cddec  IMUL ECX,dword ptr [EBP + -0x14]
006cddf0  XOR EDX,ECX
006cddf2  AND EDX,dword ptr [EBP + -0x20]
006cddf5  XOR EAX,EDX
006cddf7  MOV dword ptr [EBP + -0x10],EAX
006cddfa  PUSH EAX
006cddfb  MOV EAX,0xcfcecdcc
006cde00  MOV EAX,0x6cdcad
006cde05  MOV EAX,0x0
006cde0a  MOV EAX,0x0
006cde0f  MOV EAX,0xcecdcccb
006cde14  POP EAX
006cde15  MOV EAX,dword ptr [EBP + -0x10]
006cde18  POP ESI
006cde19  MOV ESP,EBP
006cde1b  POP EBP
006cde1c  RET
