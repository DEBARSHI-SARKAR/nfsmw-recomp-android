0069da90  SUB ESP,0x24
0069da93  PUSH ESI
0069da94  MOV ESI,ECX
0069da96  MOV EAX,dword ptr [ESI + 0x10c]
0069da9c  MOV ECX,dword ptr [ESI + 0x104]
0069daa2  MOV ECX,dword ptr [ECX + 0x8]
0069daa5  FLD float ptr [ECX + EAX*0x4 + 0x8]
0069daa9  MOV EDX,dword ptr [ESI + 0x100]
0069daaf  FMUL float ptr [0x008a938c]
0069dab5  FMUL float ptr [0x008f8a90]
0069dabb  FLD float ptr [ECX + 0x10]
0069dabe  MOV ECX,dword ptr [EDX + 0x8]
0069dac1  FMUL float ptr [0x008a938c]
0069dac7  FMUL float ptr [0x008f8a94]
0069dacd  FSTP float ptr [ESP + 0x18]
0069dad1  FLD float ptr [ECX + EAX*0x4 + 0x20]
0069dad5  FSTP float ptr [ESP + 0x20]
0069dad9  FLD float ptr [ECX + EAX*0x4 + 0x38]
0069dadd  FSTP float ptr [ESP + 0x24]
0069dae1  FLD float ptr [ESI + 0xd4]
0069dae7  FCOMP float ptr [0x00890968]
0069daed  FNSTSW AX
0069daef  TEST AH,0x41
0069daf2  JP 0x0069db0e
0069daf4  MOV AL,byte ptr [ESI + 0x134]
0069dafa  TEST AL,AL
0069dafc  JNZ 0x0069db0e
0069dafe  FLD float ptr [ESP + 0x30]
0069db02  FDIV float ptr [ESI + 0xc4]
0069db08  FSTP float ptr [ESI + 0xd0]
0069db0e  FLD float ptr [ESP + 0x30]
0069db12  MOV EAX,dword ptr [ESP + 0x30]
0069db16  FSUB float ptr [ESI + 0xfc]
0069db1c  MOV dword ptr [ESI + 0xfc],EAX
0069db22  FDIV float ptr [ESP + 0x3c]
0069db26  FSTP float ptr [ESP + 0x1c]
0069db2a  FLD float ptr [ESP + 0x38]
0069db2e  FCOMP float ptr [0x00890968]
0069db34  FNSTSW AX
0069db36  TEST AH,0x41
0069db39  JNZ 0x0069db41
0069db3b  FLD float ptr [ESP + 0x38]
0069db3f  JMP 0x0069db47
0069db41  FLD float ptr [0x00890968]
0069db47  MOV ECX,dword ptr [ESP + 0x2c]
0069db4b  FSTP float ptr [ESI + 0xd4]
0069db51  MOV dword ptr [ESI + 0x130],ECX
0069db57  FMUL float ptr [ESI + 0xc8]
0069db5d  FLD float ptr [ESP + 0x18]
0069db61  FMUL float ptr [ESI + 0xcc]
0069db67  FSTP float ptr [ESP + 0xc]
0069db6b  FLD float ptr [ESP + 0x30]
0069db6f  FCOMP float ptr [0x00890968]
0069db75  FLD float ptr [ESP + 0x30]
0069db79  FNSTSW AX
0069db7b  TEST AH,0x5
0069db7e  JP 0x0069db82
0069db80  FCHS
0069db82  FST float ptr [ESP + 0x8]
0069db86  FCOMP float ptr [0x0089096c]
0069db8c  FNSTSW AX
0069db8e  TEST AH,0x5
0069db91  JP 0x0069dc0d
0069db93  FSTP ST0
0069db95  MOV AL,byte ptr [ESI + 0x134]
0069db9b  TEST AL,AL
0069db9d  FLD float ptr [0x0089096c]
0069dba3  FDIV float ptr [ESI + 0xc4]
0069dba9  FLD ST0
0069dbab  FMUL float ptr [ESI + 0xc8]
0069dbb1  FMUL float ptr [ESP + 0x30]
0069dbb5  FMUL float ptr [ESP + 0x38]
0069dbb9  FCHS
0069dbbb  FSTP float ptr [ESP + 0x18]
0069dbbf  FMUL float ptr [ESI + 0xcc]
0069dbc5  FMUL float ptr [ESP + 0x30]
0069dbc9  FMUL float ptr [ESP + 0x38]
0069dbcd  FCHS
0069dbcf  JNZ 0x0069dc67
0069dbd5  FLD float ptr [ESI + 0xcc]
0069dbdb  FMUL float ptr [ESI + 0xe0]
0069dbe1  FCHS
0069dbe3  FADD float ptr [ESI + 0xe0]
0069dbe9  FSTP float ptr [ESI + 0xe0]
0069dbef  FLD float ptr [ESP + 0x18]
0069dbf3  FADD float ptr [ESI + 0xe4]
0069dbf9  FSTP float ptr [ESI + 0xe4]
0069dbff  FADD float ptr [ESI + 0xe4]
0069dc05  FSTP float ptr [ESI + 0xe4]
0069dc0b  JMP 0x0069dc69
0069dc0d  FLD float ptr [ESI + 0xd0]
0069dc13  FCOMP float ptr [0x00890968]
0069dc19  FNSTSW AX
0069dc1b  TEST AH,0x41
0069dc1e  JNZ 0x0069dc22
0069dc20  FCHS
0069dc22  MOV CL,byte ptr [ESI + 0x134]
0069dc28  TEST CL,CL
0069dc2a  JNZ 0x0069dc3a
0069dc2c  FADD float ptr [ESI + 0xe4]
0069dc32  FSTP float ptr [ESI + 0xe4]
0069dc38  JMP 0x0069dc3c
0069dc3a  FSTP ST0
0069dc3c  FLD float ptr [ESI + 0xd0]
0069dc42  FCOMP float ptr [0x00890968]
0069dc48  FLD float ptr [ESP + 0xc]
0069dc4c  FNSTSW AX
0069dc4e  TEST AH,0x41
0069dc51  JNZ 0x0069dc55
0069dc53  FCHS
0069dc55  TEST CL,CL
0069dc57  JNZ 0x0069dc67
0069dc59  FADD float ptr [ESI + 0xe4]
0069dc5f  FSTP float ptr [ESI + 0xe4]
0069dc65  JMP 0x0069dc69
0069dc67  FSTP ST0
0069dc69  MOV EDX,dword ptr [ESP + 0x8]
0069dc6d  MOV EAX,dword ptr [ESP + 0x2c]
0069dc71  PUSH EDX
0069dc72  PUSH EAX
0069dc73  CALL 0x005cb5d0
0069dc78  FSTP float ptr [ESI + 0x118]
0069dc7e  FLD float ptr [ESI + 0xd0]
0069dc84  ADD ESP,0x4
0069dc87  FMUL float ptr [ESI + 0xc4]
0069dc8d  MOV dword ptr [ESP + 0x10],0x0
0069dc95  MOV dword ptr [ESP + 0x8],0x3f800000
0069dc9d  FSUB float ptr [ESP + 0x34]
0069dca1  FSTP float ptr [ESP + 0x3c]
0069dca5  FLD float ptr [ESP + 0x30]
0069dca9  MOV ECX,dword ptr [ESP + 0x3c]
0069dcad  FMUL float ptr [ESP + 0x30]
0069dcb1  MOV dword ptr [ESI + 0xf0],ECX
0069dcb7  FSTP float ptr [ESP + 0x18]
0069dcbb  FLD float ptr [ESP + 0x3c]
0069dcbf  FMUL float ptr [ESP + 0x3c]
0069dcc3  FADD float ptr [ESP + 0x18]
0069dcc7  FSTP float ptr [ESP]
0069dcca  CALL 0x005c5e80
0069dccf  MOV EDX,dword ptr [ESP + 0x38]
0069dcd3  FSTP float ptr [ESP + 0x14]
0069dcd7  ADD ESP,0x4
0069dcda  PUSH EDX
0069dcdb  MOV ECX,ESI
0069dcdd  CALL 0x0068e180
0069dce2  FSTP float ptr [ESP + 0x18]
0069dce6  FLD float ptr [ESP + 0x10]
0069dcea  FCOMP float ptr [0x008aabe0]
0069dcf0  FNSTSW AX
0069dcf2  TEST AH,0x41
0069dcf5  JNZ 0x0069dd6e
0069dcf7  FLD float ptr [0x00890968]
0069dcfd  FLD float ptr [ESP + 0x2c]
0069dd01  FUCOMPP
0069dd03  FNSTSW AX
0069dd05  TEST AH,0x44
0069dd08  JP 0x0069dd1d
0069dd0a  FLD float ptr [0x00890968]
0069dd10  FLD float ptr [ESP + 0x30]
0069dd14  FUCOMPP
0069dd16  FNSTSW AX
0069dd18  TEST AH,0x44
0069dd1b  JNP 0x0069dd6e
0069dd1d  FLD float ptr [ESP + 0x20]
0069dd21  PUSH ECX
0069dd22  FMUL float ptr [ESI + 0xec]
0069dd28  FMUL float ptr [ESP + 0x1c]
0069dd2c  FST float ptr [ESP + 0x8]
0069dd30  FDIV float ptr [ESP + 0x14]
0069dd34  FMUL float ptr [ESI + 0xd4]
0069dd3a  FSTP float ptr [ESP + 0x10]
0069dd3e  FLD float ptr [ESP + 0x34]
0069dd42  FMUL float ptr [ESP + 0x34]
0069dd46  FADD float ptr [ESP + 0x18]
0069dd4a  FSTP float ptr [ESP]
0069dd4d  CALL 0x005c5e80
0069dd52  FLD float ptr [ESI + 0xd4]
0069dd58  MOV ECX,ESI
0069dd5a  FDIV ST0,ST1
0069dd5c  FMUL float ptr [ESP + 0x8]
0069dd60  FMUL float ptr [ESP + 0xc]
0069dd64  FSTP float ptr [ESP]
0069dd67  FSTP ST0
0069dd69  CALL 0x0068e220
0069dd6e  FLD float ptr [ESI + 0x110]
0069dd74  FCOMP float ptr [0x0089096c]
0069dd7a  FNSTSW AX
0069dd7c  TEST AH,0x5
0069dd7f  JNP 0x0069ddfe
0069dd81  MOV AL,byte ptr [ESI + 0x134]
0069dd87  TEST AL,AL
0069dd89  JNZ 0x0069ddfe
0069dd8b  FLD float ptr [ESI + 0xe4]
0069dd91  MOV byte ptr [ESI + 0x134],0x0
0069dd98  FADD float ptr [ESI + 0xe0]
0069dd9e  FDIV float ptr [ESI + 0xc4]
0069dda4  FSTP float ptr [ESI + 0xdc]
0069ddaa  FLD float ptr [ESI + 0x118]
0069ddb0  FCOM float ptr [0x00890968]
0069ddb6  FNSTSW AX
0069ddb8  TEST AH,0x5
0069ddbb  JP 0x0069ddbf
0069ddbd  FCHS
0069ddbf  MOV ECX,dword ptr [ESI + 0xd4]
0069ddc5  FSTP float ptr [ESP + 0x34]
0069ddc9  MOV EAX,dword ptr [ESP + 0x34]
0069ddcd  PUSH EAX
0069ddce  PUSH ECX
0069ddcf  MOV ECX,ESI
0069ddd1  CALL 0x0068e090
0069ddd6  FST float ptr [ESI + 0xd8]
0069dddc  FLD float ptr [ESP + 0x2c]
0069dde0  FCOMP float ptr [0x00890968]
0069dde6  FNSTSW AX
0069dde8  TEST AH,0x41
0069ddeb  JNZ 0x0069ded6
0069ddf1  FCHS
0069ddf3  FSTP float ptr [ESI + 0xd8]
0069ddf9  JMP 0x0069ded8
0069ddfe  FLD float ptr [ESP + 0x38]
0069de02  FMUL float ptr [ESP + 0xc]
0069de06  FSTP float ptr [ESP + 0x10]
0069de0a  FLD float ptr [ESP + 0xc]
0069de0e  MOV EDX,dword ptr [ESP + 0x10]
0069de12  FMUL float ptr [ESP + 0x2c]
0069de16  MOV dword ptr [ESI + 0xdc],EDX
0069de1c  FCHS
0069de1e  FSTP float ptr [ESP + 0x14]
0069de22  FLD float ptr [ESP + 0x34]
0069de26  MOV EAX,dword ptr [ESP + 0x14]
0069de2a  FCOMP float ptr [0x00938298]
0069de30  MOV dword ptr [ESI + 0xd8],EAX
0069de36  FNSTSW AX
0069de38  TEST AH,0x5
0069de3b  JP 0x0069de6e
0069de3d  FLD float ptr [ESP + 0x4]
0069de41  FCOMP float ptr [0x00890cd4]
0069de47  FNSTSW AX
0069de49  TEST AH,0x41
0069de4c  JNZ 0x0069de6e
0069de4e  FLD float ptr [0x0089096c]
0069de54  FDIV float ptr [ESP + 0x4]
0069de58  FLD float ptr [ESP + 0x14]
0069de5c  FMUL ST1
0069de5e  FSTP float ptr [ESI + 0xd8]
0069de64  FMUL float ptr [ESP + 0x10]
0069de68  FSTP float ptr [ESI + 0xdc]
0069de6e  FLD float ptr [ESI + 0xe4]
0069de74  FADD float ptr [ESI + 0xe0]
0069de7a  FDIV float ptr [ESI + 0xc4]
0069de80  FSTP float ptr [ESP + 0x34]
0069de84  FLD float ptr [ESI + 0xdc]
0069de8a  FLD float ptr [ESP + 0x34]
0069de8e  FMUL ST1
0069de90  FCOMP float ptr [0x00890968]
0069de96  FNSTSW AX
0069de98  TEST AH,0x41
0069de9b  JNZ 0x0069dece
0069de9d  FCOM float ptr [0x00890968]
0069dea3  FNSTSW AX
0069dea5  FCOM float ptr [ESP + 0x34]
0069dea9  TEST AH,0x41
0069deac  FNSTSW AX
0069deae  JNZ 0x0069dec3
0069deb0  TEST AH,0x5
0069deb3  JNP 0x0069dece
0069deb5  FSTP ST0
0069deb7  FLD float ptr [ESP + 0x34]
0069debb  FSTP float ptr [ESI + 0xdc]
0069dec1  JMP 0x0069ded8
0069dec3  TEST AH,0x41
0069dec6  JZ 0x0069dece
0069dec8  FSTP ST0
0069deca  FLD float ptr [ESP + 0x34]
0069dece  FSTP float ptr [ESI + 0xdc]
0069ded4  JMP 0x0069ded8
0069ded6  FSTP ST0
0069ded8  FLD float ptr [ESI + 0xe8]
0069dede  FMUL float ptr [ESI + 0xd8]
0069dee4  FST float ptr [ESI + 0xd8]
0069deea  FLD float ptr [ESI + 0x110]
0069def0  FCOMP float ptr [0x0089096c]
0069def6  FNSTSW AX
0069def8  TEST AH,0x1
0069defb  JNZ 0x0069df2f
0069defd  MOV AL,byte ptr [ESI + 0x134]
0069df03  TEST AL,AL
0069df05  JNZ 0x0069df2f
0069df07  FLD float ptr [ESI + 0x108]
0069df0d  FMUL float ptr [ESI + 0xc4]
0069df13  FSUB float ptr [ESP + 0x1c]
0069df17  FDIV float ptr [ESI + 0xc4]
0069df1d  FMUL float ptr [0x008f8ab0]
0069df23  FADD float ptr [ESI + 0xdc]
0069df29  FSTP float ptr [ESI + 0xdc]
0069df2f  FLD float ptr [ESI + 0xe4]
0069df35  PUSH EBX
0069df36  FADD float ptr [ESI + 0xe0]
0069df3c  XOR BL,BL
0069df3e  FMUL float ptr [ESP + 0x34]
0069df42  FCOMP float ptr [0x00890968]
0069df48  FNSTSW AX
0069df4a  TEST AH,0x41
0069df4d  JNZ 0x0069df6d
0069df4f  MOV AL,byte ptr [ESI + 0x134]
0069df55  TEST AL,AL
0069df57  JNZ 0x0069df6d
0069df59  FLD float ptr [ESI + 0xdc]
0069df5f  MOV BL,0x1
0069df61  FMUL float ptr [0x008aac78]
0069df67  FSTP float ptr [ESI + 0xdc]
0069df6d  FMUL float ptr [ESI + 0x11c]
0069df73  FST float ptr [ESI + 0xd8]
0069df79  FLD float ptr [ESI + 0x120]
0069df7f  FMUL float ptr [ESI + 0xdc]
0069df85  FST float ptr [ESI + 0xdc]
0069df8b  FLD ST0
0069df8d  FMUL ST1
0069df8f  FLD ST2
0069df91  FMUL ST3
0069df93  FADDP
0069df95  FSTP float ptr [ESP + 0x38]
0069df99  MOV ECX,dword ptr [ESP + 0x38]
0069df9d  FSTP ST0
0069df9f  PUSH ECX
0069dfa0  FSTP ST0
0069dfa2  CALL 0x005c5e80
0069dfa7  FSTP float ptr [ESP + 0x3c]
0069dfab  ADD ESP,0x4
0069dfae  FLD float ptr [ESI + 0x12c]
0069dfb4  MOV dword ptr [ESI + 0x110],0x3f800000
0069dfbe  FMUL float ptr [ESI + 0xec]
0069dfc4  FMUL float ptr [ESP + 0x28]
0069dfc8  FMUL float ptr [ESI + 0xd4]
0069dfce  FMUL float ptr [ESP + 0x1c]
0069dfd2  FSTP float ptr [ESP + 0x1c]
0069dfd6  FLD float ptr [ESI + 0x124]
0069dfdc  FLD float ptr [ESP + 0x38]
0069dfe0  FCOMP float ptr [ESP + 0x1c]
0069dfe4  FNSTSW AX
0069dfe6  TEST AH,0x41
0069dfe9  JNZ 0x0069e030
0069dfeb  FLD float ptr [ESP + 0x38]
0069dfef  FCOMP float ptr [0x00890d60]
0069dff5  FNSTSW AX
0069dff7  TEST AH,0x41
0069dffa  JNZ 0x0069e030
0069dffc  FLD float ptr [ESP + 0x1c]
0069e000  FDIV float ptr [ESP + 0x38]
0069e004  FST float ptr [ESI + 0x110]
0069e00a  FLD ST0
0069e00c  FMUL float ptr [ESI + 0xd8]
0069e012  FSTP float ptr [ESI + 0xd8]
0069e018  FLD ST0
0069e01a  FMUL float ptr [ESI + 0xdc]
0069e020  FSTP float ptr [ESI + 0xdc]
0069e026  FLD ST0
0069e028  FMUL ST1
0069e02a  FMULP ST2
0069e02c  FSTP ST0
0069e02e  JMP 0x0069e046
0069e030  TEST BL,BL
0069e032  JZ 0x0069e046
0069e034  FLD float ptr [ESI + 0xdc]
0069e03a  FMUL float ptr [0x00896d64]
0069e040  FSTP float ptr [ESI + 0xdc]
0069e046  FLD float ptr [ESP + 0x3c]
0069e04a  POP EBX
0069e04b  FCOMP float ptr [0x00890968]
0069e051  FLD float ptr [ESP + 0x38]
0069e055  FNSTSW AX
0069e057  TEST AH,0x5
0069e05a  JP 0x0069e05e
0069e05c  FCHS
0069e05e  FCOMP
0069e060  FNSTSW AX
0069e062  TEST AH,0x41
0069e065  JNZ 0x0069e090
0069e067  FLD float ptr [ESP + 0x38]
0069e06b  FCOMP float ptr [0x00890968]
0069e071  FLD float ptr [ESP + 0x38]
0069e075  FNSTSW AX
0069e077  TEST AH,0x5
0069e07a  JP 0x0069e07e
0069e07c  FCHS
0069e07e  FLD float ptr [ESI + 0x110]
0069e084  FDIV ST0,ST1
0069e086  FMUL ST2
0069e088  FSTP float ptr [ESI + 0x110]
0069e08e  FSTP ST0
0069e090  MOV ECX,dword ptr [ESI + 0xa4]
0069e096  FSTP ST0
0069e098  FLD float ptr [ECX + 0xf0]
0069e09e  FMUL float ptr [ESI + 0xd8]
0069e0a4  FSTP float ptr [ESI + 0xd8]
0069e0aa  FLD float ptr [ECX + 0xec]
0069e0b0  FMUL float ptr [ESI + 0xdc]
0069e0b6  FST float ptr [ESI + 0xdc]
0069e0bc  FLD float ptr [ESP + 0x30]
0069e0c0  FCOMP float ptr [0x0089096c]
0069e0c6  FNSTSW AX
0069e0c8  TEST AH,0x41
0069e0cb  JNZ 0x0069e108
0069e0cd  FLD float ptr [ESI + 0x118]
0069e0d3  MOV EAX,dword ptr [ESI + 0x100]
0069e0d9  FMUL float ptr [0x008aabd8]
0069e0df  MOV EAX,dword ptr [EAX + 0x8]
0069e0e2  MOV EDX,dword ptr [ESI + 0x10c]
0069e0e8  FSIN
0069e0ea  FLD float ptr [ESI + 0x13c]
0069e0f0  FDIV float ptr [EAX + EDX*0x4 + 0x18]
0069e0f4  FMULP
0069e0f6  FMUL float ptr [ESI + 0xd8]
0069e0fc  FSUBR ST0,ST1
0069e0fe  FSTP float ptr [ESI + 0xdc]
0069e104  FSTP ST0
0069e106  JMP 0x0069e142
0069e108  FSTP ST0
0069e10a  FLD float ptr [ESP + 0x2c]
0069e10e  FCOMP float ptr [0x00890968]
0069e114  FLD float ptr [ESP + 0x2c]
0069e118  FNSTSW AX
0069e11a  TEST AH,0x5
0069e11d  JP 0x0069e121
0069e11f  FCHS
0069e121  FCOM float ptr [0x0089096c]
0069e127  FNSTSW AX
0069e129  TEST AH,0x5
0069e12c  JNP 0x0069e136
0069e12e  FSTP ST0
0069e130  FLD float ptr [0x0089096c]
0069e136  FMUL float ptr [ESI + 0xd8]
0069e13c  FSTP float ptr [ESI + 0xd8]
0069e142  MOV AL,byte ptr [ESI + 0x134]
0069e148  TEST AL,AL
0069e14a  JZ 0x0069e15b
0069e14c  MOV dword ptr [ESI + 0x108],0x0
0069e156  JMP 0x0069e1f8
0069e15b  FLD float ptr [ESI + 0x110]
0069e161  FCOMP float ptr [0x0089096c]
0069e167  FNSTSW AX
0069e169  TEST AH,0x5
0069e16c  JP 0x0069e1d6
0069e16e  FLD float ptr [ESI + 0xe4]
0069e174  FADD float ptr [ESI + 0xe0]
0069e17a  FLD float ptr [ESI + 0xdc]
0069e180  FMUL float ptr [ESI + 0xc4]
0069e186  FSUBP
0069e188  FADD float ptr [ESI + 0xf4]
0069e18e  FMUL float ptr [0x008933d4]
0069e194  FST float ptr [ESI + 0xf4]
0069e19a  FLD float ptr [0x008f8aac]
0069e1a0  FMUL float ptr [ECX + 0xe4]
0069e1a6  FMUL float ptr [ESI + 0xd0]
0069e1ac  FSUBR ST0,ST1
0069e1ae  FDIV float ptr [0x008f8ab0]
0069e1b4  FLD float ptr [ESI + 0x110]
0069e1ba  FMUL float ptr [ESI + 0xf0]
0069e1c0  FLD float ptr [ESP + 0x3c]
0069e1c4  FMUL float ptr [ESI + 0xc4]
0069e1ca  FDIVP
0069e1cc  FSUBP
0069e1ce  FSTP float ptr [ESI + 0x108]
0069e1d4  FSTP ST0
0069e1d6  FLD float ptr [ESI + 0x108]
0069e1dc  FLD float ptr [ESP + 0x1c]
0069e1e0  FDIV float ptr [ESI + 0xc4]
0069e1e6  FSUB ST0,ST1
0069e1e8  FMUL float ptr [ESI + 0x110]
0069e1ee  FADD ST0,ST1
0069e1f0  FSTP float ptr [ESI + 0x108]
0069e1f6  FSTP ST0
0069e1f8  FLD float ptr [ESP + 0x3c]
0069e1fc  MOV ECX,ESI
0069e1fe  FMUL float ptr [ESI + 0x108]
0069e204  FADD float ptr [ESI + 0xd0]
0069e20a  FSTP float ptr [ESI + 0xd0]
0069e210  CALL 0x0068e2e0
0069e215  FLD float ptr [ESI + 0xd8]
0069e21b  POP ESI
0069e21c  ADD ESP,0x24
0069e21f  RET 0x14
