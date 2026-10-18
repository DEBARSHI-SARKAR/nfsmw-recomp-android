006bca40  SUB ESP,0xc
006bca43  MOV ECX,dword ptr [ESP + 0x18]
006bca47  MOV EAX,dword ptr [ESP + 0x14]
006bca4b  FLD float ptr [ECX + 0x8]
006bca4e  FMUL float ptr [EAX + 0x4]
006bca51  FLD float ptr [EAX + 0x8]
006bca54  FMUL float ptr [ECX + 0x4]
006bca57  FSUBP
006bca59  FSTP float ptr [ESP]
006bca5c  MOV EDX,dword ptr [ESP]
006bca5f  FLD float ptr [EAX + 0x8]
006bca62  FMUL float ptr [ECX]
006bca64  FLD float ptr [ECX + 0x8]
006bca67  FMUL float ptr [EAX]
006bca69  FSUBP
006bca6b  FSTP float ptr [ESP + 0x4]
006bca6f  FLD float ptr [EAX]
006bca71  FMUL float ptr [ECX + 0x4]
006bca74  FLD float ptr [ECX]
006bca76  FMUL float ptr [EAX + 0x4]
006bca79  MOV EAX,dword ptr [ESP + 0x10]
006bca7d  MOV ECX,EAX
006bca7f  MOV dword ptr [ECX],EDX
006bca81  MOV EDX,dword ptr [ESP + 0x4]
006bca85  FSUBP
006bca87  MOV dword ptr [ECX + 0x4],EDX
006bca8a  FSTP float ptr [ESP + 0x8]
006bca8e  MOV EDX,dword ptr [ESP + 0x8]
006bca92  MOV dword ptr [ECX + 0x8],EDX
006bca95  ADD ESP,0xc
006bca98  RET
