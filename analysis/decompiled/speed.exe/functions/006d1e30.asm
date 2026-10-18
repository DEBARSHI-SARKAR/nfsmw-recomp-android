006d1e30  PUSH EBP
006d1e31  MOV EBP,ESP
006d1e33  AND ESP,0xfffffff0
006d1e36  SUB ESP,0x20
006d1e39  CMP byte ptr [ECX],0x0
006d1e3c  JZ 0x006d1f54
006d1e42  MOV ECX,dword ptr [0x0093cb1c]
006d1e48  TEST ECX,ECX
006d1e4a  JZ 0x006d1f54
006d1e50  CMP ECX,dword ptr [0x0093cb20]
006d1e56  JNC 0x006d1f54
006d1e5c  MOV EAX,dword ptr [EBP + 0x8]
006d1e5f  FLD float ptr [EAX + 0x40]
006d1e62  ADD ECX,0x18
006d1e65  FADD float ptr [EAX + 0x30]
006d1e68  ADD ECX,0x18
006d1e6b  FLD float ptr [EAX + 0x44]
006d1e6e  ADD ECX,0x18
006d1e71  FADD float ptr [EAX + 0x34]
006d1e74  ADD ECX,0x18
006d1e77  FLD float ptr [EAX + 0x48]
006d1e7a  FADD float ptr [EAX + 0x38]
006d1e7d  FSTP float ptr [ESP + 0x18]
006d1e81  FLD float ptr [EAX + 0x30]
006d1e84  FSUB float ptr [EAX + 0x40]
006d1e87  FSTP float ptr [ESP]
006d1e8a  FLD float ptr [EAX + 0x34]
006d1e8d  FSUB float ptr [EAX + 0x44]
006d1e90  FSTP float ptr [ESP + 0x4]
006d1e94  FLD float ptr [EAX + 0x38]
006d1e97  FSUB float ptr [EAX + 0x48]
006d1e9a  FSTP float ptr [ESP + 0x8]
006d1e9e  FLD float ptr [EAX]
006d1ea0  FSUB ST0,ST2
006d1ea2  FSTP float ptr [ECX + -0x60]
006d1ea5  FLD float ptr [EAX + 0x4]
006d1ea8  FSUB ST0,ST1
006d1eaa  FSTP float ptr [ECX + -0x5c]
006d1ead  FLD float ptr [EAX + 0x8]
006d1eb0  FSUB float ptr [ESP + 0x18]
006d1eb4  FSTP float ptr [ECX + -0x58]
006d1eb7  MOV EDX,dword ptr [EAX + 0x10]
006d1eba  MOV dword ptr [ECX + -0x54],EDX
006d1ebd  FLD float ptr [ESP]
006d1ec0  MOV EDX,dword ptr [EAX + 0x14]
006d1ec3  MOV dword ptr [ECX + -0x50],EDX
006d1ec6  MOV EDX,dword ptr [EAX + 0x18]
006d1ec9  MOV dword ptr [ECX + -0x4c],EDX
006d1ecc  FADD float ptr [EAX]
006d1ece  FSTP float ptr [ECX + -0x48]
006d1ed1  FLD float ptr [ESP + 0x4]
006d1ed5  FADD float ptr [EAX + 0x4]
006d1ed8  FSTP float ptr [ECX + -0x44]
006d1edb  FLD float ptr [ESP + 0x8]
006d1edf  FADD float ptr [EAX + 0x8]
006d1ee2  FSTP float ptr [ECX + -0x40]
006d1ee5  MOV EDX,dword ptr [EAX + 0x10]
006d1ee8  MOV dword ptr [ECX + -0x3c],EDX
006d1eeb  FXCH
006d1eed  MOV EDX,dword ptr [EAX + 0x1c]
006d1ef0  MOV dword ptr [ECX + -0x38],EDX
006d1ef3  MOV EDX,dword ptr [EAX + 0x18]
006d1ef6  MOV dword ptr [ECX + -0x34],EDX
006d1ef9  FADD float ptr [EAX]
006d1efb  FSTP float ptr [ECX + -0x30]
006d1efe  FADD float ptr [EAX + 0x4]
006d1f01  FSTP float ptr [ECX + -0x2c]
006d1f04  FLD float ptr [ESP + 0x18]
006d1f08  FADD float ptr [EAX + 0x8]
006d1f0b  FSTP float ptr [ECX + -0x28]
006d1f0e  MOV EDX,dword ptr [EAX + 0x10]
006d1f11  MOV dword ptr [ECX + -0x24],EDX
006d1f14  MOV EDX,dword ptr [EAX + 0x1c]
006d1f17  MOV dword ptr [ECX + -0x20],EDX
006d1f1a  MOV EDX,dword ptr [EAX + 0x20]
006d1f1d  MOV dword ptr [ECX + -0x1c],EDX
006d1f20  FLD float ptr [EAX]
006d1f22  FSUB float ptr [ESP]
006d1f25  FSTP float ptr [ECX + -0x18]
006d1f28  FLD float ptr [EAX + 0x4]
006d1f2b  FSUB float ptr [ESP + 0x4]
006d1f2f  FSTP float ptr [ECX + -0x14]
006d1f32  FLD float ptr [EAX + 0x8]
006d1f35  FSUB float ptr [ESP + 0x8]
006d1f39  FSTP float ptr [ECX + -0x10]
006d1f3c  MOV EDX,dword ptr [EAX + 0x10]
006d1f3f  MOV dword ptr [ECX + -0xc],EDX
006d1f42  MOV EDX,dword ptr [EAX + 0x14]
006d1f45  MOV dword ptr [ECX + -0x8],EDX
006d1f48  MOV EAX,dword ptr [EAX + 0x20]
006d1f4b  MOV dword ptr [ECX + -0x4],EAX
006d1f4e  MOV dword ptr [0x0093cb1c],ECX
006d1f54  MOV ESP,EBP
006d1f56  POP EBP
006d1f57  RET 0x4
