006e7bb0  SUB ESP,0x10
006e7bb3  MOV byte ptr [ECX + 0x94],0x2
006e7bba  MOV EDX,dword ptr [0x008a2fd0]
006e7bc0  LEA EAX,[ECX + 0x10]
006e7bc3  MOV dword ptr [EAX],EDX
006e7bc5  MOV EDX,dword ptr [0x008a2fd4]
006e7bcb  MOV dword ptr [EAX + 0x4],EDX
006e7bce  MOV EDX,dword ptr [0x008a2fd8]
006e7bd4  MOV dword ptr [EAX + 0x8],EDX
006e7bd7  MOV EDX,dword ptr [0x008a2fdc]
006e7bdd  MOV dword ptr [EAX + 0xc],EDX
006e7be0  MOV EDX,dword ptr [0x008a2fd0]
006e7be6  LEA EAX,[ECX + 0x20]
006e7be9  MOV dword ptr [EAX],EDX
006e7beb  MOV EDX,dword ptr [0x008a2fd4]
006e7bf1  MOV dword ptr [EAX + 0x4],EDX
006e7bf4  MOV EDX,dword ptr [0x008a2fd8]
006e7bfa  MOV dword ptr [EAX + 0x8],EDX
006e7bfd  MOV EDX,dword ptr [0x008a2fdc]
006e7c03  MOV dword ptr [EAX + 0xc],EDX
006e7c06  MOV EDX,dword ptr [0x008a2fd0]
006e7c0c  LEA EAX,[ECX + 0x30]
006e7c0f  MOV dword ptr [EAX],EDX
006e7c11  MOV EDX,dword ptr [0x008a2fd4]
006e7c17  MOV dword ptr [EAX + 0x4],EDX
006e7c1a  MOV EDX,dword ptr [0x008a2fd8]
006e7c20  MOV dword ptr [EAX + 0x8],EDX
006e7c23  MOV EDX,dword ptr [0x008a2fdc]
006e7c29  MOV dword ptr [EAX + 0xc],EDX
006e7c2c  MOV EDX,dword ptr [0x008a2fd0]
006e7c32  LEA EAX,[ECX + 0x40]
006e7c35  MOV dword ptr [EAX],EDX
006e7c37  MOV EDX,dword ptr [0x008a2fd4]
006e7c3d  MOV dword ptr [EAX + 0x4],EDX
006e7c40  MOV EDX,dword ptr [0x008a2fd8]
006e7c46  MOV dword ptr [EAX + 0x8],EDX
006e7c49  MOV EDX,dword ptr [0x008a2fdc]
006e7c4f  MOV dword ptr [EAX + 0xc],EDX
006e7c52  MOV EDX,dword ptr [0x008a2fd0]
006e7c58  LEA EAX,[ECX + 0x50]
006e7c5b  MOV dword ptr [EAX],EDX
006e7c5d  MOV EDX,dword ptr [0x008a2fd4]
006e7c63  MOV dword ptr [EAX + 0x4],EDX
006e7c66  MOV EDX,dword ptr [0x008a2fd8]
006e7c6c  MOV dword ptr [EAX + 0x8],EDX
006e7c6f  MOV EDX,dword ptr [0x008a2fdc]
006e7c75  MOV dword ptr [EAX + 0xc],EDX
006e7c78  MOV EDX,dword ptr [0x008a2fd0]
006e7c7e  LEA EAX,[ECX + 0x60]
006e7c81  MOV dword ptr [EAX],EDX
006e7c83  MOV EDX,dword ptr [0x008a2fd4]
006e7c89  MOV dword ptr [EAX + 0x4],EDX
006e7c8c  MOV EDX,dword ptr [0x008a2fd8]
006e7c92  MOV dword ptr [EAX + 0x8],EDX
006e7c95  MOV EDX,dword ptr [0x008a2fdc]
006e7c9b  MOV dword ptr [EAX + 0xc],EDX
006e7c9e  MOV EAX,dword ptr [ESP + 0x14]
006e7ca2  MOV EDX,dword ptr [EAX]
006e7ca4  MOV dword ptr [ESP],EDX
006e7ca7  MOV EDX,dword ptr [EAX + 0x4]
006e7caa  MOV EAX,dword ptr [EAX + 0x8]
006e7cad  MOV dword ptr [ESP + 0x4],EDX
006e7cb1  MOV dword ptr [ESP + 0x8],EAX
006e7cb5  MOV EAX,dword ptr [ESP]
006e7cb8  MOV EDX,ECX
006e7cba  MOV dword ptr [EDX],EAX
006e7cbc  MOV EAX,dword ptr [ESP + 0x4]
006e7cc0  MOV dword ptr [EDX + 0x4],EAX
006e7cc3  MOV EAX,dword ptr [ESP + 0x8]
006e7cc7  MOV dword ptr [EDX + 0x8],EAX
006e7cca  MOV dword ptr [ESP + 0xc],0x3f800000
006e7cd2  MOV EAX,dword ptr [ESP + 0xc]
006e7cd6  MOV dword ptr [EDX + 0xc],EAX
006e7cd9  MOV EDX,dword ptr [ESP + 0x18]
006e7cdd  MOV EAX,EDX
006e7cdf  MOV dword ptr [ECX + 0xa8],EAX
006e7ce5  MOV dword ptr [ECX + 0xa0],EAX
006e7ceb  XOR EAX,EAX
006e7ced  MOV dword ptr [ECX + 0xac],EDX
006e7cf3  MOV dword ptr [ECX + 0xa4],EDX
006e7cf9  MOV dword ptr [ECX + 0x8c],EAX
006e7cff  MOV dword ptr [ECX + 0x7c],EAX
006e7d02  MOV dword ptr [ECX + 0x90],0xc7c35000
006e7d0c  ADD ESP,0x10
006e7d0f  RET 0x8
