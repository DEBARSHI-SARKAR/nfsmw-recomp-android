007da730  PUSH EBP
007da731  MOV EBP,ESP
007da733  SUB ESP,0x44
007da736  MOV EAX,dword ptr [EBP + 0x8]
007da739  AND EAX,0x1f
007da73c  MOV dword ptr [EBP + -0x4],EAX
007da73f  MOV ECX,dword ptr [EBP + 0x8]
007da742  AND ECX,0x8
007da745  JZ 0x007da767
007da747  MOV EDX,dword ptr [EBP + 0x10]
007da74a  AND EDX,0x1
007da74d  JZ 0x007da767
007da74f  PUSH 0x1
007da751  CALL 0x007dac40
007da756  ADD ESP,0x4
007da759  MOV EAX,dword ptr [EBP + -0x4]
007da75c  AND EAX,0xfffffff7
007da75f  MOV dword ptr [EBP + -0x4],EAX
007da762  JMP 0x007daa1a
007da767  MOV ECX,dword ptr [EBP + 0x8]
007da76a  AND ECX,0x4
007da76d  JZ 0x007da78f
007da76f  MOV EDX,dword ptr [EBP + 0x10]
007da772  AND EDX,0x4
007da775  JZ 0x007da78f
007da777  PUSH 0x4
007da779  CALL 0x007dac40
007da77e  ADD ESP,0x4
007da781  MOV EAX,dword ptr [EBP + -0x4]
007da784  AND EAX,0xfffffffb
007da787  MOV dword ptr [EBP + -0x4],EAX
007da78a  JMP 0x007daa1a
007da78f  MOV ECX,dword ptr [EBP + 0x8]
007da792  AND ECX,0x1
007da795  JZ 0x007da8cb
007da79b  MOV EDX,dword ptr [EBP + 0x10]
007da79e  AND EDX,0x8
007da7a1  JZ 0x007da8cb
007da7a7  PUSH 0x8
007da7a9  CALL 0x007dac40
007da7ae  ADD ESP,0x4
007da7b1  MOV EAX,dword ptr [EBP + 0x10]
007da7b4  AND EAX,0xc00
007da7b9  MOV dword ptr [EBP + -0x20],EAX
007da7bc  CMP dword ptr [EBP + -0x20],0x800
007da7c3  JA 0x007da7e2
007da7c5  CMP dword ptr [EBP + -0x20],0x800
007da7cc  JZ 0x007da829
007da7ce  CMP dword ptr [EBP + -0x20],0x0
007da7d2  JZ 0x007da7f4
007da7d4  CMP dword ptr [EBP + -0x20],0x400
007da7db  JZ 0x007da85b
007da7dd  JMP 0x007da8bd
007da7e2  CMP dword ptr [EBP + -0x20],0xc00
007da7e9  JZ 0x007da88d
007da7ef  JMP 0x007da8bd
007da7f4  MOV ECX,dword ptr [EBP + 0xc]
007da7f7  FLD double ptr [ECX]
007da7f9  FCOMP double ptr [0x008942e0]
007da7ff  FNSTSW AX
007da801  TEST AH,0x41
007da804  JNZ 0x007da811
007da806  FLD double ptr [0x00906ec0]
007da80c  FSTP double ptr [EBP + -0x28]
007da80f  JMP 0x007da81c
007da811  FLD double ptr [0x00906ec0]
007da817  FCHS
007da819  FSTP double ptr [EBP + -0x28]
007da81c  MOV EDX,dword ptr [EBP + 0xc]
007da81f  FLD double ptr [EBP + -0x28]
007da822  FSTP double ptr [EDX]
007da824  JMP 0x007da8bd
007da829  MOV EAX,dword ptr [EBP + 0xc]
007da82c  FLD double ptr [EAX]
007da82e  FCOMP double ptr [0x008942e0]
007da834  FNSTSW AX
007da836  TEST AH,0x41
007da839  JNZ 0x007da846
007da83b  FLD double ptr [0x00906ec0]
007da841  FSTP double ptr [EBP + -0x30]
007da844  JMP 0x007da851
007da846  FLD double ptr [0x00906ed0]
007da84c  FCHS
007da84e  FSTP double ptr [EBP + -0x30]
007da851  MOV ECX,dword ptr [EBP + 0xc]
007da854  FLD double ptr [EBP + -0x30]
007da857  FSTP double ptr [ECX]
007da859  JMP 0x007da8bd
007da85b  MOV EDX,dword ptr [EBP + 0xc]
007da85e  FLD double ptr [EDX]
007da860  FCOMP double ptr [0x008942e0]
007da866  FNSTSW AX
007da868  TEST AH,0x41
007da86b  JNZ 0x007da878
007da86d  FLD double ptr [0x00906ed0]
007da873  FSTP double ptr [EBP + -0x38]
007da876  JMP 0x007da883
007da878  FLD double ptr [0x00906ec0]
007da87e  FCHS
007da880  FSTP double ptr [EBP + -0x38]
007da883  MOV EAX,dword ptr [EBP + 0xc]
007da886  FLD double ptr [EBP + -0x38]
007da889  FSTP double ptr [EAX]
007da88b  JMP 0x007da8bd
007da88d  MOV ECX,dword ptr [EBP + 0xc]
007da890  FLD double ptr [ECX]
007da892  FCOMP double ptr [0x008942e0]
007da898  FNSTSW AX
007da89a  TEST AH,0x41
007da89d  JNZ 0x007da8aa
007da89f  FLD double ptr [0x00906ed0]
007da8a5  FSTP double ptr [EBP + -0x40]
007da8a8  JMP 0x007da8b5
007da8aa  FLD double ptr [0x00906ed0]
007da8b0  FCHS
007da8b2  FSTP double ptr [EBP + -0x40]
007da8b5  MOV EDX,dword ptr [EBP + 0xc]
007da8b8  FLD double ptr [EBP + -0x40]
007da8bb  FSTP double ptr [EDX]
007da8bd  MOV EAX,dword ptr [EBP + -0x4]
007da8c0  AND EAX,0xfffffffe
007da8c3  MOV dword ptr [EBP + -0x4],EAX
007da8c6  JMP 0x007daa1a
007da8cb  MOV ECX,dword ptr [EBP + 0x8]
007da8ce  AND ECX,0x2
007da8d1  JZ 0x007daa1a
007da8d7  MOV EDX,dword ptr [EBP + 0x10]
007da8da  AND EDX,0x10
007da8dd  JZ 0x007daa1a
007da8e3  MOV dword ptr [EBP + -0x8],0x0
007da8ea  MOV EAX,dword ptr [EBP + 0x8]
007da8ed  AND EAX,0x10
007da8f0  JZ 0x007da8f9
007da8f2  MOV dword ptr [EBP + -0x8],0x1
007da8f9  MOV ECX,dword ptr [EBP + 0xc]
007da8fc  FLD double ptr [0x008942e0]
007da902  FLD double ptr [ECX]
007da904  FUCOMPP
007da906  FNSTSW AX
007da908  TEST AH,0x44
007da90b  JNP 0x007da9fa
007da911  LEA EDX,[EBP + -0xc]
007da914  PUSH EDX
007da915  MOV EAX,dword ptr [EBP + 0xc]
007da918  FLD double ptr [EAX]
007da91a  SUB ESP,0x8
007da91d  FSTP double ptr [ESP]
007da920  CALL 0x007d9e70
007da925  ADD ESP,0xc
007da928  FSTP double ptr [EBP + -0x18]
007da92b  MOV ECX,dword ptr [EBP + -0xc]
007da92e  SUB ECX,0x600
007da934  MOV dword ptr [EBP + -0x10],ECX
007da937  CMP dword ptr [EBP + -0x10],0xfffffbce
007da93e  JGE 0x007da958
007da940  FLD double ptr [EBP + -0x18]
007da943  FMUL double ptr [0x008942e0]
007da949  FSTP double ptr [EBP + -0x18]
007da94c  MOV dword ptr [EBP + -0x8],0x1
007da953  JMP 0x007da9f0
007da958  FLD double ptr [EBP + -0x18]
007da95b  FCOMP double ptr [0x008942e0]
007da961  FNSTSW AX
007da963  TEST AH,0x5
007da966  JP 0x007da971
007da968  MOV dword ptr [EBP + -0x44],0x1
007da96f  JMP 0x007da978
007da971  MOV dword ptr [EBP + -0x44],0x0
007da978  MOV EDX,dword ptr [EBP + -0x44]
007da97b  MOV dword ptr [EBP + -0x1c],EDX
007da97e  MOVZX EAX,word ptr [EBP + -0x12]
007da982  AND EAX,0xf
007da985  MOV word ptr [EBP + -0x12],AX
007da989  MOVZX ECX,word ptr [EBP + -0x12]
007da98d  OR ECX,0x10
007da990  MOV word ptr [EBP + -0x12],CX
007da994  JMP 0x007da99f
007da996  MOV EDX,dword ptr [EBP + -0x10]
007da999  ADD EDX,0x1
007da99c  MOV dword ptr [EBP + -0x10],EDX
007da99f  CMP dword ptr [EBP + -0x10],0xfffffc03
007da9a6  JGE 0x007da9e2
007da9a8  MOV EAX,dword ptr [EBP + -0x18]
007da9ab  AND EAX,0x1
007da9ae  JZ 0x007da9bd
007da9b0  CMP dword ptr [EBP + -0x8],0x0
007da9b4  JNZ 0x007da9bd
007da9b6  MOV dword ptr [EBP + -0x8],0x1
007da9bd  MOV ECX,dword ptr [EBP + -0x18]
007da9c0  SHR ECX,0x1
007da9c2  MOV dword ptr [EBP + -0x18],ECX
007da9c5  MOV EDX,dword ptr [EBP + -0x14]
007da9c8  AND EDX,0x1
007da9cb  JZ 0x007da9d8
007da9cd  MOV EAX,dword ptr [EBP + -0x18]
007da9d0  OR EAX,0x80000000
007da9d5  MOV dword ptr [EBP + -0x18],EAX
007da9d8  MOV ECX,dword ptr [EBP + -0x14]
007da9db  SHR ECX,0x1
007da9dd  MOV dword ptr [EBP + -0x14],ECX
007da9e0  JMP 0x007da996
007da9e2  CMP dword ptr [EBP + -0x1c],0x0
007da9e6  JZ 0x007da9f0
007da9e8  FLD double ptr [EBP + -0x18]
007da9eb  FCHS
007da9ed  FSTP double ptr [EBP + -0x18]
007da9f0  MOV EDX,dword ptr [EBP + 0xc]
007da9f3  FLD double ptr [EBP + -0x18]
007da9f6  FSTP double ptr [EDX]
007da9f8  JMP 0x007daa01
007da9fa  MOV dword ptr [EBP + -0x8],0x1
007daa01  CMP dword ptr [EBP + -0x8],0x0
007daa05  JZ 0x007daa11
007daa07  PUSH 0x10
007daa09  CALL 0x007dac40
007daa0e  ADD ESP,0x4
007daa11  MOV EAX,dword ptr [EBP + -0x4]
007daa14  AND EAX,0xfffffffd
007daa17  MOV dword ptr [EBP + -0x4],EAX
007daa1a  MOV ECX,dword ptr [EBP + 0x8]
007daa1d  AND ECX,0x10
007daa20  JZ 0x007daa3d
007daa22  MOV EDX,dword ptr [EBP + 0x10]
007daa25  AND EDX,0x20
007daa28  JZ 0x007daa3d
007daa2a  PUSH 0x20
007daa2c  CALL 0x007dac40
007daa31  ADD ESP,0x4
007daa34  MOV EAX,dword ptr [EBP + -0x4]
007daa37  AND EAX,0xffffffef
007daa3a  MOV dword ptr [EBP + -0x4],EAX
007daa3d  XOR EAX,EAX
007daa3f  CMP dword ptr [EBP + -0x4],0x0
007daa43  SETZ AL
007daa46  MOV ESP,EBP
007daa48  POP EBP
007daa49  RET
