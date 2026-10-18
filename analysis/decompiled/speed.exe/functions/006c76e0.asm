006c76e0  PUSH EBP
006c76e1  MOV EBP,ESP
006c76e3  AND ESP,0xfffffff0
006c76e6  SUB ESP,0x114
006c76ec  PUSH EBX
006c76ed  PUSH ESI
006c76ee  MOV ESI,dword ptr [EBP + 0x8]
006c76f1  FLD float ptr [ESI + 0x34]
006c76f4  MOV EAX,dword ptr [ESI + 0x50]
006c76f7  FMUL float ptr [ESI + 0x30]
006c76fa  MOV ECX,dword ptr [0x009b392c]
006c7700  MOV dword ptr [ESP + 0x18],EAX
006c7704  PUSH EDI
006c7705  FSTP float ptr [ESP + 0x10]
006c7709  FLD float ptr [ESI + 0x38]
006c770c  FMUL float ptr [ESI + 0x30]
006c770f  FSTP float ptr [ESP + 0x14]
006c7713  FLD float ptr [ESI + 0x3c]
006c7716  FMUL float ptr [ESI + 0x30]
006c7719  FSTP float ptr [ESP + 0x18]
006c771d  FLD float ptr [ESI + 0x44]
006c7720  FMUL float ptr [ESI + 0x40]
006c7723  FSUB float ptr [ESP + 0x10]
006c7727  FSTP float ptr [ESP + 0x40]
006c772b  FLD float ptr [ESI + 0x48]
006c772e  FMUL float ptr [ESI + 0x40]
006c7731  FSUB float ptr [ESP + 0x14]
006c7735  FSTP float ptr [ESP + 0x44]
006c7739  FLD float ptr [ESI + 0x4c]
006c773c  FMUL float ptr [ESI + 0x40]
006c773f  FSUB float ptr [ESP + 0x18]
006c7743  FSTP float ptr [ESP + 0x48]
006c7747  FLD float ptr [ESI + 0x54]
006c774a  FSUB float ptr [ESP + 0x1c]
006c774e  FMUL float ptr [0x008910f0]
006c7754  FSTP float ptr [ESP + 0x4c]
006c7758  FLD float ptr [ECX + 0x60]
006c775b  MOV ECX,dword ptr [0x00982c80]
006c7761  FLD ST0
006c7763  MOV dword ptr [ESP + 0x3c],0x0
006c776b  FMUL float ptr [ESI + 0x5c]
006c776e  MOV dword ptr [ESP + 0x5c],0x0
006c7776  FXCH
006c7778  FMUL float ptr [ESI + 0x6c]
006c777b  FSTP float ptr [ESP + 0x2c]
006c777f  FLD ST0
006c7781  FMUL float ptr [ESI + 0x60]
006c7784  FSTP float ptr [ESP + 0x30]
006c7788  FLD ST0
006c778a  FMUL float ptr [ESI + 0x64]
006c778d  FSTP float ptr [ESP + 0x34]
006c7791  FMUL float ptr [ESI + 0x68]
006c7794  FSTP float ptr [ESP + 0x38]
006c7798  FLD float ptr [ESP + 0x2c]
006c779c  FMUL float ptr [ESI + 0x70]
006c779f  FSUB float ptr [ESP + 0x30]
006c77a3  FSTP float ptr [ESP + 0x50]
006c77a7  FLD float ptr [ESP + 0x2c]
006c77ab  FMUL float ptr [ESI + 0x74]
006c77ae  FSUB float ptr [ESP + 0x34]
006c77b2  FSTP float ptr [ESP + 0x54]
006c77b6  FLD float ptr [ESP + 0x2c]
006c77ba  FMUL float ptr [ESI + 0x78]
006c77bd  FSUB float ptr [ESP + 0x38]
006c77c1  FSTP float ptr [ESP + 0x58]
006c77c5  MOV AL,byte ptr [ECX + 0x40]
006c77c8  TEST AL,AL
006c77ca  JNZ 0x006c77d4
006c77cc  FLD float ptr [0x008933d4]
006c77d2  JMP 0x006c77da
006c77d4  FLD float ptr [0x0089096c]
006c77da  FLD float ptr [ESI + 0x84]
006c77e0  MOV EAX,dword ptr [EBP + 0xc]
006c77e3  TEST AH,0x1
006c77e6  FMUL float ptr [ESI + 0x80]
006c77ec  MOV dword ptr [ESP + 0x6c],0x0
006c77f4  MOV dword ptr [ESP + 0x9c],0x0
006c77ff  FMUL ST1
006c7801  FSTP float ptr [ESP + 0x60]
006c7805  FLD float ptr [ESI + 0x88]
006c780b  FMUL float ptr [ESI + 0x80]
006c7811  FMUL ST1
006c7813  FSTP float ptr [ESP + 0x64]
006c7817  FLD float ptr [ESI + 0x8c]
006c781d  FMUL float ptr [ESI + 0x80]
006c7823  FMUL ST1
006c7825  FSTP float ptr [ESP + 0x68]
006c7829  FLD float ptr [ESI + 0x94]
006c782f  FMUL float ptr [ESI + 0x90]
006c7835  FMUL ST1
006c7837  FSUB float ptr [ESP + 0x60]
006c783b  FSTP float ptr [ESP + 0x90]
006c7842  FLD float ptr [ESI + 0x98]
006c7848  FMUL float ptr [ESI + 0x90]
006c784e  FMUL ST1
006c7850  FSUB float ptr [ESP + 0x64]
006c7854  FSTP float ptr [ESP + 0x94]
006c785b  FLD float ptr [ESI + 0x9c]
006c7861  FMUL float ptr [ESI + 0x90]
006c7867  FMUL ST1
006c7869  FSUB float ptr [ESP + 0x68]
006c786d  FSTP float ptr [ESP + 0x98]
006c7874  FSTP ST0
006c7876  JZ 0x006c7912
006c787c  MOV EDX,dword ptr [0x009017b8]
006c7882  TEST EDX,EDX
006c7884  JZ 0x006c7912
006c788a  TEST AL,AL
006c788c  JS 0x006c7912
006c7892  MOV dword ptr [ESP + 0x10],0x0
006c789a  MOV dword ptr [ESP + 0x14],0x0
006c78a2  MOV dword ptr [ESP + 0x18],0x0
006c78aa  MOV dword ptr [ESP + 0x1c],0x0
006c78b2  MOV dword ptr [ESP + 0x40],0x0
006c78ba  MOV dword ptr [ESP + 0x44],0x0
006c78c2  MOV dword ptr [ESP + 0x48],0x0
006c78ca  MOV dword ptr [ESP + 0x4c],0x0
006c78d2  MOV dword ptr [ESP + 0x30],0x0
006c78da  MOV dword ptr [ESP + 0x34],0x0
006c78e2  MOV dword ptr [ESP + 0x38],0x0
006c78ea  MOV dword ptr [ESP + 0x3c],0x0
006c78f2  MOV dword ptr [ESP + 0x50],0x0
006c78fa  MOV dword ptr [ESP + 0x54],0x0
006c7902  MOV dword ptr [ESP + 0x58],0x0
006c790a  MOV dword ptr [ESP + 0x5c],0x0
006c7912  MOV EAX,dword ptr [ECX + 0x4]
006c7915  CMP EAX,0x4
006c7918  JNZ 0x006c7bc6
006c791e  MOV DL,byte ptr [ECX + 0x40]
006c7921  TEST DL,DL
006c7923  JNZ 0x006c7bc1
006c7929  FLD float ptr [ESP + 0x40]
006c792d  MOV dword ptr [ESP + 0x70],0x3f800000
006c7935  FMUL float ptr [0x008933d4]
006c793b  MOV dword ptr [ESP + 0x7c],0x3f800000
006c7943  MOV dword ptr [ESP + 0x74],0x3f800000
006c794b  MOV dword ptr [ESP + 0x88],0x0
006c7956  FADD float ptr [ESP + 0x10]
006c795a  MOV dword ptr [ESP + 0x80],0x0
006c7965  FLD float ptr [ESP + 0x44]
006c7969  MOV dword ptr [ESP + 0x78],0x3f800000
006c7971  FMUL float ptr [0x008933d4]
006c7977  MOV dword ptr [ESP + 0x84],0x0
006c7982  MOV dword ptr [ESP + 0x8c],0x3f800000
006c798d  MOV dword ptr [ESP + 0xd4],0x3f800000
006c7998  FADD float ptr [ESP + 0x14]
006c799c  MOV dword ptr [ESP + 0xf4],0x3f800000
006c79a7  FLD float ptr [ESP + 0x48]
006c79ab  FMUL float ptr [0x008933d4]
006c79b1  FADD float ptr [ESP + 0x18]
006c79b5  FSTP float ptr [ESP + 0x118]
006c79bc  MOV EDX,dword ptr [ESP + 0x118]
006c79c3  FLD float ptr [ESP + 0x50]
006c79c7  MOV dword ptr [ESP + 0xd0],EDX
006c79ce  FMUL float ptr [0x008933d4]
006c79d4  FADD float ptr [ESP + 0x30]
006c79d8  FSTP float ptr [ESP + 0xa0]
006c79df  MOV EAX,dword ptr [ESP + 0xa0]
006c79e6  FLD float ptr [ESP + 0x54]
006c79ea  MOV dword ptr [ESP + 0xe8],EAX
006c79f1  FMUL float ptr [0x008933d4]
006c79f7  MOV EAX,dword ptr [ESP + 0x70]
006c79fb  MOV dword ptr [ESP + 0xd8],EAX
006c7a02  MOV EAX,dword ptr [ESP + 0x7c]
006c7a06  FADD float ptr [ESP + 0x34]
006c7a0a  MOV dword ptr [ESP + 0xe4],EAX
006c7a11  MOV EAX,dword ptr [ESP + 0x88]
006c7a18  MOV dword ptr [ESP + 0x100],EAX
006c7a1f  FSTP float ptr [ESP + 0xa4]
006c7a26  MOV ECX,dword ptr [ESP + 0xa4]
006c7a2d  FLD float ptr [ESP + 0x58]
006c7a31  MOV dword ptr [ESP + 0xec],ECX
006c7a38  FMUL float ptr [0x008933d4]
006c7a3e  MOV ECX,dword ptr [ESP + 0x74]
006c7a42  MOV dword ptr [ESP + 0xdc],ECX
006c7a49  MOV ECX,dword ptr [ESP + 0x80]
006c7a50  FADD float ptr [ESP + 0x38]
006c7a54  MOV dword ptr [ESP + 0xf8],ECX
006c7a5b  MOV ECX,dword ptr [ESP + 0x8c]
006c7a62  MOV dword ptr [ESP + 0x104],ECX
006c7a69  FSTP float ptr [ESP + 0xa8]
006c7a70  MOV EDX,dword ptr [ESP + 0xa8]
006c7a77  FLD float ptr [ESP + 0x90]
006c7a7e  MOV dword ptr [ESP + 0xf0],EDX
006c7a85  FMUL float ptr [0x008910f0]
006c7a8b  MOV EDX,dword ptr [ESP + 0x78]
006c7a8f  MOV dword ptr [ESP + 0xe0],EDX
006c7a96  MOV EDX,dword ptr [ESP + 0x84]
006c7a9d  FADD float ptr [ESP + 0x60]
006c7aa1  MOV dword ptr [ESP + 0xfc],EDX
006c7aa8  FSTP float ptr [ESP + 0xb0]
006c7aaf  FLD float ptr [ESP + 0x94]
006c7ab6  FMUL float ptr [0x008910f0]
006c7abc  FADD float ptr [ESP + 0x64]
006c7ac0  FSTP float ptr [ESP + 0xb4]
006c7ac7  FLD float ptr [ESP + 0x98]
006c7ace  FMUL float ptr [0x008910f0]
006c7ad4  FADD float ptr [ESP + 0x68]
006c7ad8  FSTP float ptr [ESP + 0xb8]
006c7adf  FXCH
006c7ae1  FSTP float ptr [ESP + 0xc8]
006c7ae8  FSTP float ptr [ESP + 0xcc]
006c7aef  FLD float ptr [0x008fae84]
006c7af5  FMUL float ptr [ESI + 0x58]
006c7af8  FST float ptr [ESP + 0x108]
006c7aff  FCOMP float ptr [0x00890cd4]
006c7b05  FNSTSW AX
006c7b07  TEST AH,0x5
006c7b0a  JP 0x006c7b19
006c7b0c  MOV dword ptr [ESP + 0x108],0x3dcccccd
006c7b17  JMP 0x006c7b38
006c7b19  FLD float ptr [ESP + 0x108]
006c7b20  FCOMP float ptr [0x00894b64]
006c7b26  FNSTSW AX
006c7b28  TEST AH,0x41
006c7b2b  JNZ 0x006c7b38
006c7b2d  MOV dword ptr [ESP + 0x108],0x41a00000
006c7b38  MOV EAX,[0x00982bdc]
006c7b3d  MOV EDX,dword ptr [EAX]
006c7b3f  LEA ECX,[ESP + 0xc8]
006c7b46  PUSH ECX
006c7b47  PUSH EAX
006c7b48  CALL dword ptr [EDX + 0xc4]
006c7b4e  FLD float ptr [ESP + 0x4c]
006c7b52  FADD float ptr [ESP + 0x1c]
006c7b56  MOV ESI,dword ptr [0x00982bdc]
006c7b5c  MOV EDI,dword ptr [ESI]
006c7b5e  FMUL float ptr [0x008a0d64]
006c7b64  CALL 0x007c4b80
006c7b69  FLD float ptr [ESP + 0xb8]
006c7b70  FMUL float ptr [0x00899dd8]
006c7b76  MOV EBX,EAX
006c7b78  SHL EBX,0x8
006c7b7b  CALL 0x007c4b80
006c7b80  FLD float ptr [ESP + 0xb4]
006c7b87  FMUL float ptr [0x00899dd8]
006c7b8d  OR EBX,EAX
006c7b8f  SHL EBX,0x8
006c7b92  CALL 0x007c4b80
006c7b97  FLD float ptr [ESP + 0xb0]
006c7b9e  FMUL float ptr [0x00899dd8]
006c7ba4  OR EBX,EAX
006c7ba6  SHL EBX,0x8
006c7ba9  CALL 0x007c4b80
006c7bae  OR EBX,EAX
006c7bb0  PUSH EBX
006c7bb1  PUSH 0x3c
006c7bb3  PUSH ESI
006c7bb4  CALL dword ptr [EDI + 0xe4]
006c7bba  POP EDI
006c7bbb  POP ESI
006c7bbc  POP EBX
006c7bbd  MOV ESP,EBP
006c7bbf  POP EBP
006c7bc0  RET
006c7bc1  CMP EAX,0x4
006c7bc4  JZ 0x006c7bcf
006c7bc6  CMP EAX,0x2
006c7bc9  JNZ 0x006c7ce8
006c7bcf  MOV EAX,dword ptr [ECX + 0x48]
006c7bd2  MOV ECX,dword ptr [ECX + 0x44]
006c7bd5  MOV ECX,dword ptr [ECX + 0x254]
006c7bdb  MOV EDX,dword ptr [EAX]
006c7bdd  LEA EDI,[ESP + 0x10]
006c7be1  PUSH EDI
006c7be2  PUSH ECX
006c7be3  PUSH EAX
006c7be4  CALL dword ptr [EDX + 0x88]
006c7bea  MOV ECX,dword ptr [0x00982c80]
006c7bf0  MOV EAX,dword ptr [ECX + 0x48]
006c7bf3  MOV ECX,dword ptr [ECX + 0x44]
006c7bf6  MOV ECX,dword ptr [ECX + 0x27c]
006c7bfc  MOV EDX,dword ptr [EAX]
006c7bfe  LEA EDI,[ESP + 0x40]
006c7c02  PUSH EDI
006c7c03  PUSH ECX
006c7c04  PUSH EAX
006c7c05  CALL dword ptr [EDX + 0x88]
006c7c0b  MOV ECX,dword ptr [0x00982c80]
006c7c11  CMP dword ptr [ECX + 0x4],0x4
006c7c15  JNZ 0x006c7ce8
006c7c1b  MOV EAX,dword ptr [ECX + 0x48]
006c7c1e  MOV ECX,dword ptr [ECX + 0x44]
006c7c21  MOV ECX,dword ptr [ECX + 0xccc]
006c7c27  MOV EDX,dword ptr [EAX]
006c7c29  LEA EDI,[ESP + 0x30]
006c7c2d  PUSH EDI
006c7c2e  PUSH ECX
006c7c2f  PUSH EAX
006c7c30  CALL dword ptr [EDX + 0x88]
006c7c36  MOV ECX,dword ptr [0x00982c80]
006c7c3c  MOV EAX,dword ptr [ECX + 0x48]
006c7c3f  MOV ECX,dword ptr [ECX + 0x44]
006c7c42  MOV ECX,dword ptr [ECX + 0xd1c]
006c7c48  MOV EDX,dword ptr [EAX]
006c7c4a  LEA EDI,[ESP + 0x50]
006c7c4e  PUSH EDI
006c7c4f  PUSH ECX
006c7c50  PUSH EAX
006c7c51  CALL dword ptr [EDX + 0x88]
006c7c57  MOV ECX,dword ptr [0x00982c80]
006c7c5d  MOV EAX,dword ptr [ECX + 0x48]
006c7c60  MOV ECX,dword ptr [ECX + 0x44]
006c7c63  MOV ECX,dword ptr [ECX + 0x394]
006c7c69  MOV EDX,dword ptr [EAX]
006c7c6b  LEA EDI,[ESP + 0x60]
006c7c6f  PUSH EDI
006c7c70  PUSH ECX
006c7c71  PUSH EAX
006c7c72  CALL dword ptr [EDX + 0x88]
006c7c78  MOV ECX,dword ptr [0x00982c80]
006c7c7e  MOV EAX,dword ptr [ECX + 0x48]
006c7c81  MOV ECX,dword ptr [ECX + 0x44]
006c7c84  MOV ECX,dword ptr [ECX + 0x36c]
006c7c8a  MOV EDX,dword ptr [EAX]
006c7c8c  LEA EDI,[ESP + 0x90]
006c7c93  PUSH EDI
006c7c94  PUSH ECX
006c7c95  PUSH EAX
006c7c96  CALL dword ptr [EDX + 0x88]
006c7c9c  FLD float ptr [0x009018e0]
006c7ca2  MOV ECX,dword ptr [0x00982c80]
006c7ca8  FMUL float ptr [ESI + 0x58]
006c7cab  MOV EAX,dword ptr [ECX + 0x48]
006c7cae  MOV EDX,dword ptr [EAX]
006c7cb0  PUSH ECX
006c7cb1  MOV ECX,dword ptr [ECX + 0x44]
006c7cb4  FSTP float ptr [ESP]
006c7cb7  MOV ECX,dword ptr [ECX + 0xcf4]
006c7cbd  PUSH ECX
006c7cbe  PUSH EAX
006c7cbf  CALL dword ptr [EDX + 0x78]
006c7cc2  FLD float ptr [0x009018dc]
006c7cc8  MOV ECX,dword ptr [0x00982c80]
006c7cce  FMUL float ptr [ESI + 0x7c]
006c7cd1  MOV EAX,dword ptr [ECX + 0x48]
006c7cd4  MOV EDX,dword ptr [EAX]
006c7cd6  PUSH ECX
006c7cd7  MOV ECX,dword ptr [ECX + 0x44]
006c7cda  FSTP float ptr [ESP]
006c7cdd  MOV ECX,dword ptr [ECX + 0x3bc]
006c7ce3  PUSH ECX
006c7ce4  PUSH EAX
006c7ce5  CALL dword ptr [EDX + 0x78]
006c7ce8  POP EDI
006c7ce9  POP ESI
006c7cea  POP EBX
006c7ceb  MOV ESP,EBP
006c7ced  POP EBP
006c7cee  RET
