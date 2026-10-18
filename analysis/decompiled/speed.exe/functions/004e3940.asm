004e3940  PUSH ECX
004e3941  MOV EAX,dword ptr [ECX + 0x1c]
004e3944  PUSH EDI
004e3945  XOR EDI,EDI
004e3947  MOV dword ptr [ECX + 0x4c],EDI
004e394a  MOV EDX,dword ptr [EAX + 0x8]
004e394d  CMP EDX,EDI
004e394f  JL 0x004e3aa2
004e3955  ADD EAX,EDX
004e3957  MOV dword ptr [ECX + 0x24],EAX
004e395a  CMP dword ptr [EAX],EDI
004e395c  JLE 0x004e3aa2
004e3962  MOV EDX,dword ptr [ECX + 0x4]
004e3965  PUSH EBX
004e3966  MOV EBX,dword ptr [EDX + 0x10c]
004e396c  MOV EDX,dword ptr [EDX + 0x14c]
004e3972  LEA EDX,[EDX + EBX*0x8]
004e3975  MOV dword ptr [ECX + 0x14],EDX
004e3978  CMP dword ptr [EAX],EDI
004e397a  PUSH ESI
004e397b  LEA ESI,[EAX + 0x10]
004e397e  MOV dword ptr [ESP + 0xc],EDI
004e3982  JLE 0x004e3aa0
004e3988  PUSH EBP
004e3989  JMP 0x004e3990
004e398b  XOR EDI,EDI
004e398d  LEA ECX,[ECX]
004e3990  CMP dword ptr [ECX + 0x40],EDI
004e3993  JZ 0x004e39a4
004e3995  MOV EAX,dword ptr [ECX + 0x5c]
004e3998  MOV EDX,dword ptr [EAX + 0x14]
004e399b  MOV EAX,dword ptr [ESP + 0x10]
004e399f  MOV EBP,dword ptr [EDX + EAX*0x8]
004e39a2  JMP 0x004e39cd
004e39a4  MOV EAX,dword ptr [ECX + 0x4]
004e39a7  MOV EDX,dword ptr [EAX + 0x110]
004e39ad  MOV EBP,dword ptr [EAX + 0x150]
004e39b3  LEA EBX,[EDX + EDX*0x4]
004e39b6  LEA EBP,[EBP + EBX*0x4]
004e39ba  INC EDX
004e39bb  MOV dword ptr [EAX + 0x110],EDX
004e39c1  MOV dword ptr [EBP],ESI
004e39c4  MOV dword ptr [EBP + 0x10],EDI
004e39c7  MOV dword ptr [EBP + 0x8],EDI
004e39ca  MOV dword ptr [EBP + 0xc],EDI
004e39cd  MOV EDX,dword ptr [ECX + 0x4]
004e39d0  MOV EDI,dword ptr [EDX + 0x10c]
004e39d6  MOV EAX,dword ptr [EDX + 0x14c]
004e39dc  LEA EAX,[EAX + EDI*0x8]
004e39df  INC EDI
004e39e0  MOV dword ptr [EDX + 0x10c],EDI
004e39e6  MOV EDI,dword ptr [ECX + 0x4]
004e39e9  MOV EBX,dword ptr [EDI + 0x114]
004e39ef  MOV EDX,EBX
004e39f1  SHL EDX,0x5
004e39f4  ADD EDX,dword ptr [EDI + 0x154]
004e39fa  INC EBX
004e39fb  MOV dword ptr [EDI + 0x114],EBX
004e3a01  MOV dword ptr [EAX],EBP
004e3a03  LEA EDI,[ESI + 0x4]
004e3a06  MOV dword ptr [EBP + 0x4],EDI
004e3a09  MOV dword ptr [EAX + 0x4],EDX
004e3a0c  XOR EDI,EDI
004e3a0e  MOV dword ptr [EDX + 0x8],EDI
004e3a11  MOV EDX,dword ptr [EAX + 0x4]
004e3a14  MOV dword ptr [EDX + 0xc],EDI
004e3a17  MOV EDX,dword ptr [EAX + 0x4]
004e3a1a  MOV dword ptr [EDX + 0x10],0x7fff
004e3a21  MOV EDX,dword ptr [EAX + 0x4]
004e3a24  MOV dword ptr [EDX + 0x14],EDI
004e3a27  MOV EDI,dword ptr [EAX + 0x4]
004e3a2a  MOV EDX,0x3f800000
004e3a2f  MOV dword ptr [EDI + 0x1c],EDX
004e3a32  MOV EDI,dword ptr [EAX + 0x4]
004e3a35  MOV dword ptr [EDI + 0x18],EDX
004e3a38  MOV EDX,dword ptr [EAX]
004e3a3a  MOV EDX,dword ptr [EDX]
004e3a3c  MOV EDX,dword ptr [EDX]
004e3a3e  MOV EDI,dword ptr [ECX + 0x40]
004e3a41  AND EDX,0xffff07ff
004e3a47  SHL EDI,0xb
004e3a4a  OR EDX,EDI
004e3a4c  MOV EDI,dword ptr [EAX + 0x4]
004e3a4f  MOV dword ptr [EDI],EDX
004e3a51  MOV EDI,dword ptr [EAX]
004e3a53  MOV EDI,dword ptr [EDI]
004e3a55  MOV EDX,dword ptr [ECX + 0x40]
004e3a58  MOV EAX,dword ptr [EAX + 0x4]
004e3a5b  MOV EDI,dword ptr [EDI]
004e3a5d  AND EDX,0x3ffff
004e3a63  OR EDX,0xc0000
004e3a69  SHL EDX,0xb
004e3a6c  AND EDI,0x1fffffff
004e3a72  OR EDX,EDI
004e3a74  MOV dword ptr [EAX + 0x4],EDX
004e3a77  INC dword ptr [ECX + 0x4c]
004e3a7a  XOR EAX,EAX
004e3a7c  MOV AL,byte ptr [ESI + 0x3]
004e3a7f  AND EAX,0xf
004e3a82  LEA EDX,[EAX + EAX*0x2]
004e3a85  MOV EAX,dword ptr [ESP + 0x10]
004e3a89  LEA ESI,[ESI + EDX*0x8 + 0x4]
004e3a8d  MOV EDX,dword ptr [ECX + 0x24]
004e3a90  MOV EDI,dword ptr [EDX]
004e3a92  INC EAX
004e3a93  CMP EAX,EDI
004e3a95  MOV dword ptr [ESP + 0x10],EAX
004e3a99  JL 0x004e398b
004e3a9f  POP EBP
004e3aa0  POP ESI
004e3aa1  POP EBX
004e3aa2  POP EDI
004e3aa3  POP ECX
004e3aa4  RET
