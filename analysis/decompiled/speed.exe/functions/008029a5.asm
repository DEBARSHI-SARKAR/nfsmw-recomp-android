008029a5  PUSH EBP
008029a6  MOV EBP,ESP
008029a8  SUB ESP,0x4c
008029ab  MOV EAX,dword ptr [EBP + 0x8]
008029ae  MOV ECX,dword ptr [EBP + 0x20]
008029b1  MOV EAX,dword ptr [EAX + 0xc]
008029b4  MOV EAX,dword ptr [ECX + EAX*0x4]
008029b7  MOV ECX,dword ptr [EBP + 0x18]
008029ba  PUSH EDI
008029bb  MOV EDI,dword ptr [EBP + 0x1c]
008029be  LEA ECX,[ECX + EDI*0x1 + -0x1]
008029c2  CMP EDI,ECX
008029c4  MOV dword ptr [EBP + -0x14],EAX
008029c7  JNC 0x00802be9
008029cd  MOV EDX,dword ptr [EBP + 0x10]
008029d0  IMUL EAX,EAX
008029d3  LEA EAX,[EAX + EAX*0x2]
008029d6  SAR EAX,0x5
008029d9  MOV dword ptr [EBP + -0x24],EAX
008029dc  MOV EAX,dword ptr [EBP + 0xc]
008029df  PUSH EBX
008029e0  PUSH ESI
008029e1  MOV dword ptr [EBP + 0x18],EAX
008029e4  SUB dword ptr [EBP + 0x18],EDX
008029e7  LEA ESI,[EBP + -0x4c]
008029ea  SUB ESI,0x4
008029ed  ADD EAX,0x8
008029f0  ADD EDX,0x5
008029f3  SUB ECX,EDI
008029f5  MOV dword ptr [EBP + -0x20],ESI
008029f8  MOV dword ptr [EBP + -0xc],EAX
008029fb  MOV dword ptr [EBP + -0x10],EDX
008029fe  MOV dword ptr [EBP + -0x1c],ECX
00802a01  MOV EAX,dword ptr [EBP + -0xc]
00802a04  MOV ESI,dword ptr [EBP + -0x10]
00802a07  MOV dword ptr [EBP + -0x18],0x8
00802a0e  MOVZX ECX,byte ptr [EAX + -0x5]
00802a12  MOV dword ptr [EBP + -0x4c],ECX
00802a15  MOV ECX,dword ptr [EBP + 0x18]
00802a18  MOVZX ECX,byte ptr [ECX + ESI*0x1]
00802a1c  MOVZX EDX,byte ptr [EAX + -0x4]
00802a20  MOVZX EDI,byte ptr [EAX]
00802a23  MOV dword ptr [EBP + -0x44],ECX
00802a26  MOVZX ECX,byte ptr [EAX + -0x2]
00802a2a  AND dword ptr [EBP + -0x8],0x0
00802a2e  AND dword ptr [EBP + -0x4],0x0
00802a32  MOV dword ptr [EBP + -0x40],ECX
00802a35  MOVZX ECX,byte ptr [EAX + -0x1]
00802a39  MOV dword ptr [EBP + -0x3c],ECX
00802a3c  MOVZX ECX,byte ptr [EAX + 0x1]
00802a40  MOV dword ptr [EBP + -0x34],ECX
00802a43  MOVZX ECX,byte ptr [EAX + 0x2]
00802a47  MOV dword ptr [EBP + -0x30],ECX
00802a4a  MOVZX ECX,byte ptr [EAX + 0x3]
00802a4e  MOV dword ptr [EBP + -0x2c],ECX
00802a51  MOVZX ECX,byte ptr [EAX + 0x4]
00802a55  MOV dword ptr [EBP + -0x48],EDX
00802a58  MOV dword ptr [EBP + -0x38],EDI
00802a5b  MOV dword ptr [EBP + -0x28],ECX
00802a5e  MOV dword ptr [EBP + 0x20],0x1
00802a65  MOV ECX,dword ptr [EBP + 0x20]
00802a68  SHL ECX,0x2
00802a6b  MOV EBX,dword ptr [EBP + ECX*0x1 + -0x4c]
00802a6f  MOV dword ptr [EBP + 0x1c],EBX
00802a72  MOV EBX,dword ptr [EBP + -0x20]
00802a75  MOV ECX,dword ptr [EBX + ECX*0x1]
00802a78  MOV EBX,dword ptr [EBP + 0x1c]
00802a7b  SUB EBX,ECX
00802a7d  TEST EBX,EBX
00802a7f  JLE 0x00802a85
00802a81  MOV ECX,EBX
00802a83  JMP 0x00802a88
00802a85  SUB ECX,dword ptr [EBP + 0x1c]
00802a88  ADD dword ptr [EBP + -0x4],ECX
00802a8b  INC dword ptr [EBP + 0x20]
00802a8e  CMP dword ptr [EBP + 0x20],0x4
00802a92  JBE 0x00802a65
00802a94  MOV dword ptr [EBP + 0x20],0x5
00802a9b  MOV ECX,dword ptr [EBP + 0x20]
00802a9e  SHL ECX,0x2
00802aa1  MOV EBX,dword ptr [EBP + ECX*0x1 + -0x4c]
00802aa5  MOV ECX,dword ptr [EBP + ECX*0x1 + -0x48]
00802aa9  MOV dword ptr [EBP + 0x1c],EBX
00802aac  SUB EBX,ECX
00802aae  TEST EBX,EBX
00802ab0  JLE 0x00802ab6
00802ab2  MOV ECX,EBX
00802ab4  JMP 0x00802ab9
00802ab6  SUB ECX,dword ptr [EBP + 0x1c]
00802ab9  ADD dword ptr [EBP + -0x8],ECX
00802abc  INC dword ptr [EBP + 0x20]
00802abf  CMP dword ptr [EBP + 0x20],0x8
00802ac3  JBE 0x00802a9b
00802ac5  MOV ECX,dword ptr [EBP + -0x24]
00802ac8  CMP dword ptr [EBP + -0x4],ECX
00802acb  JGE 0x00802b92
00802ad1  CMP dword ptr [EBP + -0x8],ECX
00802ad4  JGE 0x00802b92
00802ada  MOV ECX,EDI
00802adc  SUB ECX,dword ptr [EBP + -0x3c]
00802adf  CMP ECX,dword ptr [EBP + -0x14]
00802ae2  JGE 0x00802b92
00802ae8  MOV ECX,dword ptr [EBP + -0x3c]
00802aeb  SUB ECX,EDI
00802aed  CMP ECX,dword ptr [EBP + -0x14]
00802af0  JGE 0x00802b92
00802af6  MOV ECX,dword ptr [EBP + -0x4c]
00802af9  MOV EBX,dword ptr [EBP + -0x3c]
00802afc  LEA EBX,[EBX + ECX*0x2]
00802aff  ADD EBX,ECX
00802b01  ADD EBX,dword ptr [EBP + -0x40]
00802b04  ADD EBX,dword ptr [EBP + -0x44]
00802b07  LEA ECX,[EBX + EDX*0x1 + 0x4]
00802b0b  ADD EDX,ECX
00802b0d  SAR EDX,0x3
00802b10  MOV byte ptr [ESI + -0x1],DL
00802b13  MOV EDX,EDI
00802b15  SUB EDX,dword ptr [EBP + -0x4c]
00802b18  ADD ECX,EDX
00802b1a  MOV EDX,dword ptr [EBP + -0x44]
00802b1d  ADD EDX,ECX
00802b1f  SAR EDX,0x3
00802b22  MOV byte ptr [ESI],DL
00802b24  MOV EDX,dword ptr [EBP + -0x34]
00802b27  SUB EDX,dword ptr [EBP + -0x4c]
00802b2a  ADD ECX,EDX
00802b2c  MOV EDX,dword ptr [EBP + -0x40]
00802b2f  ADD EDX,ECX
00802b31  SAR EDX,0x3
00802b34  MOV byte ptr [ESI + 0x1],DL
00802b37  MOV EDX,dword ptr [EBP + -0x30]
00802b3a  SUB EDX,dword ptr [EBP + -0x4c]
00802b3d  ADD ECX,EDX
00802b3f  MOV EDX,dword ptr [EBP + -0x3c]
00802b42  ADD EDX,ECX
00802b44  SAR EDX,0x3
00802b47  MOV byte ptr [ESI + 0x2],DL
00802b4a  MOV EDX,dword ptr [EBP + -0x2c]
00802b4d  SUB EDX,dword ptr [EBP + -0x48]
00802b50  ADD ECX,EDX
00802b52  LEA EDX,[ECX + EDI*0x1]
00802b55  SAR EDX,0x3
00802b58  MOV byte ptr [ESI + 0x3],DL
00802b5b  MOV EDX,dword ptr [EBP + -0x28]
00802b5e  SUB EDX,dword ptr [EBP + -0x44]
00802b61  ADD ECX,EDX
00802b63  MOV EDX,dword ptr [EBP + -0x34]
00802b66  ADD EDX,ECX
00802b68  SAR EDX,0x3
00802b6b  MOV byte ptr [ESI + 0x4],DL
00802b6e  MOV EDX,dword ptr [EBP + -0x28]
00802b71  SUB EDX,dword ptr [EBP + -0x40]
00802b74  ADD ECX,EDX
00802b76  MOV EDX,dword ptr [EBP + -0x30]
00802b79  ADD EDX,ECX
00802b7b  SUB ECX,dword ptr [EBP + -0x3c]
00802b7e  SAR EDX,0x3
00802b81  ADD ECX,dword ptr [EBP + -0x28]
00802b84  MOV byte ptr [ESI + 0x5],DL
00802b87  ADD ECX,dword ptr [EBP + -0x2c]
00802b8a  SAR ECX,0x3
00802b8d  MOV byte ptr [ESI + 0x6],CL
00802b90  JMP 0x00802bc7
00802b92  MOV EDX,dword ptr [EBP + -0x3c]
00802b95  MOV EBX,dword ptr [EBP + -0x40]
00802b98  MOV ECX,EDI
00802b9a  SUB ECX,EDX
00802b9c  LEA ECX,[ECX + ECX*0x2]
00802b9f  SUB ECX,dword ptr [EBP + -0x34]
00802ba2  LEA ECX,[ECX + EBX*0x1 + 0x4]
00802ba6  MOV EBX,dword ptr [EBP + 0x8]
00802ba9  MOV EBX,dword ptr [EBX + 0x38]
00802bac  SAR ECX,0x3
00802baf  MOV ECX,dword ptr [EBX + ECX*0x4]
00802bb2  MOV DL,byte ptr [ECX + EDX*0x1 + 0x9c6c00]
00802bb9  SUB EDI,ECX
00802bbb  MOV byte ptr [ESI + 0x2],DL
00802bbe  MOV CL,byte ptr [EDI + 0x9c6c00]
00802bc4  MOV byte ptr [ESI + 0x3],CL
00802bc7  ADD EAX,dword ptr [EBP + 0x14]
00802bca  ADD ESI,dword ptr [EBP + 0x14]
00802bcd  DEC dword ptr [EBP + -0x18]
00802bd0  JNZ 0x00802a0e
00802bd6  ADD dword ptr [EBP + -0xc],0x8
00802bda  ADD dword ptr [EBP + -0x10],0x8
00802bde  DEC dword ptr [EBP + -0x1c]
00802be1  JNZ 0x00802a01
00802be7  POP ESI
00802be8  POP EBX
00802be9  POP EDI
00802bea  LEAVE
00802beb  RET
