006d49a0  PUSH EBP
006d49a1  MOV EBP,ESP
006d49a3  AND ESP,0xfffffff0
006d49a6  SUB ESP,0x104
006d49ac  PUSH EBX
006d49ad  PUSH ESI
006d49ae  PUSH EDI
006d49af  MOV EDI,dword ptr [EBP + 0x8]
006d49b2  MOV EBX,dword ptr [EDI + 0x6c]
006d49b5  TEST EBX,EBX
006d49b7  JZ 0x006d4db5
006d49bd  MOV AL,[0x009b0a74]
006d49c2  TEST AL,AL
006d49c4  JZ 0x006d4db5
006d49ca  MOV AL,byte ptr [EBP + 0xc]
006d49cd  TEST AL,AL
006d49cf  MOV EAX,[0x00982c60]
006d49d4  JNZ 0x006d4a50
006d49d6  LEA ECX,[EAX + 0x1]
006d49d9  AND ECX,0x80000001
006d49df  JNS 0x006d49e6
006d49e1  DEC ECX
006d49e2  OR ECX,0xfffffffe
006d49e5  INC ECX
006d49e6  MOV EAX,dword ptr [EAX*0x4 + 0x93def8]
006d49ed  MOV ESI,dword ptr [ECX*0x4 + 0x93de60]
006d49f4  MOV ECX,dword ptr [0x0098299c]
006d49fa  MOV EDX,dword ptr [0x00982970]
006d4a00  PUSH 0x0
006d4a02  PUSH 0x8f94f4
006d4a07  PUSH 0x1
006d4a09  PUSH EAX
006d4a0a  PUSH ECX
006d4a0b  MOV dword ptr [ESP + 0x3c],EDX
006d4a0f  CALL 0x006d2cd0
006d4a14  MOV EDX,dword ptr [0x00982c60]
006d4a1a  MOV EAX,dword ptr [EDX*0x4 + 0x93def8]
006d4a21  PUSH 0x0
006d4a23  PUSH 0x8f94f4
006d4a28  PUSH 0x1
006d4a2a  PUSH EAX
006d4a2b  PUSH ESI
006d4a2c  CALL 0x006d2cd0
006d4a31  MOV ECX,dword ptr [0x00982c60]
006d4a37  ADD ESP,0x28
006d4a3a  INC ECX
006d4a3b  AND ECX,0x80000001
006d4a41  JNS 0x006d4a48
006d4a43  DEC ECX
006d4a44  OR ECX,0xfffffffe
006d4a47  INC ECX
006d4a48  MOV dword ptr [0x00982c60],ECX
006d4a4e  JMP 0x006d4ab6
006d4a50  MOV EDX,dword ptr [0x00982970]
006d4a56  MOV ECX,dword ptr [EAX*0x4 + 0x93def8]
006d4a5d  MOV ESI,dword ptr [0x00982a28]
006d4a63  PUSH 0x0
006d4a65  PUSH 0x8f94f4
006d4a6a  PUSH 0x1
006d4a6c  MOV dword ptr [ESP + 0x34],EDX
006d4a70  MOV EDX,dword ptr [0x0098299c]
006d4a76  PUSH ECX
006d4a77  PUSH EDX
006d4a78  CALL 0x006d2cd0
006d4a7d  MOV EAX,[0x00982c60]
006d4a82  MOV ECX,dword ptr [EAX*0x4 + 0x93def8]
006d4a89  PUSH 0x0
006d4a8b  PUSH 0x8f94f4
006d4a90  PUSH 0x1
006d4a92  PUSH ECX
006d4a93  PUSH ESI
006d4a94  CALL 0x006d2cd0
006d4a99  MOV EDX,dword ptr [0x00982c60]
006d4a9f  ADD ESP,0x28
006d4aa2  INC EDX
006d4aa3  AND EDX,0x80000001
006d4aa9  JNS 0x006d4ab0
006d4aab  DEC EDX
006d4aac  OR EDX,0xfffffffe
006d4aaf  INC EDX
006d4ab0  MOV dword ptr [0x00982c60],EDX
006d4ab6  MOV EAX,[0x00982bdc]
006d4abb  MOV ECX,dword ptr [EAX]
006d4abd  PUSH ESI
006d4abe  PUSH 0x0
006d4ac0  PUSH EAX
006d4ac1  CALL dword ptr [ECX + 0x94]
006d4ac7  LEA EDX,[ESP + 0x2c]
006d4acb  PUSH EDX
006d4acc  LEA EAX,[ESP + 0x28]
006d4ad0  PUSH EAX
006d4ad1  LEA ECX,[ESP + 0x24]
006d4ad5  PUSH ECX
006d4ad6  LEA EDX,[ESP + 0x24]
006d4ada  PUSH EDX
006d4adb  MOV ECX,EBX
006d4add  CALL 0x0073d060
006d4ae2  FLD float ptr [ESP + 0x24]
006d4ae6  FMUL float ptr [0x008933d4]
006d4aec  MOV EBX,dword ptr [0x0093de9c]
006d4af2  MOV dword ptr [0x00982c80],EBX
006d4af8  MOV ECX,EBX
006d4afa  FSUBR float ptr [ESP + 0x18]
006d4afe  FSTP float ptr [ESP + 0x18]
006d4b02  FLD float ptr [ESP + 0x2c]
006d4b06  FMUL float ptr [0x008933d4]
006d4b0c  FSUBR float ptr [ESP + 0x1c]
006d4b10  FSTP float ptr [ESP + 0x1c]
006d4b14  MOV EAX,dword ptr [EBX]
006d4b16  CALL dword ptr [EAX + 0x4]
006d4b19  MOV EDX,dword ptr [EBX + 0x4c]
006d4b1c  MOV EAX,[0x00982bdc]
006d4b21  MOV ECX,dword ptr [EAX]
006d4b23  PUSH EDX
006d4b24  PUSH EAX
006d4b25  CALL dword ptr [ECX + 0x15c]
006d4b2b  MOV EAX,dword ptr [EBX + 0x48]
006d4b2e  MOV ECX,dword ptr [EAX]
006d4b30  PUSH 0x0
006d4b32  LEA EDX,[ESP + 0x24]
006d4b36  PUSH EDX
006d4b37  PUSH EAX
006d4b38  CALL dword ptr [ECX + 0xfc]
006d4b3e  MOV EAX,dword ptr [EDI]
006d4b40  MOV EDI,EAX
006d4b42  MOV dword ptr [ESP + 0x30],0x3f800000
006d4b4a  MOV dword ptr [ESP + 0x34],0x0
006d4b52  MOV dword ptr [ESP + 0x38],0x0
006d4b5a  MOV dword ptr [ESP + 0x3c],0x0
006d4b62  MOV dword ptr [ESP + 0x40],0x0
006d4b6a  MOV dword ptr [ESP + 0x44],0x3f800000
006d4b72  MOV dword ptr [ESP + 0x48],0x0
006d4b7a  MOV dword ptr [ESP + 0x4c],0x0
006d4b82  MOV dword ptr [ESP + 0x50],0x0
006d4b8a  MOV dword ptr [ESP + 0x54],0x0
006d4b92  MOV dword ptr [ESP + 0x58],0x3f800000
006d4b9a  MOV dword ptr [ESP + 0x5c],0x0
006d4ba2  MOV dword ptr [ESP + 0x60],0x0
006d4baa  MOV dword ptr [ESP + 0x64],0x0
006d4bb2  MOV dword ptr [ESP + 0x68],0x0
006d4bba  MOV dword ptr [ESP + 0x6c],0x3f800000
006d4bc2  MOV ECX,0x10
006d4bc7  LEA ESI,[ESP + 0x30]
006d4bcb  MOVSD.REP ES:EDI,ESI
006d4bcd  LEA ECX,[EAX + 0x40]
006d4bd0  PUSH ECX
006d4bd1  PUSH EAX
006d4bd2  ADD EAX,0x80
006d4bd7  PUSH EAX
006d4bd8  CALL 0x007e7d5e
006d4bdd  MOV EDX,dword ptr [EBP + 0x8]
006d4be0  MOV EAX,dword ptr [EDX]
006d4be2  LEA EDX,[EAX + 0x40]
006d4be5  PUSH EDX
006d4be6  MOV ECX,0x10
006d4beb  LEA ESI,[ESP + 0x34]
006d4bef  MOV EDI,EDX
006d4bf1  PUSH EAX
006d4bf2  MOVSD.REP ES:EDI,ESI
006d4bf4  ADD EAX,0x80
006d4bf9  PUSH EAX
006d4bfa  CALL 0x007e7d5e
006d4bff  LEA EAX,[ESP + 0x30]
006d4c03  PUSH 0x0
006d4c05  PUSH EAX
006d4c06  CALL 0x006c8000
006d4c0b  ADD ESP,0x8
006d4c0e  LEA ECX,[ESP + 0x70]
006d4c12  CALL 0x006c0a30
006d4c17  FLD float ptr [ESP + 0x18]
006d4c1b  FMUL float ptr [0x008afa08]
006d4c21  MOV ECX,dword ptr [ESP + 0x18]
006d4c25  MOV EDX,dword ptr [ESP + 0x1c]
006d4c29  MOV dword ptr [ESP + 0x70],ECX
006d4c2d  FST float ptr [ESP + 0xb0]
006d4c34  MOV ECX,EDX
006d4c36  FLD float ptr [ESP + 0x1c]
006d4c3a  MOV dword ptr [ESP + 0x74],EDX
006d4c3e  FMUL float ptr [0x008afa04]
006d4c44  MOV dword ptr [ESP + 0x84],ECX
006d4c4b  MOV CL,0xff
006d4c4d  FST float ptr [ESP + 0xb4]
006d4c54  FLD float ptr [ESP + 0x18]
006d4c58  FADD float ptr [ESP + 0x24]
006d4c5c  FST float ptr [ESP + 0x20]
006d4c60  MOV EAX,dword ptr [ESP + 0x20]
006d4c64  FMUL float ptr [0x008afa08]
006d4c6a  MOV EDX,EAX
006d4c6c  MOV dword ptr [ESP + 0x80],EAX
006d4c73  MOV EAX,dword ptr [ESP + 0x18]
006d4c77  FST float ptr [ESP + 0xb8]
006d4c7e  MOV dword ptr [ESP + 0xa0],EAX
006d4c85  FXCH
006d4c87  MOV dword ptr [ESP + 0x90],EDX
006d4c8e  FSTP float ptr [ESP + 0xbc]
006d4c95  XOR EAX,EAX
006d4c97  FSTP float ptr [ESP + 0xc0]
006d4c9e  FLD float ptr [ESP + 0x1c]
006d4ca2  FADD float ptr [ESP + 0x2c]
006d4ca6  FLD float ptr [0x008afa04]
006d4cac  FMUL ST1
006d4cae  FST float ptr [ESP + 0xc4]
006d4cb5  FXCH ST2
006d4cb7  FSTP float ptr [ESP + 0xc8]
006d4cbe  FXCH
006d4cc0  FSTP float ptr [ESP + 0xcc]
006d4cc7  FST float ptr [ESP + 0x94]
006d4cce  FSTP float ptr [ESP + 0xa4]
006d4cd5  JMP 0x006d4ce0
006d4ce0  MOV byte ptr [ESP + EAX*0x4 + 0xf0],CL
006d4ce7  MOV byte ptr [ESP + EAX*0x4 + 0xf1],CL
006d4cee  MOV byte ptr [ESP + EAX*0x4 + 0xf2],CL
006d4cf5  MOV byte ptr [ESP + EAX*0x4 + 0xf3],CL
006d4cfc  INC EAX
006d4cfd  CMP EAX,0x4
006d4d00  JL 0x006d4ce0
006d4d02  MOV EAX,[0x00982bdc]
006d4d07  MOV ECX,dword ptr [EAX]
006d4d09  PUSH 0x0
006d4d0b  PUSH 0xe
006d4d0d  PUSH EAX
006d4d0e  CALL dword ptr [ECX + 0xe4]
006d4d14  MOV EAX,[0x00982bdc]
006d4d19  MOV EDX,dword ptr [EAX]
006d4d1b  PUSH 0x0
006d4d1d  PUSH 0x7
006d4d1f  PUSH EAX
006d4d20  CALL dword ptr [EDX + 0xe4]
006d4d26  MOV ECX,dword ptr [0x0093de9c]
006d4d2c  MOV EAX,dword ptr [ECX + 0x48]
006d4d2f  MOV ECX,dword ptr [ECX + 0x44]
006d4d32  MOV ESI,dword ptr [ESP + 0x28]
006d4d36  MOV ECX,dword ptr [ECX + 0x22c]
006d4d3c  MOV EDX,dword ptr [EAX]
006d4d3e  PUSH ESI
006d4d3f  PUSH ECX
006d4d40  PUSH EAX
006d4d41  CALL dword ptr [EDX + 0xd0]
006d4d47  PUSH 0x1
006d4d49  PUSH 0x0
006d4d4b  CALL 0x006c67c0
006d4d50  PUSH 0x6
006d4d52  PUSH 0x5
006d4d54  PUSH 0x0
006d4d56  CALL 0x006c6810
006d4d5b  CALL 0x006c83a0
006d4d60  PUSH 0x0
006d4d62  LEA EDX,[ESP + 0x88]
006d4d69  PUSH 0x0
006d4d6b  PUSH EDX
006d4d6c  CALL 0x006d1260
006d4d71  MOV EAX,dword ptr [EBX]
006d4d73  ADD ESP,0x20
006d4d76  MOV ECX,EBX
006d4d78  CALL dword ptr [EAX + 0x8]
006d4d7b  MOV EBX,dword ptr [EBX + 0x48]
006d4d7e  MOV ECX,dword ptr [EBX]
006d4d80  PUSH EBX
006d4d81  CALL dword ptr [ECX + 0x10c]
006d4d87  MOV EAX,[0x00982bdc]
006d4d8c  PUSH 0x1
006d4d8e  PUSH 0xe
006d4d90  MOV dword ptr [0x00982c80],0x0
006d4d9a  MOV EDX,dword ptr [EAX]
006d4d9c  PUSH EAX
006d4d9d  CALL dword ptr [EDX + 0xe4]
006d4da3  MOV EAX,[0x00982bdc]
006d4da8  MOV ECX,dword ptr [EAX]
006d4daa  PUSH 0x1
006d4dac  PUSH 0x7
006d4dae  PUSH EAX
006d4daf  CALL dword ptr [ECX + 0xe4]
006d4db5  POP EDI
006d4db6  POP ESI
006d4db7  POP EBX
006d4db8  MOV ESP,EBP
006d4dba  POP EBP
006d4dbb  RET
