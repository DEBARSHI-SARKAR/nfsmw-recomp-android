004fee70  MOV EAX,[0x00919690]
004fee75  TEST EAX,EAX
004fee77  JZ 0x004feeb3
004fee79  FLD float ptr [EAX + 0x44]
004fee7c  MOV EDX,dword ptr [EAX + 0x40]
004fee7f  FLD float ptr [EAX + 0x48]
004fee82  MOV dword ptr [ECX + 0x320],EDX
004fee88  FXCH
004fee8a  FSTP float ptr [ECX + 0x324]
004fee90  FSTP float ptr [ECX + 0x328]
004fee96  FLD float ptr [EAX + 0x54]
004fee99  FLD float ptr [EAX + 0x58]
004fee9c  MOV EAX,dword ptr [EAX + 0x50]
004fee9f  FXCH
004feea1  MOV dword ptr [ECX + 0x340],EAX
004feea7  FSTP float ptr [ECX + 0x344]
004feead  FSTP float ptr [ECX + 0x348]
004feeb3  MOV EAX,[0x00919700]
004feeb8  TEST EAX,EAX
004feeba  JZ 0x004feef6
004feebc  FLD float ptr [EAX + 0x44]
004feebf  MOV EDX,dword ptr [EAX + 0x40]
004feec2  FLD float ptr [EAX + 0x48]
004feec5  MOV dword ptr [ECX + 0x330],EDX
004feecb  FXCH
004feecd  FSTP float ptr [ECX + 0x334]
004feed3  FSTP float ptr [ECX + 0x338]
004feed9  FLD float ptr [EAX + 0x54]
004feedc  FLD float ptr [EAX + 0x58]
004feedf  MOV EAX,dword ptr [EAX + 0x50]
004feee2  FXCH
004feee4  MOV dword ptr [ECX + 0x350],EAX
004feeea  FSTP float ptr [ECX + 0x354]
004feef0  FSTP float ptr [ECX + 0x358]
004feef6  RET
