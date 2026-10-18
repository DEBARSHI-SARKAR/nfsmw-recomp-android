00413ab0  SUB ESP,0x34
00413ab3  PUSH ESI
00413ab4  MOV ESI,ECX
00413ab6  MOV ECX,dword ptr [ESI + 0x4c]
00413ab9  MOV EAX,dword ptr [ECX]
00413abb  CALL dword ptr [EAX + 0x20]
00413abe  MOV ECX,dword ptr [EAX]
00413ac0  MOV EDX,dword ptr [EAX + 0x4]
00413ac3  MOV EAX,dword ptr [EAX + 0x8]
00413ac6  MOV dword ptr [ESP + 0x14],ECX
00413aca  MOV ECX,dword ptr [ESI + 0x4c]
00413acd  MOV dword ptr [ESP + 0x1c],EAX
00413ad1  LEA EAX,[ESP + 0x2c]
00413ad5  MOV dword ptr [ESP + 0x18],EDX
00413ad9  MOV EDX,dword ptr [ECX]
00413adb  PUSH EAX
00413adc  CALL dword ptr [EDX + 0x34]
00413adf  MOV ECX,dword ptr [ESI + 0x4c]
00413ae2  MOV EDX,dword ptr [ECX]
00413ae4  CALL dword ptr [EDX + 0x24]
00413ae7  MOV ECX,dword ptr [EAX]
00413ae9  MOV EDX,dword ptr [EAX + 0x4]
00413aec  MOV EAX,dword ptr [EAX + 0x8]
00413aef  MOV dword ptr [ESP + 0x20],ECX
00413af3  MOV ECX,dword ptr [ESI + 0x48]
00413af6  MOV dword ptr [ESP + 0x24],EDX
00413afa  MOV EDX,dword ptr [ECX]
00413afc  MOV dword ptr [ESP + 0x28],EAX
00413b00  CALL dword ptr [EDX + 0x64]
00413b03  MOV ECX,dword ptr [EAX + 0x1c]
00413b06  TEST ECX,ECX
00413b08  POP ESI
00413b09  JZ 0x00413b1b
00413b0b  MOV EAX,ECX
00413b0d  MOV EDX,dword ptr [EAX]
00413b0f  CALL dword ptr [EDX + 0x54]
00413b12  MOV EDX,dword ptr [EAX]
00413b14  MOV ECX,EAX
00413b16  CALL dword ptr [EDX + 0x24]
00413b19  JMP 0x00413b20
00413b1b  MOV EAX,0x8a2fb4
00413b20  FLD float ptr [ESP + 0x20]
00413b24  MOV ECX,dword ptr [EAX]
00413b26  FMUL float ptr [ESP + 0x20]
00413b2a  MOV EDX,dword ptr [EAX + 0x4]
00413b2d  FLD float ptr [ESP + 0x24]
00413b31  MOV EAX,dword ptr [EAX + 0x8]
00413b34  FMUL float ptr [ESP + 0x24]
00413b38  PUSH ECX
00413b39  MOV dword ptr [ESP + 0x8],ECX
00413b3d  FADDP
00413b3f  FLD float ptr [ESP + 0x20]
00413b43  MOV dword ptr [ESP + 0xc],EDX
00413b47  FMUL float ptr [ESP + 0x20]
00413b4b  MOV dword ptr [ESP + 0x10],EAX
00413b4f  FADDP
00413b51  FSTP float ptr [ESP]
00413b54  CALL 0x005c5e80
00413b59  FSTP ST0
00413b5b  FLD float ptr [ESP + 0xc]
00413b5f  FMUL float ptr [ESP + 0xc]
00413b63  FLD float ptr [ESP + 0x10]
00413b67  FMUL float ptr [ESP + 0x10]
00413b6b  FADDP
00413b6d  FLD float ptr [ESP + 0x8]
00413b71  FMUL float ptr [ESP + 0x8]
00413b75  FADDP
00413b77  FSTP float ptr [ESP]
00413b7a  CALL 0x005c5e80
00413b7f  MOV ECX,dword ptr [ESP + 0x40]
00413b83  FST float ptr [ESP + 0x4]
00413b87  FCOMP float ptr [0x00890dc4]
00413b8d  MOV EDX,ECX
00413b8f  MOV EAX,dword ptr [EDX]
00413b91  MOV dword ptr [ESP + 0x20],EAX
00413b95  MOV EAX,dword ptr [EDX + 0x4]
00413b98  MOV EDX,dword ptr [EDX + 0x8]
00413b9b  MOV dword ptr [ESP + 0x24],EAX
00413b9f  FNSTSW AX
00413ba1  ADD ESP,0x4
00413ba4  TEST AH,0x41
00413ba7  MOV dword ptr [ESP + 0x24],EDX
00413bab  JNZ 0x00413c44
00413bb1  FLD float ptr [ECX]
00413bb3  FSUB float ptr [ESP + 0x10]
00413bb7  FLD float ptr [ECX + 0x4]
00413bba  FSUB float ptr [ESP + 0x14]
00413bbe  FLD float ptr [ECX + 0x8]
00413bc1  FSUB float ptr [ESP + 0x18]
00413bc5  FSTP float ptr [ESP + 0x30]
00413bc9  FLD float ptr [0x0089096c]
00413bcf  FDIV float ptr [ESP]
00413bd2  FLD float ptr [ESP + 0x8]
00413bd6  FMUL ST2
00413bd8  FLD float ptr [ESP + 0x30]
00413bdc  FMUL float ptr [ESP + 0xc]
00413be0  FADDP
00413be2  FLD ST3
00413be4  FMUL float ptr [ESP + 0x4]
00413be8  FADDP
00413bea  FMUL ST1
00413bec  FMUL ST1
00413bee  FMUL float ptr [0x0089107c]
00413bf4  FSTP float ptr [ESP + 0x3c]
00413bf8  FSTP ST0
00413bfa  FLD float ptr [ESP + 0x3c]
00413bfe  FMUL float ptr [ESP + 0x4]
00413c02  FADD ST0,ST2
00413c04  FSTP float ptr [ESP + 0x28]
00413c08  FLD float ptr [ESP + 0x8]
00413c0c  FMUL float ptr [ESP + 0x3c]
00413c10  FADD ST0,ST1
00413c12  FSTP ST2
00413c14  FSTP ST0
00413c16  FLD float ptr [ESP + 0xc]
00413c1a  FMUL float ptr [ESP + 0x3c]
00413c1e  FADD float ptr [ESP + 0x30]
00413c22  FLD float ptr [ESP + 0x28]
00413c26  FADD float ptr [ESP + 0x10]
00413c2a  FSTP float ptr [ESP + 0x1c]
00413c2e  FLD float ptr [ESP + 0x14]
00413c32  FADD ST0,ST2
00413c34  FSTP float ptr [ESP + 0x20]
00413c38  FLD float ptr [ESP + 0x18]
00413c3c  FADD ST0,ST1
00413c3e  FSTP ST2
00413c40  FSTP ST0
00413c42  JMP 0x00413c48
00413c44  FLD float ptr [ESP + 0x24]
00413c48  FLD float ptr [ESP + 0x4]
00413c4c  MOV EAX,dword ptr [ESP + 0x38]
00413c50  FADD float ptr [ESP + 0x1c]
00413c54  FLD float ptr [ESP + 0x8]
00413c58  FADD float ptr [ESP + 0x20]
00413c5c  FLD float ptr [ESP + 0xc]
00413c60  FADD ST0,ST3
00413c62  FSTP float ptr [ESP + 0x30]
00413c66  FXCH
00413c68  FSUB float ptr [ESP + 0x10]
00413c6c  FSTP float ptr [EAX]
00413c6e  FSUB float ptr [ESP + 0x14]
00413c72  FSTP float ptr [EAX + 0x4]
00413c75  FSTP ST0
00413c77  FLD float ptr [ESP + 0x30]
00413c7b  FSUB float ptr [ESP + 0x18]
00413c7f  FSTP float ptr [EAX + 0x8]
00413c82  ADD ESP,0x34
00413c85  RET 0xc
