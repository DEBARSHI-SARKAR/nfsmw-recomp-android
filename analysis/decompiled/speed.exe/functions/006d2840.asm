006d2840  SUB ESP,0x13c
006d2846  PUSH EBX
006d2847  PUSH EBP
006d2848  PUSH ESI
006d2849  MOV ESI,dword ptr [ESP + 0x14c]
006d2850  MOV EAX,dword ptr [ESI]
006d2852  PUSH EDI
006d2853  LEA ECX,[ESP + 0x12c]
006d285a  PUSH ECX
006d285b  PUSH ESI
006d285c  CALL dword ptr [EAX + 0x30]
006d285f  MOV EAX,[0x00982bdc]
006d2864  MOV EDX,dword ptr [EAX]
006d2866  PUSH ESI
006d2867  XOR EBP,EBP
006d2869  PUSH EBP
006d286a  PUSH EAX
006d286b  CALL dword ptr [EDX + 0x94]
006d2871  MOV EAX,[0x00982bdc]
006d2876  MOV ECX,dword ptr [EAX]
006d2878  PUSH EBP
006d2879  PUSH EAX
006d287a  CALL dword ptr [ECX + 0x9c]
006d2880  OR EAX,0xffffffff
006d2883  MOV dword ptr [ESP + 0x34],EAX
006d2887  MOV dword ptr [ESP + 0x64],EAX
006d288b  MOV dword ptr [ESP + 0x94],EAX
006d2892  MOV dword ptr [ESP + 0xc4],EAX
006d2899  MOV EAX,dword ptr [ESP + 0x160]
006d28a0  FLD float ptr [EAX]
006d28a2  MOV dword ptr [ESP + 0x28],0xbf800000
006d28aa  FMUL float ptr [0x00890968]
006d28b0  MOV dword ptr [ESP + 0x2c],0x3f800000
006d28b8  MOV dword ptr [ESP + 0x30],EBP
006d28bc  MOV dword ptr [ESP + 0x58],0x3f800000
006d28c4  FST float ptr [ESP + 0x38]
006d28c8  MOV dword ptr [ESP + 0x5c],0x3f800000
006d28d0  FLD float ptr [EAX + 0x4]
006d28d3  MOV dword ptr [ESP + 0x60],EBP
006d28d7  FMUL float ptr [0x00890968]
006d28dd  MOV dword ptr [ESP + 0x88],0x3f800000
006d28e8  MOV dword ptr [ESP + 0x8c],0xbf800000
006d28f3  MOV dword ptr [ESP + 0x90],EBP
006d28fa  FST float ptr [ESP + 0x3c]
006d28fe  MOV dword ptr [ESP + 0xb8],0xbf800000
006d2909  FLD float ptr [EAX + 0x8]
006d290c  MOV dword ptr [ESP + 0xbc],0xbf800000
006d2917  FMUL float ptr [0x00890968]
006d291d  MOV dword ptr [ESP + 0xc0],EBP
006d2924  FSUBR float ptr [0x0089096c]
006d292a  FST float ptr [ESP + 0x68]
006d292e  FXCH
006d2930  FSTP float ptr [ESP + 0x6c]
006d2934  FSTP float ptr [ESP + 0x98]
006d293b  FLD float ptr [EAX + 0xc]
006d293e  FMUL float ptr [0x00890968]
006d2944  FSUBR float ptr [0x0089096c]
006d294a  FST float ptr [ESP + 0x9c]
006d2951  FXCH
006d2953  FSTP float ptr [ESP + 0xc8]
006d295a  FSTP float ptr [ESP + 0xcc]
006d2961  FLD float ptr [EAX]
006d2963  FCHS
006d2965  FST float ptr [ESP + 0x40]
006d2969  FLD float ptr [EAX + 0x4]
006d296c  FCHS
006d296e  FST float ptr [ESP + 0x44]
006d2972  FLD float ptr [0x0089096c]
006d2978  FSUB float ptr [EAX + 0x8]
006d297b  FST float ptr [ESP + 0x70]
006d297f  FXCH
006d2981  FSTP float ptr [ESP + 0x74]
006d2985  FSTP float ptr [ESP + 0xa0]
006d298c  FLD float ptr [0x0089096c]
006d2992  FSUB float ptr [EAX + 0xc]
006d2995  FST float ptr [ESP + 0xa4]
006d299c  FXCH
006d299e  FSTP float ptr [ESP + 0xd0]
006d29a5  FSTP float ptr [ESP + 0xd4]
006d29ac  FLD float ptr [EAX]
006d29ae  FMUL float ptr [0x00890e94]
006d29b4  FST float ptr [ESP + 0x48]
006d29b8  FLD float ptr [EAX + 0x4]
006d29bb  MOV ESI,dword ptr [0x0093dea4]
006d29c1  FMUL float ptr [0x00890e94]
006d29c7  MOV ECX,ESI
006d29c9  FST float ptr [ESP + 0x4c]
006d29cd  FLD float ptr [EAX + 0x8]
006d29d0  FADD ST0,ST0
006d29d2  FSUBR float ptr [0x0089096c]
006d29d8  FST float ptr [ESP + 0x78]
006d29dc  FXCH
006d29de  FSTP float ptr [ESP + 0x7c]
006d29e2  FSTP float ptr [ESP + 0xa8]
006d29e9  FLD float ptr [EAX + 0xc]
006d29ec  FADD ST0,ST0
006d29ee  FSUBR float ptr [0x0089096c]
006d29f4  FST float ptr [ESP + 0xac]
006d29fb  FXCH
006d29fd  FSTP float ptr [ESP + 0xd8]
006d2a04  FSTP float ptr [ESP + 0xdc]
006d2a0b  FLD float ptr [EAX]
006d2a0d  FMUL float ptr [0x008af9f0]
006d2a13  FST float ptr [ESP + 0x50]
006d2a17  FLD float ptr [EAX + 0x4]
006d2a1a  FMUL float ptr [0x008af9f0]
006d2a20  FST float ptr [ESP + 0x54]
006d2a24  FLD float ptr [EAX + 0x8]
006d2a27  FMUL float ptr [0x008959e4]
006d2a2d  FSUBR float ptr [0x0089096c]
006d2a33  FST float ptr [ESP + 0x80]
006d2a3a  FXCH
006d2a3c  FSTP float ptr [ESP + 0x84]
006d2a43  FSTP float ptr [ESP + 0xb0]
006d2a4a  FLD float ptr [EAX + 0xc]
006d2a4d  MOV dword ptr [0x00982c80],ESI
006d2a53  FMUL float ptr [0x008959e4]
006d2a59  FSUBR float ptr [0x0089096c]
006d2a5f  FST float ptr [ESP + 0xb4]
006d2a66  FXCH
006d2a68  FSTP float ptr [ESP + 0xe0]
006d2a6f  FSTP float ptr [ESP + 0xe4]
006d2a76  MOV EDX,dword ptr [ESI]
006d2a78  CALL dword ptr [EDX + 0x4]
006d2a7b  MOV EDX,dword ptr [ESI + 0x4c]
006d2a7e  MOV EAX,[0x00982bdc]
006d2a83  MOV ECX,dword ptr [EAX]
006d2a85  PUSH EDX
006d2a86  PUSH EAX
006d2a87  CALL dword ptr [ECX + 0x15c]
006d2a8d  MOV EAX,dword ptr [ESI + 0x48]
006d2a90  MOV ECX,dword ptr [EAX]
006d2a92  PUSH EBP
006d2a93  LEA EDX,[ESP + 0xec]
006d2a9a  PUSH EDX
006d2a9b  PUSH EAX
006d2a9c  CALL dword ptr [ECX + 0xfc]
006d2aa2  MOV ECX,dword ptr [0x0093dea4]
006d2aa8  MOV EAX,dword ptr [ECX + 0x48]
006d2aab  MOV ECX,dword ptr [ECX + 0x44]
006d2aae  MOV ECX,dword ptr [ECX + 0x18c]
006d2ab4  MOV EDX,dword ptr [EAX]
006d2ab6  PUSH 0xf
006d2ab8  PUSH ECX
006d2ab9  PUSH EAX
006d2aba  CALL dword ptr [EDX + 0x68]
006d2abd  MOV EBX,dword ptr [ESP + 0x158]
006d2ac4  CMP EBX,EBP
006d2ac6  MOV dword ptr [ESP + 0x10],0x1f
006d2ace  MOV dword ptr [ESP + 0x14],0x20
006d2ad6  MOV dword ptr [ESP + 0x18],0x21
006d2ade  MOV dword ptr [ESP + 0x1c],0x22
006d2ae6  JLE 0x006d2b4f
006d2ae8  MOV EBX,dword ptr [ESP + 0x15c]
006d2aef  LEA EDI,[ESP + 0xf0]
006d2af6  JMP 0x006d2b00
006d2b00  MOV EAX,dword ptr [ESI + 0x48]
006d2b03  MOV EDX,dword ptr [EAX]
006d2b05  MOV EAX,dword ptr [ESP + 0x154]
006d2b0c  PUSH EAX
006d2b0d  MOV EAX,dword ptr [ESP + EBP*0x4 + 0x14]
006d2b11  LEA ECX,[EAX + EAX*0x4]
006d2b14  MOV EAX,dword ptr [ESI + 0x44]
006d2b17  MOV ECX,dword ptr [EAX + ECX*0x8 + 0x24]
006d2b1b  MOV EAX,dword ptr [ESI + 0x48]
006d2b1e  PUSH ECX
006d2b1f  PUSH EAX
006d2b20  CALL dword ptr [EDX + 0xd0]
006d2b26  MOV EDX,dword ptr [EBX]
006d2b28  MOV EAX,dword ptr [EBX + 0x4]
006d2b2b  MOV ECX,dword ptr [EBX + 0x8]
006d2b2e  MOV dword ptr [EDI + -0x4],EDX
006d2b31  MOV EDX,dword ptr [EBX + 0xc]
006d2b34  MOV dword ptr [EDI],EAX
006d2b36  MOV EAX,dword ptr [ESP + 0x158]
006d2b3d  MOV dword ptr [EDI + 0x4],ECX
006d2b40  MOV dword ptr [EDI + 0x8],EDX
006d2b43  INC EBP
006d2b44  ADD EDI,0x10
006d2b47  CMP EBP,EAX
006d2b49  JL 0x006d2b00
006d2b4b  MOV EBX,EAX
006d2b4d  XOR EBP,EBP
006d2b4f  CMP EBX,0x4
006d2b52  JGE 0x006d2b93
006d2b54  MOV EAX,EBX
006d2b56  SHL EAX,0x4
006d2b59  LEA EDI,[ESP + EAX*0x1 + 0xf0]
006d2b60  MOV EAX,dword ptr [ESI + 0x48]
006d2b63  MOV ECX,dword ptr [EAX]
006d2b65  MOV EAX,dword ptr [ESP + EBX*0x4 + 0x10]
006d2b69  LEA EDX,[EAX + EAX*0x4]
006d2b6c  MOV EAX,dword ptr [ESI + 0x44]
006d2b6f  MOV EDX,dword ptr [EAX + EDX*0x8 + 0x24]
006d2b73  MOV EAX,dword ptr [ESI + 0x48]
006d2b76  PUSH EBP
006d2b77  PUSH EDX
006d2b78  PUSH EAX
006d2b79  CALL dword ptr [ECX + 0xd0]
006d2b7f  MOV dword ptr [EDI + -0x4],EBP
006d2b82  MOV dword ptr [EDI],EBP
006d2b84  MOV dword ptr [EDI + 0x4],EBP
006d2b87  MOV dword ptr [EDI + 0x8],EBP
006d2b8a  INC EBX
006d2b8b  ADD EDI,0x10
006d2b8e  CMP EBX,0x4
006d2b91  JL 0x006d2b60
006d2b93  MOV EAX,dword ptr [ESI + 0x48]
006d2b96  MOV ECX,dword ptr [EAX]
006d2b98  PUSH 0x4
006d2b9a  LEA EDX,[ESP + 0xf0]
006d2ba1  PUSH EDX
006d2ba2  MOV EDX,dword ptr [ESI + 0x44]
006d2ba5  MOV EDX,dword ptr [EDX + 0x59c]
006d2bab  PUSH EDX
006d2bac  PUSH EAX
006d2bad  CALL dword ptr [ECX + 0x90]
006d2bb3  PUSH 0x6
006d2bb5  PUSH 0x5
006d2bb7  PUSH EBP
006d2bb8  CALL 0x006c6810
006d2bbd  PUSH EBP
006d2bbe  PUSH EBP
006d2bbf  CALL 0x006c67c0
006d2bc4  ADD ESP,0x14
006d2bc7  CALL 0x006c83a0
006d2bcc  MOV EDX,dword ptr [0x008f9ad0]
006d2bd2  MOV EAX,[0x00982bdc]
006d2bd7  PUSH EDX
006d2bd8  MOV dword ptr [0x00982ca0],EBP
006d2bde  MOV ECX,dword ptr [EAX]
006d2be0  PUSH EAX
006d2be1  CALL dword ptr [ECX + 0x164]
006d2be7  MOV EAX,[0x00982c80]
006d2bec  MOV EAX,dword ptr [EAX + 0x48]
006d2bef  MOV ECX,dword ptr [EAX]
006d2bf1  PUSH EAX
006d2bf2  CALL dword ptr [ECX + 0x104]
006d2bf8  MOV ECX,dword ptr [ESP + 0x158]
006d2bff  MOV EAX,dword ptr [ESI + 0x48]
006d2c02  MOV EDX,dword ptr [EAX]
006d2c04  DEC ECX
006d2c05  PUSH ECX
006d2c06  PUSH EAX
006d2c07  CALL dword ptr [EDX + 0x100]
006d2c0d  MOV EAX,[0x00982bdc]
006d2c12  MOV EDX,dword ptr [EAX]
006d2c14  PUSH 0x30
006d2c16  LEA ECX,[ESP + 0x2c]
006d2c1a  PUSH ECX
006d2c1b  PUSH 0x2
006d2c1d  PUSH 0x6
006d2c1f  PUSH EAX
006d2c20  CALL dword ptr [EDX + 0x14c]
006d2c26  MOV EAX,dword ptr [ESI + 0x48]
006d2c29  MOV EDX,dword ptr [EAX]
006d2c2b  PUSH EAX
006d2c2c  CALL dword ptr [EDX + 0x108]
006d2c32  MOV EAX,dword ptr [ESI]
006d2c34  MOV ECX,ESI
006d2c36  CALL dword ptr [EAX + 0x8]
006d2c39  MOV ESI,dword ptr [ESI + 0x48]
006d2c3c  MOV ECX,dword ptr [ESI]
006d2c3e  PUSH ESI
006d2c3f  CALL dword ptr [ECX + 0x10c]
006d2c45  MOV ESI,dword ptr [0x00982a20]
006d2c4b  MOV dword ptr [0x00982c80],EBP
006d2c51  CALL 0x006e2f50
006d2c56  MOV ECX,dword ptr [ESI + 0x8]
006d2c59  MOV EAX,[0x00982bdc]
006d2c5e  MOV EDX,dword ptr [EAX]
006d2c60  PUSH ECX
006d2c61  PUSH EBP
006d2c62  PUSH EAX
006d2c63  CALL dword ptr [EDX + 0x94]
006d2c69  MOV ECX,dword ptr [ESI + 0xc]
006d2c6c  MOV EAX,[0x00982bdc]
006d2c71  MOV EDX,dword ptr [EAX]
006d2c73  PUSH ECX
006d2c74  PUSH EAX
006d2c75  CALL dword ptr [EDX + 0x9c]
006d2c7b  MOV EDX,dword ptr [ESI + 0x14]
006d2c7e  MOV EAX,dword ptr [ESI + 0x18]
006d2c81  MOV dword ptr [ESP + 0x10],EBP
006d2c85  MOV dword ptr [ESP + 0x14],EBP
006d2c89  MOV dword ptr [ESP + 0x18],EDX
006d2c8d  MOV dword ptr [ESP + 0x1c],EAX
006d2c91  MOV dword ptr [ESP + 0x20],0x0
006d2c99  MOV EAX,[0x00982bdc]
006d2c9e  LEA EDX,[ESP + 0x10]
006d2ca2  PUSH EDX
006d2ca3  MOV dword ptr [ESP + 0x28],0x3f800000
006d2cab  MOV ECX,dword ptr [EAX]
006d2cad  PUSH EAX
006d2cae  CALL dword ptr [ECX + 0xbc]
006d2cb4  POP EDI
006d2cb5  MOV dword ptr [0x00982a20],ESI
006d2cbb  POP ESI
006d2cbc  MOV dword ptr [0x00982c80],EBP
006d2cc2  POP EBP
006d2cc3  POP EBX
006d2cc4  ADD ESP,0x13c
006d2cca  RET
