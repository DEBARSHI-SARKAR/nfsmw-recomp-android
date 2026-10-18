005b6a30  SUB ESP,0x40
005b6a33  MOV EAX,dword ptr [ESP + 0x48]
005b6a37  MOV ECX,dword ptr [ESP + 0x4c]
005b6a3b  FLD float ptr [EAX]
005b6a3d  FMUL float ptr [ECX]
005b6a3f  PUSH ESI
005b6a40  FLD float ptr [ECX + 0xc]
005b6a43  PUSH EDI
005b6a44  FMUL float ptr [EAX + 0x30]
005b6a47  FADDP
005b6a49  FLD float ptr [ECX + 0x8]
005b6a4c  FMUL float ptr [EAX + 0x20]
005b6a4f  FADDP
005b6a51  FLD float ptr [ECX + 0x4]
005b6a54  FMUL float ptr [EAX + 0x10]
005b6a57  FADDP
005b6a59  FSTP float ptr [ESP + 0x8]
005b6a5d  FLD float ptr [EAX + 0x34]
005b6a60  FMUL float ptr [ECX + 0xc]
005b6a63  FLD float ptr [EAX + 0x4]
005b6a66  FMUL float ptr [ECX]
005b6a68  FADDP
005b6a6a  FLD float ptr [ECX + 0x4]
005b6a6d  FMUL float ptr [EAX + 0x14]
005b6a70  FADDP
005b6a72  FLD float ptr [EAX + 0x24]
005b6a75  FMUL float ptr [ECX + 0x8]
005b6a78  FADDP
005b6a7a  FSTP float ptr [ESP + 0xc]
005b6a7e  FLD float ptr [EAX + 0x28]
005b6a81  FMUL float ptr [ECX + 0x8]
005b6a84  FLD float ptr [EAX + 0x18]
005b6a87  FMUL float ptr [ECX + 0x4]
005b6a8a  FADDP
005b6a8c  FLD float ptr [EAX + 0x8]
005b6a8f  FMUL float ptr [ECX]
005b6a91  FADDP
005b6a93  FLD float ptr [ECX + 0xc]
005b6a96  FMUL float ptr [EAX + 0x38]
005b6a99  FADDP
005b6a9b  FSTP float ptr [ESP + 0x10]
005b6a9f  FLD float ptr [EAX + 0x1c]
005b6aa2  FMUL float ptr [ECX + 0x4]
005b6aa5  FLD float ptr [EAX + 0x3c]
005b6aa8  FMUL float ptr [ECX + 0xc]
005b6aab  FADDP
005b6aad  FLD float ptr [ECX + 0x8]
005b6ab0  FMUL float ptr [EAX + 0x2c]
005b6ab3  FADDP
005b6ab5  FLD float ptr [ECX]
005b6ab7  FMUL float ptr [EAX + 0xc]
005b6aba  FADDP
005b6abc  FSTP float ptr [ESP + 0x14]
005b6ac0  FLD float ptr [ECX + 0x18]
005b6ac3  FMUL float ptr [EAX + 0x20]
005b6ac6  FLD float ptr [EAX + 0x10]
005b6ac9  FMUL float ptr [ECX + 0x14]
005b6acc  FADDP
005b6ace  FLD float ptr [ECX + 0x1c]
005b6ad1  FMUL float ptr [EAX + 0x30]
005b6ad4  FADDP
005b6ad6  FLD float ptr [ECX + 0x10]
005b6ad9  FMUL float ptr [EAX]
005b6adb  FADDP
005b6add  FSTP float ptr [ESP + 0x18]
005b6ae1  FLD float ptr [ECX + 0x18]
005b6ae4  FMUL float ptr [EAX + 0x24]
005b6ae7  FLD float ptr [ECX + 0x10]
005b6aea  FMUL float ptr [EAX + 0x4]
005b6aed  FADDP
005b6aef  FLD float ptr [ECX + 0x14]
005b6af2  FMUL float ptr [EAX + 0x14]
005b6af5  FADDP
005b6af7  FLD float ptr [ECX + 0x1c]
005b6afa  FMUL float ptr [EAX + 0x34]
005b6afd  FADDP
005b6aff  FSTP float ptr [ESP + 0x1c]
005b6b03  FLD float ptr [ECX + 0x1c]
005b6b06  FMUL float ptr [EAX + 0x38]
005b6b09  FLD float ptr [ECX + 0x18]
005b6b0c  FMUL float ptr [EAX + 0x28]
005b6b0f  FADDP
005b6b11  FLD float ptr [EAX + 0x18]
005b6b14  FMUL float ptr [ECX + 0x14]
005b6b17  FADDP
005b6b19  FLD float ptr [ECX + 0x10]
005b6b1c  FMUL float ptr [EAX + 0x8]
005b6b1f  FADDP
005b6b21  FSTP float ptr [ESP + 0x20]
005b6b25  FLD float ptr [EAX + 0x3c]
005b6b28  FMUL float ptr [ECX + 0x1c]
005b6b2b  FLD float ptr [ECX + 0x18]
005b6b2e  FMUL float ptr [EAX + 0x2c]
005b6b31  FADDP
005b6b33  FLD float ptr [ECX + 0x10]
005b6b36  FMUL float ptr [EAX + 0xc]
005b6b39  FADDP
005b6b3b  FLD float ptr [EAX + 0x1c]
005b6b3e  FMUL float ptr [ECX + 0x14]
005b6b41  FADDP
005b6b43  FSTP float ptr [ESP + 0x24]
005b6b47  FLD float ptr [ECX + 0x28]
005b6b4a  FMUL float ptr [EAX + 0x20]
005b6b4d  FLD float ptr [ECX + 0x24]
005b6b50  FMUL float ptr [EAX + 0x10]
005b6b53  FADDP
005b6b55  FLD float ptr [ECX + 0x2c]
005b6b58  FMUL float ptr [EAX + 0x30]
005b6b5b  FADDP
005b6b5d  FLD float ptr [ECX + 0x20]
005b6b60  FMUL float ptr [EAX]
005b6b62  FADDP
005b6b64  FSTP float ptr [ESP + 0x28]
005b6b68  FLD float ptr [ECX + 0x28]
005b6b6b  FMUL float ptr [EAX + 0x24]
005b6b6e  FLD float ptr [ECX + 0x20]
005b6b71  FMUL float ptr [EAX + 0x4]
005b6b74  FADDP
005b6b76  FLD float ptr [ECX + 0x24]
005b6b79  FMUL float ptr [EAX + 0x14]
005b6b7c  FADDP
005b6b7e  FLD float ptr [ECX + 0x2c]
005b6b81  FMUL float ptr [EAX + 0x34]
005b6b84  FADDP
005b6b86  FSTP float ptr [ESP + 0x2c]
005b6b8a  FLD float ptr [ECX + 0x2c]
005b6b8d  FMUL float ptr [EAX + 0x38]
005b6b90  FLD float ptr [ECX + 0x28]
005b6b93  FMUL float ptr [EAX + 0x28]
005b6b96  FADDP
005b6b98  FLD float ptr [EAX + 0x18]
005b6b9b  FMUL float ptr [ECX + 0x24]
005b6b9e  FADDP
005b6ba0  FLD float ptr [ECX + 0x20]
005b6ba3  FMUL float ptr [EAX + 0x8]
005b6ba6  FADDP
005b6ba8  FSTP float ptr [ESP + 0x30]
005b6bac  FLD float ptr [EAX + 0x3c]
005b6baf  FMUL float ptr [ECX + 0x2c]
005b6bb2  FLD float ptr [ECX + 0x28]
005b6bb5  FMUL float ptr [EAX + 0x2c]
005b6bb8  FADDP
005b6bba  FLD float ptr [ECX + 0x20]
005b6bbd  FMUL float ptr [EAX + 0xc]
005b6bc0  FADDP
005b6bc2  FLD float ptr [EAX + 0x1c]
005b6bc5  FMUL float ptr [ECX + 0x24]
005b6bc8  FADDP
005b6bca  FSTP float ptr [ESP + 0x34]
005b6bce  FLD float ptr [ECX + 0x38]
005b6bd1  FMUL float ptr [EAX + 0x20]
005b6bd4  FLD float ptr [ECX + 0x34]
005b6bd7  FMUL float ptr [EAX + 0x10]
005b6bda  FADDP
005b6bdc  FLD float ptr [ECX + 0x3c]
005b6bdf  FMUL float ptr [EAX + 0x30]
005b6be2  FADDP
005b6be4  FLD float ptr [ECX + 0x30]
005b6be7  FMUL float ptr [EAX]
005b6be9  FADDP
005b6beb  FSTP float ptr [ESP + 0x38]
005b6bef  FLD float ptr [ECX + 0x38]
005b6bf2  FMUL float ptr [EAX + 0x24]
005b6bf5  FLD float ptr [ECX + 0x30]
005b6bf8  FMUL float ptr [EAX + 0x4]
005b6bfb  FADDP
005b6bfd  FLD float ptr [ECX + 0x34]
005b6c00  FMUL float ptr [EAX + 0x14]
005b6c03  FADDP
005b6c05  FLD float ptr [ECX + 0x3c]
005b6c08  FMUL float ptr [EAX + 0x34]
005b6c0b  FADDP
005b6c0d  FSTP float ptr [ESP + 0x3c]
005b6c11  FLD float ptr [ECX + 0x3c]
005b6c14  FMUL float ptr [EAX + 0x38]
005b6c17  FLD float ptr [ECX + 0x38]
005b6c1a  FMUL float ptr [EAX + 0x28]
005b6c1d  FADDP
005b6c1f  FLD float ptr [EAX + 0x18]
005b6c22  FMUL float ptr [ECX + 0x34]
005b6c25  FADDP
005b6c27  FLD float ptr [ECX + 0x30]
005b6c2a  FMUL float ptr [EAX + 0x8]
005b6c2d  FADDP
005b6c2f  FSTP float ptr [ESP + 0x40]
005b6c33  MOV EDI,dword ptr [ESP + 0x4c]
005b6c37  FLD float ptr [EAX + 0x3c]
005b6c3a  LEA ESI,[ESP + 0x8]
005b6c3e  FMUL float ptr [ECX + 0x3c]
005b6c41  FLD float ptr [ECX + 0x38]
005b6c44  FMUL float ptr [EAX + 0x2c]
005b6c47  FADDP
005b6c49  FLD float ptr [ECX + 0x30]
005b6c4c  FMUL float ptr [EAX + 0xc]
005b6c4f  FADDP
005b6c51  FLD float ptr [EAX + 0x1c]
005b6c54  FMUL float ptr [ECX + 0x34]
005b6c57  MOV ECX,0x10
005b6c5c  FADDP
005b6c5e  FSTP float ptr [ESP + 0x44]
005b6c62  MOVSD.REP ES:EDI,ESI
005b6c64  POP EDI
005b6c65  POP ESI
005b6c66  ADD ESP,0x40
005b6c69  RET
