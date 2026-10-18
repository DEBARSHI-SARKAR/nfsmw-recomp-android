005cacb0  SUB ESP,0x60
005cacb3  MOV EAX,dword ptr [ESP + 0x64]
005cacb7  MOV ECX,EAX
005cacb9  MOV EDX,dword ptr [ECX]
005cacbb  MOV dword ptr [ESP],EDX
005cacbe  MOV EDX,dword ptr [ECX + 0x4]
005cacc1  MOV dword ptr [ESP + 0x4],EDX
005cacc5  MOV EDX,dword ptr [ECX + 0x8]
005cacc8  MOV ECX,dword ptr [ECX + 0xc]
005caccb  MOV dword ptr [ESP + 0x8],EDX
005caccf  FLD float ptr [ESP + 0x8]
005cacd3  MOV dword ptr [ESP + 0xc],ECX
005cacd7  LEA EDX,[EAX + 0x10]
005cacda  MOV ECX,dword ptr [EDX]
005cacdc  MOV dword ptr [ESP + 0x10],ECX
005cace0  MOV ECX,dword ptr [EDX + 0x4]
005cace3  MOV dword ptr [ESP + 0x14],ECX
005cace7  MOV ECX,dword ptr [EDX + 0x8]
005cacea  MOV EDX,dword ptr [EDX + 0xc]
005caced  MOV dword ptr [ESP + 0x18],ECX
005cacf1  MOV dword ptr [ESP + 0x1c],EDX
005cacf5  ADD EAX,0x20
005cacf8  MOV ECX,dword ptr [EAX]
005cacfa  MOV EDX,dword ptr [EAX + 0x4]
005cacfd  MOV dword ptr [ESP + 0x40],ECX
005cad01  MOV ECX,dword ptr [EAX + 0x8]
005cad04  MOV dword ptr [ESP + 0x44],EDX
005cad08  MOV EDX,dword ptr [EAX + 0xc]
005cad0b  MOV EAX,dword ptr [ESP + 0x68]
005cad0f  MOV dword ptr [ESP + 0x48],ECX
005cad13  MOV dword ptr [ESP + 0x4c],EDX
005cad17  MOV ECX,EAX
005cad19  MOV EDX,dword ptr [ECX]
005cad1b  MOV dword ptr [ESP + 0x50],EDX
005cad1f  MOV EDX,dword ptr [ECX + 0x4]
005cad22  MOV dword ptr [ESP + 0x54],EDX
005cad26  MOV EDX,dword ptr [ECX + 0x8]
005cad29  MOV ECX,dword ptr [ECX + 0xc]
005cad2c  MOV dword ptr [ESP + 0x58],EDX
005cad30  LEA EDX,[EAX + 0x10]
005cad33  MOV dword ptr [ESP + 0x5c],ECX
005cad37  MOV ECX,dword ptr [EDX]
005cad39  MOV dword ptr [ESP + 0x30],ECX
005cad3d  MOV ECX,dword ptr [EDX + 0x4]
005cad40  MOV dword ptr [ESP + 0x34],ECX
005cad44  MOV ECX,dword ptr [EDX + 0x8]
005cad47  MOV EDX,dword ptr [EDX + 0xc]
005cad4a  ADD EAX,0x20
005cad4d  MOV dword ptr [ESP + 0x38],ECX
005cad51  MOV ECX,dword ptr [EAX]
005cad53  MOV dword ptr [ESP + 0x20],ECX
005cad57  FMUL float ptr [ESP + 0x20]
005cad5b  FLD float ptr [ESP + 0x4]
005cad5f  MOV dword ptr [ESP + 0x3c],EDX
005cad63  FMUL float ptr [ESP + 0x30]
005cad67  MOV EDX,dword ptr [EAX + 0x4]
005cad6a  MOV ECX,dword ptr [EAX + 0x8]
005cad6d  FADDP
005cad6f  FLD float ptr [ESP]
005cad72  MOV dword ptr [ESP + 0x24],EDX
005cad76  FMUL float ptr [ESP + 0x50]
005cad7a  MOV EDX,dword ptr [EAX + 0xc]
005cad7d  MOV EAX,dword ptr [ESP + 0x6c]
005cad81  MOV dword ptr [ESP + 0x28],ECX
005cad85  FADDP
005cad87  MOV dword ptr [ESP + 0x2c],EDX
005cad8b  FSTP float ptr [EAX]
005cad8d  FLD float ptr [ESP + 0x24]
005cad91  FMUL float ptr [ESP + 0x8]
005cad95  FLD float ptr [ESP + 0x34]
005cad99  FMUL float ptr [ESP + 0x4]
005cad9d  FADDP
005cad9f  FLD float ptr [ESP + 0x54]
005cada3  FMUL float ptr [ESP]
005cada6  FADDP
005cada8  FSTP float ptr [EAX + 0x4]
005cadab  FLD float ptr [ESP + 0x28]
005cadaf  FMUL float ptr [ESP + 0x8]
005cadb3  FLD float ptr [ESP + 0x38]
005cadb7  FMUL float ptr [ESP + 0x4]
005cadbb  FADDP
005cadbd  FLD float ptr [ESP + 0x58]
005cadc1  FMUL float ptr [ESP]
005cadc4  FADDP
005cadc6  FSTP float ptr [EAX + 0x8]
005cadc9  FLD float ptr [ESP + 0x18]
005cadcd  FMUL float ptr [ESP + 0x20]
005cadd1  FLD float ptr [ESP + 0x14]
005cadd5  FMUL float ptr [ESP + 0x30]
005cadd9  FADDP
005caddb  FLD float ptr [ESP + 0x10]
005caddf  FMUL float ptr [ESP + 0x50]
005cade3  FADDP
005cade5  FSTP float ptr [EAX + 0x10]
005cade8  FLD float ptr [ESP + 0x18]
005cadec  FMUL float ptr [ESP + 0x24]
005cadf0  FLD float ptr [ESP + 0x14]
005cadf4  FMUL float ptr [ESP + 0x34]
005cadf8  FADDP
005cadfa  FLD float ptr [ESP + 0x10]
005cadfe  FMUL float ptr [ESP + 0x54]
005cae02  FADDP
005cae04  FSTP float ptr [EAX + 0x14]
005cae07  FLD float ptr [ESP + 0x18]
005cae0b  FMUL float ptr [ESP + 0x28]
005cae0f  FLD float ptr [ESP + 0x14]
005cae13  FMUL float ptr [ESP + 0x38]
005cae17  FADDP
005cae19  FLD float ptr [ESP + 0x10]
005cae1d  FMUL float ptr [ESP + 0x58]
005cae21  FADDP
005cae23  FSTP float ptr [EAX + 0x18]
005cae26  FLD float ptr [ESP + 0x48]
005cae2a  FMUL float ptr [ESP + 0x20]
005cae2e  FLD float ptr [ESP + 0x44]
005cae32  FMUL float ptr [ESP + 0x30]
005cae36  FADDP
005cae38  FLD float ptr [ESP + 0x40]
005cae3c  FMUL float ptr [ESP + 0x50]
005cae40  FADDP
005cae42  FSTP float ptr [EAX + 0x20]
005cae45  FLD float ptr [ESP + 0x48]
005cae49  FMUL float ptr [ESP + 0x24]
005cae4d  FLD float ptr [ESP + 0x44]
005cae51  FMUL float ptr [ESP + 0x34]
005cae55  FADDP
005cae57  FLD float ptr [ESP + 0x40]
005cae5b  FMUL float ptr [ESP + 0x54]
005cae5f  FADDP
005cae61  FSTP float ptr [EAX + 0x24]
005cae64  FLD float ptr [ESP + 0x48]
005cae68  FMUL float ptr [ESP + 0x28]
005cae6c  FLD float ptr [ESP + 0x44]
005cae70  FMUL float ptr [ESP + 0x38]
005cae74  FADDP
005cae76  FLD float ptr [ESP + 0x40]
005cae7a  FMUL float ptr [ESP + 0x58]
005cae7e  FADDP
005cae80  XOR ECX,ECX
005cae82  FSTP float ptr [EAX + 0x28]
005cae85  MOV dword ptr [EAX + 0x2c],ECX
005cae88  MOV dword ptr [EAX + 0x1c],ECX
005cae8b  MOV dword ptr [EAX + 0xc],ECX
005cae8e  ADD ESP,0x60
005cae91  RET
