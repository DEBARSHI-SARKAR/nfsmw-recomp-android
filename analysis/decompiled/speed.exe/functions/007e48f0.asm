007e48f0  PUSH EBP
007e48f1  MOV EBP,ESP
007e48f3  SUB ESP,0x40
007e48f6  MOV dword ptr [EBP + -0x28],0xc
007e48fd  MOV dword ptr [EBP + -0x24],0x0
007e4904  MOV EAX,dword ptr [EBP + 0x14]
007e4907  AND EAX,0x80
007e490c  JZ 0x007e491b
007e490e  MOV dword ptr [EBP + -0x20],0x0
007e4915  MOV byte ptr [EBP + -0x1],0x10
007e4919  JMP 0x007e4926
007e491b  MOV dword ptr [EBP + -0x20],0x1
007e4922  MOV byte ptr [EBP + -0x1],0x0
007e4926  MOV ECX,dword ptr [EBP + 0x14]
007e4929  AND ECX,0x8000
007e492f  JNZ 0x007e4963
007e4931  MOV EDX,dword ptr [EBP + 0x14]
007e4934  AND EDX,0x4000
007e493a  JZ 0x007e494a
007e493c  MOVSX EAX,byte ptr [EBP + -0x1]
007e4940  OR EAX,0x80
007e4945  MOV byte ptr [EBP + -0x1],AL
007e4948  JMP 0x007e4963
007e494a  CMP dword ptr [0x009baf58],0x8000
007e4954  JZ 0x007e4963
007e4956  MOVSX ECX,byte ptr [EBP + -0x1]
007e495a  OR ECX,0x80
007e4960  MOV byte ptr [EBP + -0x1],CL
007e4963  MOV EDX,dword ptr [EBP + 0x14]
007e4966  AND EDX,0x3
007e4969  MOV dword ptr [EBP + -0x38],EDX
007e496c  JZ 0x007e497c
007e496e  CMP dword ptr [EBP + -0x38],0x1
007e4972  JZ 0x007e4985
007e4974  CMP dword ptr [EBP + -0x38],0x2
007e4978  JZ 0x007e498e
007e497a  JMP 0x007e4997
007e497c  MOV dword ptr [EBP + -0x8],0x80000000
007e4983  JMP 0x007e49b5
007e4985  MOV dword ptr [EBP + -0x8],0x40000000
007e498c  JMP 0x007e49b5
007e498e  MOV dword ptr [EBP + -0x8],0xc0000000
007e4995  JMP 0x007e49b5
007e4997  CALL 0x007cb270
007e499c  MOV dword ptr [EAX],0x16
007e49a2  CALL 0x007cb280
007e49a7  MOV dword ptr [EAX],0x0
007e49ad  OR EAX,0xffffffff
007e49b0  JMP 0x007e4d9a
007e49b5  MOV EAX,dword ptr [EBP + 0x18]
007e49b8  MOV dword ptr [EBP + -0x3c],EAX
007e49bb  MOV ECX,dword ptr [EBP + -0x3c]
007e49be  SUB ECX,0x10
007e49c1  MOV dword ptr [EBP + -0x3c],ECX
007e49c4  CMP dword ptr [EBP + -0x3c],0x30
007e49c8  JA 0x007e49ff
007e49ca  MOV EDX,dword ptr [EBP + -0x3c]
007e49cd  MOVZX EAX,byte ptr [EDX + 0x7e4db2]
007e49d4  JMP dword ptr [EAX*0x4 + 0x7e4d9e]
007e49db  MOV dword ptr [EBP + -0x10],0x0
007e49e2  JMP 0x007e4a1d
007e49e4  MOV dword ptr [EBP + -0x10],0x1
007e49eb  JMP 0x007e4a1d
007e49ed  MOV dword ptr [EBP + -0x10],0x2
007e49f4  JMP 0x007e4a1d
007e49f6  MOV dword ptr [EBP + -0x10],0x3
007e49fd  JMP 0x007e4a1d
007e49ff  CALL 0x007cb270
007e4a04  MOV dword ptr [EAX],0x16
007e4a0a  CALL 0x007cb280
007e4a0f  MOV dword ptr [EAX],0x0
007e4a15  OR EAX,0xffffffff
007e4a18  JMP 0x007e4d9a
007e4a1d  MOV ECX,dword ptr [EBP + 0x14]
007e4a20  AND ECX,0x700
007e4a26  MOV dword ptr [EBP + -0x40],ECX
007e4a29  CMP dword ptr [EBP + -0x40],0x400
007e4a30  JG 0x007e4a69
007e4a32  CMP dword ptr [EBP + -0x40],0x400
007e4a39  JZ 0x007e4a86
007e4a3b  CMP dword ptr [EBP + -0x40],0x200
007e4a42  JG 0x007e4a5e
007e4a44  CMP dword ptr [EBP + -0x40],0x200
007e4a4b  JZ 0x007e4aa1
007e4a4d  CMP dword ptr [EBP + -0x40],0x0
007e4a51  JZ 0x007e4a86
007e4a53  CMP dword ptr [EBP + -0x40],0x100
007e4a5a  JZ 0x007e4a8f
007e4a5c  JMP 0x007e4ab3
007e4a5e  CMP dword ptr [EBP + -0x40],0x300
007e4a65  JZ 0x007e4aaa
007e4a67  JMP 0x007e4ab3
007e4a69  CMP dword ptr [EBP + -0x40],0x500
007e4a70  JZ 0x007e4a98
007e4a72  CMP dword ptr [EBP + -0x40],0x600
007e4a79  JZ 0x007e4aa1
007e4a7b  CMP dword ptr [EBP + -0x40],0x700
007e4a82  JZ 0x007e4a98
007e4a84  JMP 0x007e4ab3
007e4a86  MOV dword ptr [EBP + -0x2c],0x3
007e4a8d  JMP 0x007e4ad1
007e4a8f  MOV dword ptr [EBP + -0x2c],0x4
007e4a96  JMP 0x007e4ad1
007e4a98  MOV dword ptr [EBP + -0x2c],0x1
007e4a9f  JMP 0x007e4ad1
007e4aa1  MOV dword ptr [EBP + -0x2c],0x5
007e4aa8  JMP 0x007e4ad1
007e4aaa  MOV dword ptr [EBP + -0x2c],0x2
007e4ab1  JMP 0x007e4ad1
007e4ab3  CALL 0x007cb270
007e4ab8  MOV dword ptr [EAX],0x16
007e4abe  CALL 0x007cb280
007e4ac3  MOV dword ptr [EAX],0x0
007e4ac9  OR EAX,0xffffffff
007e4acc  JMP 0x007e4d9a
007e4ad1  MOV dword ptr [EBP + -0x14],0x80
007e4ad8  MOV EDX,dword ptr [EBP + 0x14]
007e4adb  AND EDX,0x100
007e4ae1  JZ 0x007e4afb
007e4ae3  MOV EAX,[0x009baa1c]
007e4ae8  NOT EAX
007e4aea  AND EAX,dword ptr [EBP + 0x1c]
007e4aed  AND EAX,0x80
007e4af2  JNZ 0x007e4afb
007e4af4  MOV dword ptr [EBP + -0x14],0x1
007e4afb  MOV ECX,dword ptr [EBP + 0x14]
007e4afe  AND ECX,0x40
007e4b01  JZ 0x007e4b2c
007e4b03  MOV EDX,dword ptr [EBP + -0x14]
007e4b06  OR EDX,0x4000000
007e4b0c  MOV dword ptr [EBP + -0x14],EDX
007e4b0f  MOV EAX,dword ptr [EBP + -0x8]
007e4b12  OR EAX,0x10000
007e4b17  MOV dword ptr [EBP + -0x8],EAX
007e4b1a  CMP dword ptr [0x009baa20],0x2
007e4b21  JNZ 0x007e4b2c
007e4b23  MOV ECX,dword ptr [EBP + -0x10]
007e4b26  OR ECX,0x4
007e4b29  MOV dword ptr [EBP + -0x10],ECX
007e4b2c  MOV EDX,dword ptr [EBP + 0x14]
007e4b2f  AND EDX,0x1000
007e4b35  JZ 0x007e4b42
007e4b37  MOV EAX,dword ptr [EBP + -0x14]
007e4b3a  OR EAX,0x100
007e4b3f  MOV dword ptr [EBP + -0x14],EAX
007e4b42  MOV ECX,dword ptr [EBP + 0x14]
007e4b45  AND ECX,0x20
007e4b48  JZ 0x007e4b58
007e4b4a  MOV EDX,dword ptr [EBP + -0x14]
007e4b4d  OR EDX,0x8000000
007e4b53  MOV dword ptr [EBP + -0x14],EDX
007e4b56  JMP 0x007e4b6c
007e4b58  MOV EAX,dword ptr [EBP + 0x14]
007e4b5b  AND EAX,0x10
007e4b5e  JZ 0x007e4b6c
007e4b60  MOV ECX,dword ptr [EBP + -0x14]
007e4b63  OR ECX,0x10000000
007e4b69  MOV dword ptr [EBP + -0x14],ECX
007e4b6c  CALL 0x007e4090
007e4b71  MOV dword ptr [EBP + -0x1c],EAX
007e4b74  CMP dword ptr [EBP + -0x1c],-0x1
007e4b78  JNZ 0x007e4b98
007e4b7a  CALL 0x007cb270
007e4b7f  MOV dword ptr [EAX],0x18
007e4b85  CALL 0x007cb280
007e4b8a  MOV dword ptr [EAX],0x0
007e4b90  OR EAX,0xffffffff
007e4b93  JMP 0x007e4d9a
007e4b98  MOV EDX,dword ptr [EBP + 0x8]
007e4b9b  MOV dword ptr [EDX],0x1
007e4ba1  MOV EAX,dword ptr [EBP + 0xc]
007e4ba4  MOV ECX,dword ptr [EBP + -0x1c]
007e4ba7  MOV dword ptr [EAX],ECX
007e4ba9  PUSH 0x0
007e4bab  MOV EDX,dword ptr [EBP + -0x14]
007e4bae  PUSH EDX
007e4baf  MOV EAX,dword ptr [EBP + -0x2c]
007e4bb2  PUSH EAX
007e4bb3  LEA ECX,[EBP + -0x28]
007e4bb6  PUSH ECX
007e4bb7  MOV EDX,dword ptr [EBP + -0x10]
007e4bba  PUSH EDX
007e4bbb  MOV EAX,dword ptr [EBP + -0x8]
007e4bbe  PUSH EAX
007e4bbf  MOV ECX,dword ptr [EBP + 0x10]
007e4bc2  PUSH ECX
007e4bc3  CALL dword ptr [0x008902ac]
007e4bc9  MOV dword ptr [EBP + -0x18],EAX
007e4bcc  CMP dword ptr [EBP + -0x18],-0x1
007e4bd0  JNZ 0x007e4be9
007e4bd2  CALL dword ptr [0x00890188]
007e4bd8  PUSH EAX
007e4bd9  CALL 0x007cb1d0
007e4bde  ADD ESP,0x4
007e4be1  OR EAX,0xffffffff
007e4be4  JMP 0x007e4d9a
007e4be9  MOV EDX,dword ptr [EBP + -0x18]
007e4bec  PUSH EDX
007e4bed  CALL dword ptr [0x008901f4]
007e4bf3  MOV dword ptr [EBP + -0xc],EAX
007e4bf6  CMP dword ptr [EBP + -0xc],0x0
007e4bfa  JNZ 0x007e4c1d
007e4bfc  MOV EAX,dword ptr [EBP + -0x18]
007e4bff  PUSH EAX
007e4c00  CALL dword ptr [0x00890078]
007e4c06  CALL dword ptr [0x00890188]
007e4c0c  PUSH EAX
007e4c0d  CALL 0x007cb1d0
007e4c12  ADD ESP,0x4
007e4c15  OR EAX,0xffffffff
007e4c18  JMP 0x007e4d9a
007e4c1d  CMP dword ptr [EBP + -0xc],0x2
007e4c21  JNZ 0x007e4c2f
007e4c23  MOVSX ECX,byte ptr [EBP + -0x1]
007e4c27  OR ECX,0x40
007e4c2a  MOV byte ptr [EBP + -0x1],CL
007e4c2d  JMP 0x007e4c3f
007e4c2f  CMP dword ptr [EBP + -0xc],0x3
007e4c33  JNZ 0x007e4c3f
007e4c35  MOVSX EDX,byte ptr [EBP + -0x1]
007e4c39  OR EDX,0x8
007e4c3c  MOV byte ptr [EBP + -0x1],DL
007e4c3f  MOV EAX,dword ptr [EBP + -0x18]
007e4c42  PUSH EAX
007e4c43  MOV ECX,dword ptr [EBP + -0x1c]
007e4c46  PUSH ECX
007e4c47  CALL 0x007e4310
007e4c4c  ADD ESP,0x8
007e4c4f  MOVSX EDX,byte ptr [EBP + -0x1]
007e4c53  OR EDX,0x1
007e4c56  MOV byte ptr [EBP + -0x1],DL
007e4c59  MOV EAX,dword ptr [EBP + -0x1c]
007e4c5c  SAR EAX,0x5
007e4c5f  MOV ECX,dword ptr [EBP + -0x1c]
007e4c62  AND ECX,0x1f
007e4c65  IMUL ECX,ECX,0x24
007e4c68  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007e4c6f  MOV AL,byte ptr [EBP + -0x1]
007e4c72  MOV byte ptr [EDX + ECX*0x1 + 0x4],AL
007e4c76  MOVSX ECX,byte ptr [EBP + -0x1]
007e4c7a  AND ECX,0x48
007e4c7d  JNZ 0x007e4d4e
007e4c83  MOVSX EDX,byte ptr [EBP + -0x1]
007e4c87  AND EDX,0x80
007e4c8d  JZ 0x007e4d4e
007e4c93  MOV EAX,dword ptr [EBP + 0x14]
007e4c96  AND EAX,0x2
007e4c99  JZ 0x007e4d4e
007e4c9f  PUSH 0x2
007e4ca1  PUSH -0x1
007e4ca3  MOV ECX,dword ptr [EBP + -0x1c]
007e4ca6  PUSH ECX
007e4ca7  CALL 0x007e3b90
007e4cac  ADD ESP,0xc
007e4caf  MOV dword ptr [EBP + -0x34],EAX
007e4cb2  CMP dword ptr [EBP + -0x34],-0x1
007e4cb6  JNZ 0x007e4cdb
007e4cb8  CALL 0x007cb280
007e4cbd  CMP dword ptr [EAX],0x83
007e4cc3  JZ 0x007e4cd9
007e4cc5  MOV EDX,dword ptr [EBP + -0x1c]
007e4cc8  PUSH EDX
007e4cc9  CALL 0x007d75b0
007e4cce  ADD ESP,0x4
007e4cd1  OR EAX,0xffffffff
007e4cd4  JMP 0x007e4d9a
007e4cd9  JMP 0x007e4d4e
007e4cdb  MOV byte ptr [EBP + -0x2d],0x0
007e4cdf  PUSH 0x1
007e4ce1  LEA EAX,[EBP + -0x2d]
007e4ce4  PUSH EAX
007e4ce5  MOV ECX,dword ptr [EBP + -0x1c]
007e4ce8  PUSH ECX
007e4ce9  CALL 0x007db6c0
007e4cee  ADD ESP,0xc
007e4cf1  TEST EAX,EAX
007e4cf3  JNZ 0x007e4d24
007e4cf5  MOVSX EDX,byte ptr [EBP + -0x2d]
007e4cf9  CMP EDX,0x1a
007e4cfc  JNZ 0x007e4d24
007e4cfe  MOV EAX,dword ptr [EBP + -0x34]
007e4d01  PUSH EAX
007e4d02  MOV ECX,dword ptr [EBP + -0x1c]
007e4d05  PUSH ECX
007e4d06  CALL 0x007e6890
007e4d0b  ADD ESP,0x8
007e4d0e  CMP EAX,-0x1
007e4d11  JNZ 0x007e4d24
007e4d13  MOV EDX,dword ptr [EBP + -0x1c]
007e4d16  PUSH EDX
007e4d17  CALL 0x007d75b0
007e4d1c  ADD ESP,0x4
007e4d1f  OR EAX,0xffffffff
007e4d22  JMP 0x007e4d9a
007e4d24  PUSH 0x0
007e4d26  PUSH 0x0
007e4d28  MOV EAX,dword ptr [EBP + -0x1c]
007e4d2b  PUSH EAX
007e4d2c  CALL 0x007e3b90
007e4d31  ADD ESP,0xc
007e4d34  MOV dword ptr [EBP + -0x34],EAX
007e4d37  CMP dword ptr [EBP + -0x34],-0x1
007e4d3b  JNZ 0x007e4d4e
007e4d3d  MOV ECX,dword ptr [EBP + -0x1c]
007e4d40  PUSH ECX
007e4d41  CALL 0x007d75b0
007e4d46  ADD ESP,0x4
007e4d49  OR EAX,0xffffffff
007e4d4c  JMP 0x007e4d9a
007e4d4e  MOVSX EDX,byte ptr [EBP + -0x1]
007e4d52  AND EDX,0x48
007e4d55  JNZ 0x007e4d97
007e4d57  MOV EAX,dword ptr [EBP + 0x14]
007e4d5a  AND EAX,0x8
007e4d5d  JZ 0x007e4d97
007e4d5f  MOV ECX,dword ptr [EBP + -0x1c]
007e4d62  SAR ECX,0x5
007e4d65  MOV EDX,dword ptr [EBP + -0x1c]
007e4d68  AND EDX,0x1f
007e4d6b  IMUL EDX,EDX,0x24
007e4d6e  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007e4d75  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007e4d7a  OR ECX,0x20
007e4d7d  MOV EDX,dword ptr [EBP + -0x1c]
007e4d80  SAR EDX,0x5
007e4d83  MOV EAX,dword ptr [EBP + -0x1c]
007e4d86  AND EAX,0x1f
007e4d89  IMUL EAX,EAX,0x24
007e4d8c  MOV EDX,dword ptr [EDX*0x4 + 0x9c5340]
007e4d93  MOV byte ptr [EDX + EAX*0x1 + 0x4],CL
007e4d97  MOV EAX,dword ptr [EBP + -0x1c]
007e4d9a  MOV ESP,EBP
007e4d9c  POP EBP
007e4d9d  RET
