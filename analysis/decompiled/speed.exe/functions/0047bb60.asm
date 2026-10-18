0047bb60  SUB ESP,0x50
0047bb63  MOV EAX,dword ptr [ESP + 0x54]
0047bb67  MOV ECX,dword ptr [EAX + 0x10]
0047bb6a  FLD float ptr [EAX + 0x1c]
0047bb6d  MOV EDX,dword ptr [EAX + 0x14]
0047bb70  FLD float ptr [EAX + 0x20]
0047bb73  FLD float ptr [EAX + 0x24]
0047bb76  MOV dword ptr [ESP + 0x10],ECX
0047bb7a  MOV ECX,dword ptr [EAX + 0x18]
0047bb7d  FLD float ptr [EAX + 0x28]
0047bb80  FLD float ptr [ESP + 0x10]
0047bb84  MOV dword ptr [ESP + 0x14],EDX
0047bb88  FMUL float ptr [0x00890da8]
0047bb8e  MOV EDX,dword ptr [EAX + 0x2c]
0047bb91  FLD float ptr [ESP + 0x14]
0047bb95  MOV dword ptr [ESP + 0x18],ECX
0047bb99  FMUL float ptr [0x00890da8]
0047bb9f  MOV ECX,dword ptr [EAX]
0047bba1  FLD float ptr [ESP + 0x18]
0047bba5  MOV dword ptr [ESP + 0x2c],EDX
0047bba9  MOV EDX,dword ptr [EAX + 0x4]
0047bbac  FMUL float ptr [0x00890da8]
0047bbb2  MOV dword ptr [ESP + 0x34],EDX
0047bbb6  FXCH
0047bbb8  MOV EDX,dword ptr [EAX + 0xc]
0047bbbb  FCHS
0047bbbd  MOV dword ptr [ESP + 0x30],ECX
0047bbc1  FSTP float ptr [ESP]
0047bbc4  MOV ECX,dword ptr [EAX + 0x8]
0047bbc7  MOV dword ptr [ESP + 0x38],ECX
0047bbcb  FSTP float ptr [ESP + 0x4]
0047bbcf  MOV ECX,dword ptr [EAX + 0x30]
0047bbd2  MOV dword ptr [ESP + 0x3c],EDX
0047bbd6  FSTP float ptr [ESP + 0x8]
0047bbda  MOV EDX,dword ptr [EAX + 0x34]
0047bbdd  FXCH ST3
0047bbdf  MOV dword ptr [ESP + 0x40],ECX
0047bbe3  FSTP float ptr [ESP + 0xc]
0047bbe7  MOV ECX,dword ptr [EAX + 0x38]
0047bbea  MOV dword ptr [ESP + 0x44],EDX
0047bbee  FCHS
0047bbf0  MOV EDX,dword ptr [EAX + 0x3c]
0047bbf3  MOV EAX,dword ptr [ESP + 0x58]
0047bbf7  MOV dword ptr [ESP + 0x48],ECX
0047bbfb  MOV dword ptr [ESP + 0x4c],EDX
0047bbff  MOV EDX,dword ptr [ESP]
0047bc02  FSTP float ptr [ESP]
0047bc05  MOV ECX,EAX
0047bc07  FXCH
0047bc09  MOV dword ptr [ECX],EDX
0047bc0b  MOV EDX,dword ptr [ESP + 0x4]
0047bc0f  FSTP float ptr [ESP + 0x4]
0047bc13  MOV dword ptr [ECX + 0x4],EDX
0047bc16  MOV EDX,dword ptr [ESP + 0x8]
0047bc1a  FSTP float ptr [ESP + 0x8]
0047bc1e  MOV dword ptr [ECX + 0x8],EDX
0047bc21  FLD float ptr [ESP + 0x34]
0047bc25  MOV EDX,dword ptr [ESP + 0xc]
0047bc29  FCHS
0047bc2b  MOV dword ptr [ECX + 0xc],EDX
0047bc2e  MOV ECX,dword ptr [ESP + 0x2c]
0047bc32  MOV dword ptr [ESP + 0xc],ECX
0047bc36  MOV ECX,dword ptr [ESP]
0047bc39  FSTP float ptr [ESP]
0047bc3c  LEA EDX,[EAX + 0x10]
0047bc3f  MOV dword ptr [EDX],ECX
0047bc41  MOV ECX,dword ptr [ESP + 0x4]
0047bc45  MOV dword ptr [EDX + 0x4],ECX
0047bc48  MOV ECX,dword ptr [ESP + 0x8]
0047bc4c  MOV dword ptr [EDX + 0x8],ECX
0047bc4f  MOV ECX,dword ptr [ESP + 0xc]
0047bc53  MOV dword ptr [EDX + 0xc],ECX
0047bc56  MOV EDX,dword ptr [ESP + 0x38]
0047bc5a  MOV ECX,dword ptr [ESP + 0x30]
0047bc5e  MOV dword ptr [ESP + 0x4],EDX
0047bc62  MOV EDX,dword ptr [ESP + 0x3c]
0047bc66  MOV dword ptr [ESP + 0x8],ECX
0047bc6a  MOV dword ptr [ESP + 0xc],EDX
0047bc6e  MOV EDX,dword ptr [ESP]
0047bc71  LEA ECX,[EAX + 0x20]
0047bc74  MOV dword ptr [ECX],EDX
0047bc76  MOV EDX,dword ptr [ESP + 0x4]
0047bc7a  FLD float ptr [ESP + 0x44]
0047bc7e  MOV dword ptr [ECX + 0x4],EDX
0047bc81  MOV EDX,dword ptr [ESP + 0x8]
0047bc85  FCHS
0047bc87  MOV dword ptr [ECX + 0x8],EDX
0047bc8a  FSTP float ptr [ESP]
0047bc8d  MOV EDX,dword ptr [ESP + 0xc]
0047bc91  MOV dword ptr [ECX + 0xc],EDX
0047bc94  MOV ECX,dword ptr [ESP + 0x48]
0047bc98  MOV EDX,dword ptr [ESP + 0x40]
0047bc9c  MOV dword ptr [ESP + 0x4],ECX
0047bca0  MOV ECX,dword ptr [ESP + 0x4c]
0047bca4  MOV dword ptr [ESP + 0x8],EDX
0047bca8  MOV EDX,dword ptr [ESP]
0047bcab  ADD EAX,0x30
0047bcae  MOV dword ptr [EAX],EDX
0047bcb0  MOV EDX,dword ptr [ESP + 0x8]
0047bcb4  MOV dword ptr [ESP + 0xc],ECX
0047bcb8  MOV ECX,dword ptr [ESP + 0x4]
0047bcbc  MOV dword ptr [EAX + 0x4],ECX
0047bcbf  MOV ECX,dword ptr [ESP + 0xc]
0047bcc3  MOV dword ptr [EAX + 0x8],EDX
0047bcc6  MOV dword ptr [EAX + 0xc],ECX
0047bcc9  ADD ESP,0x50
0047bccc  RET
