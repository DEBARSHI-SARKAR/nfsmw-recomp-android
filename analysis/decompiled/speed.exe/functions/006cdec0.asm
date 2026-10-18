006cdec0  PUSH EBP
006cdec1  MOV EBP,ESP
006cdec3  SUB ESP,0x28
006cdec6  PUSH ESI
006cdec7  PUSH EAX
006cdec8  MOV EAX,0xcfcecdcc
006cdecd  MOV EAX,0x6cdecd
006cded2  MOV EAX,0x1
006cded7  MOV EAX,0x0
006cdedc  MOV EAX,0xcfcecdcc
006cdee1  POP EAX
006cdee2  MOV EAX,dword ptr [EBP + 0x8]
006cdee5  MOV ECX,dword ptr [EAX + 0x14]
006cdee8  MOV dword ptr [EBP + -0x20],ECX
006cdeeb  MOV EDX,dword ptr [EBP + 0x8]
006cdeee  MOV EAX,dword ptr [EDX + 0x18]
006cdef1  MOV dword ptr [EBP + -0x1c],EAX
006cdef4  MOV ECX,dword ptr [EBP + 0x8]
006cdef7  MOV EDX,dword ptr [ECX + 0x1c]
006cdefa  MOV dword ptr [EBP + -0x18],EDX
006cdefd  MOV EAX,dword ptr [EBP + 0x8]
006cdf00  MOV ECX,dword ptr [EAX + 0x20]
006cdf03  MOV dword ptr [EBP + -0x14],ECX
006cdf06  MOV EDX,dword ptr [EBP + 0x8]
006cdf09  MOV EAX,dword ptr [EDX + 0x24]
006cdf0c  MOV dword ptr [EBP + -0xc],EAX
006cdf0f  MOV ECX,dword ptr [EBP + 0x8]
006cdf12  MOV EDX,dword ptr [ECX + 0x28]
006cdf15  MOV dword ptr [EBP + -0x4],EDX
006cdf18  MOV EAX,dword ptr [EBP + 0x8]
006cdf1b  MOV ECX,dword ptr [EAX + 0x2c]
006cdf1e  MOV dword ptr [EBP + -0x28],ECX
006cdf21  MOV EDX,dword ptr [EBP + 0x8]
006cdf24  MOV EAX,dword ptr [EDX + 0x30]
006cdf27  MOV dword ptr [EBP + -0x24],EAX
006cdf2a  MOV ECX,dword ptr [EBP + 0x8]
006cdf2d  MOV EDX,dword ptr [ECX + 0x34]
006cdf30  MOV dword ptr [EBP + -0x8],EDX
006cdf33  MOV EAX,dword ptr [EBP + -0x20]
006cdf36  NOT EAX
006cdf38  AND EAX,dword ptr [EBP + 0xc]
006cdf3b  MOV ECX,dword ptr [EBP + -0x20]
006cdf3e  NOT ECX
006cdf40  AND ECX,dword ptr [EBP + 0xc]
006cdf43  ADD ECX,dword ptr [EBP + -0x18]
006cdf46  IMUL ECX,dword ptr [EBP + -0x1c]
006cdf4a  XOR EAX,ECX
006cdf4c  MOV EDX,dword ptr [EBP + -0x20]
006cdf4f  NOT EDX
006cdf51  AND EDX,dword ptr [EBP + 0xc]
006cdf54  ADD EDX,dword ptr [EBP + -0xc]
006cdf57  IMUL EDX,dword ptr [EBP + -0x14]
006cdf5b  XOR EAX,EDX
006cdf5d  AND EAX,dword ptr [EBP + -0x20]
006cdf60  XOR EAX,dword ptr [EBP + 0xc]
006cdf63  MOV ECX,dword ptr [EBP + -0x20]
006cdf66  NOT ECX
006cdf68  AND ECX,dword ptr [EBP + 0xc]
006cdf6b  MOV EDX,dword ptr [EBP + -0x20]
006cdf6e  NOT EDX
006cdf70  AND EDX,dword ptr [EBP + 0xc]
006cdf73  ADD EDX,dword ptr [EBP + -0x18]
006cdf76  IMUL EDX,dword ptr [EBP + -0x1c]
006cdf7a  XOR ECX,EDX
006cdf7c  MOV EDX,dword ptr [EBP + -0x20]
006cdf7f  NOT EDX
006cdf81  AND EDX,dword ptr [EBP + 0xc]
006cdf84  ADD EDX,dword ptr [EBP + -0xc]
006cdf87  IMUL EDX,dword ptr [EBP + -0x14]
006cdf8b  XOR ECX,EDX
006cdf8d  AND ECX,dword ptr [EBP + -0x20]
006cdf90  XOR ECX,dword ptr [EBP + 0xc]
006cdf93  AND ECX,dword ptr [EBP + -0x20]
006cdf96  MOV EDX,dword ptr [EBP + -0x20]
006cdf99  NOT EDX
006cdf9b  AND EDX,dword ptr [EBP + 0xc]
006cdf9e  MOV ESI,dword ptr [EBP + -0x20]
006cdfa1  NOT ESI
006cdfa3  AND ESI,dword ptr [EBP + 0xc]
006cdfa6  ADD ESI,dword ptr [EBP + -0x18]
006cdfa9  IMUL ESI,dword ptr [EBP + -0x1c]
006cdfad  XOR EDX,ESI
006cdfaf  MOV ESI,dword ptr [EBP + -0x20]
006cdfb2  NOT ESI
006cdfb4  AND ESI,dword ptr [EBP + 0xc]
006cdfb7  ADD ESI,dword ptr [EBP + -0xc]
006cdfba  IMUL ESI,dword ptr [EBP + -0x14]
006cdfbe  XOR EDX,ESI
006cdfc0  AND EDX,dword ptr [EBP + -0x20]
006cdfc3  XOR EDX,dword ptr [EBP + 0xc]
006cdfc6  AND EDX,dword ptr [EBP + -0x20]
006cdfc9  ADD EDX,dword ptr [EBP + -0x4]
006cdfcc  IMUL EDX,dword ptr [EBP + -0x28]
006cdfd0  XOR ECX,EDX
006cdfd2  MOV EDX,dword ptr [EBP + -0x20]
006cdfd5  NOT EDX
006cdfd7  AND EDX,dword ptr [EBP + 0xc]
006cdfda  MOV ESI,dword ptr [EBP + -0x20]
006cdfdd  NOT ESI
006cdfdf  AND ESI,dword ptr [EBP + 0xc]
006cdfe2  ADD ESI,dword ptr [EBP + -0x18]
006cdfe5  IMUL ESI,dword ptr [EBP + -0x1c]
006cdfe9  XOR EDX,ESI
006cdfeb  MOV ESI,dword ptr [EBP + -0x20]
006cdfee  NOT ESI
006cdff0  AND ESI,dword ptr [EBP + 0xc]
006cdff3  ADD ESI,dword ptr [EBP + -0xc]
006cdff6  IMUL ESI,dword ptr [EBP + -0x14]
006cdffa  XOR EDX,ESI
006cdffc  AND EDX,dword ptr [EBP + -0x20]
006cdfff  XOR EDX,dword ptr [EBP + 0xc]
006ce002  AND EDX,dword ptr [EBP + -0x20]
006ce005  ADD EDX,dword ptr [EBP + -0x24]
006ce008  IMUL EDX,dword ptr [EBP + -0x8]
006ce00c  XOR ECX,EDX
006ce00e  MOV EDX,dword ptr [EBP + -0x20]
006ce011  NOT EDX
006ce013  AND ECX,EDX
006ce015  XOR EAX,ECX
006ce017  MOV dword ptr [EBP + -0x10],EAX
006ce01a  PUSH EAX
006ce01b  MOV EAX,0xcfcecdcc
006ce020  MOV EAX,0x6cdecd
006ce025  MOV EAX,0x0
006ce02a  MOV EAX,0x0
006ce02f  MOV EAX,0xcecdcccb
006ce034  POP EAX
006ce035  MOV EAX,dword ptr [EBP + -0x10]
006ce038  POP ESI
006ce039  MOV ESP,EBP
006ce03b  POP EBP
006ce03c  RET
