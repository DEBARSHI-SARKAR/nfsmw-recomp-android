005c6ae0  FLD float ptr [ESP + 0x8]
005c6ae4  MOV EAX,dword ptr [ESP + 0x4]
005c6ae8  FMUL float ptr [0x008a2f94]
005c6aee  MOV EDX,dword ptr [EAX]
005c6af0  MOV ECX,dword ptr [ESP + 0xc]
005c6af4  FLD ST0
005c6af6  FSIN
005c6af8  FXCH
005c6afa  FCOS
005c6afc  FLD float ptr [EAX + 0x4]
005c6aff  FLD ST0
005c6b01  MOV dword ptr [ECX],EDX
005c6b03  FMUL ST2
005c6b05  FLD ST3
005c6b07  FMUL float ptr [EAX + 0x8]
005c6b0a  FSUBP
005c6b0c  FSTP float ptr [ECX + 0x4]
005c6b0f  FLD ST1
005c6b11  FMUL float ptr [EAX + 0x8]
005c6b14  FXCH
005c6b16  FMUL ST3
005c6b18  FADDP
005c6b1a  FSTP float ptr [ECX + 0x8]
005c6b1d  MOV EDX,dword ptr [EAX + 0xc]
005c6b20  MOV dword ptr [ECX + 0xc],EDX
005c6b23  FLD float ptr [EAX + 0x14]
005c6b26  MOV EDX,dword ptr [EAX + 0x10]
005c6b29  FLD ST0
005c6b2b  FMUL ST2
005c6b2d  MOV dword ptr [ECX + 0x10],EDX
005c6b30  FLD ST3
005c6b32  FMUL float ptr [EAX + 0x18]
005c6b35  FSUBP
005c6b37  FSTP float ptr [ECX + 0x14]
005c6b3a  FLD ST1
005c6b3c  FMUL float ptr [EAX + 0x18]
005c6b3f  FXCH
005c6b41  FMUL ST3
005c6b43  FADDP
005c6b45  FSTP float ptr [ECX + 0x18]
005c6b48  MOV EDX,dword ptr [EAX + 0x1c]
005c6b4b  MOV dword ptr [ECX + 0x1c],EDX
005c6b4e  FLD float ptr [EAX + 0x24]
005c6b51  MOV EDX,dword ptr [EAX + 0x20]
005c6b54  FLD ST0
005c6b56  FMUL ST2
005c6b58  MOV dword ptr [ECX + 0x20],EDX
005c6b5b  FLD ST3
005c6b5d  FMUL float ptr [EAX + 0x28]
005c6b60  FSUBP
005c6b62  FSTP float ptr [ECX + 0x24]
005c6b65  FMUL ST2
005c6b67  FLD ST1
005c6b69  FMUL float ptr [EAX + 0x28]
005c6b6c  FADDP
005c6b6e  FSTP float ptr [ECX + 0x28]
005c6b71  MOV EDX,dword ptr [EAX + 0x2c]
005c6b74  MOV dword ptr [ECX + 0x2c],EDX
005c6b77  FLD float ptr [EAX + 0x34]
005c6b7a  MOV EDX,dword ptr [EAX + 0x30]
005c6b7d  FLD ST0
005c6b7f  FMUL ST2
005c6b81  MOV dword ptr [ECX + 0x30],EDX
005c6b84  FLD ST3
005c6b86  FMUL float ptr [EAX + 0x38]
005c6b89  FSUBP
005c6b8b  FSTP float ptr [ECX + 0x34]
005c6b8e  FXCH
005c6b90  FMUL float ptr [EAX + 0x38]
005c6b93  FXCH
005c6b95  FMUL ST2
005c6b97  FADDP
005c6b99  FSTP float ptr [ECX + 0x38]
005c6b9c  MOV EAX,dword ptr [EAX + 0x3c]
005c6b9f  MOV dword ptr [ECX + 0x3c],EAX
005c6ba2  FSTP ST0
005c6ba4  RET
