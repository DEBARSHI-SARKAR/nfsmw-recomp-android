004b4830  PUSH ECX
004b4831  MOV EAX,[0x009142dc]
004b4836  MOV EDX,dword ptr [ECX + 0x90]
004b483c  MOV dword ptr [ECX + 0x88],EAX
004b4842  MOV EAX,dword ptr [ECX + 0x18]
004b4845  MOV dword ptr [ECX + 0x84],0x2
004b484f  FLD float ptr [EAX + 0x64]
004b4852  MOV EDX,dword ptr [EDX + 0x8]
004b4855  FILD dword ptr [EDX + 0x8]
004b4858  PUSH ESI
004b4859  MOV ESI,dword ptr [EDX + 0x8]
004b485c  TEST ESI,ESI
004b485e  JGE 0x004b4866
004b4860  FADD float ptr [0x00891214]
004b4866  FADD float ptr [EAX + 0x64]
004b4869  MOV ESI,0x3c23d70a
004b486e  FILD dword ptr [EDX]
004b4870  FMUL float ptr [0x00890d60]
004b4876  FST float ptr [ECX + 0x34]
004b4879  FCOMP float ptr [0x00890968]
004b487f  FNSTSW AX
004b4881  TEST AH,0x41
004b4884  JP 0x004b4889
004b4886  MOV dword ptr [ECX + 0x34],ESI
004b4889  FSTP float ptr [ECX + 0x3c]
004b488c  XOR EDX,EDX
004b488e  MOV dword ptr [ECX + 0x40],EDX
004b4891  FST float ptr [ECX + 0x38]
004b4894  MOV byte ptr [ECX + 0x48],DL
004b4897  FSTP float ptr [ECX + 0x44]
004b489a  MOV dword ptr [ECX + 0x30],EDX
004b489d  MOV EAX,dword ptr [ECX + 0x90]
004b48a3  MOV EAX,dword ptr [EAX + 0x8]
004b48a6  FLD float ptr [EAX + 0xc]
004b48a9  FILD dword ptr [EAX]
004b48ab  FMUL float ptr [0x00890d60]
004b48b1  FST float ptr [ECX + 0x50]
004b48b4  FCOMP float ptr [0x00890968]
004b48ba  FNSTSW AX
004b48bc  TEST AH,0x41
004b48bf  JP 0x004b48c4
004b48c1  MOV dword ptr [ECX + 0x50],ESI
004b48c4  FSTP float ptr [ECX + 0x58]
004b48c7  MOV dword ptr [ECX + 0x54],EDX
004b48ca  MOV dword ptr [ECX + 0x5c],EDX
004b48cd  MOV byte ptr [ECX + 0x64],DL
004b48d0  MOV dword ptr [ECX + 0x60],EDX
004b48d3  MOV dword ptr [ECX + 0x4c],EDX
004b48d6  MOV EAX,dword ptr [ECX + 0x18]
004b48d9  FLD float ptr [EAX + 0x60]
004b48dc  FLD float ptr [EAX + 0x60]
004b48df  MOV dword ptr [ECX + 0x6c],ESI
004b48e2  FXCH
004b48e4  MOV dword ptr [ECX + 0x78],EDX
004b48e7  FSTP float ptr [ECX + 0x74]
004b48ea  MOV byte ptr [ECX + 0x80],DL
004b48f0  MOV dword ptr [ECX + 0x68],EDX
004b48f3  FST float ptr [ECX + 0x70]
004b48f6  POP ESI
004b48f7  FSTP float ptr [ECX + 0x7c]
004b48fa  POP ECX
004b48fb  RET
