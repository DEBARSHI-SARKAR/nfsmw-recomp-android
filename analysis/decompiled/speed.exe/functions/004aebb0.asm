004aebb0  CMP dword ptr [ECX + 0x70],0x1
004aebb4  MOV EAX,dword ptr [ECX + 0x24]
004aebb7  JNZ 0x004aebbf
004aebb9  FLD float ptr [EAX + 0x8]
004aebbc  FMUL float ptr [EAX]
004aebbe  RET
004aebbf  FLD float ptr [EAX + 0xc]
004aebc2  FMUL float ptr [EAX]
004aebc4  RET
