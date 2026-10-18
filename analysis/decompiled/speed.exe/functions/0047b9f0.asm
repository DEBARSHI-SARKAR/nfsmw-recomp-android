0047b9f0  SUB ESP,0x50
0047b9f3  MOV EAX,dword ptr [ESP + 0x54]
0047b9f7  MOV ECX,dword ptr [EAX + 0x10]
0047b9fa  FLD float ptr [EAX + 0x1c]
0047b9fd  MOV EDX,dword ptr [EAX + 0x14]
0047ba00  FLD float ptr [EAX + 0x20]
0047ba03  FLD float ptr [EAX + 0x24]
0047ba06  MOV dword ptr [ESP + 0x10],ECX
0047ba0a  MOV ECX,dword ptr [EAX + 0x18]
0047ba0d  FLD float ptr [EAX + 0x28]
0047ba10  FLD float ptr [ESP + 0x10]
0047ba14  MOV dword ptr [ESP + 0x14],EDX
0047ba18  FMUL float ptr [0x00890da8]
0047ba1e  MOV EDX,dword ptr [EAX + 0x2c]
0047ba21  FLD float ptr [ESP + 0x14]
0047ba25  MOV dword ptr [ESP + 0x18],ECX
0047ba29  FMUL float ptr [0x00890da8]
0047ba2f  MOV ECX,dword ptr [EAX]
0047ba31  FLD float ptr [ESP + 0x18]
0047ba35  MOV dword ptr [ESP + 0x2c],EDX
0047ba39  MOV EDX,dword ptr [EAX + 0x4]
0047ba3c  FMUL float ptr [0x00890da8]
0047ba42  MOV dword ptr [ESP + 0x34],EDX
0047ba46  FXCH
0047ba48  MOV EDX,dword ptr [EAX + 0xc]
0047ba4b  FCHS
0047ba4d  MOV dword ptr [ESP + 0x30],ECX
0047ba51  FSTP float ptr [ESP]
0047ba54  MOV ECX,dword ptr [EAX + 0x8]
0047ba57  MOV dword ptr [ESP + 0x38],ECX
0047ba5b  FSTP float ptr [ESP + 0x4]
0047ba5f  MOV ECX,dword ptr [EAX + 0x30]
0047ba62  MOV dword ptr [ESP + 0x3c],EDX
0047ba66  FSTP float ptr [ESP + 0x8]
0047ba6a  MOV EDX,dword ptr [EAX + 0x34]
0047ba6d  FXCH ST3
0047ba6f  MOV dword ptr [ESP + 0x40],ECX
0047ba73  FSTP float ptr [ESP + 0xc]
0047ba77  MOV ECX,dword ptr [EAX + 0x38]
0047ba7a  MOV dword ptr [ESP + 0x44],EDX
0047ba7e  FCHS
0047ba80  MOV EDX,dword ptr [EAX + 0x3c]
0047ba83  MOV EAX,dword ptr [ESP + 0x58]
0047ba87  MOV dword ptr [ESP + 0x48],ECX
0047ba8b  MOV dword ptr [ESP + 0x4c],EDX
0047ba8f  MOV EDX,dword ptr [ESP]
0047ba92  FSTP float ptr [ESP]
0047ba95  MOV ECX,EAX
0047ba97  FXCH
0047ba99  MOV dword ptr [ECX],EDX
0047ba9b  MOV EDX,dword ptr [ESP + 0x4]
0047ba9f  FSTP float ptr [ESP + 0x4]
0047baa3  MOV dword ptr [ECX + 0x4],EDX
0047baa6  MOV EDX,dword ptr [ESP + 0x8]
0047baaa  FSTP float ptr [ESP + 0x8]
0047baae  MOV dword ptr [ECX + 0x8],EDX
0047bab1  FLD float ptr [ESP + 0x34]
0047bab5  MOV EDX,dword ptr [ESP + 0xc]
0047bab9  FCHS
0047babb  MOV dword ptr [ECX + 0xc],EDX
0047babe  MOV ECX,dword ptr [ESP + 0x2c]
0047bac2  MOV dword ptr [ESP + 0xc],ECX
0047bac6  MOV ECX,dword ptr [ESP]
0047bac9  FSTP float ptr [ESP]
0047bacc  LEA EDX,[EAX + 0x10]
0047bacf  MOV dword ptr [EDX],ECX
0047bad1  MOV ECX,dword ptr [ESP + 0x4]
0047bad5  MOV dword ptr [EDX + 0x4],ECX
0047bad8  MOV ECX,dword ptr [ESP + 0x8]
0047badc  MOV dword ptr [EDX + 0x8],ECX
0047badf  MOV ECX,dword ptr [ESP + 0xc]
0047bae3  MOV dword ptr [EDX + 0xc],ECX
0047bae6  MOV EDX,dword ptr [ESP + 0x38]
0047baea  MOV ECX,dword ptr [ESP + 0x30]
0047baee  MOV dword ptr [ESP + 0x4],EDX
0047baf2  MOV EDX,dword ptr [ESP + 0x3c]
0047baf6  MOV dword ptr [ESP + 0x8],ECX
0047bafa  MOV dword ptr [ESP + 0xc],EDX
0047bafe  MOV EDX,dword ptr [ESP]
0047bb01  LEA ECX,[EAX + 0x20]
0047bb04  MOV dword ptr [ECX],EDX
0047bb06  MOV EDX,dword ptr [ESP + 0x4]
0047bb0a  FLD float ptr [ESP + 0x44]
0047bb0e  MOV dword ptr [ECX + 0x4],EDX
0047bb11  MOV EDX,dword ptr [ESP + 0x8]
0047bb15  FCHS
0047bb17  MOV dword ptr [ECX + 0x8],EDX
0047bb1a  FSTP float ptr [ESP]
0047bb1d  MOV EDX,dword ptr [ESP + 0xc]
0047bb21  MOV dword ptr [ECX + 0xc],EDX
0047bb24  MOV ECX,dword ptr [ESP + 0x48]
0047bb28  MOV EDX,dword ptr [ESP + 0x40]
0047bb2c  MOV dword ptr [ESP + 0x4],ECX
0047bb30  MOV ECX,dword ptr [ESP + 0x4c]
0047bb34  MOV dword ptr [ESP + 0x8],EDX
0047bb38  MOV EDX,dword ptr [ESP]
0047bb3b  ADD EAX,0x30
0047bb3e  MOV dword ptr [EAX],EDX
0047bb40  MOV EDX,dword ptr [ESP + 0x8]
0047bb44  MOV dword ptr [ESP + 0xc],ECX
0047bb48  MOV ECX,dword ptr [ESP + 0x4]
0047bb4c  MOV dword ptr [EAX + 0x4],ECX
0047bb4f  MOV ECX,dword ptr [ESP + 0xc]
0047bb53  MOV dword ptr [EAX + 0x8],EDX
0047bb56  MOV dword ptr [EAX + 0xc],ECX
0047bb59  ADD ESP,0x50
0047bb5c  RET
