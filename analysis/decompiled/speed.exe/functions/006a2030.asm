006a2030  SUB ESP,0x48
006a2033  PUSH ESI
006a2034  PUSH EDI
006a2035  MOV EDI,dword ptr [ESP + 0x54]
006a2039  MOV ESI,ECX
006a203b  MOV ECX,dword ptr [ESI + 0xc8]
006a2041  MOV EAX,dword ptr [ECX]
006a2043  PUSH 0x0
006a2045  PUSH EDI
006a2046  CALL dword ptr [EAX + 0xa4]
006a204c  FLD float ptr [ESI + 0x6c]
006a204f  FMUL float ptr [0x00890e98]
006a2055  FSTP float ptr [ESI + 0x6c]
006a2058  FLD float ptr [ESI + 0x70]
006a205b  FMUL float ptr [0x00890e98]
006a2061  FSTP float ptr [ESI + 0x70]
006a2064  FLD float ptr [ESI + 0x74]
006a2067  FMUL float ptr [0x00890e98]
006a206d  FSTP float ptr [ESI + 0x74]
006a2070  FLD float ptr [ESI + 0x6c]
006a2073  FADD float ptr [EDI]
006a2075  FMUL float ptr [0x00895074]
006a207b  FSTP float ptr [EDI]
006a207d  FLD float ptr [ESI + 0x70]
006a2080  FADD float ptr [EDI + 0x4]
006a2083  FMUL float ptr [0x00895074]
006a2089  FSTP float ptr [EDI + 0x4]
006a208c  FLD float ptr [ESI + 0x74]
006a208f  FADD float ptr [EDI + 0x8]
006a2092  FMUL float ptr [0x00895074]
006a2098  FST float ptr [EDI + 0x8]
006a209b  MOV ECX,dword ptr [ESI + 0xa4]
006a20a1  FLD float ptr [0x00890dd8]
006a20a7  FDIV float ptr [0x008f8dcc]
006a20ad  FMUL ST1
006a20af  FMUL float ptr [ECX + 0x38]
006a20b2  FCHS
006a20b4  FSTP float ptr [ESP + 0x54]
006a20b8  FSTP ST0
006a20ba  FLD float ptr [EDI + 0x4]
006a20bd  FCOMP float ptr [0x00890968]
006a20c3  FNSTSW AX
006a20c5  TEST AH,0x41
006a20c8  JNZ 0x006a210e
006a20ca  MOV ECX,dword ptr [ESI + 0xc8]
006a20d0  MOV EDX,dword ptr [ECX]
006a20d2  CALL dword ptr [EDX + 0x2c]
006a20d5  FCOMP float ptr [0x00890dac]
006a20db  FNSTSW AX
006a20dd  TEST AH,0x41
006a20e0  JNZ 0x006a210e
006a20e2  MOV ECX,dword ptr [ESI + 0xc8]
006a20e8  MOV EAX,dword ptr [ECX]
006a20ea  CALL dword ptr [EAX + 0x24]
006a20ed  FLD float ptr [EAX + 0x4]
006a20f0  FCOMP float ptr [0x00890968]
006a20f6  FNSTSW AX
006a20f8  TEST AH,0x41
006a20fb  JNZ 0x006a210e
006a20fd  FLD float ptr [EDI + 0x4]
006a2100  FMUL float ptr [0x008aae60]
006a2106  FADD float ptr [ESP + 0x54]
006a210a  FSTP float ptr [ESP + 0x54]
006a210e  FLD float ptr [ESP + 0x54]
006a2112  FCOMP float ptr [0x00890cd4]
006a2118  FNSTSW AX
006a211a  TEST AH,0x5
006a211d  JP 0x006a2140
006a211f  FLD float ptr [ESP + 0x54]
006a2123  FLD float ptr [0x008aae40]
006a2129  FCOMP float ptr [ESP + 0x54]
006a212d  FNSTSW AX
006a212f  TEST AH,0x41
006a2132  JNZ 0x006a2146
006a2134  FSTP ST0
006a2136  MOV dword ptr [ESP + 0x54],0xbdcccccd
006a213e  JMP 0x006a214a
006a2140  FLD float ptr [0x00890cd4]
006a2146  FSTP float ptr [ESP + 0x54]
006a214a  MOV ECX,dword ptr [ESI + 0xc8]
006a2150  MOV EDX,dword ptr [ECX]
006a2152  LEA EAX,[ESP + 0x14]
006a2156  PUSH EAX
006a2157  CALL dword ptr [EDX + 0x34]
006a215a  FLD float ptr [ESP + 0x54]
006a215e  FMUL float ptr [0x008aabd8]
006a2164  MOV ECX,dword ptr [ESP + 0x14]
006a2168  MOV EDX,dword ptr [ESP + 0x18]
006a216c  MOV EAX,dword ptr [ESP + 0x1c]
006a2170  FSIN
006a2172  MOV dword ptr [ESP + 0x20],ECX
006a2176  LEA ECX,[ESP + 0x14]
006a217a  MOV dword ptr [ESP + 0x24],EDX
006a217e  PUSH ECX
006a217f  MOV EDX,ECX
006a2181  PUSH EDX
006a2182  MOV dword ptr [ESP + 0x30],EAX
006a2186  FSTP float ptr [ESP + 0x20]
006a218a  CALL 0x0040fe20
006a218f  FLD float ptr [ESP + 0x30]
006a2193  FMUL float ptr [ESP + 0x20]
006a2197  ADD ESP,0x8
006a219a  FLD float ptr [ESP + 0x24]
006a219e  FMUL float ptr [ESP + 0x1c]
006a21a2  FSUBP
006a21a4  FSTP float ptr [ESP + 0x44]
006a21a8  MOV EAX,dword ptr [ESP + 0x44]
006a21ac  FLD float ptr [ESP + 0x1c]
006a21b0  MOV dword ptr [ESP + 0x38],EAX
006a21b4  FMUL float ptr [ESP + 0x20]
006a21b8  FLD float ptr [ESP + 0x14]
006a21bc  FMUL float ptr [ESP + 0x28]
006a21c0  FSUBP
006a21c2  FSTP float ptr [ESP + 0x48]
006a21c6  MOV ECX,dword ptr [ESP + 0x48]
006a21ca  FLD float ptr [ESP + 0x24]
006a21ce  MOV dword ptr [ESP + 0x3c],ECX
006a21d2  FMUL float ptr [ESP + 0x14]
006a21d6  MOV ECX,dword ptr [ESI + 0xc8]
006a21dc  FLD float ptr [ESP + 0x20]
006a21e0  FMUL float ptr [ESP + 0x18]
006a21e4  FSUBP
006a21e6  FSTP float ptr [ESP + 0x4c]
006a21ea  MOV EDX,dword ptr [ESP + 0x4c]
006a21ee  MOV dword ptr [ESP + 0x40],EDX
006a21f2  MOV EAX,dword ptr [ECX]
006a21f4  CALL dword ptr [EAX + 0x28]
006a21f7  MOV ECX,dword ptr [EAX]
006a21f9  MOV dword ptr [ESP + 0x8],ECX
006a21fd  MOV EDX,dword ptr [EAX + 0x4]
006a2200  MOV ECX,dword ptr [ESI + 0xc8]
006a2206  MOV dword ptr [ESP + 0xc],EDX
006a220a  MOV EAX,dword ptr [EAX + 0x8]
006a220d  MOV dword ptr [ESP + 0x10],EAX
006a2211  MOV EDX,dword ptr [ECX]
006a2213  PUSH 0x0
006a2215  LEA EAX,[ESP + 0xc]
006a2219  PUSH EAX
006a221a  CALL dword ptr [EDX + 0xa4]
006a2220  MOV ECX,dword ptr [ESI + 0xc8]
006a2226  PUSH 0x0
006a2228  LEA EAX,[ESP + 0x3c]
006a222c  MOV dword ptr [ESP + 0x10],0x0
006a2234  MOV dword ptr [ESP + 0x14],0x0
006a223c  MOV EDX,dword ptr [ECX]
006a223e  PUSH EAX
006a223f  CALL dword ptr [EDX + 0xa4]
006a2245  FLD float ptr [ESP + 0x38]
006a2249  MOV ECX,dword ptr [ESI + 0xa4]
006a224f  FMUL float ptr [ECX + 0x1c]
006a2252  FCHS
006a2254  FST float ptr [ESP + 0x8]
006a2258  FCOMP float ptr [0x0089096c]
006a225e  FNSTSW AX
006a2260  TEST AH,0x5
006a2263  JP 0x006a22cb
006a2265  FLD float ptr [ESP + 0x8]
006a2269  FLD float ptr [0x008aac20]
006a226f  FCOMP float ptr [ESP + 0x8]
006a2273  FNSTSW AX
006a2275  TEST AH,0x41
006a2278  JNZ 0x006a2282
006a227a  FSTP ST0
006a227c  FLD float ptr [0x008aac20]
006a2282  FSTP float ptr [ESP + 0x8]
006a2286  FLD float ptr [0x00891044]
006a228c  FDIV float ptr [0x008f8dcc]
006a2292  FMUL float ptr [EDI]
006a2294  FMUL float ptr [ECX + 0x40]
006a2297  FCHS
006a2299  FST float ptr [ESP + 0x54]
006a229d  FCOMP float ptr [0x00890cd4]
006a22a3  FNSTSW AX
006a22a5  TEST AH,0x5
006a22a8  JP 0x006a22d3
006a22aa  FLD float ptr [ESP + 0x54]
006a22ae  FLD float ptr [0x008aae40]
006a22b4  FCOMP float ptr [ESP + 0x54]
006a22b8  FNSTSW AX
006a22ba  TEST AH,0x41
006a22bd  JNZ 0x006a22d9
006a22bf  FSTP ST0
006a22c1  MOV dword ptr [ESP + 0x54],0xbdcccccd
006a22c9  JMP 0x006a22dd
006a22cb  FLD float ptr [0x0089096c]
006a22d1  JMP 0x006a2282
006a22d3  FLD float ptr [0x00890cd4]
006a22d9  FSTP float ptr [ESP + 0x54]
006a22dd  MOV ECX,dword ptr [ESI + 0xc8]
006a22e3  MOV EDX,dword ptr [ECX]
006a22e5  LEA EAX,[ESP + 0x2c]
006a22e9  PUSH EAX
006a22ea  CALL dword ptr [EDX + 0x38]
006a22ed  FLD float ptr [ESP + 0x54]
006a22f1  FMUL float ptr [0x008aabd8]
006a22f7  MOV ECX,dword ptr [ESP + 0x2c]
006a22fb  MOV EDX,dword ptr [ESP + 0x30]
006a22ff  MOV EAX,dword ptr [ESP + 0x34]
006a2303  FSIN
006a2305  MOV dword ptr [ESP + 0x20],ECX
006a2309  LEA ECX,[ESP + 0x20]
006a230d  MOV dword ptr [ESP + 0x24],EDX
006a2311  PUSH ECX
006a2312  MOV EDX,ECX
006a2314  PUSH EDX
006a2315  MOV dword ptr [ESP + 0x30],EAX
006a2319  FSTP float ptr [ESP + 0x2c]
006a231d  CALL 0x0040fe20
006a2322  FLD float ptr [ESP + 0x3c]
006a2326  FMUL float ptr [ESP + 0x2c]
006a232a  ADD ESP,0x8
006a232d  FLD float ptr [ESP + 0x30]
006a2331  PUSH 0x0
006a2333  FMUL float ptr [ESP + 0x2c]
006a2337  FSUBP
006a2339  FSTP float ptr [ESP + 0x48]
006a233d  MOV EAX,dword ptr [ESP + 0x48]
006a2341  FLD float ptr [ESP + 0x2c]
006a2345  MOV dword ptr [ESP + 0x3c],EAX
006a2349  FMUL float ptr [ESP + 0x30]
006a234d  FLD float ptr [ESP + 0x38]
006a2351  FMUL float ptr [ESP + 0x24]
006a2355  FSUBP
006a2357  FSTP float ptr [ESP + 0x4c]
006a235b  MOV ECX,dword ptr [ESP + 0x4c]
006a235f  FLD float ptr [ESP + 0x34]
006a2363  MOV dword ptr [ESP + 0x40],ECX
006a2367  FMUL float ptr [ESP + 0x24]
006a236b  MOV ECX,dword ptr [ESI + 0xc8]
006a2371  FLD float ptr [ESP + 0x30]
006a2375  FMUL float ptr [ESP + 0x28]
006a2379  FSUBP
006a237b  FSTP float ptr [ESP + 0x50]
006a237f  MOV EDX,dword ptr [ESP + 0x50]
006a2383  MOV dword ptr [ESP + 0x44],EDX
006a2387  MOV EAX,dword ptr [ECX]
006a2389  LEA EDX,[ESP + 0x3c]
006a238d  PUSH EDX
006a238e  CALL dword ptr [EAX + 0xa4]
006a2394  FLD float ptr [ESP + 0x40]
006a2398  MOV EAX,dword ptr [ESI + 0xa4]
006a239e  FMUL float ptr [EAX + 0x60]
006a23a1  FCHS
006a23a3  FST float ptr [ESP + 0x10]
006a23a7  FCOMP float ptr [0x0089096c]
006a23ad  FNSTSW AX
006a23af  TEST AH,0x5
006a23b2  JP 0x006a241d
006a23b4  FLD float ptr [ESP + 0x10]
006a23b8  FLD float ptr [0x008aac20]
006a23be  FCOMP float ptr [ESP + 0x10]
006a23c2  FNSTSW AX
006a23c4  TEST AH,0x41
006a23c7  JNZ 0x006a23d1
006a23c9  FSTP ST0
006a23cb  FLD float ptr [0x008aac20]
006a23d1  MOV ECX,dword ptr [ESI + 0xc8]
006a23d7  FSTP float ptr [ESP + 0x10]
006a23db  MOV EDX,dword ptr [ECX]
006a23dd  PUSH 0x0
006a23df  LEA EAX,[ESP + 0xc]
006a23e3  PUSH EAX
006a23e4  CALL dword ptr [EDX + 0xa0]
006a23ea  MOV EDX,dword ptr [ESP + 0x8]
006a23ee  MOV ECX,dword ptr [ESP + 0x58]
006a23f2  MOV EAX,dword ptr [ESP + 0xc]
006a23f6  MOV dword ptr [ECX],EDX
006a23f8  MOV EDX,dword ptr [ESP + 0x10]
006a23fc  MOV dword ptr [ECX + 0x4],EAX
006a23ff  MOV dword ptr [ECX + 0x8],EDX
006a2402  MOV ECX,dword ptr [ESI + 0xc8]
006a2408  MOV EAX,dword ptr [ECX]
006a240a  PUSH 0x8a2fb4
006a240f  CALL dword ptr [EAX + 0x94]
006a2415  POP EDI
006a2416  POP ESI
006a2417  ADD ESP,0x48
006a241a  RET 0x8
006a241d  FLD float ptr [0x0089096c]
006a2423  JMP 0x006a23d1
