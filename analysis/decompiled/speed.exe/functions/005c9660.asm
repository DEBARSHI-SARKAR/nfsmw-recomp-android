005c9660  SUB ESP,0x28
005c9663  MOV EDX,dword ptr [ESP + 0x3c]
005c9667  PUSH EBX
005c9668  MOV EAX,0x4e6e6b28
005c966d  PUSH EBP
005c966e  MOV dword ptr [EDX + 0x8],EAX
005c9671  MOV dword ptr [EDX + 0x4],EAX
005c9674  MOV dword ptr [EDX],EAX
005c9676  MOV EAX,0xce6e6b28
005c967b  PUSH ESI
005c967c  MOV ESI,dword ptr [ESP + 0x4c]
005c9680  XOR ECX,ECX
005c9682  MOV dword ptr [ESI + 0x8],EAX
005c9685  MOV dword ptr [ESI + 0x4],EAX
005c9688  MOV dword ptr [ESI],EAX
005c968a  MOV EAX,dword ptr [ESP + 0x3c]
005c968e  XOR EBP,EBP
005c9690  XOR EBX,EBX
005c9692  CMP EAX,0x4
005c9695  PUSH EDI
005c9696  MOV dword ptr [ESP + 0x10],ECX
005c969a  MOV dword ptr [ESP + 0x14],ECX
005c969e  MOV dword ptr [ESP + 0x18],ECX
005c96a2  MOV dword ptr [ESP + 0x1c],ECX
005c96a6  MOV dword ptr [ESP + 0x20],ECX
005c96aa  JL 0x005c9908
005c96b0  MOV ECX,dword ptr [ESP + 0x44]
005c96b4  MOV EDI,0x2
005c96b9  ADD ECX,0x8
005c96bc  LEA ESP,[ESP]
005c96c0  FLD float ptr [ECX + -0x8]
005c96c3  FCOMP float ptr [EDX]
005c96c5  FNSTSW AX
005c96c7  TEST AH,0x5
005c96ca  JP 0x005c96d5
005c96cc  MOV EAX,dword ptr [ECX + -0x8]
005c96cf  MOV dword ptr [EDX],EAX
005c96d1  MOV dword ptr [ESP + 0x10],EBX
005c96d5  FLD float ptr [ECX + -0x4]
005c96d8  FCOMP float ptr [EDX + 0x4]
005c96db  FNSTSW AX
005c96dd  TEST AH,0x5
005c96e0  JP 0x005c96ec
005c96e2  MOV EAX,dword ptr [ECX + -0x4]
005c96e5  MOV dword ptr [EDX + 0x4],EAX
005c96e8  MOV dword ptr [ESP + 0x14],EBX
005c96ec  FLD float ptr [ECX]
005c96ee  FCOMP float ptr [EDX + 0x8]
005c96f1  FNSTSW AX
005c96f3  TEST AH,0x5
005c96f6  JP 0x005c9701
005c96f8  MOV EAX,dword ptr [ECX]
005c96fa  MOV dword ptr [EDX + 0x8],EAX
005c96fd  MOV dword ptr [ESP + 0x18],EBX
005c9701  FLD float ptr [ECX + -0x8]
005c9704  FCOMP float ptr [ESI]
005c9706  FNSTSW AX
005c9708  TEST AH,0x41
005c970b  JNZ 0x005c9716
005c970d  MOV EAX,dword ptr [ECX + -0x8]
005c9710  MOV dword ptr [ESI],EAX
005c9712  MOV dword ptr [ESP + 0x1c],EBX
005c9716  FLD float ptr [ECX + -0x4]
005c9719  FCOMP float ptr [ESI + 0x4]
005c971c  FNSTSW AX
005c971e  TEST AH,0x41
005c9721  JNZ 0x005c972d
005c9723  MOV EAX,dword ptr [ECX + -0x4]
005c9726  MOV dword ptr [ESI + 0x4],EAX
005c9729  MOV dword ptr [ESP + 0x20],EBX
005c972d  FLD float ptr [ECX]
005c972f  FCOMP float ptr [ESI + 0x8]
005c9732  FNSTSW AX
005c9734  TEST AH,0x41
005c9737  JNZ 0x005c9740
005c9739  MOV EAX,dword ptr [ECX]
005c973b  MOV dword ptr [ESI + 0x8],EAX
005c973e  MOV EBP,EBX
005c9740  FLD float ptr [ECX + 0x8]
005c9743  FCOMP float ptr [EDX]
005c9745  FNSTSW AX
005c9747  TEST AH,0x5
005c974a  JP 0x005c9758
005c974c  MOV EAX,dword ptr [ECX + 0x8]
005c974f  MOV dword ptr [EDX],EAX
005c9751  LEA EAX,[EDI + -0x1]
005c9754  MOV dword ptr [ESP + 0x10],EAX
005c9758  FLD float ptr [ECX + 0xc]
005c975b  FCOMP float ptr [EDX + 0x4]
005c975e  FNSTSW AX
005c9760  TEST AH,0x5
005c9763  JP 0x005c9772
005c9765  MOV EAX,dword ptr [ECX + 0xc]
005c9768  MOV dword ptr [EDX + 0x4],EAX
005c976b  LEA EAX,[EDI + -0x1]
005c976e  MOV dword ptr [ESP + 0x14],EAX
005c9772  FLD float ptr [ECX + 0x10]
005c9775  FCOMP float ptr [EDX + 0x8]
005c9778  FNSTSW AX
005c977a  TEST AH,0x5
005c977d  JP 0x005c978c
005c977f  MOV EAX,dword ptr [ECX + 0x10]
005c9782  MOV dword ptr [EDX + 0x8],EAX
005c9785  LEA EAX,[EDI + -0x1]
005c9788  MOV dword ptr [ESP + 0x18],EAX
005c978c  FLD float ptr [ECX + 0x8]
005c978f  FCOMP float ptr [ESI]
005c9791  FNSTSW AX
005c9793  TEST AH,0x41
005c9796  JNZ 0x005c97a4
005c9798  MOV EAX,dword ptr [ECX + 0x8]
005c979b  MOV dword ptr [ESI],EAX
005c979d  LEA EAX,[EDI + -0x1]
005c97a0  MOV dword ptr [ESP + 0x1c],EAX
005c97a4  FLD float ptr [ECX + 0xc]
005c97a7  FCOMP float ptr [ESI + 0x4]
005c97aa  FNSTSW AX
005c97ac  TEST AH,0x41
005c97af  JNZ 0x005c97be
005c97b1  MOV EAX,dword ptr [ECX + 0xc]
005c97b4  MOV dword ptr [ESI + 0x4],EAX
005c97b7  LEA EAX,[EDI + -0x1]
005c97ba  MOV dword ptr [ESP + 0x20],EAX
005c97be  FLD float ptr [ECX + 0x10]
005c97c1  FCOMP float ptr [ESI + 0x8]
005c97c4  FNSTSW AX
005c97c6  TEST AH,0x41
005c97c9  JNZ 0x005c97d4
005c97cb  MOV EAX,dword ptr [ECX + 0x10]
005c97ce  MOV dword ptr [ESI + 0x8],EAX
005c97d1  LEA EBP,[EDI + -0x1]
005c97d4  FLD float ptr [ECX + 0x18]
005c97d7  FCOMP float ptr [EDX]
005c97d9  FNSTSW AX
005c97db  TEST AH,0x5
005c97de  JP 0x005c97e9
005c97e0  MOV EAX,dword ptr [ECX + 0x18]
005c97e3  MOV dword ptr [EDX],EAX
005c97e5  MOV dword ptr [ESP + 0x10],EDI
005c97e9  FLD float ptr [ECX + 0x1c]
005c97ec  FCOMP float ptr [EDX + 0x4]
005c97ef  FNSTSW AX
005c97f1  TEST AH,0x5
005c97f4  JP 0x005c9800
005c97f6  MOV EAX,dword ptr [ECX + 0x1c]
005c97f9  MOV dword ptr [EDX + 0x4],EAX
005c97fc  MOV dword ptr [ESP + 0x14],EDI
005c9800  FLD float ptr [ECX + 0x20]
005c9803  FCOMP float ptr [EDX + 0x8]
005c9806  FNSTSW AX
005c9808  TEST AH,0x5
005c980b  JP 0x005c9817
005c980d  MOV EAX,dword ptr [ECX + 0x20]
005c9810  MOV dword ptr [EDX + 0x8],EAX
005c9813  MOV dword ptr [ESP + 0x18],EDI
005c9817  FLD float ptr [ECX + 0x18]
005c981a  FCOMP float ptr [ESI]
005c981c  FNSTSW AX
005c981e  TEST AH,0x41
005c9821  JNZ 0x005c982c
005c9823  MOV EAX,dword ptr [ECX + 0x18]
005c9826  MOV dword ptr [ESI],EAX
005c9828  MOV dword ptr [ESP + 0x1c],EDI
005c982c  FLD float ptr [ECX + 0x1c]
005c982f  FCOMP float ptr [ESI + 0x4]
005c9832  FNSTSW AX
005c9834  TEST AH,0x41
005c9837  JNZ 0x005c9843
005c9839  MOV EAX,dword ptr [ECX + 0x1c]
005c983c  MOV dword ptr [ESI + 0x4],EAX
005c983f  MOV dword ptr [ESP + 0x20],EDI
005c9843  FLD float ptr [ECX + 0x20]
005c9846  FCOMP float ptr [ESI + 0x8]
005c9849  FNSTSW AX
005c984b  TEST AH,0x41
005c984e  JNZ 0x005c9858
005c9850  MOV EAX,dword ptr [ECX + 0x20]
005c9853  MOV dword ptr [ESI + 0x8],EAX
005c9856  MOV EBP,EDI
005c9858  FLD float ptr [ECX + 0x28]
005c985b  FCOMP float ptr [EDX]
005c985d  FNSTSW AX
005c985f  TEST AH,0x5
005c9862  JP 0x005c9870
005c9864  MOV EAX,dword ptr [ECX + 0x28]
005c9867  MOV dword ptr [EDX],EAX
005c9869  LEA EAX,[EDI + 0x1]
005c986c  MOV dword ptr [ESP + 0x10],EAX
005c9870  FLD float ptr [ECX + 0x2c]
005c9873  FCOMP float ptr [EDX + 0x4]
005c9876  FNSTSW AX
005c9878  TEST AH,0x5
005c987b  JP 0x005c988a
005c987d  MOV EAX,dword ptr [ECX + 0x2c]
005c9880  MOV dword ptr [EDX + 0x4],EAX
005c9883  LEA EAX,[EDI + 0x1]
005c9886  MOV dword ptr [ESP + 0x14],EAX
005c988a  FLD float ptr [ECX + 0x30]
005c988d  FCOMP float ptr [EDX + 0x8]
005c9890  FNSTSW AX
005c9892  TEST AH,0x5
005c9895  JP 0x005c98a4
005c9897  MOV EAX,dword ptr [ECX + 0x30]
005c989a  MOV dword ptr [EDX + 0x8],EAX
005c989d  LEA EAX,[EDI + 0x1]
005c98a0  MOV dword ptr [ESP + 0x18],EAX
005c98a4  FLD float ptr [ECX + 0x28]
005c98a7  FCOMP float ptr [ESI]
005c98a9  FNSTSW AX
005c98ab  TEST AH,0x41
005c98ae  JNZ 0x005c98bc
005c98b0  MOV EAX,dword ptr [ECX + 0x28]
005c98b3  MOV dword ptr [ESI],EAX
005c98b5  LEA EAX,[EDI + 0x1]
005c98b8  MOV dword ptr [ESP + 0x1c],EAX
005c98bc  FLD float ptr [ECX + 0x2c]
005c98bf  FCOMP float ptr [ESI + 0x4]
005c98c2  FNSTSW AX
005c98c4  TEST AH,0x41
005c98c7  JNZ 0x005c98d6
005c98c9  MOV EAX,dword ptr [ECX + 0x2c]
005c98cc  MOV dword ptr [ESI + 0x4],EAX
005c98cf  LEA EAX,[EDI + 0x1]
005c98d2  MOV dword ptr [ESP + 0x20],EAX
005c98d6  FLD float ptr [ECX + 0x30]
005c98d9  FCOMP float ptr [ESI + 0x8]
005c98dc  FNSTSW AX
005c98de  TEST AH,0x41
005c98e1  JNZ 0x005c98ec
005c98e3  MOV EAX,dword ptr [ECX + 0x30]
005c98e6  MOV dword ptr [ESI + 0x8],EAX
005c98e9  LEA EBP,[EDI + 0x1]
005c98ec  MOV EAX,dword ptr [ESP + 0x40]
005c98f0  ADD EBX,0x4
005c98f3  ADD EAX,-0x3
005c98f6  ADD EDI,0x4
005c98f9  ADD ECX,0x40
005c98fc  CMP EBX,EAX
005c98fe  JC 0x005c96c0
005c9904  MOV ECX,dword ptr [ESP + 0x20]
005c9908  CMP EBX,dword ptr [ESP + 0x40]
005c990c  MOV EDI,dword ptr [ESP + 0x44]
005c9910  JNC 0x005c99b4
005c9916  MOV ECX,EBX
005c9918  SHL ECX,0x4
005c991b  LEA ECX,[ECX + EDI*0x1 + 0x8]
005c991f  NOP
005c9920  FLD float ptr [ECX + -0x8]
005c9923  FCOMP float ptr [EDX]
005c9925  FNSTSW AX
005c9927  TEST AH,0x5
005c992a  JP 0x005c9935
005c992c  MOV EAX,dword ptr [ECX + -0x8]
005c992f  MOV dword ptr [EDX],EAX
005c9931  MOV dword ptr [ESP + 0x10],EBX
005c9935  FLD float ptr [ECX + -0x4]
005c9938  FCOMP float ptr [EDX + 0x4]
005c993b  FNSTSW AX
005c993d  TEST AH,0x5
005c9940  JP 0x005c994c
005c9942  MOV EAX,dword ptr [ECX + -0x4]
005c9945  MOV dword ptr [EDX + 0x4],EAX
005c9948  MOV dword ptr [ESP + 0x14],EBX
005c994c  FLD float ptr [ECX]
005c994e  FCOMP float ptr [EDX + 0x8]
005c9951  FNSTSW AX
005c9953  TEST AH,0x5
005c9956  JP 0x005c9961
005c9958  MOV EAX,dword ptr [ECX]
005c995a  MOV dword ptr [EDX + 0x8],EAX
005c995d  MOV dword ptr [ESP + 0x18],EBX
005c9961  FLD float ptr [ECX + -0x8]
005c9964  FCOMP float ptr [ESI]
005c9966  FNSTSW AX
005c9968  TEST AH,0x41
005c996b  JNZ 0x005c9976
005c996d  MOV EAX,dword ptr [ECX + -0x8]
005c9970  MOV dword ptr [ESI],EAX
005c9972  MOV dword ptr [ESP + 0x1c],EBX
005c9976  FLD float ptr [ECX + -0x4]
005c9979  FCOMP float ptr [ESI + 0x4]
005c997c  FNSTSW AX
005c997e  TEST AH,0x41
005c9981  JNZ 0x005c998d
005c9983  MOV EAX,dword ptr [ECX + -0x4]
005c9986  MOV dword ptr [ESI + 0x4],EAX
005c9989  MOV dword ptr [ESP + 0x20],EBX
005c998d  FLD float ptr [ECX]
005c998f  FCOMP float ptr [ESI + 0x8]
005c9992  FNSTSW AX
005c9994  TEST AH,0x41
005c9997  JNZ 0x005c99a0
005c9999  MOV EAX,dword ptr [ECX]
005c999b  MOV dword ptr [ESI + 0x8],EAX
005c999e  MOV EBP,EBX
005c99a0  MOV EAX,dword ptr [ESP + 0x40]
005c99a4  INC EBX
005c99a5  ADD ECX,0x10
005c99a8  CMP EBX,EAX
005c99aa  JC 0x005c9920
005c99b0  MOV ECX,dword ptr [ESP + 0x20]
005c99b4  MOV EAX,[0x008a2fb8]
005c99b9  MOV EDX,dword ptr [0x008a2fb4]
005c99bf  MOV dword ptr [ESP + 0x2c],EAX
005c99c3  MOV EAX,dword ptr [ESP + 0x10]
005c99c7  SHL EAX,0x4
005c99ca  ADD EAX,EDI
005c99cc  MOV dword ptr [ESP + 0x28],EDX
005c99d0  FLD float ptr [ESP + 0x28]
005c99d4  FADD float ptr [EAX]
005c99d6  MOV EDX,dword ptr [0x008a2fbc]
005c99dc  FLD float ptr [ESP + 0x2c]
005c99e0  MOV dword ptr [ESP + 0x30],EDX
005c99e4  FADD float ptr [EAX + 0x4]
005c99e7  SHL ECX,0x4
005c99ea  FLD float ptr [ESP + 0x30]
005c99ee  ADD ECX,EDI
005c99f0  FADD float ptr [EAX + 0x8]
005c99f3  MOV EAX,dword ptr [ESP + 0x14]
005c99f7  SHL EAX,0x4
005c99fa  ADD EAX,EDI
005c99fc  FSTP float ptr [ESP + 0x30]
005c9a00  SHL EBP,0x4
005c9a03  FXCH
005c9a05  ADD EBP,EDI
005c9a07  FADD float ptr [EAX]
005c9a09  MOV EBX,dword ptr [ESP + 0x40]
005c9a0d  XOR EDX,EDX
005c9a0f  FSTP float ptr [ESP + 0x28]
005c9a13  FADD float ptr [EAX + 0x4]
005c9a16  FLD float ptr [ESP + 0x30]
005c9a1a  FADD float ptr [EAX + 0x8]
005c9a1d  MOV EAX,dword ptr [ESP + 0x18]
005c9a21  FLD float ptr [ESP + 0x28]
005c9a25  SHL EAX,0x4
005c9a28  FADD float ptr [EAX + EDI*0x1]
005c9a2b  ADD EAX,EDI
005c9a2d  FSTP float ptr [ESP + 0x28]
005c9a31  FXCH
005c9a33  FADD float ptr [EAX + 0x4]
005c9a36  FSTP float ptr [ESP + 0x2c]
005c9a3a  FADD float ptr [EAX + 0x8]
005c9a3d  MOV EAX,dword ptr [ESP + 0x1c]
005c9a41  FLD float ptr [ESP + 0x28]
005c9a45  SHL EAX,0x4
005c9a48  FADD float ptr [EAX + EDI*0x1]
005c9a4b  ADD EAX,EDI
005c9a4d  CMP EBX,0x4
005c9a50  FLD float ptr [ESP + 0x2c]
005c9a54  FADD float ptr [EAX + 0x4]
005c9a57  FSTP float ptr [ESP + 0x2c]
005c9a5b  FXCH
005c9a5d  FADD float ptr [EAX + 0x8]
005c9a60  MOV EAX,ECX
005c9a62  FSTP float ptr [ESP + 0x30]
005c9a66  FADD float ptr [EAX]
005c9a68  FLD float ptr [ESP + 0x2c]
005c9a6c  FADD float ptr [EAX + 0x4]
005c9a6f  FLD float ptr [ESP + 0x30]
005c9a73  FADD float ptr [EAX + 0x8]
005c9a76  MOV EAX,EBP
005c9a78  FSTP float ptr [ESP + 0x30]
005c9a7c  FXCH
005c9a7e  FADD float ptr [EAX]
005c9a80  FSTP float ptr [ESP + 0x28]
005c9a84  FADD float ptr [EAX + 0x4]
005c9a87  FLD float ptr [ESP + 0x30]
005c9a8b  FADD float ptr [EAX + 0x8]
005c9a8e  FLD float ptr [ESP + 0x28]
005c9a92  FMUL float ptr [0x00894210]
005c9a98  FSTP float ptr [ESP + 0x28]
005c9a9c  FXCH
005c9a9e  FMUL float ptr [0x00894210]
005c9aa4  FSTP float ptr [ESP + 0x2c]
005c9aa8  FMUL float ptr [0x00894210]
005c9aae  FSTP float ptr [ESP + 0x30]
005c9ab2  FLD float ptr [0x00890968]
005c9ab8  JL 0x005c9c39
005c9abe  LEA ECX,[EBX + -0x4]
005c9ac1  SHR ECX,0x2
005c9ac4  INC ECX
005c9ac5  LEA ESI,[EDI + 0x20]
005c9ac8  LEA EDX,[ECX*0x4 + 0x0]
005c9acf  NOP
005c9ad0  LEA EAX,[ESI + -0x20]
005c9ad3  MOV EBP,dword ptr [EAX]
005c9ad5  MOV dword ptr [ESP + 0x10],EBP
005c9ad9  FLD float ptr [ESP + 0x10]
005c9add  FSUB float ptr [ESP + 0x28]
005c9ae1  MOV EBP,dword ptr [EAX + 0x4]
005c9ae4  MOV EAX,dword ptr [EAX + 0x8]
005c9ae7  MOV dword ptr [ESP + 0x14],EBP
005c9aeb  FLD float ptr [ESP + 0x14]
005c9aef  FSUB float ptr [ESP + 0x2c]
005c9af3  MOV dword ptr [ESP + 0x18],EAX
005c9af7  FLD float ptr [ESP + 0x18]
005c9afb  FSUB float ptr [ESP + 0x30]
005c9aff  FLD ST0
005c9b01  FMUL ST1
005c9b03  FLD ST2
005c9b05  FMUL ST3
005c9b07  FADDP
005c9b09  FLD ST3
005c9b0b  FMUL ST4
005c9b0d  FADDP
005c9b0f  FST float ptr [ESP + 0x40]
005c9b13  FSTP ST3
005c9b15  FSTP ST0
005c9b17  FSTP ST0
005c9b19  FCOMP
005c9b1b  FNSTSW AX
005c9b1d  TEST AH,0x41
005c9b20  JNZ 0x005c9b28
005c9b22  FSTP ST0
005c9b24  FLD float ptr [ESP + 0x40]
005c9b28  LEA EAX,[ESI + -0x10]
005c9b2b  MOV EBP,dword ptr [EAX]
005c9b2d  MOV dword ptr [ESP + 0x10],EBP
005c9b31  FLD float ptr [ESP + 0x10]
005c9b35  FSUB float ptr [ESP + 0x28]
005c9b39  MOV EBP,dword ptr [EAX + 0x4]
005c9b3c  MOV EAX,dword ptr [EAX + 0x8]
005c9b3f  MOV dword ptr [ESP + 0x14],EBP
005c9b43  FLD float ptr [ESP + 0x14]
005c9b47  FSUB float ptr [ESP + 0x2c]
005c9b4b  MOV dword ptr [ESP + 0x18],EAX
005c9b4f  FLD float ptr [ESP + 0x18]
005c9b53  FSUB float ptr [ESP + 0x30]
005c9b57  FLD ST0
005c9b59  FMUL ST1
005c9b5b  FLD ST2
005c9b5d  FMUL ST3
005c9b5f  FADDP
005c9b61  FLD ST3
005c9b63  FMUL ST4
005c9b65  FADDP
005c9b67  FST float ptr [ESP + 0x40]
005c9b6b  FSTP ST3
005c9b6d  FSTP ST0
005c9b6f  FSTP ST0
005c9b71  FCOMP
005c9b73  FNSTSW AX
005c9b75  TEST AH,0x41
005c9b78  JNZ 0x005c9b80
005c9b7a  FSTP ST0
005c9b7c  FLD float ptr [ESP + 0x40]
005c9b80  MOV EAX,ESI
005c9b82  MOV EBP,dword ptr [EAX]
005c9b84  MOV dword ptr [ESP + 0x10],EBP
005c9b88  FLD float ptr [ESP + 0x10]
005c9b8c  FSUB float ptr [ESP + 0x28]
005c9b90  MOV EBP,dword ptr [EAX + 0x4]
005c9b93  MOV EAX,dword ptr [EAX + 0x8]
005c9b96  MOV dword ptr [ESP + 0x14],EBP
005c9b9a  FLD float ptr [ESP + 0x14]
005c9b9e  FSUB float ptr [ESP + 0x2c]
005c9ba2  MOV dword ptr [ESP + 0x18],EAX
005c9ba6  FLD float ptr [ESP + 0x18]
005c9baa  FSUB float ptr [ESP + 0x30]
005c9bae  FLD ST0
005c9bb0  FMUL ST1
005c9bb2  FLD ST2
005c9bb4  FMUL ST3
005c9bb6  FADDP
005c9bb8  FLD ST3
005c9bba  FMUL ST4
005c9bbc  FADDP
005c9bbe  FST float ptr [ESP + 0x40]
005c9bc2  FSTP ST3
005c9bc4  FSTP ST0
005c9bc6  FSTP ST0
005c9bc8  FCOMP
005c9bca  FNSTSW AX
005c9bcc  TEST AH,0x41
005c9bcf  JNZ 0x005c9bd7
005c9bd1  FSTP ST0
005c9bd3  FLD float ptr [ESP + 0x40]
005c9bd7  LEA EAX,[ESI + 0x10]
005c9bda  MOV EBP,dword ptr [EAX]
005c9bdc  MOV dword ptr [ESP + 0x10],EBP
005c9be0  FLD float ptr [ESP + 0x10]
005c9be4  FSUB float ptr [ESP + 0x28]
005c9be8  MOV EBP,dword ptr [EAX + 0x4]
005c9beb  MOV EAX,dword ptr [EAX + 0x8]
005c9bee  MOV dword ptr [ESP + 0x14],EBP
005c9bf2  FLD float ptr [ESP + 0x14]
005c9bf6  FSUB float ptr [ESP + 0x2c]
005c9bfa  MOV dword ptr [ESP + 0x18],EAX
005c9bfe  FLD float ptr [ESP + 0x18]
005c9c02  FSUB float ptr [ESP + 0x30]
005c9c06  FLD ST0
005c9c08  FMUL ST1
005c9c0a  FLD ST2
005c9c0c  FMUL ST3
005c9c0e  FADDP
005c9c10  FLD ST3
005c9c12  FMUL ST4
005c9c14  FADDP
005c9c16  FST float ptr [ESP + 0x40]
005c9c1a  FSTP ST3
005c9c1c  FSTP ST0
005c9c1e  FSTP ST0
005c9c20  FCOMP
005c9c22  FNSTSW AX
005c9c24  TEST AH,0x41
005c9c27  JNZ 0x005c9c2f
005c9c29  FSTP ST0
005c9c2b  FLD float ptr [ESP + 0x40]
005c9c2f  ADD ESI,0x40
005c9c32  DEC ECX
005c9c33  JNZ 0x005c9ad0
005c9c39  CMP EDX,EBX
005c9c3b  JNC 0x005c9ca5
005c9c3d  MOV ECX,EDX
005c9c3f  SHL ECX,0x4
005c9c42  ADD ECX,EDI
005c9c44  SUB EBX,EDX
005c9c46  MOV EDX,EBX
005c9c48  MOV EAX,ECX
005c9c4a  MOV ESI,dword ptr [EAX]
005c9c4c  MOV dword ptr [ESP + 0x10],ESI
005c9c50  FLD float ptr [ESP + 0x10]
005c9c54  FSUB float ptr [ESP + 0x28]
005c9c58  MOV ESI,dword ptr [EAX + 0x4]
005c9c5b  MOV EAX,dword ptr [EAX + 0x8]
005c9c5e  MOV dword ptr [ESP + 0x14],ESI
005c9c62  FLD float ptr [ESP + 0x14]
005c9c66  FSUB float ptr [ESP + 0x2c]
005c9c6a  MOV dword ptr [ESP + 0x18],EAX
005c9c6e  FLD float ptr [ESP + 0x18]
005c9c72  FSUB float ptr [ESP + 0x30]
005c9c76  FLD ST0
005c9c78  FMUL ST1
005c9c7a  FLD ST2
005c9c7c  FMUL ST3
005c9c7e  FADDP
005c9c80  FLD ST3
005c9c82  FMUL ST4
005c9c84  FADDP
005c9c86  FST float ptr [ESP + 0x40]
005c9c8a  FSTP ST3
005c9c8c  FSTP ST0
005c9c8e  FSTP ST0
005c9c90  FCOMP
005c9c92  FNSTSW AX
005c9c94  TEST AH,0x41
005c9c97  JNZ 0x005c9c9f
005c9c99  FSTP ST0
005c9c9b  FLD float ptr [ESP + 0x40]
005c9c9f  ADD ECX,0x10
005c9ca2  DEC EDX
005c9ca3  JNZ 0x005c9c48
005c9ca5  FADD float ptr [0x008910cc]
005c9cab  MOV EAX,dword ptr [ESP + 0x3c]
005c9caf  MOV EDX,dword ptr [ESP + 0x28]
005c9cb3  MOV ECX,EAX
005c9cb5  FSQRT
005c9cb7  MOV dword ptr [ECX],EDX
005c9cb9  MOV EDX,dword ptr [ESP + 0x2c]
005c9cbd  MOV dword ptr [ECX + 0x4],EDX
005c9cc0  MOV EDX,dword ptr [ESP + 0x30]
005c9cc4  POP EDI
005c9cc5  POP ESI
005c9cc6  MOV dword ptr [ECX + 0x8],EDX
005c9cc9  POP EBP
005c9cca  POP EBX
005c9ccb  FSTP float ptr [ESP + 0x24]
005c9ccf  MOV EDX,dword ptr [ESP + 0x24]
005c9cd3  MOV dword ptr [ECX + 0xc],EDX
005c9cd6  ADD ESP,0x28
005c9cd9  RET
