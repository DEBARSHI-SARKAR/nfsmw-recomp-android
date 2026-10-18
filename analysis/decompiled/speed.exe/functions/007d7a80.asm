007d7a80  PUSH EBP
007d7a81  MOV EBP,ESP
007d7a83  PUSH -0x1
007d7a85  PUSH 0x8bd260
007d7a8a  PUSH 0x7cd5e4
007d7a8f  MOV EAX,FS:[0x0]
007d7a95  PUSH EAX
007d7a96  MOV dword ptr FS:[0x0],ESP
007d7a9d  ADD ESP,-0x10
007d7aa0  PUSH EBX
007d7aa1  PUSH ESI
007d7aa2  PUSH EDI
007d7aa3  MOV dword ptr [EBP + -0x20],0x0
007d7aaa  PUSH 0x1
007d7aac  CALL 0x007d0fd0
007d7ab1  ADD ESP,0x4
007d7ab4  MOV dword ptr [EBP + -0x4],0x0
007d7abb  MOV dword ptr [EBP + -0x1c],0x0
007d7ac2  JMP 0x007d7acd
007d7ac4  MOV EAX,dword ptr [EBP + -0x1c]
007d7ac7  ADD EAX,0x1
007d7aca  MOV dword ptr [EBP + -0x1c],EAX
007d7acd  MOV ECX,dword ptr [EBP + -0x1c]
007d7ad0  CMP ECX,dword ptr [0x009c6460]
007d7ad6  JGE 0x007d7c34
007d7adc  MOV EDX,dword ptr [EBP + -0x1c]
007d7adf  MOV EAX,[0x009c5454]
007d7ae4  CMP dword ptr [EAX + EDX*0x4],0x0
007d7ae8  JZ 0x007d7b93
007d7aee  MOV ECX,dword ptr [EBP + -0x1c]
007d7af1  MOV EDX,dword ptr [0x009c5454]
007d7af7  MOV EAX,dword ptr [EDX + ECX*0x4]
007d7afa  MOV ECX,dword ptr [EAX + 0xc]
007d7afd  AND ECX,0x83
007d7b03  JNZ 0x007d7b8e
007d7b09  CMP dword ptr [EBP + -0x1c],0x2
007d7b0d  JLE 0x007d7b2d
007d7b0f  CMP dword ptr [EBP + -0x1c],0x14
007d7b13  JGE 0x007d7b2d
007d7b15  MOV EDX,dword ptr [EBP + -0x1c]
007d7b18  ADD EDX,0x10
007d7b1b  PUSH EDX
007d7b1c  CALL 0x007d0eb0
007d7b21  ADD ESP,0x4
007d7b24  TEST EAX,EAX
007d7b26  JNZ 0x007d7b2d
007d7b28  JMP 0x007d7c34
007d7b2d  MOV EAX,dword ptr [EBP + -0x1c]
007d7b30  MOV ECX,dword ptr [0x009c5454]
007d7b36  MOV EDX,dword ptr [ECX + EAX*0x4]
007d7b39  PUSH EDX
007d7b3a  MOV EAX,dword ptr [EBP + -0x1c]
007d7b3d  PUSH EAX
007d7b3e  CALL 0x007c93d0
007d7b43  ADD ESP,0x8
007d7b46  MOV ECX,dword ptr [EBP + -0x1c]
007d7b49  MOV EDX,dword ptr [0x009c5454]
007d7b4f  MOV EAX,dword ptr [EDX + ECX*0x4]
007d7b52  MOV ECX,dword ptr [EAX + 0xc]
007d7b55  AND ECX,0x83
007d7b5b  JZ 0x007d7b7a
007d7b5d  MOV EDX,dword ptr [EBP + -0x1c]
007d7b60  MOV EAX,[0x009c5454]
007d7b65  MOV ECX,dword ptr [EAX + EDX*0x4]
007d7b68  PUSH ECX
007d7b69  MOV EDX,dword ptr [EBP + -0x1c]
007d7b6c  PUSH EDX
007d7b6d  CALL 0x007c9440
007d7b72  ADD ESP,0x8
007d7b75  JMP 0x007d7ac4
007d7b7a  MOV EAX,dword ptr [EBP + -0x1c]
007d7b7d  MOV ECX,dword ptr [0x009c5454]
007d7b83  MOV EDX,dword ptr [ECX + EAX*0x4]
007d7b86  MOV dword ptr [EBP + -0x20],EDX
007d7b89  JMP 0x007d7c34
007d7b8e  JMP 0x007d7c2f
007d7b93  PUSH 0x5d
007d7b95  PUSH 0x8bd254
007d7b9a  PUSH 0x2
007d7b9c  PUSH 0x38
007d7b9e  CALL 0x007c6700
007d7ba3  ADD ESP,0x10
007d7ba6  MOV ECX,dword ptr [EBP + -0x1c]
007d7ba9  MOV EDX,dword ptr [0x009c5454]
007d7baf  MOV dword ptr [EDX + ECX*0x4],EAX
007d7bb2  MOV EAX,dword ptr [EBP + -0x1c]
007d7bb5  MOV ECX,dword ptr [0x009c5454]
007d7bbb  CMP dword ptr [ECX + EAX*0x4],0x0
007d7bbf  JZ 0x007d7c2d
007d7bc1  PUSH 0xfa0
007d7bc6  MOV EDX,dword ptr [EBP + -0x1c]
007d7bc9  MOV EAX,[0x009c5454]
007d7bce  MOV ECX,dword ptr [EAX + EDX*0x4]
007d7bd1  ADD ECX,0x20
007d7bd4  PUSH ECX
007d7bd5  CALL 0x007ddc30
007d7bda  ADD ESP,0x8
007d7bdd  TEST EAX,EAX
007d7bdf  JNZ 0x007d7c08
007d7be1  PUSH 0x2
007d7be3  MOV EDX,dword ptr [EBP + -0x1c]
007d7be6  MOV EAX,[0x009c5454]
007d7beb  MOV ECX,dword ptr [EAX + EDX*0x4]
007d7bee  PUSH ECX
007d7bef  CALL 0x007c7290
007d7bf4  ADD ESP,0x8
007d7bf7  MOV EDX,dword ptr [EBP + -0x1c]
007d7bfa  MOV EAX,[0x009c5454]
007d7bff  MOV dword ptr [EAX + EDX*0x4],0x0
007d7c06  JMP 0x007d7c34
007d7c08  MOV ECX,dword ptr [EBP + -0x1c]
007d7c0b  MOV EDX,dword ptr [0x009c5454]
007d7c11  MOV EAX,dword ptr [EDX + ECX*0x4]
007d7c14  ADD EAX,0x20
007d7c17  PUSH EAX
007d7c18  CALL dword ptr [0x008901b8]
007d7c1e  MOV ECX,dword ptr [EBP + -0x1c]
007d7c21  MOV EDX,dword ptr [0x009c5454]
007d7c27  MOV EAX,dword ptr [EDX + ECX*0x4]
007d7c2a  MOV dword ptr [EBP + -0x20],EAX
007d7c2d  JMP 0x007d7c34
007d7c2f  JMP 0x007d7ac4
007d7c34  CMP dword ptr [EBP + -0x20],0x0
007d7c38  JZ 0x007d7c75
007d7c3a  MOV ECX,dword ptr [EBP + -0x20]
007d7c3d  MOV dword ptr [ECX + 0x4],0x0
007d7c44  MOV EDX,dword ptr [EBP + -0x20]
007d7c47  MOV dword ptr [EDX + 0xc],0x0
007d7c4e  MOV EAX,dword ptr [EBP + -0x20]
007d7c51  MOV dword ptr [EAX + 0x8],0x0
007d7c58  MOV ECX,dword ptr [EBP + -0x20]
007d7c5b  MOV dword ptr [ECX],0x0
007d7c61  MOV EDX,dword ptr [EBP + -0x20]
007d7c64  MOV dword ptr [EDX + 0x1c],0x0
007d7c6b  MOV EAX,dword ptr [EBP + -0x20]
007d7c6e  MOV dword ptr [EAX + 0x10],0xffffffff
007d7c75  MOV dword ptr [EBP + -0x4],0xffffffff
007d7c7c  CALL 0x007d7c83
007d7c81  JMP 0x007d7c8e
