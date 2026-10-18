00466a60  MOV ECX,dword ptr [ESP + 0x8]
00466a64  MOV EAX,dword ptr [ECX + 0xc]
00466a67  FLD float ptr [ECX + 0x4]
00466a6a  FLD float ptr [ECX + 0x8]
00466a6d  MOV EDX,dword ptr [ECX]
00466a6f  MOV dword ptr [ESP + 0x8],EAX
00466a73  FXCH
00466a75  MOV EAX,dword ptr [ESP + 0x4]
00466a79  FSTP float ptr [EAX + 0x4]
00466a7c  MOV dword ptr [EAX],EDX
00466a7e  MOV EDX,dword ptr [ESP + 0x8]
00466a82  FSTP float ptr [EAX + 0x8]
00466a85  MOV dword ptr [EAX + 0xc],EDX
00466a88  MOV EDX,dword ptr [ECX + 0x1c]
00466a8b  FLD float ptr [ECX + 0x14]
00466a8e  FLD float ptr [ECX + 0x18]
00466a91  MOV dword ptr [ESP + 0x8],EDX
00466a95  MOV EDX,dword ptr [ECX + 0x10]
00466a98  FXCH
00466a9a  FSTP float ptr [EAX + 0x14]
00466a9d  MOV dword ptr [EAX + 0x10],EDX
00466aa0  MOV EDX,dword ptr [ESP + 0x8]
00466aa4  FSTP float ptr [EAX + 0x18]
00466aa7  MOV dword ptr [EAX + 0x1c],EDX
00466aaa  FLD float ptr [ECX + 0x24]
00466aad  MOV EDX,dword ptr [ECX + 0x2c]
00466ab0  FLD float ptr [ECX + 0x28]
00466ab3  MOV ECX,dword ptr [ECX + 0x20]
00466ab6  MOV dword ptr [EAX + 0x20],ECX
00466ab9  FXCH
00466abb  MOV ECX,dword ptr [ESP + 0xc]
00466abf  FSTP float ptr [EAX + 0x24]
00466ac2  MOV dword ptr [EAX + 0x2c],EDX
00466ac5  FSTP float ptr [EAX + 0x28]
00466ac8  MOV dword ptr [ESP + 0x8],EDX
00466acc  FLD float ptr [ECX + 0x4]
00466acf  FLD float ptr [ECX + 0x8]
00466ad2  MOV ECX,dword ptr [ECX]
00466ad4  FXCH
00466ad6  MOV dword ptr [EAX + 0x30],ECX
00466ad9  FSTP float ptr [EAX + 0x34]
00466adc  MOV dword ptr [EAX + 0x3c],0x3f800000
00466ae3  FSTP float ptr [EAX + 0x38]
00466ae6  RET
