007f8974  PUSH EBP
007f8975  MOV EBP,ESP
007f8977  SUB ESP,0xc8
007f897d  PUSH EBX
007f897e  PUSH ESI
007f897f  OR ESI,0xffffffff
007f8982  PUSH EDI
007f8983  MOV EBX,ECX
007f8985  XOR EDI,EDI
007f8987  MOV dword ptr [EBP + -0x14],EBX
007f898a  MOV dword ptr [EBP + -0x18],ESI
007f898d  MOV dword ptr [EBP + -0x20],EDI
007f8990  MOV dword ptr [EBP + -0x5c],ESI
007f8993  MOV dword ptr [EBP + -0x50],ESI
007f8996  MOV dword ptr [EBP + -0x58],ESI
007f8999  MOV dword ptr [EBP + -0x30],ESI
007f899c  MOV dword ptr [EBP + -0x3c],ESI
007f899f  MOV dword ptr [EBP + -0x54],ESI
007f89a2  MOV dword ptr [EBP + -0x44],ESI
007f89a5  MOV dword ptr [EBP + -0x60],ESI
007f89a8  MOV dword ptr [EBP + -0x4c],ESI
007f89ab  MOV dword ptr [EBP + -0x34],ESI
007f89ae  MOV dword ptr [EBP + -0x38],ESI
007f89b1  MOV dword ptr [EBP + -0x40],ESI
007f89b4  MOV dword ptr [EBP + -0x48],ESI
007f89b7  MOV dword ptr [EBP + 0xffffff6c],0x8c2788
007f89c1  MOV dword ptr [EBP + 0xffffff70],0x8c277c
007f89cb  MOV dword ptr [EBP + 0xffffff74],0x8c2778
007f89d5  MOV dword ptr [EBP + 0xffffff78],0x8c2774
007f89df  MOV dword ptr [EBP + 0xffffff7c],0x8c276c
007f89e9  MOV dword ptr [EBP + -0x80],0x8c2764
007f89f0  MOV dword ptr [EBP + -0x7c],0x8c2758
007f89f7  MOV dword ptr [EBP + -0x78],0x8c274c
007f89fe  MOV dword ptr [EBP + -0x74],0x8b4cf4
007f8a05  MOV dword ptr [EBP + -0x70],0x8a458c
007f8a0c  MOV dword ptr [EBP + -0x6c],0x8b68dc
007f8a13  MOV dword ptr [EBP + -0x68],0x8c2748
007f8a1a  MOV dword ptr [EBP + -0x64],0x8a4588
007f8a21  MOV EAX,dword ptr [EBP + EDI*0x1 + 0xffffff6c]
007f8a28  LEA EDX,[EAX + 0x1]
007f8a2b  MOV CL,byte ptr [EAX]
007f8a2d  INC EAX
007f8a2e  TEST CL,CL
007f8a30  JNZ 0x007f8a2b
007f8a32  SUB EAX,EDX
007f8a34  MOV dword ptr [EBP + EDI*0x1 + 0xffffff38],EAX
007f8a3b  ADD EDI,0x4
007f8a3e  CMP EDI,0x34
007f8a41  JC 0x007f8a21
007f8a43  AND dword ptr [EBP + -0xc],0x0
007f8a47  CMP dword ptr [EBP + 0xc],0x0
007f8a4b  MOV byte ptr [EBP + -0x1],0x1
007f8a4f  MOV byte ptr [EBP + -0x29],CL
007f8a52  JBE 0x007f8ac7
007f8a54  MOV EAX,dword ptr [EBP + 0x8]
007f8a57  MOV ECX,dword ptr [EBP + -0xc]
007f8a5a  LEA EDI,[ECX + EAX*0x1]
007f8a5d  CMP byte ptr [EDI],0x9
007f8a60  JZ 0x007f8a68
007f8a62  CMP byte ptr [EBP + -0x1],0x1
007f8a66  JNZ 0x007f8aab
007f8a68  CMP dword ptr [EBP + -0x18],ESI
007f8a6b  MOV byte ptr [EBP + -0x1],0x0
007f8a6f  JNZ 0x007f8aab
007f8a71  MOV EAX,dword ptr [EBP + 0xc]
007f8a74  SUB EAX,dword ptr [EBP + -0xc]
007f8a77  MOV dword ptr [EBP + -0x8],EDI
007f8a7a  MOV dword ptr [EBP + -0x10],EAX
007f8a7d  LEA EAX,[EBP + -0x1c]
007f8a80  PUSH EAX
007f8a81  PUSH 0xd
007f8a83  LEA EAX,[EBP + 0xffffff38]
007f8a89  PUSH EAX
007f8a8a  LEA EAX,[EBP + 0xffffff6c]
007f8a90  PUSH EAX
007f8a91  LEA EAX,[EBP + -0x8]
007f8a94  PUSH EAX
007f8a95  LEA EAX,[EBP + -0x10]
007f8a98  CALL 0x007f8751
007f8a9d  ADD ESP,0x14
007f8aa0  CMP dword ptr [EBP + -0x1c],ESI
007f8aa3  JZ 0x007f8aab
007f8aa5  MOV EAX,dword ptr [EBP + -0x20]
007f8aa8  MOV dword ptr [EBP + -0x18],EAX
007f8aab  CMP byte ptr [EDI],0xa
007f8aae  JNZ 0x007f8ab7
007f8ab0  INC dword ptr [EBP + -0x20]
007f8ab3  MOV byte ptr [EBP + -0x1],0x1
007f8ab7  INC dword ptr [EBP + -0xc]
007f8aba  MOV EAX,dword ptr [EBP + -0xc]
007f8abd  CMP EAX,dword ptr [EBP + 0xc]
007f8ac0  JC 0x007f8a54
007f8ac2  CMP dword ptr [EBP + -0x18],ESI
007f8ac5  JNZ 0x007f8ad3
007f8ac7  AND dword ptr [EBX],0x0
007f8aca  AND dword ptr [EBX + 0x4],0x0
007f8ace  JMP 0x007f90d5
007f8ad3  MOV EDI,dword ptr [EBP + -0x20]
007f8ad6  MOV EAX,ESI
007f8ad8  SUB EAX,dword ptr [EBP + -0x18]
007f8adb  ADD EDI,EAX
007f8add  MOV EAX,EDI
007f8adf  IMUL EAX,EAX,0x34
007f8ae2  ADD EAX,0x4
007f8ae5  PUSH EAX
007f8ae6  CALL 0x007f84b0
007f8aeb  TEST EAX,EAX
007f8aed  POP ECX
007f8aee  JZ 0x007f8b0b
007f8af0  PUSH 0x7f87fa
007f8af5  PUSH EDI
007f8af6  MOV dword ptr [EAX],EDI
007f8af8  ADD EAX,0x4
007f8afb  PUSH 0x34
007f8afd  PUSH EAX
007f8afe  MOV dword ptr [EBP + -0x8],EAX
007f8b01  CALL 0x00404db0
007f8b06  MOV EAX,dword ptr [EBP + -0x8]
007f8b09  JMP 0x007f8b0d
007f8b0b  XOR EAX,EAX
007f8b0d  MOV ECX,dword ptr [EBP + 0x8]
007f8b10  MOV dword ptr [EBX + 0x4],EDI
007f8b13  XOR EDI,EDI
007f8b15  MOV dword ptr [EBX],EAX
007f8b17  MOV dword ptr [EBP + -0x10],EDI
007f8b1a  XOR EAX,EAX
007f8b1c  MOV dword ptr [EBP + -0xc],EDI
007f8b1f  CMP byte ptr [EDI + ECX*0x1],0xa
007f8b23  JNZ 0x007f8b26
007f8b25  INC EAX
007f8b26  CMP dword ptr [EBP + -0x18],EAX
007f8b29  JZ 0x007f8b34
007f8b2b  INC EDI
007f8b2c  CMP EDI,dword ptr [EBP + 0xc]
007f8b2f  MOV dword ptr [EBP + -0xc],EDI
007f8b32  JC 0x007f8b1f
007f8b34  MOV byte ptr [EBP + -0x1],0x1
007f8b38  JMP 0x007f8c08
007f8b3d  ADD EDI,ECX
007f8b3f  CMP byte ptr [EDI],0x9
007f8b42  JZ 0x007f8b4e
007f8b44  CMP byte ptr [EBP + -0x1],0x1
007f8b48  JNZ 0x007f8bfc
007f8b4e  MOV EAX,dword ptr [EBP + 0xc]
007f8b51  SUB EAX,dword ptr [EBP + -0xc]
007f8b54  MOV byte ptr [EBP + -0x1],0x0
007f8b58  MOV dword ptr [EBP + -0x18],EAX
007f8b5b  LEA EAX,[EBP + -0x1c]
007f8b5e  PUSH EAX
007f8b5f  PUSH 0xd
007f8b61  LEA EAX,[EBP + 0xffffff38]
007f8b67  PUSH EAX
007f8b68  LEA EAX,[EBP + 0xffffff6c]
007f8b6e  PUSH EAX
007f8b6f  LEA EAX,[EBP + -0x8]
007f8b72  PUSH EAX
007f8b73  LEA EAX,[EBP + -0x18]
007f8b76  MOV dword ptr [EBP + -0x8],EDI
007f8b79  CALL 0x007f8751
007f8b7e  MOV EAX,dword ptr [EBP + -0x1c]
007f8b81  ADD ESP,0x14
007f8b84  CMP EAX,0xc
007f8b87  JA 0x007f8bf6
007f8b89  JMP dword ptr [EAX*0x4 + 0x7f90dc]
007f8b90  MOV EAX,dword ptr [EBP + -0x10]
007f8b93  MOV dword ptr [EBP + -0x5c],EAX
007f8b96  JMP 0x007f8bf6
007f8b98  MOV EAX,dword ptr [EBP + -0x10]
007f8b9b  MOV dword ptr [EBP + -0x50],EAX
007f8b9e  JMP 0x007f8bf6
007f8ba0  MOV EAX,dword ptr [EBP + -0x10]
007f8ba3  MOV dword ptr [EBP + -0x60],EAX
007f8ba6  JMP 0x007f8bf6
007f8ba8  MOV EAX,dword ptr [EBP + -0x10]
007f8bab  MOV dword ptr [EBP + -0x4c],EAX
007f8bae  JMP 0x007f8bf6
007f8bb0  MOV EAX,dword ptr [EBP + -0x10]
007f8bb3  MOV dword ptr [EBP + -0x58],EAX
007f8bb6  JMP 0x007f8bf6
007f8bb8  MOV EAX,dword ptr [EBP + -0x10]
007f8bbb  MOV dword ptr [EBP + -0x30],EAX
007f8bbe  JMP 0x007f8bf6
007f8bc0  MOV EAX,dword ptr [EBP + -0x10]
007f8bc3  MOV dword ptr [EBP + -0x3c],EAX
007f8bc6  JMP 0x007f8bf6
007f8bc8  MOV EAX,dword ptr [EBP + -0x10]
007f8bcb  MOV dword ptr [EBP + -0x54],EAX
007f8bce  JMP 0x007f8bf6
007f8bd0  MOV EAX,dword ptr [EBP + -0x10]
007f8bd3  MOV dword ptr [EBP + -0x44],EAX
007f8bd6  JMP 0x007f8bf6
007f8bd8  MOV EAX,dword ptr [EBP + -0x10]
007f8bdb  MOV dword ptr [EBP + -0x34],EAX
007f8bde  JMP 0x007f8bf6
007f8be0  MOV EAX,dword ptr [EBP + -0x10]
007f8be3  MOV dword ptr [EBP + -0x38],EAX
007f8be6  JMP 0x007f8bf6
007f8be8  MOV EAX,dword ptr [EBP + -0x10]
007f8beb  MOV dword ptr [EBP + -0x40],EAX
007f8bee  JMP 0x007f8bf6
007f8bf0  MOV EAX,dword ptr [EBP + -0x10]
007f8bf3  MOV dword ptr [EBP + -0x48],EAX
007f8bf6  INC dword ptr [EBP + -0x10]
007f8bf9  MOV ECX,dword ptr [EBP + 0x8]
007f8bfc  CMP byte ptr [EDI],0xa
007f8bff  MOV EDI,dword ptr [EBP + -0xc]
007f8c02  JZ 0x007f8c13
007f8c04  INC EDI
007f8c05  MOV dword ptr [EBP + -0xc],EDI
007f8c08  CMP EDI,dword ptr [EBP + 0xc]
007f8c0b  JC 0x007f8b3d
007f8c11  JMP 0x007f8c1b
007f8c13  INC EDI
007f8c14  MOV byte ptr [EBP + -0x1],0x1
007f8c18  MOV dword ptr [EBP + -0xc],EDI
007f8c1b  AND dword ptr [EBP + -0x10],0x0
007f8c1f  CMP EDI,dword ptr [EBP + 0xc]
007f8c22  JNC 0x007f90d5
007f8c28  AND dword ptr [EBP + -0x1c],0x0
007f8c2c  ADD EDI,ECX
007f8c2e  MOV dword ptr [EBP + -0x18],ESI
007f8c31  MOV dword ptr [EBP + -0x20],EDI
007f8c34  MOV ESI,dword ptr [EBP + -0x20]
007f8c37  MOV AL,byte ptr [ESI]
007f8c39  CMP AL,0x9
007f8c3b  JZ 0x007f8c84
007f8c3d  CMP byte ptr [EBP + -0x1],0x1
007f8c41  JZ 0x007f8c91
007f8c43  CMP AL,0xa
007f8c45  JNZ 0x007f8c79
007f8c47  AND dword ptr [EBP + -0x10],0x0
007f8c4b  INC dword ptr [EBP + -0x18]
007f8c4e  ADD dword ptr [EBP + -0x1c],0x34
007f8c52  MOV EAX,dword ptr [EBX + 0x4]
007f8c55  MOV ECX,dword ptr [EBP + -0x18]
007f8c58  DEC EAX
007f8c59  INC ECX
007f8c5a  CMP ECX,EAX
007f8c5c  MOV byte ptr [EBP + -0x1],0x1
007f8c60  JNC 0x007f8c64
007f8c62  MOV EAX,ECX
007f8c64  MOV EDX,dword ptr [EBX]
007f8c66  MOV ECX,dword ptr [EBP + -0x1c]
007f8c69  MOV EDI,EAX
007f8c6b  IMUL EDI,EDI,0x34
007f8c6e  LEA ESI,[EDX + ECX*0x1 + -0x34]
007f8c72  PUSH 0xd
007f8c74  ADD EDI,EDX
007f8c76  POP ECX
007f8c77  MOVSD.REP ES:EDI,ESI
007f8c79  INC dword ptr [EBP + -0xc]
007f8c7c  INC dword ptr [EBP + -0x20]
007f8c7f  JMP 0x007f90c9
007f8c84  CMP byte ptr [EBP + -0x1],0x1
007f8c88  JZ 0x007f8c91
007f8c8a  INC dword ptr [EBP + -0xc]
007f8c8d  INC ESI
007f8c8e  MOV dword ptr [EBP + -0x20],ESI
007f8c91  MOV ECX,dword ptr [EBP + -0xc]
007f8c94  XOR EAX,EAX
007f8c96  CMP ECX,dword ptr [EBP + 0xc]
007f8c99  JNC 0x007f8cb1
007f8c9b  MOV EDX,ECX
007f8c9d  MOV CL,byte ptr [ESI + EAX*0x1]
007f8ca0  CMP CL,0x9
007f8ca3  JZ 0x007f8cb1
007f8ca5  CMP CL,0xa
007f8ca8  JZ 0x007f8cb1
007f8caa  INC EAX
007f8cab  INC EDX
007f8cac  CMP EDX,dword ptr [EBP + 0xc]
007f8caf  JC 0x007f8c9d
007f8cb1  MOV ECX,dword ptr [EBP + -0xc]
007f8cb4  LEA EDI,[EAX + ECX*0x1]
007f8cb7  CMP EDI,dword ptr [EBP + 0xc]
007f8cba  JZ 0x007f8cc9
007f8cbc  MOV EAX,dword ptr [EBP + 0x8]
007f8cbf  ADD EAX,EDI
007f8cc1  MOV CL,byte ptr [EAX]
007f8cc3  MOV byte ptr [EBP + -0x29],CL
007f8cc6  MOV byte ptr [EAX],0x0
007f8cc9  MOV ESI,dword ptr [EBP + -0x10]
007f8ccc  CMP ESI,dword ptr [EBP + -0x5c]
007f8ccf  MOV byte ptr [EBP + -0x1],0x0
007f8cd3  JNZ 0x007f8d1d
007f8cd5  MOV EAX,dword ptr [EBP + 0xc]
007f8cd8  SUB EAX,dword ptr [EBP + -0xc]
007f8cdb  MOV dword ptr [EBP + -0x28],EAX
007f8cde  MOV EAX,dword ptr [EBP + -0x20]
007f8ce1  MOV dword ptr [EBP + -0x24],EAX
007f8ce4  MOV EAX,dword ptr [EBP + -0x18]
007f8ce7  TEST EAX,EAX
007f8ce9  JG 0x007f8ced
007f8ceb  XOR EAX,EAX
007f8ced  MOV ECX,dword ptr [EBX]
007f8cef  IMUL EAX,EAX,0x34
007f8cf2  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x14]
007f8cf6  MOV dword ptr [EBP + -0x8],EAX
007f8cf9  LEA EAX,[EBP + -0x8]
007f8cfc  PUSH EAX
007f8cfd  LEA ESI,[EBP + -0x28]
007f8d00  LEA EBX,[EBP + -0x24]
007f8d03  CALL 0x007f86e9
007f8d08  MOV EAX,dword ptr [EBP + -0x14]
007f8d0b  MOV EAX,dword ptr [EAX]
007f8d0d  MOV EDX,dword ptr [EBP + -0x1c]
007f8d10  POP ECX
007f8d11  MOV ECX,dword ptr [EBP + -0x8]
007f8d14  MOV dword ptr [EDX + EAX*0x1 + 0x14],ECX
007f8d18  JMP 0x007f90b1
007f8d1d  CMP ESI,dword ptr [EBP + -0x50]
007f8d20  JNZ 0x007f8d6a
007f8d22  MOV EAX,dword ptr [EBP + 0xc]
007f8d25  SUB EAX,dword ptr [EBP + -0xc]
007f8d28  MOV dword ptr [EBP + -0x24],EAX
007f8d2b  MOV EAX,dword ptr [EBP + -0x20]
007f8d2e  MOV dword ptr [EBP + -0x28],EAX
007f8d31  MOV EAX,dword ptr [EBP + -0x18]
007f8d34  TEST EAX,EAX
007f8d36  JG 0x007f8d3a
007f8d38  XOR EAX,EAX
007f8d3a  MOV ECX,dword ptr [EBX]
007f8d3c  IMUL EAX,EAX,0x34
007f8d3f  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x10]
007f8d43  MOV dword ptr [EBP + -0x8],EAX
007f8d46  LEA EAX,[EBP + -0x8]
007f8d49  PUSH EAX
007f8d4a  LEA ESI,[EBP + -0x24]
007f8d4d  LEA EBX,[EBP + -0x28]
007f8d50  CALL 0x007f86e9
007f8d55  MOV EAX,dword ptr [EBP + -0x14]
007f8d58  MOV EAX,dword ptr [EAX]
007f8d5a  MOV EDX,dword ptr [EBP + -0x1c]
007f8d5d  POP ECX
007f8d5e  MOV ECX,dword ptr [EBP + -0x8]
007f8d61  MOV dword ptr [EDX + EAX*0x1 + 0x10],ECX
007f8d65  JMP 0x007f90b1
007f8d6a  CMP ESI,dword ptr [EBP + -0x58]
007f8d6d  JNZ 0x007f8db7
007f8d6f  MOV EAX,dword ptr [EBP + 0xc]
007f8d72  SUB EAX,dword ptr [EBP + -0xc]
007f8d75  MOV dword ptr [EBP + -0x24],EAX
007f8d78  MOV EAX,dword ptr [EBP + -0x20]
007f8d7b  MOV dword ptr [EBP + -0x28],EAX
007f8d7e  MOV EAX,dword ptr [EBP + -0x18]
007f8d81  TEST EAX,EAX
007f8d83  JG 0x007f8d87
007f8d85  XOR EAX,EAX
007f8d87  MOV ECX,dword ptr [EBX]
007f8d89  IMUL EAX,EAX,0x34
007f8d8c  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x8]
007f8d90  MOV dword ptr [EBP + -0x8],EAX
007f8d93  LEA EAX,[EBP + -0x8]
007f8d96  PUSH EAX
007f8d97  LEA ESI,[EBP + -0x24]
007f8d9a  LEA EBX,[EBP + -0x28]
007f8d9d  CALL 0x007f86e9
007f8da2  MOV EAX,dword ptr [EBP + -0x14]
007f8da5  MOV EAX,dword ptr [EAX]
007f8da7  MOV EDX,dword ptr [EBP + -0x1c]
007f8daa  POP ECX
007f8dab  MOV ECX,dword ptr [EBP + -0x8]
007f8dae  MOV dword ptr [EDX + EAX*0x1 + 0x8],ECX
007f8db2  JMP 0x007f90b1
007f8db7  CMP ESI,dword ptr [EBP + -0x30]
007f8dba  JNZ 0x007f8e04
007f8dbc  MOV EAX,dword ptr [EBP + 0xc]
007f8dbf  SUB EAX,dword ptr [EBP + -0xc]
007f8dc2  MOV dword ptr [EBP + -0x24],EAX
007f8dc5  MOV EAX,dword ptr [EBP + -0x20]
007f8dc8  MOV dword ptr [EBP + -0x28],EAX
007f8dcb  MOV EAX,dword ptr [EBP + -0x18]
007f8dce  TEST EAX,EAX
007f8dd0  JG 0x007f8dd4
007f8dd2  XOR EAX,EAX
007f8dd4  MOV ECX,dword ptr [EBX]
007f8dd6  IMUL EAX,EAX,0x34
007f8dd9  MOV EAX,dword ptr [EAX + ECX*0x1 + 0xc]
007f8ddd  MOV dword ptr [EBP + -0x8],EAX
007f8de0  LEA EAX,[EBP + -0x8]
007f8de3  PUSH EAX
007f8de4  LEA ESI,[EBP + -0x24]
007f8de7  LEA EBX,[EBP + -0x28]
007f8dea  CALL 0x007f86e9
007f8def  MOV EAX,dword ptr [EBP + -0x14]
007f8df2  MOV EAX,dword ptr [EAX]
007f8df4  MOV EDX,dword ptr [EBP + -0x1c]
007f8df7  POP ECX
007f8df8  MOV ECX,dword ptr [EBP + -0x8]
007f8dfb  MOV dword ptr [EDX + EAX*0x1 + 0xc],ECX
007f8dff  JMP 0x007f90b1
007f8e04  CMP ESI,dword ptr [EBP + -0x3c]
007f8e07  JNZ 0x007f8e50
007f8e09  MOV EAX,dword ptr [EBP + 0xc]
007f8e0c  SUB EAX,dword ptr [EBP + -0xc]
007f8e0f  MOV EBX,dword ptr [EBP + -0x20]
007f8e12  PUSH EAX
007f8e13  CALL 0x007f8639
007f8e18  CMP EAX,-0x1
007f8e1b  POP ECX
007f8e1c  JZ 0x007f8e2f
007f8e1e  MOV ECX,dword ptr [EBP + -0x14]
007f8e21  MOV ECX,dword ptr [ECX]
007f8e23  MOV EDX,dword ptr [EBP + -0x1c]
007f8e26  MOV dword ptr [EDX + ECX*0x1 + 0x18],EAX
007f8e2a  JMP 0x007f90b4
007f8e2f  MOV EAX,dword ptr [EBP + -0x18]
007f8e32  TEST EAX,EAX
007f8e34  JG 0x007f8e38
007f8e36  XOR EAX,EAX
007f8e38  MOV ECX,dword ptr [EBP + -0x14]
007f8e3b  IMUL EAX,EAX,0x34
007f8e3e  MOV ECX,dword ptr [ECX]
007f8e40  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x18]
007f8e44  MOV EDX,dword ptr [EBP + -0x1c]
007f8e47  MOV dword ptr [ECX + EDX*0x1 + 0x18],EAX
007f8e4b  JMP 0x007f90b4
007f8e50  CMP ESI,dword ptr [EBP + -0x54]
007f8e53  JNZ 0x007f8e9c
007f8e55  MOV EAX,dword ptr [EBP + 0xc]
007f8e58  SUB EAX,dword ptr [EBP + -0xc]
007f8e5b  MOV EBX,dword ptr [EBP + -0x20]
007f8e5e  PUSH EAX
007f8e5f  CALL 0x007f8639
007f8e64  CMP EAX,-0x1
007f8e67  POP ECX
007f8e68  JZ 0x007f8e7b
007f8e6a  MOV ECX,dword ptr [EBP + -0x14]
007f8e6d  MOV ECX,dword ptr [ECX]
007f8e6f  MOV EDX,dword ptr [EBP + -0x1c]
007f8e72  MOV dword ptr [EDX + ECX*0x1 + 0x1c],EAX
007f8e76  JMP 0x007f90b4
007f8e7b  MOV EAX,dword ptr [EBP + -0x18]
007f8e7e  TEST EAX,EAX
007f8e80  JG 0x007f8e84
007f8e82  XOR EAX,EAX
007f8e84  MOV ECX,dword ptr [EBP + -0x14]
007f8e87  IMUL EAX,EAX,0x34
007f8e8a  MOV ECX,dword ptr [ECX]
007f8e8c  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x1c]
007f8e90  MOV EDX,dword ptr [EBP + -0x1c]
007f8e93  MOV dword ptr [ECX + EDX*0x1 + 0x1c],EAX
007f8e97  JMP 0x007f90b4
007f8e9c  CMP ESI,dword ptr [EBP + -0x44]
007f8e9f  JNZ 0x007f8ee9
007f8ea1  MOV EAX,dword ptr [EBP + 0xc]
007f8ea4  SUB EAX,dword ptr [EBP + -0xc]
007f8ea7  MOV dword ptr [EBP + -0x24],EAX
007f8eaa  MOV EAX,dword ptr [EBP + -0x20]
007f8ead  MOV dword ptr [EBP + -0x28],EAX
007f8eb0  MOV EAX,dword ptr [EBP + -0x18]
007f8eb3  TEST EAX,EAX
007f8eb5  JG 0x007f8eb9
007f8eb7  XOR EAX,EAX
007f8eb9  MOV ECX,dword ptr [EBX]
007f8ebb  IMUL EAX,EAX,0x34
007f8ebe  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x20]
007f8ec2  MOV dword ptr [EBP + -0x8],EAX
007f8ec5  LEA EAX,[EBP + -0x8]
007f8ec8  PUSH EAX
007f8ec9  LEA ESI,[EBP + -0x24]
007f8ecc  LEA EBX,[EBP + -0x28]
007f8ecf  CALL 0x007f86e9
007f8ed4  MOV EAX,dword ptr [EBP + -0x14]
007f8ed7  MOV EAX,dword ptr [EAX]
007f8ed9  MOV EDX,dword ptr [EBP + -0x1c]
007f8edc  POP ECX
007f8edd  MOV ECX,dword ptr [EBP + -0x8]
007f8ee0  MOV dword ptr [EDX + EAX*0x1 + 0x20],ECX
007f8ee4  JMP 0x007f90b1
007f8ee9  CMP ESI,dword ptr [EBP + -0x60]
007f8eec  JNZ 0x007f8f34
007f8eee  MOV EAX,dword ptr [EBP + 0xc]
007f8ef1  SUB EAX,dword ptr [EBP + -0xc]
007f8ef4  MOV dword ptr [EBP + -0x24],EAX
007f8ef7  MOV EAX,dword ptr [EBP + -0x20]
007f8efa  MOV dword ptr [EBP + -0x28],EAX
007f8efd  MOV EAX,dword ptr [EBP + -0x18]
007f8f00  TEST EAX,EAX
007f8f02  JG 0x007f8f06
007f8f04  XOR EAX,EAX
007f8f06  MOV ECX,dword ptr [EBX]
007f8f08  IMUL EAX,EAX,0x34
007f8f0b  MOV EAX,dword ptr [EAX + ECX*0x1]
007f8f0e  MOV dword ptr [EBP + -0x8],EAX
007f8f11  LEA EAX,[EBP + -0x8]
007f8f14  PUSH EAX
007f8f15  LEA ESI,[EBP + -0x24]
007f8f18  LEA EBX,[EBP + -0x28]
007f8f1b  CALL 0x007f86e9
007f8f20  MOV EAX,dword ptr [EBP + -0x14]
007f8f23  MOV EAX,dword ptr [EAX]
007f8f25  MOV EDX,dword ptr [EBP + -0x1c]
007f8f28  POP ECX
007f8f29  MOV ECX,dword ptr [EBP + -0x8]
007f8f2c  MOV dword ptr [EDX + EAX*0x1],ECX
007f8f2f  JMP 0x007f90b1
007f8f34  CMP ESI,dword ptr [EBP + -0x4c]
007f8f37  JNZ 0x007f8f81
007f8f39  MOV EAX,dword ptr [EBP + 0xc]
007f8f3c  SUB EAX,dword ptr [EBP + -0xc]
007f8f3f  MOV dword ptr [EBP + -0x24],EAX
007f8f42  MOV EAX,dword ptr [EBP + -0x20]
007f8f45  MOV dword ptr [EBP + -0x28],EAX
007f8f48  MOV EAX,dword ptr [EBP + -0x18]
007f8f4b  TEST EAX,EAX
007f8f4d  JG 0x007f8f51
007f8f4f  XOR EAX,EAX
007f8f51  MOV ECX,dword ptr [EBX]
007f8f53  IMUL EAX,EAX,0x34
007f8f56  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
007f8f5a  MOV dword ptr [EBP + -0x8],EAX
007f8f5d  LEA EAX,[EBP + -0x8]
007f8f60  PUSH EAX
007f8f61  LEA ESI,[EBP + -0x24]
007f8f64  LEA EBX,[EBP + -0x28]
007f8f67  CALL 0x007f86e9
007f8f6c  MOV EAX,dword ptr [EBP + -0x14]
007f8f6f  MOV EAX,dword ptr [EAX]
007f8f71  MOV EDX,dword ptr [EBP + -0x1c]
007f8f74  POP ECX
007f8f75  MOV ECX,dword ptr [EBP + -0x8]
007f8f78  MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX
007f8f7c  JMP 0x007f90b1
007f8f81  CMP ESI,dword ptr [EBP + -0x34]
007f8f84  JNZ 0x007f8fcf
007f8f86  MOV EAX,dword ptr [EBP + 0xc]
007f8f89  SUB EAX,dword ptr [EBP + -0xc]
007f8f8c  MOV dword ptr [EBP + -0x24],EAX
007f8f8f  MOV EAX,dword ptr [EBP + -0x20]
007f8f92  MOV dword ptr [EBP + -0x28],EAX
007f8f95  MOV EAX,dword ptr [EBP + -0x18]
007f8f98  TEST EAX,EAX
007f8f9a  JG 0x007f8f9e
007f8f9c  XOR EAX,EAX
007f8f9e  MOV ECX,dword ptr [EBX]
007f8fa0  IMUL EAX,EAX,0x34
007f8fa3  MOVZX EAX,byte ptr [EAX + ECX*0x1 + 0x24]
007f8fa8  MOV dword ptr [EBP + -0x8],EAX
007f8fab  LEA EAX,[EBP + -0x8]
007f8fae  PUSH EAX
007f8faf  LEA ESI,[EBP + -0x24]
007f8fb2  LEA EBX,[EBP + -0x28]
007f8fb5  CALL 0x007f86e9
007f8fba  MOV EAX,dword ptr [EBP + -0x14]
007f8fbd  MOV EAX,dword ptr [EAX]
007f8fbf  MOV EDX,dword ptr [EBP + -0x1c]
007f8fc2  POP ECX
007f8fc3  MOV CL,byte ptr [EBP + -0x8]
007f8fc6  MOV byte ptr [EDX + EAX*0x1 + 0x24],CL
007f8fca  JMP 0x007f90b1
007f8fcf  CMP ESI,dword ptr [EBP + -0x38]
007f8fd2  JNZ 0x007f901d
007f8fd4  MOV EAX,dword ptr [EBP + 0xc]
007f8fd7  SUB EAX,dword ptr [EBP + -0xc]
007f8fda  MOV dword ptr [EBP + -0x24],EAX
007f8fdd  MOV EAX,dword ptr [EBP + -0x20]
007f8fe0  MOV dword ptr [EBP + -0x28],EAX
007f8fe3  MOV EAX,dword ptr [EBP + -0x18]
007f8fe6  TEST EAX,EAX
007f8fe8  JG 0x007f8fec
007f8fea  XOR EAX,EAX
007f8fec  MOV ECX,dword ptr [EBX]
007f8fee  IMUL EAX,EAX,0x34
007f8ff1  MOVZX EAX,byte ptr [EAX + ECX*0x1 + 0x25]
007f8ff6  MOV dword ptr [EBP + -0x8],EAX
007f8ff9  LEA EAX,[EBP + -0x8]
007f8ffc  PUSH EAX
007f8ffd  LEA ESI,[EBP + -0x24]
007f9000  LEA EBX,[EBP + -0x28]
007f9003  CALL 0x007f86e9
007f9008  MOV EAX,dword ptr [EBP + -0x14]
007f900b  MOV EAX,dword ptr [EAX]
007f900d  MOV EDX,dword ptr [EBP + -0x1c]
007f9010  POP ECX
007f9011  MOV CL,byte ptr [EBP + -0x8]
007f9014  MOV byte ptr [EDX + EAX*0x1 + 0x25],CL
007f9018  JMP 0x007f90b1
007f901d  CMP ESI,dword ptr [EBP + -0x40]
007f9020  JNZ 0x007f9068
007f9022  MOV EAX,dword ptr [EBP + 0xc]
007f9025  SUB EAX,dword ptr [EBP + -0xc]
007f9028  MOV dword ptr [EBP + -0x24],EAX
007f902b  MOV EAX,dword ptr [EBP + -0x20]
007f902e  MOV dword ptr [EBP + -0x28],EAX
007f9031  MOV EAX,dword ptr [EBP + -0x18]
007f9034  TEST EAX,EAX
007f9036  JG 0x007f903a
007f9038  XOR EAX,EAX
007f903a  MOV ECX,dword ptr [EBX]
007f903c  IMUL EAX,EAX,0x34
007f903f  MOVZX EAX,byte ptr [EAX + ECX*0x1 + 0x26]
007f9044  MOV dword ptr [EBP + -0x8],EAX
007f9047  LEA EAX,[EBP + -0x8]
007f904a  PUSH EAX
007f904b  LEA ESI,[EBP + -0x24]
007f904e  LEA EBX,[EBP + -0x28]
007f9051  CALL 0x007f86e9
007f9056  MOV EAX,dword ptr [EBP + -0x14]
007f9059  MOV EAX,dword ptr [EAX]
007f905b  MOV EDX,dword ptr [EBP + -0x1c]
007f905e  POP ECX
007f905f  MOV CL,byte ptr [EBP + -0x8]
007f9062  MOV byte ptr [EDX + EAX*0x1 + 0x26],CL
007f9066  JMP 0x007f90b1
007f9068  CMP ESI,dword ptr [EBP + -0x48]
007f906b  JNZ 0x007f90b7
007f906d  MOV EAX,dword ptr [EBP + 0xc]
007f9070  SUB EAX,dword ptr [EBP + -0xc]
007f9073  MOV dword ptr [EBP + -0x24],EAX
007f9076  MOV EAX,dword ptr [EBP + -0x20]
007f9079  MOV dword ptr [EBP + -0x28],EAX
007f907c  MOV EAX,dword ptr [EBP + -0x18]
007f907f  TEST EAX,EAX
007f9081  JG 0x007f9085
007f9083  XOR EAX,EAX
007f9085  MOV ECX,dword ptr [EBX]
007f9087  IMUL EAX,EAX,0x34
007f908a  MOVZX EAX,byte ptr [EAX + ECX*0x1 + 0x27]
007f908f  MOV dword ptr [EBP + -0x8],EAX
007f9092  LEA EAX,[EBP + -0x8]
007f9095  PUSH EAX
007f9096  LEA ESI,[EBP + -0x24]
007f9099  LEA EBX,[EBP + -0x28]
007f909c  CALL 0x007f86e9
007f90a1  MOV EAX,dword ptr [EBP + -0x14]
007f90a4  MOV EAX,dword ptr [EAX]
007f90a6  MOV EDX,dword ptr [EBP + -0x1c]
007f90a9  POP ECX
007f90aa  MOV CL,byte ptr [EBP + -0x8]
007f90ad  MOV byte ptr [EDX + EAX*0x1 + 0x27],CL
007f90b1  MOV ESI,dword ptr [EBP + -0x10]
007f90b4  MOV EBX,dword ptr [EBP + -0x14]
007f90b7  INC ESI
007f90b8  CMP EDI,dword ptr [EBP + 0xc]
007f90bb  MOV dword ptr [EBP + -0x10],ESI
007f90be  JZ 0x007f90c9
007f90c0  MOV AL,byte ptr [EBP + -0x29]
007f90c3  MOV ECX,dword ptr [EBP + 0x8]
007f90c6  MOV byte ptr [EDI + ECX*0x1],AL
007f90c9  MOV EAX,dword ptr [EBP + 0xc]
007f90cc  CMP dword ptr [EBP + -0xc],EAX
007f90cf  JC 0x007f8c34
007f90d5  POP EDI
007f90d6  POP ESI
007f90d7  POP EBX
007f90d8  LEAVE
007f90d9  RET 0x8
