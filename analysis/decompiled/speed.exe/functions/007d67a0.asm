007d67a0  PUSH EBP
007d67a1  MOV EBP,ESP
007d67a3  SUB ESP,0x16c
007d67a9  MOV EAX,[0x009c52e8]
007d67ae  IMUL EAX,EAX,0x14
007d67b1  PUSH EAX
007d67b2  MOV ECX,dword ptr [0x009c52ec]
007d67b8  PUSH ECX
007d67b9  CALL dword ptr [0x008901b0]
007d67bf  TEST EAX,EAX
007d67c1  JZ 0x007d67cb
007d67c3  OR EAX,0xffffffff
007d67c6  JMP 0x007d6cac
007d67cb  MOV EDX,dword ptr [0x009c52ec]
007d67d1  MOV dword ptr [EBP + -0x38],EDX
007d67d4  MOV dword ptr [EBP + 0xfffffe94],0x0
007d67de  JMP 0x007d67ef
007d67e0  MOV EAX,dword ptr [EBP + 0xfffffe94]
007d67e6  ADD EAX,0x1
007d67e9  MOV dword ptr [EBP + 0xfffffe94],EAX
007d67ef  MOV ECX,dword ptr [EBP + 0xfffffe94]
007d67f5  CMP ECX,dword ptr [0x009c52e8]
007d67fb  JGE 0x007d6caa
007d6801  MOV EDX,dword ptr [EBP + -0x38]
007d6804  MOV EAX,dword ptr [EDX + 0x10]
007d6807  MOV dword ptr [EBP + -0x48],EAX
007d680a  PUSH 0x41c4
007d680f  MOV ECX,dword ptr [EBP + -0x48]
007d6812  PUSH ECX
007d6813  CALL dword ptr [0x008901b0]
007d6819  TEST EAX,EAX
007d681b  JZ 0x007d6827
007d681d  MOV EAX,0xfffffffe
007d6822  JMP 0x007d6cac
007d6827  MOV EDX,dword ptr [EBP + -0x38]
007d682a  MOV EAX,dword ptr [EDX + 0xc]
007d682d  MOV dword ptr [EBP + -0x10],EAX
007d6830  MOV ECX,dword ptr [EBP + -0x48]
007d6833  ADD ECX,0x144
007d6839  MOV dword ptr [EBP + -0x44],ECX
007d683c  MOV EDX,dword ptr [EBP + -0x38]
007d683f  MOV EAX,dword ptr [EDX + 0x8]
007d6842  MOV dword ptr [EBP + 0xfffffea4],EAX
007d6848  MOV dword ptr [EBP + -0x34],0x0
007d684f  MOV dword ptr [EBP + -0x50],0x0
007d6856  MOV dword ptr [EBP + -0x1c],0x0
007d685d  JMP 0x007d6868
007d685f  MOV ECX,dword ptr [EBP + -0x1c]
007d6862  ADD ECX,0x1
007d6865  MOV dword ptr [EBP + -0x1c],ECX
007d6868  CMP dword ptr [EBP + -0x1c],0x20
007d686c  JGE 0x007d6c80
007d6872  MOV dword ptr [EBP + -0xc],0x0
007d6879  MOV dword ptr [EBP + -0x4],0x0
007d6880  MOV dword ptr [EBP + -0x14],0x0
007d6887  MOV dword ptr [EBP + 0xfffffe98],0x0
007d6891  JMP 0x007d68a2
007d6893  MOV EDX,dword ptr [EBP + 0xfffffe98]
007d6899  ADD EDX,0x1
007d689c  MOV dword ptr [EBP + 0xfffffe98],EDX
007d68a2  CMP dword ptr [EBP + 0xfffffe98],0x40
007d68a9  JGE 0x007d68be
007d68ab  MOV EAX,dword ptr [EBP + 0xfffffe98]
007d68b1  MOV dword ptr [EBP + EAX*0x4 + 0xfffffea8],0x0
007d68bc  JMP 0x007d6893
007d68be  CMP dword ptr [EBP + 0xfffffea4],0x0
007d68c5  JL 0x007d6c2e
007d68cb  PUSH 0x8000
007d68d0  MOV ECX,dword ptr [EBP + -0x10]
007d68d3  PUSH ECX
007d68d4  CALL dword ptr [0x008901b0]
007d68da  TEST EAX,EAX
007d68dc  JZ 0x007d68e8
007d68de  MOV EAX,0xfffffffc
007d68e3  JMP 0x007d6cac
007d68e8  MOV EDX,dword ptr [EBP + -0x10]
007d68eb  MOV dword ptr [EBP + -0x28],EDX
007d68ee  MOV dword ptr [EBP + -0x18],0x0
007d68f5  JMP 0x007d6900
007d68f7  MOV EAX,dword ptr [EBP + -0x18]
007d68fa  ADD EAX,0x1
007d68fd  MOV dword ptr [EBP + -0x18],EAX
007d6900  CMP dword ptr [EBP + -0x18],0x8
007d6904  JGE 0x007d6a2f
007d690a  MOV ECX,dword ptr [EBP + -0x28]
007d690d  ADD ECX,0xc
007d6910  MOV dword ptr [EBP + -0x24],ECX
007d6913  MOV EDX,dword ptr [EBP + -0x24]
007d6916  ADD EDX,0xff0
007d691c  MOV dword ptr [EBP + -0x30],EDX
007d691f  MOV EAX,dword ptr [EBP + -0x24]
007d6922  CMP dword ptr [EAX + -0x4],-0x1
007d6926  JNZ 0x007d6930
007d6928  MOV ECX,dword ptr [EBP + -0x30]
007d692b  CMP dword ptr [ECX],-0x1
007d692e  JZ 0x007d693a
007d6930  MOV EAX,0xfffffffb
007d6935  JMP 0x007d6cac
007d693a  MOV EDX,dword ptr [EBP + -0x24]
007d693d  MOV EAX,dword ptr [EDX]
007d693f  MOV dword ptr [EBP + -0x3c],EAX
007d6942  MOV ECX,dword ptr [EBP + -0x3c]
007d6945  MOV dword ptr [EBP + 0xfffffea0],ECX
007d694b  MOV EDX,dword ptr [EBP + 0xfffffea0]
007d6951  AND EDX,0x1
007d6954  JZ 0x007d697d
007d6956  MOV EAX,dword ptr [EBP + -0x3c]
007d6959  SUB EAX,0x1
007d695c  MOV dword ptr [EBP + -0x3c],EAX
007d695f  CMP dword ptr [EBP + -0x3c],0x400
007d6966  JLE 0x007d6972
007d6968  MOV EAX,0xfffffffa
007d696d  JMP 0x007d6cac
007d6972  MOV ECX,dword ptr [EBP + -0x14]
007d6975  ADD ECX,0x1
007d6978  MOV dword ptr [EBP + -0x14],ECX
007d697b  JMP 0x007d69bc
007d697d  MOV EDX,dword ptr [EBP + -0x3c]
007d6980  SAR EDX,0x4
007d6983  SUB EDX,0x1
007d6986  MOV dword ptr [EBP + 0xfffffe98],EDX
007d698c  CMP dword ptr [EBP + 0xfffffe98],0x3f
007d6993  JLE 0x007d699f
007d6995  MOV dword ptr [EBP + 0xfffffe98],0x3f
007d699f  MOV EAX,dword ptr [EBP + 0xfffffe98]
007d69a5  MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffea8]
007d69ac  ADD ECX,0x1
007d69af  MOV EDX,dword ptr [EBP + 0xfffffe98]
007d69b5  MOV dword ptr [EBP + EDX*0x4 + 0xfffffea8],ECX
007d69bc  CMP dword ptr [EBP + -0x3c],0x10
007d69c0  JL 0x007d69d3
007d69c2  MOV EAX,dword ptr [EBP + -0x3c]
007d69c5  AND EAX,0xf
007d69c8  JNZ 0x007d69d3
007d69ca  CMP dword ptr [EBP + -0x3c],0xff0
007d69d1  JLE 0x007d69dd
007d69d3  MOV EAX,0xfffffff9
007d69d8  JMP 0x007d6cac
007d69dd  MOV ECX,dword ptr [EBP + -0x24]
007d69e0  ADD ECX,dword ptr [EBP + -0x3c]
007d69e3  MOV EDX,dword ptr [ECX + -0x4]
007d69e6  CMP EDX,dword ptr [EBP + 0xfffffea0]
007d69ec  JZ 0x007d69f8
007d69ee  MOV EAX,0xfffffff8
007d69f3  JMP 0x007d6cac
007d69f8  MOV EAX,dword ptr [EBP + -0x24]
007d69fb  ADD EAX,dword ptr [EBP + -0x3c]
007d69fe  MOV dword ptr [EBP + -0x24],EAX
007d6a01  MOV ECX,dword ptr [EBP + -0x24]
007d6a04  CMP ECX,dword ptr [EBP + -0x30]
007d6a07  JC 0x007d693a
007d6a0d  MOV EDX,dword ptr [EBP + -0x24]
007d6a10  CMP EDX,dword ptr [EBP + -0x30]
007d6a13  JZ 0x007d6a1f
007d6a15  MOV EAX,0xfffffff8
007d6a1a  JMP 0x007d6cac
007d6a1f  MOV EAX,dword ptr [EBP + -0x28]
007d6a22  ADD EAX,0x1000
007d6a27  MOV dword ptr [EBP + -0x28],EAX
007d6a2a  JMP 0x007d68f7
007d6a2f  MOV ECX,dword ptr [EBP + -0x44]
007d6a32  MOV EDX,dword ptr [ECX]
007d6a34  CMP EDX,dword ptr [EBP + -0x14]
007d6a37  JZ 0x007d6a43
007d6a39  MOV EAX,0xfffffff7
007d6a3e  JMP 0x007d6cac
007d6a43  MOV EAX,dword ptr [EBP + -0x44]
007d6a46  MOV dword ptr [EBP + -0x40],EAX
007d6a49  MOV dword ptr [EBP + 0xfffffe9c],0x0
007d6a53  JMP 0x007d6a64
007d6a55  MOV ECX,dword ptr [EBP + 0xfffffe9c]
007d6a5b  ADD ECX,0x1
007d6a5e  MOV dword ptr [EBP + 0xfffffe9c],ECX
007d6a64  CMP dword ptr [EBP + 0xfffffe9c],0x40
007d6a6b  JGE 0x007d6c2e
007d6a71  MOV dword ptr [EBP + -0x54],0x0
007d6a78  MOV EDX,dword ptr [EBP + -0x40]
007d6a7b  MOV dword ptr [EBP + -0x24],EDX
007d6a7e  MOV EAX,dword ptr [EBP + -0x24]
007d6a81  MOV ECX,dword ptr [EAX + 0x4]
007d6a84  MOV dword ptr [EBP + -0x8],ECX
007d6a87  MOV EDX,dword ptr [EBP + -0x8]
007d6a8a  CMP EDX,dword ptr [EBP + -0x40]
007d6a8d  JZ 0x007d6b81
007d6a93  MOV EAX,dword ptr [EBP + 0xfffffe9c]
007d6a99  MOV ECX,dword ptr [EBP + -0x54]
007d6a9c  CMP ECX,dword ptr [EBP + EAX*0x4 + 0xfffffea8]
007d6aa3  JZ 0x007d6b81
007d6aa9  MOV EDX,dword ptr [EBP + -0x8]
007d6aac  CMP EDX,dword ptr [EBP + -0x10]
007d6aaf  JC 0x007d6abe
007d6ab1  MOV EAX,dword ptr [EBP + -0x10]
007d6ab4  ADD EAX,0x8000
007d6ab9  CMP dword ptr [EBP + -0x8],EAX
007d6abc  JC 0x007d6ac8
007d6abe  MOV EAX,0xfffffff6
007d6ac3  JMP 0x007d6cac
007d6ac8  MOV ECX,dword ptr [EBP + -0x8]
007d6acb  AND ECX,0xfffff000
007d6ad1  MOV dword ptr [EBP + -0x4c],ECX
007d6ad4  MOV EDX,dword ptr [EBP + -0x4c]
007d6ad7  ADD EDX,0xc
007d6ada  MOV dword ptr [EBP + -0x2c],EDX
007d6add  MOV EAX,dword ptr [EBP + -0x2c]
007d6ae0  ADD EAX,0xff0
007d6ae5  MOV dword ptr [EBP + -0x20],EAX
007d6ae8  MOV ECX,dword ptr [EBP + -0x2c]
007d6aeb  CMP ECX,dword ptr [EBP + -0x20]
007d6aee  JZ 0x007d6b0a
007d6af0  MOV EDX,dword ptr [EBP + -0x2c]
007d6af3  CMP EDX,dword ptr [EBP + -0x8]
007d6af6  JNZ 0x007d6afa
007d6af8  JMP 0x007d6b0a
007d6afa  MOV EAX,dword ptr [EBP + -0x2c]
007d6afd  MOV ECX,dword ptr [EAX]
007d6aff  AND ECX,0xfffffffe
007d6b02  ADD ECX,dword ptr [EBP + -0x2c]
007d6b05  MOV dword ptr [EBP + -0x2c],ECX
007d6b08  JMP 0x007d6ae8
007d6b0a  MOV EDX,dword ptr [EBP + -0x2c]
007d6b0d  CMP EDX,dword ptr [EBP + -0x20]
007d6b10  JNZ 0x007d6b1c
007d6b12  MOV EAX,0xfffffff5
007d6b17  JMP 0x007d6cac
007d6b1c  MOV EAX,dword ptr [EBP + -0x8]
007d6b1f  MOV ECX,dword ptr [EAX]
007d6b21  SAR ECX,0x4
007d6b24  SUB ECX,0x1
007d6b27  MOV dword ptr [EBP + 0xfffffe98],ECX
007d6b2d  CMP dword ptr [EBP + 0xfffffe98],0x3f
007d6b34  JLE 0x007d6b40
007d6b36  MOV dword ptr [EBP + 0xfffffe98],0x3f
007d6b40  MOV EDX,dword ptr [EBP + 0xfffffe98]
007d6b46  CMP EDX,dword ptr [EBP + 0xfffffe9c]
007d6b4c  JZ 0x007d6b58
007d6b4e  MOV EAX,0xfffffff4
007d6b53  JMP 0x007d6cac
007d6b58  MOV EAX,dword ptr [EBP + -0x8]
007d6b5b  MOV ECX,dword ptr [EAX + 0x8]
007d6b5e  CMP ECX,dword ptr [EBP + -0x24]
007d6b61  JZ 0x007d6b6d
007d6b63  MOV EAX,0xfffffff3
007d6b68  JMP 0x007d6cac
007d6b6d  MOV EDX,dword ptr [EBP + -0x8]
007d6b70  MOV dword ptr [EBP + -0x24],EDX
007d6b73  MOV EAX,dword ptr [EBP + -0x54]
007d6b76  ADD EAX,0x1
007d6b79  MOV dword ptr [EBP + -0x54],EAX
007d6b7c  JMP 0x007d6a7e
007d6b81  CMP dword ptr [EBP + -0x54],0x0
007d6b85  JZ 0x007d6be4
007d6b87  CMP dword ptr [EBP + 0xfffffe9c],0x20
007d6b8e  JGE 0x007d6bb8
007d6b90  MOV EDX,0x80000000
007d6b95  MOV ECX,dword ptr [EBP + 0xfffffe9c]
007d6b9b  SHR EDX,CL
007d6b9d  OR EDX,dword ptr [EBP + -0xc]
007d6ba0  MOV dword ptr [EBP + -0xc],EDX
007d6ba3  MOV EAX,0x80000000
007d6ba8  MOV ECX,dword ptr [EBP + 0xfffffe9c]
007d6bae  SHR EAX,CL
007d6bb0  OR EAX,dword ptr [EBP + -0x34]
007d6bb3  MOV dword ptr [EBP + -0x34],EAX
007d6bb6  JMP 0x007d6be4
007d6bb8  MOV ECX,dword ptr [EBP + 0xfffffe9c]
007d6bbe  SUB ECX,0x20
007d6bc1  MOV EDX,0x80000000
007d6bc6  SHR EDX,CL
007d6bc8  OR EDX,dword ptr [EBP + -0x4]
007d6bcb  MOV dword ptr [EBP + -0x4],EDX
007d6bce  MOV ECX,dword ptr [EBP + 0xfffffe9c]
007d6bd4  SUB ECX,0x20
007d6bd7  MOV EAX,0x80000000
007d6bdc  SHR EAX,CL
007d6bde  OR EAX,dword ptr [EBP + -0x50]
007d6be1  MOV dword ptr [EBP + -0x50],EAX
007d6be4  MOV ECX,dword ptr [EBP + -0x24]
007d6be7  MOV EDX,dword ptr [ECX + 0x4]
007d6bea  CMP EDX,dword ptr [EBP + -0x40]
007d6bed  JNZ 0x007d6c01
007d6bef  MOV EAX,dword ptr [EBP + 0xfffffe9c]
007d6bf5  MOV ECX,dword ptr [EBP + -0x54]
007d6bf8  CMP ECX,dword ptr [EBP + EAX*0x4 + 0xfffffea8]
007d6bff  JZ 0x007d6c0b
007d6c01  MOV EAX,0xfffffff2
007d6c06  JMP 0x007d6cac
007d6c0b  MOV EDX,dword ptr [EBP + -0x40]
007d6c0e  MOV EAX,dword ptr [EDX + 0x8]
007d6c11  CMP EAX,dword ptr [EBP + -0x24]
007d6c14  JZ 0x007d6c20
007d6c16  MOV EAX,0xfffffff1
007d6c1b  JMP 0x007d6cac
007d6c20  MOV ECX,dword ptr [EBP + -0x40]
007d6c23  ADD ECX,0x8
007d6c26  MOV dword ptr [EBP + -0x40],ECX
007d6c29  JMP 0x007d6a55
007d6c2e  MOV EDX,dword ptr [EBP + -0x1c]
007d6c31  MOV EAX,dword ptr [EBP + -0x48]
007d6c34  MOV ECX,dword ptr [EBP + -0xc]
007d6c37  CMP ECX,dword ptr [EAX + EDX*0x4 + 0x44]
007d6c3b  JNZ 0x007d6c4f
007d6c3d  MOV EDX,dword ptr [EBP + -0x1c]
007d6c40  MOV EAX,dword ptr [EBP + -0x48]
007d6c43  MOV ECX,dword ptr [EBP + -0x4]
007d6c46  CMP ECX,dword ptr [EAX + EDX*0x4 + 0xc4]
007d6c4d  JZ 0x007d6c56
007d6c4f  MOV EAX,0xfffffff0
007d6c54  JMP 0x007d6cac
007d6c56  MOV EDX,dword ptr [EBP + -0x10]
007d6c59  ADD EDX,0x8000
007d6c5f  MOV dword ptr [EBP + -0x10],EDX
007d6c62  MOV EAX,dword ptr [EBP + -0x44]
007d6c65  ADD EAX,0x204
007d6c6a  MOV dword ptr [EBP + -0x44],EAX
007d6c6d  MOV ECX,dword ptr [EBP + 0xfffffea4]
007d6c73  SHL ECX,0x1
007d6c75  MOV dword ptr [EBP + 0xfffffea4],ECX
007d6c7b  JMP 0x007d685f
007d6c80  MOV EDX,dword ptr [EBP + -0x38]
007d6c83  MOV EAX,dword ptr [EBP + -0x34]
007d6c86  CMP EAX,dword ptr [EDX]
007d6c88  JNZ 0x007d6c95
007d6c8a  MOV ECX,dword ptr [EBP + -0x38]
007d6c8d  MOV EDX,dword ptr [EBP + -0x50]
007d6c90  CMP EDX,dword ptr [ECX + 0x4]
007d6c93  JZ 0x007d6c9c
007d6c95  MOV EAX,0xffffffef
007d6c9a  JMP 0x007d6cac
007d6c9c  MOV EAX,dword ptr [EBP + -0x38]
007d6c9f  ADD EAX,0x14
007d6ca2  MOV dword ptr [EBP + -0x38],EAX
007d6ca5  JMP 0x007d67e0
007d6caa  XOR EAX,EAX
007d6cac  MOV ESP,EBP
007d6cae  POP EBP
007d6caf  RET
