00493b00  MOV ECX,dword ptr [ESP + 0x4]
00493b04  SUB ESP,0x54
00493b07  MOV EAX,ECX
00493b09  CALL 0x004939d0
00493b0e  FCOM float ptr [0x00895450]
00493b14  FNSTSW AX
00493b16  TEST AH,0x5
00493b19  JP 0x00493b2c
00493b1b  FCOM float ptr [0x00891108]
00493b21  FNSTSW AX
00493b23  TEST AH,0x41
00493b26  JZ 0x00493f46
00493b2c  MOV EAX,dword ptr [ECX + 0x4]
00493b2f  FLD float ptr [0x0089096c]
00493b35  FDIV ST0,ST1
00493b37  MOV EDX,dword ptr [ECX + 0x14]
00493b3a  MOV dword ptr [ESP + 0x8],EAX
00493b3e  MOV EAX,dword ptr [ECX + 0x24]
00493b41  MOV dword ptr [ESP + 0x4],EAX
00493b45  MOV EAX,dword ptr [ECX + 0x8]
00493b48  MOV dword ptr [ESP + 0xc],EDX
00493b4c  MOV EDX,dword ptr [ECX + 0x34]
00493b4f  MOV dword ptr [ESP + 0x2c],EAX
00493b53  MOV EAX,dword ptr [ECX + 0x28]
00493b56  MOV dword ptr [ESP],EDX
00493b59  MOV EDX,dword ptr [ECX + 0x18]
00493b5c  MOV dword ptr [ESP + 0x24],EAX
00493b60  MOV EAX,dword ptr [ECX + 0xc]
00493b63  MOV dword ptr [ESP + 0x28],EDX
00493b67  MOV EDX,dword ptr [ECX + 0x38]
00493b6a  MOV dword ptr [ESP + 0x20],EDX
00493b6e  MOV EDX,dword ptr [ECX + 0x1c]
00493b71  MOV dword ptr [ESP + 0x1c],EAX
00493b75  MOV EAX,dword ptr [ECX + 0x2c]
00493b78  MOV dword ptr [ESP + 0x14],EAX
00493b7c  MOV dword ptr [ESP + 0x18],EDX
00493b80  MOV EAX,dword ptr [ESP + 0x5c]
00493b84  FLD float ptr [ECX]
00493b86  FLD float ptr [ECX + 0x10]
00493b89  FLD float ptr [ECX + 0x20]
00493b8c  FLD float ptr [ECX + 0x30]
00493b8f  MOV ECX,dword ptr [ECX + 0x3c]
00493b92  MOV dword ptr [ESP + 0x10],ECX
00493b96  FLD float ptr [ESP + 0x10]
00493b9a  FMUL float ptr [ESP + 0x24]
00493b9e  FLD float ptr [ESP + 0x14]
00493ba2  FMUL float ptr [ESP + 0x20]
00493ba6  FSUBP
00493ba8  FSTP float ptr [ESP + 0x30]
00493bac  FLD float ptr [ESP + 0x18]
00493bb0  FMUL float ptr [ESP + 0x20]
00493bb4  FSTP float ptr [ESP + 0x40]
00493bb8  FLD float ptr [ESP + 0x10]
00493bbc  FMUL float ptr [ESP + 0x28]
00493bc0  FSTP float ptr [ESP + 0x38]
00493bc4  FLD float ptr [ESP + 0x40]
00493bc8  FSUB float ptr [ESP + 0x38]
00493bcc  FSTP float ptr [ESP + 0x4c]
00493bd0  FLD float ptr [ESP + 0x14]
00493bd4  FMUL float ptr [ESP + 0x28]
00493bd8  FLD float ptr [ESP + 0x18]
00493bdc  FMUL float ptr [ESP + 0x24]
00493be0  FSUBP
00493be2  FST float ptr [ESP + 0x3c]
00493be6  FMUL float ptr [ESP]
00493be9  FLD float ptr [ESP + 0x4c]
00493bed  FMUL float ptr [ESP + 0x4]
00493bf1  FADDP
00493bf3  FLD float ptr [ESP + 0x30]
00493bf7  FMUL float ptr [ESP + 0xc]
00493bfb  FADDP
00493bfd  FMUL ST5
00493bff  FSTP float ptr [EAX]
00493c01  FLD float ptr [ESP + 0x1c]
00493c05  FMUL float ptr [ESP + 0x20]
00493c09  FLD float ptr [ESP + 0x10]
00493c0d  FMUL float ptr [ESP + 0x2c]
00493c11  FSUBP
00493c13  FSTP float ptr [ESP + 0x34]
00493c17  FLD float ptr [ESP + 0x14]
00493c1b  FMUL float ptr [ESP + 0x2c]
00493c1f  FSTP float ptr [ESP + 0x48]
00493c23  FLD float ptr [ESP + 0x1c]
00493c27  FMUL float ptr [ESP + 0x24]
00493c2b  FSTP float ptr [ESP + 0x44]
00493c2f  FLD float ptr [ESP + 0x48]
00493c33  FSUB float ptr [ESP + 0x44]
00493c37  FST float ptr [ESP + 0x50]
00493c3b  FMUL float ptr [ESP]
00493c3e  FLD float ptr [ESP + 0x34]
00493c42  FMUL float ptr [ESP + 0x4]
00493c46  FADDP
00493c48  FLD float ptr [ESP + 0x30]
00493c4c  FMUL float ptr [ESP + 0x8]
00493c50  FADDP
00493c52  FCHS
00493c54  FMUL ST5
00493c56  FSTP float ptr [EAX + 0x4]
00493c59  FLD float ptr [ESP + 0x38]
00493c5d  FSUB float ptr [ESP + 0x40]
00493c61  FSTP float ptr [ESP + 0x40]
00493c65  FLD float ptr [ESP + 0x18]
00493c69  FMUL float ptr [ESP + 0x2c]
00493c6d  FLD float ptr [ESP + 0x1c]
00493c71  FMUL float ptr [ESP + 0x28]
00493c75  FSUBP
00493c77  FST float ptr [ESP + 0x38]
00493c7b  FMUL float ptr [ESP]
00493c7e  FLD float ptr [ESP + 0x40]
00493c82  FMUL float ptr [ESP + 0x8]
00493c86  FADDP
00493c88  FLD float ptr [ESP + 0x34]
00493c8c  FMUL float ptr [ESP + 0xc]
00493c90  FADDP
00493c92  FMUL ST5
00493c94  FSTP float ptr [EAX + 0x8]
00493c97  FLD float ptr [ESP + 0x44]
00493c9b  FSUB float ptr [ESP + 0x48]
00493c9f  FST float ptr [ESP + 0x48]
00493ca3  FMUL float ptr [ESP + 0xc]
00493ca7  FLD float ptr [ESP + 0x38]
00493cab  FMUL float ptr [ESP + 0x4]
00493caf  FADDP
00493cb1  FLD float ptr [ESP + 0x3c]
00493cb5  FMUL float ptr [ESP + 0x8]
00493cb9  FADDP
00493cbb  FCHS
00493cbd  FMUL ST5
00493cbf  FSTP float ptr [EAX + 0xc]
00493cc2  FLD float ptr [ESP + 0x3c]
00493cc6  FMUL ST1
00493cc8  FLD float ptr [ESP + 0x4c]
00493ccc  FMUL ST3
00493cce  FADDP
00493cd0  FLD float ptr [ESP + 0x30]
00493cd4  FMUL ST4
00493cd6  FADDP
00493cd8  FCHS
00493cda  FMUL ST5
00493cdc  FSTP float ptr [EAX + 0x10]
00493cdf  FLD float ptr [ESP + 0x50]
00493ce3  FMUL ST1
00493ce5  FLD float ptr [ESP + 0x34]
00493ce9  FMUL ST3
00493ceb  FADDP
00493ced  FLD float ptr [ESP + 0x30]
00493cf1  FMUL ST5
00493cf3  FADDP
00493cf5  FMUL ST5
00493cf7  FSTP float ptr [EAX + 0x14]
00493cfa  FLD float ptr [ESP + 0x38]
00493cfe  FMUL ST1
00493d00  FLD float ptr [ESP + 0x40]
00493d04  FMUL ST5
00493d06  FADDP
00493d08  FLD float ptr [ESP + 0x34]
00493d0c  FMUL ST4
00493d0e  FADDP
00493d10  FCHS
00493d12  FMUL ST5
00493d14  FSTP float ptr [EAX + 0x18]
00493d17  FLD float ptr [ESP + 0x48]
00493d1b  FMUL ST3
00493d1d  FLD float ptr [ESP + 0x38]
00493d21  FMUL ST3
00493d23  FADDP
00493d25  FLD float ptr [ESP + 0x3c]
00493d29  FMUL ST5
00493d2b  FADDP
00493d2d  FMUL ST5
00493d2f  FSTP float ptr [EAX + 0x1c]
00493d32  FLD float ptr [ESP + 0x10]
00493d36  FMUL float ptr [ESP + 0x4]
00493d3a  FLD float ptr [ESP + 0x14]
00493d3e  FMUL float ptr [ESP]
00493d41  FSUBP
00493d43  FSTP float ptr [ESP + 0x50]
00493d47  FLD float ptr [ESP + 0x18]
00493d4b  FMUL float ptr [ESP]
00493d4e  FSTP float ptr [ESP + 0x48]
00493d52  FLD float ptr [ESP + 0x10]
00493d56  FMUL float ptr [ESP + 0xc]
00493d5a  FSTP float ptr [ESP + 0x4c]
00493d5e  FLD float ptr [ESP + 0x14]
00493d62  FMUL float ptr [ESP + 0xc]
00493d66  FLD float ptr [ESP + 0x18]
00493d6a  FMUL float ptr [ESP + 0x4]
00493d6e  FSUBP
00493d70  FSTP float ptr [ESP + 0x38]
00493d74  FLD float ptr [ESP + 0x48]
00493d78  FSUB float ptr [ESP + 0x4c]
00493d7c  FMUL ST2
00493d7e  FLD float ptr [ESP + 0x38]
00493d82  FMUL ST2
00493d84  FADDP
00493d86  FLD float ptr [ESP + 0x50]
00493d8a  FMUL ST4
00493d8c  FADDP
00493d8e  FMUL ST5
00493d90  FSTP float ptr [EAX + 0x20]
00493d93  FLD float ptr [ESP + 0x1c]
00493d97  FMUL float ptr [ESP]
00493d9a  FLD float ptr [ESP + 0x10]
00493d9e  FMUL float ptr [ESP + 0x8]
00493da2  FSUBP
00493da4  FSTP float ptr [ESP + 0x44]
00493da8  FLD float ptr [ESP + 0x14]
00493dac  FMUL float ptr [ESP + 0x8]
00493db0  FSTP float ptr [ESP + 0x3c]
00493db4  FLD float ptr [ESP + 0x1c]
00493db8  FMUL float ptr [ESP + 0x4]
00493dbc  FSTP float ptr [ESP + 0x40]
00493dc0  FLD float ptr [ESP + 0x3c]
00493dc4  FSUB float ptr [ESP + 0x40]
00493dc8  FMUL ST1
00493dca  FLD float ptr [ESP + 0x44]
00493dce  FMUL ST3
00493dd0  FADDP
00493dd2  FLD float ptr [ESP + 0x50]
00493dd6  FMUL ST5
00493dd8  FADDP
00493dda  FCHS
00493ddc  FMUL ST5
00493dde  FSTP float ptr [EAX + 0x24]
00493de1  FLD float ptr [ESP + 0x18]
00493de5  FMUL float ptr [ESP + 0x8]
00493de9  FLD float ptr [ESP + 0x1c]
00493ded  FMUL float ptr [ESP + 0xc]
00493df1  FSUBP
00493df3  FSTP float ptr [ESP + 0x50]
00493df7  FLD float ptr [ESP + 0x4c]
00493dfb  FSUB float ptr [ESP + 0x48]
00493dff  FMUL ST4
00493e01  FLD float ptr [ESP + 0x50]
00493e05  FMUL ST2
00493e07  FADDP
00493e09  FLD float ptr [ESP + 0x44]
00493e0d  FMUL ST4
00493e0f  FADDP
00493e11  FMUL ST5
00493e13  FSTP float ptr [EAX + 0x28]
00493e16  FLD float ptr [ESP + 0x40]
00493e1a  FSUB float ptr [ESP + 0x3c]
00493e1e  FMUL ST3
00493e20  FLD float ptr [ESP + 0x50]
00493e24  FMUL ST3
00493e26  FADDP
00493e28  FLD float ptr [ESP + 0x38]
00493e2c  FMUL ST5
00493e2e  FADDP
00493e30  FCHS
00493e32  FMUL ST5
00493e34  FSTP float ptr [EAX + 0x2c]
00493e37  FLD float ptr [ESP + 0x20]
00493e3b  FMUL float ptr [ESP + 0x4]
00493e3f  FLD float ptr [ESP + 0x24]
00493e43  FMUL float ptr [ESP]
00493e46  FSUBP
00493e48  FSTP float ptr [ESP + 0x50]
00493e4c  FLD float ptr [ESP + 0x28]
00493e50  FMUL float ptr [ESP]
00493e53  FSTP float ptr [ESP + 0x48]
00493e57  FLD float ptr [ESP + 0x20]
00493e5b  FMUL float ptr [ESP + 0xc]
00493e5f  FSTP float ptr [ESP + 0x4c]
00493e63  FLD float ptr [ESP + 0x24]
00493e67  FMUL float ptr [ESP + 0xc]
00493e6b  FLD float ptr [ESP + 0x28]
00493e6f  FMUL float ptr [ESP + 0x4]
00493e73  FSUBP
00493e75  FSTP float ptr [ESP + 0x38]
00493e79  FLD float ptr [ESP + 0x48]
00493e7d  FSUB float ptr [ESP + 0x4c]
00493e81  FMUL ST2
00493e83  FLD float ptr [ESP + 0x38]
00493e87  FMUL ST2
00493e89  FADDP
00493e8b  FLD float ptr [ESP + 0x50]
00493e8f  FMUL ST4
00493e91  FADDP
00493e93  FCHS
00493e95  FMUL ST5
00493e97  FSTP float ptr [EAX + 0x30]
00493e9a  FLD float ptr [ESP + 0x2c]
00493e9e  FMUL float ptr [ESP]
00493ea1  FLD float ptr [ESP + 0x20]
00493ea5  FMUL float ptr [ESP + 0x8]
00493ea9  FSUBP
00493eab  FSTP float ptr [ESP + 0x44]
00493eaf  FLD float ptr [ESP + 0x24]
00493eb3  FMUL float ptr [ESP + 0x8]
00493eb7  FSTP float ptr [ESP + 0x3c]
00493ebb  FLD float ptr [ESP + 0x2c]
00493ebf  FMUL float ptr [ESP + 0x4]
00493ec3  FSTP float ptr [ESP + 0x40]
00493ec7  FLD float ptr [ESP + 0x3c]
00493ecb  FSUB float ptr [ESP + 0x40]
00493ecf  FMUL ST1
00493ed1  FLD float ptr [ESP + 0x44]
00493ed5  FMUL ST3
00493ed7  FADDP
00493ed9  FLD float ptr [ESP + 0x50]
00493edd  FMUL ST5
00493edf  FADDP
00493ee1  FMUL ST5
00493ee3  FSTP float ptr [EAX + 0x34]
00493ee6  FLD float ptr [ESP + 0x28]
00493eea  FMUL float ptr [ESP + 0x8]
00493eee  FLD float ptr [ESP + 0x2c]
00493ef2  FMUL float ptr [ESP + 0xc]
00493ef6  FSUBP
00493ef8  FSTP float ptr [ESP + 0x50]
00493efc  FLD float ptr [ESP + 0x4c]
00493f00  FSUB float ptr [ESP + 0x48]
00493f04  FMUL ST4
00493f06  FLD float ptr [ESP + 0x50]
00493f0a  FMUL ST2
00493f0c  FADDP
00493f0e  FLD float ptr [ESP + 0x44]
00493f12  FMUL ST4
00493f14  FADDP
00493f16  FCHS
00493f18  FMUL ST5
00493f1a  FSTP float ptr [EAX + 0x38]
00493f1d  FSTP ST0
00493f1f  FLD float ptr [ESP + 0x40]
00493f23  FSUB float ptr [ESP + 0x3c]
00493f27  FMUL ST2
00493f29  FLD float ptr [ESP + 0x50]
00493f2d  FMUL ST2
00493f2f  FADDP
00493f31  FLD float ptr [ESP + 0x38]
00493f35  FMUL ST4
00493f37  FADDP
00493f39  FMUL ST4
00493f3b  FSTP float ptr [EAX + 0x3c]
00493f3e  FSTP ST0
00493f40  FSTP ST0
00493f42  FSTP ST0
00493f44  FSTP ST0
00493f46  ADD ESP,0x54
00493f49  RET
