0073dab0  FLD float ptr [0x0089096c]
0073dab6  MOV EAX,dword ptr [ESP + 0x8]
0073daba  FSUB float ptr [ESP + 0x4]
0073dabe  FLD ST0
0073dac0  FMUL float ptr [EAX + 0x14]
0073dac3  FLD float ptr [ESP + 0x4]
0073dac7  FMUL float ptr [EAX + 0x24]
0073daca  FADDP
0073dacc  FMUL ST1
0073dace  FMUL float ptr [ESP + 0x4]
0073dad2  FMUL float ptr [0x008959e4]
0073dad8  FLD ST1
0073dada  FMUL ST2
0073dadc  FMUL ST2
0073dade  FMUL float ptr [EAX + 0x4]
0073dae1  FADDP
0073dae3  FLD float ptr [ESP + 0x4]
0073dae7  FMUL float ptr [ESP + 0x4]
0073daeb  FMUL float ptr [ESP + 0x4]
0073daef  FMUL float ptr [EAX + 0x34]
0073daf2  FADDP
0073daf4  FSTP ST1
0073daf6  RET
