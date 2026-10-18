007d5880  PUSH EBP
007d5881  MOV EBP,ESP
007d5883  SUB ESP,0x38
007d5886  PUSH ESI
007d5887  MOV EAX,[0x009c52e8]
007d588c  IMUL EAX,EAX,0x14
007d588f  ADD EAX,dword ptr [0x009c52ec]
007d5895  MOV dword ptr [EBP + -0xc],EAX
007d5898  MOV ECX,dword ptr [EBP + 0x8]
007d589b  ADD ECX,0x17
007d589e  AND ECX,0xfffffff0
007d58a1  MOV dword ptr [EBP + -0x38],ECX
007d58a4  MOV EDX,dword ptr [EBP + -0x38]
007d58a7  SAR EDX,0x4
007d58aa  SUB EDX,0x1
007d58ad  MOV dword ptr [EBP + -0x34],EDX
007d58b0  CMP dword ptr [EBP + -0x34],0x20
007d58b4  JGE 0x007d58ca
007d58b6  OR EAX,0xffffffff
007d58b9  MOV ECX,dword ptr [EBP + -0x34]
007d58bc  SHR EAX,CL
007d58be  MOV dword ptr [EBP + -0x18],EAX
007d58c1  MOV dword ptr [EBP + -0x30],0xffffffff
007d58c8  JMP 0x007d58df
007d58ca  MOV dword ptr [EBP + -0x18],0x0
007d58d1  MOV ECX,dword ptr [EBP + -0x34]
007d58d4  SUB ECX,0x20
007d58d7  OR EDX,0xffffffff
007d58da  SHR EDX,CL
007d58dc  MOV dword ptr [EBP + -0x30],EDX
007d58df  MOV EAX,[0x009c52f4]
007d58e4  MOV dword ptr [EBP + -0x1c],EAX
007d58e7  MOV ECX,dword ptr [EBP + -0x1c]
007d58ea  CMP ECX,dword ptr [EBP + -0xc]
007d58ed  JNC 0x007d5911
007d58ef  MOV EDX,dword ptr [EBP + -0x1c]
007d58f2  MOV EAX,dword ptr [EBP + -0x18]
007d58f5  AND EAX,dword ptr [EDX]
007d58f7  MOV ECX,dword ptr [EBP + -0x1c]
007d58fa  MOV EDX,dword ptr [EBP + -0x30]
007d58fd  AND EDX,dword ptr [ECX + 0x4]
007d5900  OR EAX,EDX
007d5902  JZ 0x007d5906
007d5904  JMP 0x007d5911
007d5906  MOV EAX,dword ptr [EBP + -0x1c]
007d5909  ADD EAX,0x14
007d590c  MOV dword ptr [EBP + -0x1c],EAX
007d590f  JMP 0x007d58e7
007d5911  MOV ECX,dword ptr [EBP + -0x1c]
007d5914  CMP ECX,dword ptr [EBP + -0xc]
007d5917  JNZ 0x007d59f8
007d591d  MOV EDX,dword ptr [0x009c52ec]
007d5923  MOV dword ptr [EBP + -0x1c],EDX
007d5926  MOV EAX,dword ptr [EBP + -0x1c]
007d5929  CMP EAX,dword ptr [0x009c52f4]
007d592f  JNC 0x007d5953
007d5931  MOV ECX,dword ptr [EBP + -0x1c]
007d5934  MOV EDX,dword ptr [EBP + -0x18]
007d5937  AND EDX,dword ptr [ECX]
007d5939  MOV EAX,dword ptr [EBP + -0x1c]
007d593c  MOV ECX,dword ptr [EBP + -0x30]
007d593f  AND ECX,dword ptr [EAX + 0x4]
007d5942  OR EDX,ECX
007d5944  JZ 0x007d5948
007d5946  JMP 0x007d5953
007d5948  MOV EDX,dword ptr [EBP + -0x1c]
007d594b  ADD EDX,0x14
007d594e  MOV dword ptr [EBP + -0x1c],EDX
007d5951  JMP 0x007d5926
007d5953  MOV EAX,dword ptr [EBP + -0x1c]
007d5956  CMP EAX,dword ptr [0x009c52f4]
007d595c  JNZ 0x007d59f8
007d5962  MOV ECX,dword ptr [EBP + -0x1c]
007d5965  CMP ECX,dword ptr [EBP + -0xc]
007d5968  JNC 0x007d5980
007d596a  MOV EDX,dword ptr [EBP + -0x1c]
007d596d  CMP dword ptr [EDX + 0x8],0x0
007d5971  JZ 0x007d5975
007d5973  JMP 0x007d5980
007d5975  MOV EAX,dword ptr [EBP + -0x1c]
007d5978  ADD EAX,0x14
007d597b  MOV dword ptr [EBP + -0x1c],EAX
007d597e  JMP 0x007d5962
007d5980  MOV ECX,dword ptr [EBP + -0x1c]
007d5983  CMP ECX,dword ptr [EBP + -0xc]
007d5986  JNZ 0x007d59d2
007d5988  MOV EDX,dword ptr [0x009c52ec]
007d598e  MOV dword ptr [EBP + -0x1c],EDX
007d5991  MOV EAX,dword ptr [EBP + -0x1c]
007d5994  CMP EAX,dword ptr [0x009c52f4]
007d599a  JNC 0x007d59b2
007d599c  MOV ECX,dword ptr [EBP + -0x1c]
007d599f  CMP dword ptr [ECX + 0x8],0x0
007d59a3  JZ 0x007d59a7
007d59a5  JMP 0x007d59b2
007d59a7  MOV EDX,dword ptr [EBP + -0x1c]
007d59aa  ADD EDX,0x14
007d59ad  MOV dword ptr [EBP + -0x1c],EDX
007d59b0  JMP 0x007d5991
007d59b2  MOV EAX,dword ptr [EBP + -0x1c]
007d59b5  CMP EAX,dword ptr [0x009c52f4]
007d59bb  JNZ 0x007d59d2
007d59bd  CALL 0x007d5da0
007d59c2  MOV dword ptr [EBP + -0x1c],EAX
007d59c5  CMP dword ptr [EBP + -0x1c],0x0
007d59c9  JNZ 0x007d59d2
007d59cb  XOR EAX,EAX
007d59cd  JMP 0x007d5d94
007d59d2  MOV ECX,dword ptr [EBP + -0x1c]
007d59d5  PUSH ECX
007d59d6  CALL 0x007d5eb0
007d59db  ADD ESP,0x4
007d59de  MOV EDX,dword ptr [EBP + -0x1c]
007d59e1  MOV ECX,dword ptr [EDX + 0x10]
007d59e4  MOV dword ptr [ECX],EAX
007d59e6  MOV EDX,dword ptr [EBP + -0x1c]
007d59e9  MOV EAX,dword ptr [EDX + 0x10]
007d59ec  CMP dword ptr [EAX],-0x1
007d59ef  JNZ 0x007d59f8
007d59f1  XOR EAX,EAX
007d59f3  JMP 0x007d5d94
007d59f8  MOV ECX,dword ptr [EBP + -0x1c]
007d59fb  MOV dword ptr [0x009c52f4],ECX
007d5a01  MOV EDX,dword ptr [EBP + -0x1c]
007d5a04  MOV EAX,dword ptr [EDX + 0x10]
007d5a07  MOV dword ptr [EBP + -0x28],EAX
007d5a0a  MOV ECX,dword ptr [EBP + -0x28]
007d5a0d  MOV EDX,dword ptr [ECX]
007d5a0f  MOV dword ptr [EBP + -0x14],EDX
007d5a12  CMP dword ptr [EBP + -0x14],-0x1
007d5a16  JZ 0x007d5a39
007d5a18  MOV EAX,dword ptr [EBP + -0x14]
007d5a1b  MOV ECX,dword ptr [EBP + -0x28]
007d5a1e  MOV EDX,dword ptr [EBP + -0x18]
007d5a21  AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d5a25  MOV EAX,dword ptr [EBP + -0x14]
007d5a28  MOV ECX,dword ptr [EBP + -0x28]
007d5a2b  MOV ESI,dword ptr [EBP + -0x30]
007d5a2e  AND ESI,dword ptr [ECX + EAX*0x4 + 0xc4]
007d5a35  OR EDX,ESI
007d5a37  JNZ 0x007d5a6c
007d5a39  MOV dword ptr [EBP + -0x14],0x0
007d5a40  MOV EDX,dword ptr [EBP + -0x14]
007d5a43  MOV EAX,dword ptr [EBP + -0x28]
007d5a46  MOV ECX,dword ptr [EBP + -0x18]
007d5a49  AND ECX,dword ptr [EAX + EDX*0x4 + 0x44]
007d5a4d  MOV EDX,dword ptr [EBP + -0x14]
007d5a50  MOV EAX,dword ptr [EBP + -0x28]
007d5a53  MOV ESI,dword ptr [EBP + -0x30]
007d5a56  AND ESI,dword ptr [EAX + EDX*0x4 + 0xc4]
007d5a5d  OR ECX,ESI
007d5a5f  JNZ 0x007d5a6c
007d5a61  MOV ECX,dword ptr [EBP + -0x14]
007d5a64  ADD ECX,0x1
007d5a67  MOV dword ptr [EBP + -0x14],ECX
007d5a6a  JMP 0x007d5a40
007d5a6c  MOV EDX,dword ptr [EBP + -0x14]
007d5a6f  IMUL EDX,EDX,0x204
007d5a75  MOV EAX,dword ptr [EBP + -0x28]
007d5a78  LEA ECX,[EAX + EDX*0x1 + 0x144]
007d5a7f  MOV dword ptr [EBP + -0x24],ECX
007d5a82  MOV dword ptr [EBP + -0x34],0x0
007d5a89  MOV EDX,dword ptr [EBP + -0x14]
007d5a8c  MOV EAX,dword ptr [EBP + -0x28]
007d5a8f  MOV ECX,dword ptr [EBP + -0x18]
007d5a92  AND ECX,dword ptr [EAX + EDX*0x4 + 0x44]
007d5a96  MOV dword ptr [EBP + -0x4],ECX
007d5a99  JNZ 0x007d5ab5
007d5a9b  MOV dword ptr [EBP + -0x34],0x20
007d5aa2  MOV EDX,dword ptr [EBP + -0x14]
007d5aa5  MOV EAX,dword ptr [EBP + -0x28]
007d5aa8  MOV ECX,dword ptr [EBP + -0x30]
007d5aab  AND ECX,dword ptr [EAX + EDX*0x4 + 0xc4]
007d5ab2  MOV dword ptr [EBP + -0x4],ECX
007d5ab5  CMP dword ptr [EBP + -0x4],0x0
007d5ab9  JL 0x007d5ace
007d5abb  MOV EDX,dword ptr [EBP + -0x4]
007d5abe  SHL EDX,0x1
007d5ac0  MOV dword ptr [EBP + -0x4],EDX
007d5ac3  MOV EAX,dword ptr [EBP + -0x34]
007d5ac6  ADD EAX,0x1
007d5ac9  MOV dword ptr [EBP + -0x34],EAX
007d5acc  JMP 0x007d5ab5
007d5ace  MOV ECX,dword ptr [EBP + -0x34]
007d5ad1  MOV EDX,dword ptr [EBP + -0x24]
007d5ad4  MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
007d5ad8  MOV dword ptr [EBP + -0x8],EAX
007d5adb  MOV ECX,dword ptr [EBP + -0x8]
007d5ade  MOV EDX,dword ptr [ECX]
007d5ae0  SUB EDX,dword ptr [EBP + -0x38]
007d5ae3  MOV dword ptr [EBP + -0x2c],EDX
007d5ae6  MOV EAX,dword ptr [EBP + -0x2c]
007d5ae9  SAR EAX,0x4
007d5aec  SUB EAX,0x1
007d5aef  MOV dword ptr [EBP + -0x10],EAX
007d5af2  CMP dword ptr [EBP + -0x10],0x3f
007d5af6  JLE 0x007d5aff
007d5af8  MOV dword ptr [EBP + -0x10],0x3f
007d5aff  MOV ECX,dword ptr [EBP + -0x10]
007d5b02  CMP ECX,dword ptr [EBP + -0x34]
007d5b05  JZ 0x007d5d13
007d5b0b  MOV EDX,dword ptr [EBP + -0x8]
007d5b0e  MOV EAX,dword ptr [EBP + -0x8]
007d5b11  MOV ECX,dword ptr [EDX + 0x4]
007d5b14  CMP ECX,dword ptr [EAX + 0x8]
007d5b17  JNZ 0x007d5be3
007d5b1d  CMP dword ptr [EBP + -0x34],0x20
007d5b21  JGE 0x007d5b7d
007d5b23  MOV EDX,0x80000000
007d5b28  MOV ECX,dword ptr [EBP + -0x34]
007d5b2b  SHR EDX,CL
007d5b2d  NOT EDX
007d5b2f  MOV EAX,dword ptr [EBP + -0x14]
007d5b32  MOV ECX,dword ptr [EBP + -0x28]
007d5b35  AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d5b39  MOV EAX,dword ptr [EBP + -0x14]
007d5b3c  MOV ECX,dword ptr [EBP + -0x28]
007d5b3f  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d5b43  MOV EDX,dword ptr [EBP + -0x28]
007d5b46  ADD EDX,dword ptr [EBP + -0x34]
007d5b49  MOV AL,byte ptr [EDX + 0x4]
007d5b4c  SUB AL,0x1
007d5b4e  MOV ECX,dword ptr [EBP + -0x28]
007d5b51  ADD ECX,dword ptr [EBP + -0x34]
007d5b54  MOV byte ptr [ECX + 0x4],AL
007d5b57  MOV EDX,dword ptr [EBP + -0x28]
007d5b5a  ADD EDX,dword ptr [EBP + -0x34]
007d5b5d  MOVSX EAX,byte ptr [EDX + 0x4]
007d5b61  TEST EAX,EAX
007d5b63  JNZ 0x007d5b7b
007d5b65  MOV EDX,0x80000000
007d5b6a  MOV ECX,dword ptr [EBP + -0x34]
007d5b6d  SHR EDX,CL
007d5b6f  NOT EDX
007d5b71  MOV EAX,dword ptr [EBP + -0x1c]
007d5b74  AND EDX,dword ptr [EAX]
007d5b76  MOV ECX,dword ptr [EBP + -0x1c]
007d5b79  MOV dword ptr [ECX],EDX
007d5b7b  JMP 0x007d5be3
007d5b7d  MOV ECX,dword ptr [EBP + -0x34]
007d5b80  SUB ECX,0x20
007d5b83  MOV EDX,0x80000000
007d5b88  SHR EDX,CL
007d5b8a  NOT EDX
007d5b8c  MOV EAX,dword ptr [EBP + -0x14]
007d5b8f  MOV ECX,dword ptr [EBP + -0x28]
007d5b92  AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d5b99  MOV EAX,dword ptr [EBP + -0x14]
007d5b9c  MOV ECX,dword ptr [EBP + -0x28]
007d5b9f  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d5ba6  MOV EDX,dword ptr [EBP + -0x28]
007d5ba9  ADD EDX,dword ptr [EBP + -0x34]
007d5bac  MOV AL,byte ptr [EDX + 0x4]
007d5baf  SUB AL,0x1
007d5bb1  MOV ECX,dword ptr [EBP + -0x28]
007d5bb4  ADD ECX,dword ptr [EBP + -0x34]
007d5bb7  MOV byte ptr [ECX + 0x4],AL
007d5bba  MOV EDX,dword ptr [EBP + -0x28]
007d5bbd  ADD EDX,dword ptr [EBP + -0x34]
007d5bc0  MOVSX EAX,byte ptr [EDX + 0x4]
007d5bc4  TEST EAX,EAX
007d5bc6  JNZ 0x007d5be3
007d5bc8  MOV ECX,dword ptr [EBP + -0x34]
007d5bcb  SUB ECX,0x20
007d5bce  MOV EDX,0x80000000
007d5bd3  SHR EDX,CL
007d5bd5  NOT EDX
007d5bd7  MOV EAX,dword ptr [EBP + -0x1c]
007d5bda  AND EDX,dword ptr [EAX + 0x4]
007d5bdd  MOV ECX,dword ptr [EBP + -0x1c]
007d5be0  MOV dword ptr [ECX + 0x4],EDX
007d5be3  MOV EDX,dword ptr [EBP + -0x8]
007d5be6  MOV EAX,dword ptr [EDX + 0x8]
007d5be9  MOV ECX,dword ptr [EBP + -0x8]
007d5bec  MOV EDX,dword ptr [ECX + 0x4]
007d5bef  MOV dword ptr [EAX + 0x4],EDX
007d5bf2  MOV EAX,dword ptr [EBP + -0x8]
007d5bf5  MOV ECX,dword ptr [EAX + 0x4]
007d5bf8  MOV EDX,dword ptr [EBP + -0x8]
007d5bfb  MOV EAX,dword ptr [EDX + 0x8]
007d5bfe  MOV dword ptr [ECX + 0x8],EAX
007d5c01  CMP dword ptr [EBP + -0x2c],0x0
007d5c05  JZ 0x007d5d13
007d5c0b  MOV ECX,dword ptr [EBP + -0x10]
007d5c0e  MOV EDX,dword ptr [EBP + -0x24]
007d5c11  LEA EAX,[EDX + ECX*0x8]
007d5c14  MOV dword ptr [EBP + -0x20],EAX
007d5c17  MOV ECX,dword ptr [EBP + -0x8]
007d5c1a  MOV EDX,dword ptr [EBP + -0x20]
007d5c1d  MOV EAX,dword ptr [EDX + 0x4]
007d5c20  MOV dword ptr [ECX + 0x4],EAX
007d5c23  MOV ECX,dword ptr [EBP + -0x8]
007d5c26  MOV EDX,dword ptr [EBP + -0x20]
007d5c29  MOV dword ptr [ECX + 0x8],EDX
007d5c2c  MOV EAX,dword ptr [EBP + -0x20]
007d5c2f  MOV ECX,dword ptr [EBP + -0x8]
007d5c32  MOV dword ptr [EAX + 0x4],ECX
007d5c35  MOV EDX,dword ptr [EBP + -0x8]
007d5c38  MOV EAX,dword ptr [EDX + 0x4]
007d5c3b  MOV ECX,dword ptr [EBP + -0x8]
007d5c3e  MOV dword ptr [EAX + 0x8],ECX
007d5c41  MOV EDX,dword ptr [EBP + -0x8]
007d5c44  MOV EAX,dword ptr [EBP + -0x8]
007d5c47  MOV ECX,dword ptr [EDX + 0x4]
007d5c4a  CMP ECX,dword ptr [EAX + 0x8]
007d5c4d  JNZ 0x007d5d13
007d5c53  CMP dword ptr [EBP + -0x10],0x20
007d5c57  JGE 0x007d5cb0
007d5c59  MOV EDX,dword ptr [EBP + -0x28]
007d5c5c  ADD EDX,dword ptr [EBP + -0x10]
007d5c5f  MOVSX EAX,byte ptr [EDX + 0x4]
007d5c63  MOV ECX,dword ptr [EBP + -0x28]
007d5c66  ADD ECX,dword ptr [EBP + -0x10]
007d5c69  MOV DL,byte ptr [ECX + 0x4]
007d5c6c  ADD DL,0x1
007d5c6f  MOV ECX,dword ptr [EBP + -0x28]
007d5c72  ADD ECX,dword ptr [EBP + -0x10]
007d5c75  MOV byte ptr [ECX + 0x4],DL
007d5c78  TEST EAX,EAX
007d5c7a  JNZ 0x007d5c90
007d5c7c  MOV EDX,0x80000000
007d5c81  MOV ECX,dword ptr [EBP + -0x10]
007d5c84  SHR EDX,CL
007d5c86  MOV EAX,dword ptr [EBP + -0x1c]
007d5c89  OR EDX,dword ptr [EAX]
007d5c8b  MOV ECX,dword ptr [EBP + -0x1c]
007d5c8e  MOV dword ptr [ECX],EDX
007d5c90  MOV EDX,0x80000000
007d5c95  MOV ECX,dword ptr [EBP + -0x10]
007d5c98  SHR EDX,CL
007d5c9a  MOV EAX,dword ptr [EBP + -0x14]
007d5c9d  MOV ECX,dword ptr [EBP + -0x28]
007d5ca0  OR EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d5ca4  MOV EAX,dword ptr [EBP + -0x14]
007d5ca7  MOV ECX,dword ptr [EBP + -0x28]
007d5caa  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d5cae  JMP 0x007d5d13
007d5cb0  MOV EDX,dword ptr [EBP + -0x28]
007d5cb3  ADD EDX,dword ptr [EBP + -0x10]
007d5cb6  MOVSX EAX,byte ptr [EDX + 0x4]
007d5cba  MOV ECX,dword ptr [EBP + -0x28]
007d5cbd  ADD ECX,dword ptr [EBP + -0x10]
007d5cc0  MOV DL,byte ptr [ECX + 0x4]
007d5cc3  ADD DL,0x1
007d5cc6  MOV ECX,dword ptr [EBP + -0x28]
007d5cc9  ADD ECX,dword ptr [EBP + -0x10]
007d5ccc  MOV byte ptr [ECX + 0x4],DL
007d5ccf  TEST EAX,EAX
007d5cd1  JNZ 0x007d5cec
007d5cd3  MOV ECX,dword ptr [EBP + -0x10]
007d5cd6  SUB ECX,0x20
007d5cd9  MOV EDX,0x80000000
007d5cde  SHR EDX,CL
007d5ce0  MOV EAX,dword ptr [EBP + -0x1c]
007d5ce3  OR EDX,dword ptr [EAX + 0x4]
007d5ce6  MOV ECX,dword ptr [EBP + -0x1c]
007d5ce9  MOV dword ptr [ECX + 0x4],EDX
007d5cec  MOV ECX,dword ptr [EBP + -0x10]
007d5cef  SUB ECX,0x20
007d5cf2  MOV EDX,0x80000000
007d5cf7  SHR EDX,CL
007d5cf9  MOV EAX,dword ptr [EBP + -0x14]
007d5cfc  MOV ECX,dword ptr [EBP + -0x28]
007d5cff  OR EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d5d06  MOV EAX,dword ptr [EBP + -0x14]
007d5d09  MOV ECX,dword ptr [EBP + -0x28]
007d5d0c  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d5d13  CMP dword ptr [EBP + -0x2c],0x0
007d5d17  JZ 0x007d5d2d
007d5d19  MOV EDX,dword ptr [EBP + -0x8]
007d5d1c  MOV EAX,dword ptr [EBP + -0x2c]
007d5d1f  MOV dword ptr [EDX],EAX
007d5d21  MOV ECX,dword ptr [EBP + -0x8]
007d5d24  ADD ECX,dword ptr [EBP + -0x2c]
007d5d27  MOV EDX,dword ptr [EBP + -0x2c]
007d5d2a  MOV dword ptr [ECX + -0x4],EDX
007d5d2d  MOV EAX,dword ptr [EBP + -0x8]
007d5d30  ADD EAX,dword ptr [EBP + -0x2c]
007d5d33  MOV dword ptr [EBP + -0x8],EAX
007d5d36  MOV ECX,dword ptr [EBP + -0x38]
007d5d39  ADD ECX,0x1
007d5d3c  MOV EDX,dword ptr [EBP + -0x8]
007d5d3f  MOV dword ptr [EDX],ECX
007d5d41  MOV EAX,dword ptr [EBP + -0x38]
007d5d44  ADD EAX,0x1
007d5d47  MOV ECX,dword ptr [EBP + -0x8]
007d5d4a  ADD ECX,dword ptr [EBP + -0x38]
007d5d4d  MOV dword ptr [ECX + -0x4],EAX
007d5d50  MOV EDX,dword ptr [EBP + -0x24]
007d5d53  MOV EAX,dword ptr [EDX]
007d5d55  MOV ECX,dword ptr [EBP + -0x24]
007d5d58  MOV EDX,dword ptr [ECX]
007d5d5a  ADD EDX,0x1
007d5d5d  MOV ECX,dword ptr [EBP + -0x24]
007d5d60  MOV dword ptr [ECX],EDX
007d5d62  TEST EAX,EAX
007d5d64  JNZ 0x007d5d86
007d5d66  MOV EDX,dword ptr [EBP + -0x1c]
007d5d69  CMP EDX,dword ptr [0x009c52e4]
007d5d6f  JNZ 0x007d5d86
007d5d71  MOV EAX,dword ptr [EBP + -0x14]
007d5d74  CMP EAX,dword ptr [0x009c52fc]
007d5d7a  JNZ 0x007d5d86
007d5d7c  MOV dword ptr [0x009c52e4],0x0
007d5d86  MOV ECX,dword ptr [EBP + -0x28]
007d5d89  MOV EDX,dword ptr [EBP + -0x14]
007d5d8c  MOV dword ptr [ECX],EDX
007d5d8e  MOV EAX,dword ptr [EBP + -0x8]
007d5d91  ADD EAX,0x4
007d5d94  POP ESI
007d5d95  MOV ESP,EBP
007d5d97  POP EBP
007d5d98  RET
