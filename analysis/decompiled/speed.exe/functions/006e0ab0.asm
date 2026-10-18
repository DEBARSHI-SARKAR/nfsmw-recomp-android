006e0ab0  PUSH EBP
006e0ab1  MOV EBP,ESP
006e0ab3  AND ESP,0xfffffff0
006e0ab6  SUB ESP,0x44
006e0ab9  MOV EAX,dword ptr [EBP + 0x18]
006e0abc  MOV ECX,dword ptr [EAX]
006e0abe  MOV CL,byte ptr [ECX + 0x51]
006e0ac1  PUSH EBX
006e0ac2  PUSH ESI
006e0ac3  XOR DL,DL
006e0ac5  TEST CL,CL
006e0ac7  PUSH EDI
006e0ac8  JZ 0x006e0acc
006e0aca  MOV DL,CL
006e0acc  MOV ESI,dword ptr [0x00982cdc]
006e0ad2  CMP ESI,0x1000
006e0ad8  JGE 0x006e0df3
006e0ade  MOV ECX,dword ptr [EBP + 0x8]
006e0ae1  IMUL ESI,ESI,0x44
006e0ae4  MOV EBX,dword ptr [EBP + 0x28]
006e0ae7  MOV EDI,dword ptr [EBP + 0x14]
006e0aea  ADD ESI,0x93e878
006e0af0  MOV dword ptr [ESI],ECX
006e0af2  MOV ECX,dword ptr [EBP + 0xc]
006e0af5  MOV dword ptr [ESI + 0x8],ECX
006e0af8  MOV ECX,dword ptr [EBP + 0x10]
006e0afb  MOV dword ptr [ESI + 0xc],ECX
006e0afe  MOV ECX,dword ptr [EBP + 0x20]
006e0b01  MOV dword ptr [ESI + 0x14],ECX
006e0b04  MOV ECX,dword ptr [EBP + 0x24]
006e0b07  MOV dword ptr [ESI + 0x18],ECX
006e0b0a  MOV ECX,dword ptr [EBP + 0x1c]
006e0b0d  MOV dword ptr [ESI + 0x4],0x0
006e0b14  MOV dword ptr [ESI + 0x1c],ECX
006e0b17  MOV dword ptr [ESI + 0x10],EDI
006e0b1a  MOV dword ptr [ESI + 0x20],EBX
006e0b1d  MOV dword ptr [ESI + 0x3c],0x0
006e0b24  MOV dword ptr [ESI + 0x40],0xbf800000
006e0b2b  MOV EBX,dword ptr [EAX]
006e0b2d  MOV dword ptr [ESI + 0x24],EBX
006e0b30  MOV EBX,dword ptr [EAX + 0x4]
006e0b33  MOV dword ptr [ESI + 0x28],EBX
006e0b36  MOV EBX,dword ptr [EAX + 0x8]
006e0b39  MOV dword ptr [ESI + 0x2c],EBX
006e0b3c  MOV EBX,dword ptr [EAX + 0xc]
006e0b3f  MOV dword ptr [ESI + 0x30],EBX
006e0b42  MOV EBX,dword ptr [EAX + 0x10]
006e0b45  MOV dword ptr [ESI + 0x34],EBX
006e0b48  MOV EAX,dword ptr [EAX]
006e0b4a  CMP byte ptr [EAX + 0x54],0x2
006e0b4e  JNZ 0x006e0b6a
006e0b50  MOV EDX,dword ptr [ESI + 0x4]
006e0b53  PUSH ECX
006e0b54  MOV ECX,dword ptr [ESI]
006e0b56  PUSH ECX
006e0b57  PUSH EDX
006e0b58  CALL 0x006c6f30
006e0b5d  ADD ESP,0xc
006e0b60  OR EAX,0x80000000
006e0b65  JMP 0x006e0d2f
006e0b6a  TEST DL,DL
006e0b6c  JZ 0x006e0b7b
006e0b6e  MOVSX EAX,DL
006e0b71  OR EAX,0x80000000
006e0b76  JMP 0x006e0d2f
006e0b7b  XOR EAX,EAX
006e0b7d  MOV dword ptr [ESI + 0x38],EAX
006e0b80  MOV EDX,dword ptr [ESI + 0x24]
006e0b83  CMP EDX,EAX
006e0b85  JZ 0x006e0b8d
006e0b87  MOV EDX,dword ptr [EDX + 0x24]
006e0b8a  MOV dword ptr [ESI + 0x38],EDX
006e0b8d  CMP dword ptr [ESI + 0x28],EAX
006e0b90  JZ 0x006e0ba0
006e0b92  MOV EDX,dword ptr [ESI + 0x38]
006e0b95  MOV EBX,dword ptr [ESI + 0x28]
006e0b98  SHL EDX,0x1
006e0b9a  XOR EDX,dword ptr [EBX + 0x24]
006e0b9d  MOV dword ptr [ESI + 0x38],EDX
006e0ba0  CMP dword ptr [ESI + 0x2c],EAX
006e0ba3  JZ 0x006e0bb3
006e0ba5  MOV EDX,dword ptr [ESI + 0x38]
006e0ba8  MOV EBX,dword ptr [ESI + 0x2c]
006e0bab  SHL EDX,0x1
006e0bad  XOR EDX,dword ptr [EBX + 0x24]
006e0bb0  MOV dword ptr [ESI + 0x38],EDX
006e0bb3  MOV EDX,dword ptr [ESI + 0x30]
006e0bb6  CMP EDX,EAX
006e0bb8  JZ 0x006e0bc5
006e0bba  MOV EBX,dword ptr [ESI + 0x38]
006e0bbd  SHL EBX,0x1
006e0bbf  XOR EBX,dword ptr [EDX + 0x24]
006e0bc2  MOV dword ptr [ESI + 0x38],EBX
006e0bc5  CMP dword ptr [ESI + 0x34],EAX
006e0bc8  JZ 0x006e0bd8
006e0bca  MOV EDX,dword ptr [ESI + 0x38]
006e0bcd  MOV EBX,dword ptr [ESI + 0x34]
006e0bd0  SHL EDX,0x1
006e0bd2  XOR EDX,dword ptr [EBX + 0x24]
006e0bd5  MOV dword ptr [ESI + 0x38],EDX
006e0bd8  MOV EBX,dword ptr [ESI + 0x38]
006e0bdb  MOV EDX,dword ptr [ESI + 0xc]
006e0bde  XOR EBX,EDX
006e0be0  MOV EDX,dword ptr [0x00982a20]
006e0be6  MOV dword ptr [ESI + 0x38],EBX
006e0be9  MOV byte ptr [ESI + 0x3b],0x0
006e0bed  CMP dword ptr [EDX + 0x4],0x1
006e0bf1  MOV EBX,dword ptr [EDI + 0x4]
006e0bf4  JNZ 0x006e0d27
006e0bfa  CMP EBX,0x12
006e0bfd  JA 0x006e0d27
006e0c03  MOVZX EDX,byte ptr [EBX + 0x6e0e04]
006e0c0a  JMP dword ptr [EDX*0x4 + 0x6e0dfc]
006e0c11  CMP dword ptr [0x00901830],EAX
006e0c17  JLE 0x006e0d1c
006e0c1d  MOV EAX,dword ptr [EBP + 0x8]
006e0c20  MOV EDX,dword ptr [EAX]
006e0c22  MOV dword ptr [ESP + 0x20],EDX
006e0c26  MOV EDX,dword ptr [EAX + 0x4]
006e0c29  MOV dword ptr [ESP + 0x24],EDX
006e0c2d  MOV EDX,dword ptr [EAX + 0x8]
006e0c30  MOV dword ptr [ESP + 0x28],EDX
006e0c34  MOV EDX,dword ptr [EAX + 0xc]
006e0c37  MOV dword ptr [ESP + 0x10],EDX
006e0c3b  MOV EDX,dword ptr [EAX + 0x10]
006e0c3e  MOV EAX,dword ptr [EAX + 0x14]
006e0c41  MOV dword ptr [ESP + 0x14],EDX
006e0c45  LEA EDX,[ESP + 0x10]
006e0c49  MOV dword ptr [ESP + 0x18],EAX
006e0c4d  PUSH EDX
006e0c4e  LEA EAX,[ESP + 0x24]
006e0c52  PUSH EAX
006e0c53  PUSH ECX
006e0c54  CALL 0x006be800
006e0c59  FLD float ptr [ESP + 0x1c]
006e0c5d  FADD float ptr [ESP + 0x2c]
006e0c61  MOV EDX,dword ptr [0x00919650]
006e0c67  LEA ECX,[ESP + 0x4c]
006e0c6b  PUSH ECX
006e0c6c  FMUL float ptr [0x008933d4]
006e0c72  ADD EDX,0x80
006e0c78  PUSH EDX
006e0c79  FSTP float ptr [ESP + 0x54]
006e0c7d  LEA EAX,[ESP + 0x44]
006e0c81  FLD float ptr [ESP + 0x28]
006e0c85  PUSH EAX
006e0c86  FADD float ptr [ESP + 0x3c]
006e0c8a  FMUL float ptr [0x008933d4]
006e0c90  FSTP float ptr [ESP + 0x5c]
006e0c94  FLD float ptr [ESP + 0x30]
006e0c98  FADD float ptr [ESP + 0x40]
006e0c9c  FMUL float ptr [0x008933d4]
006e0ca2  FSTP float ptr [ESP + 0x60]
006e0ca6  CALL 0x0045ed20
006e0cab  FLD float ptr [0x008fae68]
006e0cb1  ADD ESP,0x18
006e0cb4  FCOMP float ptr [0x008fae50]
006e0cba  FNSTSW AX
006e0cbc  TEST AH,0x41
006e0cbf  JNP 0x006e0dc2
006e0cc5  FLD float ptr [ESP + 0x38]
006e0cc9  FCOMP float ptr [0x008fae60]
006e0ccf  FNSTSW AX
006e0cd1  TEST AH,0x41
006e0cd4  JZ 0x006e0dc2
006e0cda  FLD float ptr [ESP + 0x38]
006e0cde  FCOMP float ptr [0x008fae58]
006e0ce4  FLD float ptr [ESP + 0x38]
006e0ce8  FNSTSW AX
006e0cea  TEST AH,0x41
006e0ced  JNZ 0x006e0d9b
006e0cf3  FCOMP float ptr [0x008fae5c]
006e0cf9  MOV EDI,dword ptr [EDI + 0x38]
006e0cfc  FNSTSW AX
006e0cfe  TEST AH,0x5
006e0d01  MOV EAX,[0x00982c3c]
006e0d06  JP 0x006e0d70
006e0d08  DEC EAX
006e0d09  CMP EDI,EAX
006e0d0b  JGE 0x006e0d0f
006e0d0d  MOV EAX,EDI
006e0d0f  CMP EAX,0x1
006e0d12  MOV dword ptr [ESI + 0x3c],EAX
006e0d15  JG 0x006e0d1c
006e0d17  MOV EAX,0x1
006e0d1c  MOV dword ptr [ESI + 0x3c],EAX
006e0d1f  MOV EAX,dword ptr [ESI + 0x3c]
006e0d22  IMUL EAX,EAX,0x1f
006e0d25  ADD EBX,EAX
006e0d27  MOV EAX,dword ptr [ESI + 0x38]
006e0d2a  SHL EBX,0x18
006e0d2d  OR EAX,EBX
006e0d2f  MOV ECX,dword ptr [0x009877b4]
006e0d35  MOV dword ptr [ESI + 0x38],EAX
006e0d38  MOV ESI,EAX
006e0d3a  MOV EAX,[0x00982cdc]
006e0d3f  MOV dword ptr [ECX + EAX*0x8],EAX
006e0d42  MOV EAX,[0x009877b4]
006e0d47  MOV EDX,dword ptr [0x00982cdc]
006e0d4d  MOV dword ptr [EAX + EDX*0x8 + 0x4],ESI
006e0d51  CMP dword ptr [0x008fae70],-0x1
006e0d58  JNZ 0x006e0dce
006e0d5a  MOV dword ptr [0x008fae70],0x0
006e0d64  MOV dword ptr [0x00982cd4],0x1
006e0d6e  JMP 0x006e0dd4
006e0d70  ADD EAX,-0x2
006e0d73  CMP EDI,EAX
006e0d75  JGE 0x006e0d79
006e0d77  MOV EAX,EDI
006e0d79  CMP EAX,0x1
006e0d7c  MOV dword ptr [ESI + 0x3c],EAX
006e0d7f  JG 0x006e0d86
006e0d81  MOV EAX,0x1
006e0d86  MOV ECX,dword ptr [ESI + 0x10]
006e0d89  MOV dword ptr [ESI + 0x3c],EAX
006e0d8c  CMP dword ptr [ECX + 0x4],0x4
006e0d90  JZ 0x006e0d1f
006e0d92  MOV EDX,dword ptr [ESP + 0x38]
006e0d96  MOV dword ptr [ESI + 0x40],EDX
006e0d99  JMP 0x006e0d1f
006e0d9b  FCOMP float ptr [0x008fae58]
006e0da1  FNSTSW AX
006e0da3  TEST AH,0x41
006e0da6  JP 0x006e0d1f
006e0dac  MOV EDI,dword ptr [EDI + 0x38]
006e0daf  MOV EAX,[0x00982c3c]
006e0db4  CMP EAX,EDI
006e0db6  JGE 0x006e0dba
006e0db8  MOV EDI,EAX
006e0dba  MOV dword ptr [ESI + 0x3c],EDI
006e0dbd  JMP 0x006e0d1f
006e0dc2  MOV dword ptr [ESI + 0x3c],0x0
006e0dc9  JMP 0x006e0d1f
006e0dce  INC dword ptr [0x00982cd4]
006e0dd4  MOV ECX,dword ptr [EBP + 0x8]
006e0dd7  MOV EDX,dword ptr [ECX + 0x5c]
006e0dda  MOV ECX,dword ptr [0x00982cd8]
006e0de0  MOV EAX,[0x00982cdc]
006e0de5  ADD ECX,EDX
006e0de7  INC EAX
006e0de8  MOV dword ptr [0x00982cd8],ECX
006e0dee  MOV [0x00982cdc],EAX
006e0df3  POP EDI
006e0df4  POP ESI
006e0df5  POP EBX
006e0df6  MOV ESP,EBP
006e0df8  POP EBP
006e0df9  RET
