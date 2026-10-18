006c2aa0  PUSH ECX
006c2aa1  MOV EAX,[0x00982bdc]
006c2aa6  MOV ECX,dword ptr [EAX]
006c2aa8  PUSH 0x0
006c2aaa  PUSH 0x982c64
006c2aaf  PUSH 0x0
006c2ab1  PUSH 0x0
006c2ab3  PUSH 0x208
006c2ab8  PUSH 0x960
006c2abd  PUSH EAX
006c2abe  CALL dword ptr [ECX + 0x68]
006c2ac1  MOV EAX,[0x00982bdc]
006c2ac6  MOV EDX,dword ptr [EAX]
006c2ac8  PUSH 0x0
006c2aca  PUSH 0x982c68
006c2acf  PUSH 0x1
006c2ad1  PUSH 0x65
006c2ad3  PUSH 0x0
006c2ad5  PUSH 0x3cc
006c2ada  PUSH EAX
006c2adb  CALL dword ptr [EDX + 0x6c]
006c2ade  MOV EAX,[0x00982c68]
006c2ae3  PUSH 0x0
006c2ae5  LEA EDX,[ESP + 0x4]
006c2ae9  PUSH EDX
006c2aea  PUSH 0x0
006c2aec  PUSH 0x0
006c2aee  MOV dword ptr [ESP + 0x10],0x0
006c2af6  MOV ECX,dword ptr [EAX]
006c2af8  PUSH EAX
006c2af9  CALL dword ptr [ECX + 0x2c]
006c2afc  PUSH EBX
006c2afd  PUSH ESI
006c2afe  XOR ECX,ECX
006c2b00  PUSH EDI
006c2b01  MOV EDX,dword ptr [ESP + 0xc]
006c2b05  LEA EAX,[ECX + ECX*0x4]
006c2b08  SHL EAX,0x1
006c2b0a  MOV word ptr [EDX],AX
006c2b0d  MOV EDX,dword ptr [ESP + 0xc]
006c2b11  ADD EDX,0x2
006c2b14  MOV dword ptr [ESP + 0xc],EDX
006c2b18  LEA ESI,[EAX + 0xa]
006c2b1b  MOV word ptr [EDX],SI
006c2b1e  MOV ESI,dword ptr [ESP + 0xc]
006c2b22  ADD ESI,0x2
006c2b25  MOV dword ptr [ESP + 0xc],ESI
006c2b29  LEA EDX,[EAX + 0xb]
006c2b2c  MOV word ptr [ESI],DX
006c2b2f  MOV ESI,dword ptr [ESP + 0xc]
006c2b33  ADD ESI,0x2
006c2b36  MOV dword ptr [ESP + 0xc],ESI
006c2b3a  MOV word ptr [ESI],DX
006c2b3d  MOV EDI,dword ptr [ESP + 0xc]
006c2b41  ADD EDI,0x2
006c2b44  MOV dword ptr [ESP + 0xc],EDI
006c2b48  LEA ESI,[EAX + 0x1]
006c2b4b  MOV word ptr [EDI],SI
006c2b4e  MOV EDI,dword ptr [ESP + 0xc]
006c2b52  ADD EDI,0x2
006c2b55  MOV dword ptr [ESP + 0xc],EDI
006c2b59  MOV word ptr [EDI],AX
006c2b5c  MOV EDI,dword ptr [ESP + 0xc]
006c2b60  ADD EDI,0x2
006c2b63  MOV dword ptr [ESP + 0xc],EDI
006c2b67  MOV word ptr [EDI],SI
006c2b6a  MOV EDI,dword ptr [ESP + 0xc]
006c2b6e  ADD EDI,0x2
006c2b71  MOV dword ptr [ESP + 0xc],EDI
006c2b75  MOV word ptr [EDI],DX
006c2b78  MOV EDI,dword ptr [ESP + 0xc]
006c2b7c  ADD EDI,0x2
006c2b7f  MOV dword ptr [ESP + 0xc],EDI
006c2b83  LEA EDX,[EAX + 0xc]
006c2b86  MOV word ptr [EDI],DX
006c2b89  MOV EDI,dword ptr [ESP + 0xc]
006c2b8d  ADD EDI,0x2
006c2b90  MOV dword ptr [ESP + 0xc],EDI
006c2b94  MOV word ptr [EDI],DX
006c2b97  MOV EBX,dword ptr [ESP + 0xc]
006c2b9b  ADD EBX,0x2
006c2b9e  MOV dword ptr [ESP + 0xc],EBX
006c2ba2  LEA EDI,[EAX + 0x2]
006c2ba5  MOV word ptr [EBX],DI
006c2ba8  MOV EBX,dword ptr [ESP + 0xc]
006c2bac  ADD EBX,0x2
006c2baf  MOV dword ptr [ESP + 0xc],EBX
006c2bb3  MOV word ptr [EBX],SI
006c2bb6  MOV ESI,dword ptr [ESP + 0xc]
006c2bba  ADD ESI,0x2
006c2bbd  MOV dword ptr [ESP + 0xc],ESI
006c2bc1  MOV word ptr [ESI],DI
006c2bc4  MOV ESI,dword ptr [ESP + 0xc]
006c2bc8  ADD ESI,0x2
006c2bcb  MOV dword ptr [ESP + 0xc],ESI
006c2bcf  MOV word ptr [ESI],DX
006c2bd2  MOV ESI,dword ptr [ESP + 0xc]
006c2bd6  ADD ESI,0x2
006c2bd9  MOV dword ptr [ESP + 0xc],ESI
006c2bdd  LEA EDX,[EAX + 0xd]
006c2be0  MOV word ptr [ESI],DX
006c2be3  MOV ESI,dword ptr [ESP + 0xc]
006c2be7  ADD ESI,0x2
006c2bea  MOV dword ptr [ESP + 0xc],ESI
006c2bee  MOV word ptr [ESI],DX
006c2bf1  MOV EBX,dword ptr [ESP + 0xc]
006c2bf5  ADD EBX,0x2
006c2bf8  MOV dword ptr [ESP + 0xc],EBX
006c2bfc  LEA ESI,[EAX + 0x3]
006c2bff  MOV word ptr [EBX],SI
006c2c02  MOV EBX,dword ptr [ESP + 0xc]
006c2c06  ADD EBX,0x2
006c2c09  MOV dword ptr [ESP + 0xc],EBX
006c2c0d  MOV word ptr [EBX],DI
006c2c10  MOV EDI,dword ptr [ESP + 0xc]
006c2c14  ADD EDI,0x2
006c2c17  MOV dword ptr [ESP + 0xc],EDI
006c2c1b  MOV word ptr [EDI],SI
006c2c1e  MOV EDI,dword ptr [ESP + 0xc]
006c2c22  ADD EDI,0x2
006c2c25  MOV dword ptr [ESP + 0xc],EDI
006c2c29  MOV word ptr [EDI],DX
006c2c2c  MOV EDI,dword ptr [ESP + 0xc]
006c2c30  ADD EDI,0x2
006c2c33  MOV dword ptr [ESP + 0xc],EDI
006c2c37  LEA EDX,[EAX + 0xe]
006c2c3a  MOV word ptr [EDI],DX
006c2c3d  MOV EDI,dword ptr [ESP + 0xc]
006c2c41  ADD EDI,0x2
006c2c44  MOV dword ptr [ESP + 0xc],EDI
006c2c48  MOV word ptr [EDI],DX
006c2c4b  MOV EBX,dword ptr [ESP + 0xc]
006c2c4f  ADD EBX,0x2
006c2c52  MOV dword ptr [ESP + 0xc],EBX
006c2c56  LEA EDI,[EAX + 0x4]
006c2c59  MOV word ptr [EBX],DI
006c2c5c  MOV EBX,dword ptr [ESP + 0xc]
006c2c60  ADD EBX,0x2
006c2c63  MOV dword ptr [ESP + 0xc],EBX
006c2c67  MOV word ptr [EBX],SI
006c2c6a  MOV ESI,dword ptr [ESP + 0xc]
006c2c6e  ADD ESI,0x2
006c2c71  MOV dword ptr [ESP + 0xc],ESI
006c2c75  MOV word ptr [ESI],DI
006c2c78  MOV ESI,dword ptr [ESP + 0xc]
006c2c7c  ADD ESI,0x2
006c2c7f  MOV dword ptr [ESP + 0xc],ESI
006c2c83  MOV word ptr [ESI],DX
006c2c86  MOV ESI,dword ptr [ESP + 0xc]
006c2c8a  ADD ESI,0x2
006c2c8d  MOV dword ptr [ESP + 0xc],ESI
006c2c91  LEA EDX,[EAX + 0xf]
006c2c94  MOV word ptr [ESI],DX
006c2c97  MOV ESI,dword ptr [ESP + 0xc]
006c2c9b  ADD ESI,0x2
006c2c9e  MOV dword ptr [ESP + 0xc],ESI
006c2ca2  MOV word ptr [ESI],DX
006c2ca5  MOV EBX,dword ptr [ESP + 0xc]
006c2ca9  ADD EBX,0x2
006c2cac  MOV dword ptr [ESP + 0xc],EBX
006c2cb0  LEA ESI,[EAX + 0x5]
006c2cb3  MOV word ptr [EBX],SI
006c2cb6  MOV EBX,dword ptr [ESP + 0xc]
006c2cba  ADD EBX,0x2
006c2cbd  MOV dword ptr [ESP + 0xc],EBX
006c2cc1  MOV word ptr [EBX],DI
006c2cc4  MOV EDI,dword ptr [ESP + 0xc]
006c2cc8  ADD EDI,0x2
006c2ccb  MOV dword ptr [ESP + 0xc],EDI
006c2ccf  MOV word ptr [EDI],SI
006c2cd2  MOV EDI,dword ptr [ESP + 0xc]
006c2cd6  ADD EDI,0x2
006c2cd9  MOV dword ptr [ESP + 0xc],EDI
006c2cdd  MOV word ptr [EDI],DX
006c2ce0  MOV EDI,dword ptr [ESP + 0xc]
006c2ce4  ADD EDI,0x2
006c2ce7  MOV dword ptr [ESP + 0xc],EDI
006c2ceb  LEA EDX,[EAX + 0x10]
006c2cee  MOV word ptr [EDI],DX
006c2cf1  MOV EDI,dword ptr [ESP + 0xc]
006c2cf5  ADD EDI,0x2
006c2cf8  MOV dword ptr [ESP + 0xc],EDI
006c2cfc  MOV word ptr [EDI],DX
006c2cff  MOV EBX,dword ptr [ESP + 0xc]
006c2d03  ADD EBX,0x2
006c2d06  MOV dword ptr [ESP + 0xc],EBX
006c2d0a  LEA EDI,[EAX + 0x6]
006c2d0d  MOV word ptr [EBX],DI
006c2d10  MOV EBX,dword ptr [ESP + 0xc]
006c2d14  ADD EBX,0x2
006c2d17  MOV dword ptr [ESP + 0xc],EBX
006c2d1b  MOV word ptr [EBX],SI
006c2d1e  MOV ESI,dword ptr [ESP + 0xc]
006c2d22  ADD ESI,0x2
006c2d25  MOV dword ptr [ESP + 0xc],ESI
006c2d29  MOV word ptr [ESI],DI
006c2d2c  MOV ESI,dword ptr [ESP + 0xc]
006c2d30  ADD ESI,0x2
006c2d33  MOV dword ptr [ESP + 0xc],ESI
006c2d37  MOV word ptr [ESI],DX
006c2d3a  MOV ESI,dword ptr [ESP + 0xc]
006c2d3e  ADD ESI,0x2
006c2d41  MOV dword ptr [ESP + 0xc],ESI
006c2d45  LEA EDX,[EAX + 0x11]
006c2d48  MOV word ptr [ESI],DX
006c2d4b  MOV ESI,dword ptr [ESP + 0xc]
006c2d4f  ADD ESI,0x2
006c2d52  MOV dword ptr [ESP + 0xc],ESI
006c2d56  MOV word ptr [ESI],DX
006c2d59  MOV EBX,dword ptr [ESP + 0xc]
006c2d5d  ADD EBX,0x2
006c2d60  MOV dword ptr [ESP + 0xc],EBX
006c2d64  LEA ESI,[EAX + 0x7]
006c2d67  MOV word ptr [EBX],SI
006c2d6a  MOV EBX,dword ptr [ESP + 0xc]
006c2d6e  ADD EBX,0x2
006c2d71  MOV dword ptr [ESP + 0xc],EBX
006c2d75  MOV word ptr [EBX],DI
006c2d78  MOV EDI,dword ptr [ESP + 0xc]
006c2d7c  ADD EDI,0x2
006c2d7f  MOV dword ptr [ESP + 0xc],EDI
006c2d83  MOV word ptr [EDI],SI
006c2d86  MOV EDI,dword ptr [ESP + 0xc]
006c2d8a  ADD EDI,0x2
006c2d8d  MOV dword ptr [ESP + 0xc],EDI
006c2d91  MOV word ptr [EDI],DX
006c2d94  MOV EDI,dword ptr [ESP + 0xc]
006c2d98  ADD EDI,0x2
006c2d9b  MOV dword ptr [ESP + 0xc],EDI
006c2d9f  LEA EDX,[EAX + 0x12]
006c2da2  MOV word ptr [EDI],DX
006c2da5  MOV EDI,dword ptr [ESP + 0xc]
006c2da9  ADD EDI,0x2
006c2dac  MOV dword ptr [ESP + 0xc],EDI
006c2db0  MOV word ptr [EDI],DX
006c2db3  MOV EBX,dword ptr [ESP + 0xc]
006c2db7  ADD EBX,0x2
006c2dba  MOV dword ptr [ESP + 0xc],EBX
006c2dbe  LEA EDI,[EAX + 0x8]
006c2dc1  MOV word ptr [EBX],DI
006c2dc4  MOV EBX,dword ptr [ESP + 0xc]
006c2dc8  ADD EBX,0x2
006c2dcb  MOV dword ptr [ESP + 0xc],EBX
006c2dcf  MOV word ptr [EBX],SI
006c2dd2  MOV ESI,dword ptr [ESP + 0xc]
006c2dd6  ADD ESI,0x2
006c2dd9  MOV dword ptr [ESP + 0xc],ESI
006c2ddd  MOV word ptr [ESI],DI
006c2de0  MOV ESI,dword ptr [ESP + 0xc]
006c2de4  ADD ESI,0x2
006c2de7  MOV dword ptr [ESP + 0xc],ESI
006c2deb  MOV word ptr [ESI],DX
006c2dee  MOV ESI,dword ptr [ESP + 0xc]
006c2df2  ADD ESI,0x2
006c2df5  MOV dword ptr [ESP + 0xc],ESI
006c2df9  LEA EDX,[EAX + 0x13]
006c2dfc  MOV word ptr [ESI],DX
006c2dff  MOV ESI,dword ptr [ESP + 0xc]
006c2e03  ADD ESI,0x2
006c2e06  MOV dword ptr [ESP + 0xc],ESI
006c2e0a  MOV word ptr [ESI],DX
006c2e0d  MOV EDX,dword ptr [ESP + 0xc]
006c2e11  ADD EDX,0x2
006c2e14  ADD EAX,0x9
006c2e17  MOV dword ptr [ESP + 0xc],EDX
006c2e1b  MOV word ptr [EDX],AX
006c2e1e  MOV EAX,dword ptr [ESP + 0xc]
006c2e22  ADD EAX,0x2
006c2e25  MOV dword ptr [ESP + 0xc],EAX
006c2e29  MOV word ptr [EAX],DI
006c2e2c  MOV ESI,dword ptr [ESP + 0xc]
006c2e30  ADD ESI,0x2
006c2e33  INC ECX
006c2e34  CMP ECX,0x9
006c2e37  MOV dword ptr [ESP + 0xc],ESI
006c2e3b  JL 0x006c2b01
006c2e41  MOV EAX,[0x00982c68]
006c2e46  MOV ECX,dword ptr [EAX]
006c2e48  PUSH EAX
006c2e49  CALL dword ptr [ECX + 0x30]
006c2e4c  POP EDI
006c2e4d  POP ESI
006c2e4e  POP EBX
006c2e4f  POP ECX
006c2e50  RET
