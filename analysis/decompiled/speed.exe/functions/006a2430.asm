006a2430  PUSH -0x1
006a2432  PUSH 0x87c818
006a2437  MOV EAX,FS:[0x0]
006a243d  PUSH EAX
006a243e  MOV dword ptr FS:[0x0],ESP
006a2445  SUB ESP,0x6c
006a2448  PUSH ESI
006a2449  MOV ESI,ECX
006a244b  MOV ECX,dword ptr [ESI + 0xc8]
006a2451  FLD float ptr [ESI + 0x54]
006a2454  MOV EAX,dword ptr [ECX]
006a2456  FCHS
006a2458  PUSH EDI
006a2459  LEA EDI,[ESI + 0x54]
006a245c  PUSH ECX
006a245d  FSTP float ptr [ESP]
006a2460  CALL dword ptr [EAX + 0x78]
006a2463  MOV ECX,dword ptr [ESI + 0xc8]
006a2469  FLD float ptr [ESI + 0x58]
006a246c  MOV EDX,dword ptr [ECX]
006a246e  FCHS
006a2470  PUSH ECX
006a2471  FSTP float ptr [ESP]
006a2474  CALL dword ptr [EDX + 0x7c]
006a2477  MOV ECX,dword ptr [ESI + 0xc8]
006a247d  FLD float ptr [ESI + 0x5c]
006a2480  MOV EAX,dword ptr [ECX]
006a2482  FCHS
006a2484  PUSH ECX
006a2485  FSTP float ptr [ESP]
006a2488  CALL dword ptr [EAX + 0x80]
006a248e  MOV ECX,dword ptr [ESI + 0xc8]
006a2494  MOV EDX,dword ptr [ECX]
006a2496  LEA EAX,[ESP + 0x40]
006a249a  PUSH EAX
006a249b  MOV dword ptr [ESP + 0x64],0x0
006a24a3  CALL dword ptr [EDX + 0x48]
006a24a6  FLD float ptr [EAX + 0x4]
006a24a9  MOV ECX,dword ptr [ESI + 0xcc]
006a24af  FCHS
006a24b1  MOV EDX,dword ptr [ECX]
006a24b3  FSTP float ptr [ESP + 0x64]
006a24b7  MOV dword ptr [ESP + 0x68],0x0
006a24bf  CALL dword ptr [EDX + 0xa4]
006a24c5  PUSH EDI
006a24c6  PUSH EAX
006a24c7  LEA EAX,[ESP + 0x68]
006a24cb  PUSH EAX
006a24cc  CALL 0x00401670
006a24d1  MOV ECX,dword ptr [ESI + 0xc8]
006a24d7  MOV EAX,dword ptr [EDI]
006a24d9  MOV EDX,dword ptr [ECX]
006a24db  ADD ESP,0xc
006a24de  PUSH EAX
006a24df  CALL dword ptr [EDX + 0x78]
006a24e2  MOV ECX,dword ptr [ESI + 0xc8]
006a24e8  MOV EAX,dword ptr [ESI + 0x58]
006a24eb  MOV EDX,dword ptr [ECX]
006a24ed  PUSH EAX
006a24ee  CALL dword ptr [EDX + 0x7c]
006a24f1  MOV ECX,dword ptr [ESI + 0xc8]
006a24f7  MOV EAX,dword ptr [ESI + 0x5c]
006a24fa  MOV EDX,dword ptr [ECX]
006a24fc  PUSH EAX
006a24fd  CALL dword ptr [EDX + 0x80]
006a2503  FLD float ptr [ESI + 0x80]
006a2509  FLD float ptr [ESI + 0x7c]
006a250c  FLD float ptr [ESI + 0x78]
006a250f  FLD ST0
006a2511  FMUL ST1
006a2513  FLD ST2
006a2515  FMUL ST3
006a2517  FADDP
006a2519  FLD ST3
006a251b  FMUL ST4
006a251d  FADDP
006a251f  FSTP float ptr [ESP + 0xc]
006a2523  MOV ECX,dword ptr [ESP + 0xc]
006a2527  FSTP ST0
006a2529  PUSH ECX
006a252a  FSTP ST0
006a252c  FSTP ST0
006a252e  CALL 0x005c5e80
006a2533  ADD ESP,0x4
006a2536  MOV EAX,dword ptr [ESI + 0xa4]
006a253c  FLD float ptr [EAX + 0x44]
006a253f  FLD ST1
006a2541  FCOMP
006a2543  FNSTSW AX
006a2545  TEST AH,0x41
006a2548  JNZ 0x006a256a
006a254a  FDIVRP
006a254c  FLD ST0
006a254e  FMUL float ptr [ESI + 0x78]
006a2551  FSTP float ptr [ESI + 0x78]
006a2554  FLD ST0
006a2556  FMUL float ptr [ESI + 0x7c]
006a2559  FSTP float ptr [ESI + 0x7c]
006a255c  FMUL float ptr [ESI + 0x80]
006a2562  FSTP float ptr [ESI + 0x80]
006a2568  JMP 0x006a256e
006a256a  FSTP ST0
006a256c  FSTP ST0
006a256e  MOV ECX,dword ptr [ESI + 0xc8]
006a2574  MOV EDX,dword ptr [ECX]
006a2576  CALL dword ptr [EDX + 0x2c]
006a2579  FMUL float ptr [0x008aae44]
006a257f  FADD float ptr [0x008f8dd0]
006a2585  FST float ptr [ESP + 0x8]
006a2589  FCOMP float ptr [0x008f8dcc]
006a258f  FNSTSW AX
006a2591  TEST AH,0x41
006a2594  JNZ 0x006a259f
006a2596  MOV EAX,[0x008f8dcc]
006a259b  MOV dword ptr [ESP + 0x8],EAX
006a259f  MOV AL,byte ptr [ESI + 0xc4]
006a25a5  TEST AL,AL
006a25a7  JZ 0x006a25b3
006a25a9  MOV ECX,dword ptr [0x008f8dcc]
006a25af  MOV dword ptr [ESP + 0x8],ECX
006a25b3  MOV ECX,dword ptr [ESI + 0xc8]
006a25b9  MOV EDX,dword ptr [ECX]
006a25bb  CALL dword ptr [EDX + 0x24]
006a25be  FLD float ptr [ESI + 0x78]
006a25c1  FSUB float ptr [EAX]
006a25c3  FSTP float ptr [ESP + 0x1c]
006a25c7  FLD float ptr [ESI + 0x7c]
006a25ca  FSUB float ptr [EAX + 0x4]
006a25cd  FSTP float ptr [ESP + 0x20]
006a25d1  FLD float ptr [ESI + 0x80]
006a25d7  FSUB float ptr [EAX + 0x8]
006a25da  FSTP float ptr [ESP + 0x24]
006a25de  FLD float ptr [ESP + 0x20]
006a25e2  FMUL float ptr [ESP + 0x20]
006a25e6  FLD float ptr [ESP + 0x24]
006a25ea  FMUL float ptr [ESP + 0x24]
006a25ee  FADDP
006a25f0  FLD float ptr [ESP + 0x1c]
006a25f4  FMUL float ptr [ESP + 0x1c]
006a25f8  FADDP
006a25fa  FSTP float ptr [ESP + 0xc]
006a25fe  MOV EAX,dword ptr [ESP + 0xc]
006a2602  PUSH EAX
006a2603  CALL 0x005c5e80
006a2608  FMUL float ptr [0x008f8dd4]
006a260e  ADD ESP,0x4
006a2611  FST float ptr [ESP + 0xc]
006a2615  FCOMP float ptr [0x0089096c]
006a261b  FNSTSW AX
006a261d  TEST AH,0x41
006a2620  JNZ 0x006a2665
006a2622  FLD float ptr [ESP + 0xc]
006a2626  FCOMP float ptr [ESP + 0x8]
006a262a  FNSTSW AX
006a262c  TEST AH,0x41
006a262f  JZ 0x006a263b
006a2631  MOV AL,byte ptr [ESI + 0xc4]
006a2637  TEST AL,AL
006a2639  JZ 0x006a2665
006a263b  FLD float ptr [ESP + 0x8]
006a263f  FDIV float ptr [ESP + 0xc]
006a2643  FLD float ptr [ESP + 0x1c]
006a2647  FMUL ST1
006a2649  FSTP float ptr [ESP + 0x28]
006a264d  FLD float ptr [ESP + 0x20]
006a2651  FMUL ST1
006a2653  FSTP float ptr [ESP + 0x2c]
006a2657  FLD float ptr [ESP + 0x24]
006a265b  FMUL ST1
006a265d  FSTP float ptr [ESP + 0x30]
006a2661  FSTP ST0
006a2663  JMP 0x006a268f
006a2665  FLD float ptr [ESP + 0x1c]
006a2669  FMUL float ptr [0x008f8dd4]
006a266f  FSTP float ptr [ESP + 0x28]
006a2673  FLD float ptr [ESP + 0x20]
006a2677  FMUL float ptr [0x008f8dd4]
006a267d  FSTP float ptr [ESP + 0x2c]
006a2681  FLD float ptr [ESP + 0x24]
006a2685  FMUL float ptr [0x008f8dd4]
006a268b  FSTP float ptr [ESP + 0x30]
006a268f  MOV ECX,dword ptr [ESI + 0xc8]
006a2695  MOV EDX,dword ptr [ECX]
006a2697  CALL dword ptr [EDX + 0x18]
006a269a  FLD float ptr [ESP + 0x28]
006a269e  MOV ECX,dword ptr [ESI + 0x34]
006a26a1  FMUL ST1
006a26a3  FSTP float ptr [ESP + 0x54]
006a26a7  FLD float ptr [ESP + 0x2c]
006a26ab  FMUL ST1
006a26ad  FSTP float ptr [ESP + 0x58]
006a26b1  FLD float ptr [ESP + 0x30]
006a26b5  FMUL ST1
006a26b7  FSTP float ptr [ESP + 0x5c]
006a26bb  MOV EAX,dword ptr [ECX]
006a26bd  FSTP ST0
006a26bf  CALL dword ptr [EAX + 0x44]
006a26c2  PUSH EAX
006a26c3  LEA ECX,[ESP + 0x44]
006a26c7  CALL 0x0068a6d0
006a26cc  PUSH 0x0
006a26ce  PUSH 0x7c90bb38
006a26d3  MOV ECX,EAX
006a26d5  MOV dword ptr [ESP + 0x84],0x0
006a26e0  CALL 0x00454810
006a26e5  TEST EAX,EAX
006a26e7  JNZ 0x006a26f3
006a26e9  PUSH 0xc
006a26eb  CALL 0x006269b0
006a26f0  ADD ESP,0x4
006a26f3  PUSH 0x0
006a26f5  PUSH 0x0
006a26f7  PUSH EAX
006a26f8  LEA ECX,[ESP + 0x6c]
006a26fc  CALL 0x004075a0
006a2701  MOV EAX,dword ptr [EAX + 0x8]
006a2704  MOV ECX,dword ptr [EAX + 0xf0]
006a270a  MOV dword ptr [ESP + 0xc],ECX
006a270e  LEA ECX,[ESP + 0x60]
006a2712  CALL 0x0045a430
006a2717  LEA ECX,[ESP + 0x40]
006a271b  MOV dword ptr [ESP + 0x7c],0xffffffff
006a2723  CALL 0x0045a430
006a2728  MOV ECX,dword ptr [ESI + 0xc8]
006a272e  MOV EDX,dword ptr [ECX]
006a2730  CALL dword ptr [EDX + 0x18]
006a2733  FMUL float ptr [ESP + 0xc]
006a2737  FLD float ptr [ESP + 0x58]
006a273b  MOV ECX,dword ptr [ESI + 0xc8]
006a2741  LEA EDX,[ESP + 0x54]
006a2745  FSUB ST0,ST1
006a2747  PUSH EDX
006a2748  FSTP float ptr [ESP + 0x5c]
006a274c  MOV EAX,dword ptr [ECX]
006a274e  FSTP ST0
006a2750  CALL dword ptr [EAX + 0x8c]
006a2756  FLD float ptr [ESP + 0x84]
006a275d  MOV EAX,[0x008a2fb4]
006a2762  FCOMP float ptr [0x00890ec4]
006a2768  MOV ECX,dword ptr [0x008a2fb8]
006a276e  MOV EDX,dword ptr [0x008a2fbc]
006a2774  MOV dword ptr [ESP + 0x40],EAX
006a2778  MOV dword ptr [ESP + 0x44],ECX
006a277c  FNSTSW AX
006a277e  MOV dword ptr [ESP + 0x48],EDX
006a2782  TEST AH,0x41
006a2785  JNZ 0x006a27f0
006a2787  MOV ECX,dword ptr [ESI + 0xc8]
006a278d  MOV EAX,dword ptr [ECX]
006a278f  CALL dword ptr [EAX + 0x24]
006a2792  FLD float ptr [EAX]
006a2794  FSUB float ptr [ESI + 0x84]
006a279a  LEA ECX,[ESP + 0x40]
006a279e  PUSH ECX
006a279f  LEA EDX,[ESP + 0x2c]
006a27a3  FSTP float ptr [ESP + 0x2c]
006a27a7  PUSH EDX
006a27a8  FLD float ptr [EAX + 0x4]
006a27ab  MOV ECX,ESI
006a27ad  FSUB float ptr [ESI + 0x88]
006a27b3  FSTP float ptr [ESP + 0x34]
006a27b7  FLD float ptr [EAX + 0x8]
006a27ba  FSUB float ptr [ESI + 0x8c]
006a27c0  FLD float ptr [0x0089096c]
006a27c6  FDIV float ptr [ESP + 0x8c]
006a27cd  FLD float ptr [ESP + 0x30]
006a27d1  FMUL ST1
006a27d3  FSTP float ptr [ESP + 0x30]
006a27d7  FLD float ptr [ESP + 0x34]
006a27db  FMUL ST1
006a27dd  FSTP float ptr [ESP + 0x34]
006a27e1  FXCH
006a27e3  FMUL ST1
006a27e5  FSTP float ptr [ESP + 0x38]
006a27e9  FSTP ST0
006a27eb  CALL 0x006a2030
006a27f0  LEA EAX,[ESI + 0x90]
006a27f6  MOV ECX,dword ptr [EAX]
006a27f8  MOV EDX,dword ptr [EAX + 0x4]
006a27fb  MOV EAX,dword ptr [EAX + 0x8]
006a27fe  MOV dword ptr [ESP + 0x1c],ECX
006a2802  MOV ECX,dword ptr [ESI + 0xc8]
006a2808  MOV dword ptr [ESP + 0x24],EAX
006a280c  LEA EAX,[ESP + 0x34]
006a2810  MOV dword ptr [ESP + 0x20],EDX
006a2814  MOV EDX,dword ptr [ECX]
006a2816  PUSH EAX
006a2817  CALL dword ptr [EDX + 0x34]
006a281a  LEA ECX,[ESP + 0x1c]
006a281e  PUSH ECX
006a281f  MOV EDX,ECX
006a2821  PUSH EDX
006a2822  MOV dword ptr [ESP + 0x40],0x0
006a282a  MOV dword ptr [ESP + 0x28],0x0
006a2832  CALL 0x0040fe20
006a2837  FLD float ptr [ESP + 0x44]
006a283b  FMUL float ptr [ESP + 0x28]
006a283f  ADD ESP,0x8
006a2842  FLD float ptr [ESP + 0x24]
006a2846  FMUL float ptr [ESP + 0x38]
006a284a  FSUBP
006a284c  FSTP float ptr [ESP + 0x60]
006a2850  MOV EAX,dword ptr [ESP + 0x60]
006a2854  FLD float ptr [ESP + 0x24]
006a2858  FMUL float ptr [ESP + 0x34]
006a285c  FLD float ptr [ESP + 0x3c]
006a2860  FMUL float ptr [ESP + 0x1c]
006a2864  FSUBP
006a2866  FSTP float ptr [ESP + 0x64]
006a286a  MOV ECX,dword ptr [ESP + 0x64]
006a286e  FLD float ptr [ESP + 0x1c]
006a2872  MOV dword ptr [ESP + 0x1c],EAX
006a2876  FMUL float ptr [ESP + 0x38]
006a287a  MOV EAX,dword ptr [ESP + 0x40]
006a287e  FLD float ptr [ESP + 0x34]
006a2882  MOV dword ptr [ESP + 0x10],EAX
006a2886  FMUL float ptr [ESP + 0x20]
006a288a  MOV dword ptr [ESP + 0x20],ECX
006a288e  MOV ECX,dword ptr [ESP + 0x44]
006a2892  FSUBP
006a2894  MOV dword ptr [ESP + 0x14],ECX
006a2898  FSTP float ptr [ESP + 0x68]
006a289c  MOV EDX,dword ptr [ESP + 0x68]
006a28a0  FLD float ptr [ESP + 0x20]
006a28a4  MOV dword ptr [ESP + 0x24],EDX
006a28a8  FMUL float ptr [0x008ab8ec]
006a28ae  MOV EDX,dword ptr [ESP + 0x48]
006a28b2  MOV dword ptr [ESP + 0x18],EDX
006a28b6  FST float ptr [ESP + 0x14]
006a28ba  FCOMP float ptr [0x008aae5c]
006a28c0  FNSTSW AX
006a28c2  TEST AH,0x5
006a28c5  JP 0x006a2994
006a28cb  FLD float ptr [ESP + 0x14]
006a28cf  FLD float ptr [0x008ab8e8]
006a28d5  FCOMP float ptr [ESP + 0x14]
006a28d9  FNSTSW AX
006a28db  TEST AH,0x41
006a28de  JNZ 0x006a28e8
006a28e0  FSTP ST0
006a28e2  FLD float ptr [0x008ab8e8]
006a28e8  FLD float ptr [ESI + 0x60]
006a28eb  LEA EDX,[ESP + 0x10]
006a28ef  FMUL float ptr [0x008a0718]
006a28f5  PUSH EDX
006a28f6  FSTP float ptr [ESI + 0x60]
006a28f9  FLD float ptr [ESI + 0x64]
006a28fc  FMUL float ptr [0x008a0718]
006a2902  FSTP float ptr [ESI + 0x64]
006a2905  FLD float ptr [ESI + 0x68]
006a2908  FMUL float ptr [0x008a0718]
006a290e  FSTP float ptr [ESI + 0x68]
006a2911  MOV ECX,dword ptr [ESI + 0xc8]
006a2917  FLD float ptr [ESP + 0x14]
006a291b  FADD float ptr [ESI + 0x60]
006a291e  FMUL float ptr [0x00890f14]
006a2924  FSTP float ptr [ESP + 0x14]
006a2928  FADD float ptr [ESI + 0x64]
006a292b  FMUL float ptr [0x00890f14]
006a2931  FSTP float ptr [ESP + 0x18]
006a2935  FLD float ptr [ESP + 0x1c]
006a2939  FADD float ptr [ESI + 0x68]
006a293c  FMUL float ptr [0x00890f14]
006a2942  FSTP float ptr [ESP + 0x1c]
006a2946  MOV EAX,dword ptr [ECX]
006a2948  CALL dword ptr [EAX + 0x64]
006a294b  MOV EAX,dword ptr [ESP + 0x10]
006a294f  MOV ECX,dword ptr [ESP + 0x14]
006a2953  MOV EDX,dword ptr [ESP + 0x18]
006a2957  MOV dword ptr [ESI + 0x60],EAX
006a295a  MOV dword ptr [ESI + 0x64],ECX
006a295d  MOV ECX,dword ptr [ESI + 0xc8]
006a2963  MOV dword ptr [ESI + 0x68],EDX
006a2966  MOV EAX,dword ptr [ECX]
006a2968  CALL dword ptr [EAX + 0x24]
006a296b  MOV ECX,dword ptr [EAX]
006a296d  ADD ESI,0x84
006a2973  MOV dword ptr [ESI],ECX
006a2975  MOV EDX,dword ptr [EAX + 0x4]
006a2978  MOV ECX,dword ptr [ESP + 0x74]
006a297c  MOV dword ptr [ESI + 0x4],EDX
006a297f  MOV EAX,dword ptr [EAX + 0x8]
006a2982  MOV dword ptr [ESI + 0x8],EAX
006a2985  POP EDI
006a2986  POP ESI
006a2987  MOV dword ptr FS:[0x0],ECX
006a298e  ADD ESP,0x78
006a2991  RET 0x4
006a2994  FLD float ptr [0x008aae5c]
006a299a  JMP 0x006a28e8
