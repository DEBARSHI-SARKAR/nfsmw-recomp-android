004b47a0  MOV EAX,dword ptr [ECX + 0x18]
004b47a3  FLD float ptr [EAX + 0x64]
004b47a6  MOV EDX,0x3f4ccccd
004b47ab  FLD float ptr [EAX + 0x64]
004b47ae  MOV dword ptr [ECX + 0x34],0x3f000000
004b47b5  FADD float ptr [0x00896480]
004b47bb  MOV dword ptr [ECX + 0x40],0x5
004b47c2  XOR EAX,EAX
004b47c4  FXCH
004b47c6  FSTP float ptr [ECX + 0x3c]
004b47c9  MOV byte ptr [ECX + 0x48],AL
004b47cc  MOV dword ptr [ECX + 0x30],EAX
004b47cf  FST float ptr [ECX + 0x38]
004b47d2  FSTP float ptr [ECX + 0x44]
004b47d5  MOV dword ptr [ECX + 0x84],0x1
004b47df  MOV dword ptr [ECX + 0x54],EDX
004b47e2  MOV dword ptr [ECX + 0x60],EDX
004b47e5  MOV dword ptr [ECX + 0x50],0x3e4ccccd
004b47ec  MOV dword ptr [ECX + 0x58],EAX
004b47ef  MOV dword ptr [ECX + 0x5c],EAX
004b47f2  MOV byte ptr [ECX + 0x64],AL
004b47f5  MOV dword ptr [ECX + 0x4c],EAX
004b47f8  MOV EDX,dword ptr [ECX + 0x2c]
004b47fb  MOV byte ptr [EDX + 0x2f],0x1
004b47ff  MOV EDX,0x42c80000
004b4804  MOV dword ptr [ECX + 0x6c],0x3c23d70a
004b480b  MOV dword ptr [ECX + 0x74],EDX
004b480e  MOV dword ptr [ECX + 0x70],EDX
004b4811  MOV dword ptr [ECX + 0x78],EAX
004b4814  MOV byte ptr [ECX + 0x80],AL
004b481a  MOV dword ptr [ECX + 0x7c],EDX
004b481d  MOV dword ptr [ECX + 0x68],EAX
004b4820  MOV EAX,[0x009142dc]
004b4825  MOV dword ptr [ECX + 0x88],EAX
004b482b  RET
