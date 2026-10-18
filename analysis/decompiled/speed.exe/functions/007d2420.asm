007d2420  PUSH EBP
007d2421  MOV EBP,ESP
007d2423  PUSH -0x1
007d2425  PUSH 0x8bcd00
007d242a  PUSH 0x7cd5e4
007d242f  MOV EAX,FS:[0x0]
007d2435  PUSH EAX
007d2436  MOV dword ptr FS:[0x0],ESP
007d243d  ADD ESP,-0x10
007d2440  PUSH EBX
007d2441  PUSH ESI
007d2442  PUSH EDI
007d2443  CMP dword ptr [EBP + 0x8],0x0
007d2447  JZ 0x007d244f
007d2449  CMP dword ptr [EBP + 0x8],0x1
007d244d  JNZ 0x007d2455
007d244f  CMP dword ptr [EBP + 0xc],0x0
007d2453  JNZ 0x007d2468
007d2455  CALL 0x007cb270
007d245a  MOV dword ptr [EAX],0x16
007d2460  OR EAX,0xffffffff
007d2463  JMP 0x007d2658
007d2468  PUSH 0xf
007d246a  CALL 0x007d0eb0
007d246f  ADD ESP,0x4
007d2472  TEST EAX,EAX
007d2474  JNZ 0x007d247e
007d2476  OR EAX,0xffffffff
007d2479  JMP 0x007d2658
007d247e  PUSH 0xf
007d2480  CALL 0x007d0fd0
007d2485  ADD ESP,0x4
007d2488  MOV dword ptr [EBP + -0x4],0x0
007d248f  MOV EAX,[0x009c530c]
007d2494  MOV dword ptr [EBP + -0x1c],EAX
007d2497  JMP 0x007d24a2
007d2499  MOV ECX,dword ptr [EBP + -0x1c]
007d249c  MOV EDX,dword ptr [ECX + 0x4]
007d249f  MOV dword ptr [EBP + -0x1c],EDX
007d24a2  CMP dword ptr [EBP + -0x1c],0x0
007d24a6  JZ 0x007d24b7
007d24a8  MOV EAX,dword ptr [EBP + -0x1c]
007d24ab  MOV ECX,dword ptr [EAX + 0xc]
007d24ae  CMP ECX,dword ptr [EBP + 0xc]
007d24b1  JNZ 0x007d24b5
007d24b3  JMP 0x007d24b7
007d24b5  JMP 0x007d2499
007d24b7  CMP dword ptr [EBP + 0x8],0x1
007d24bb  JNZ 0x007d2545
007d24c1  CMP dword ptr [EBP + -0x1c],0x0
007d24c5  JZ 0x007d252e
007d24c7  MOV EDX,dword ptr [EBP + -0x1c]
007d24ca  MOV EAX,dword ptr [EDX + 0x8]
007d24cd  SUB EAX,0x1
007d24d0  MOV ECX,dword ptr [EBP + -0x1c]
007d24d3  MOV dword ptr [ECX + 0x8],EAX
007d24d6  MOV EDX,dword ptr [EBP + -0x1c]
007d24d9  MOV EAX,dword ptr [EDX + 0x8]
007d24dc  MOV dword ptr [EBP + -0x20],EAX
007d24df  CMP dword ptr [EBP + -0x20],0x0
007d24e3  JNZ 0x007d252c
007d24e5  MOV ECX,dword ptr [EBP + -0x1c]
007d24e8  CMP dword ptr [ECX + 0x4],0x0
007d24ec  JZ 0x007d24fb
007d24ee  MOV EDX,dword ptr [EBP + -0x1c]
007d24f1  MOV EAX,dword ptr [EDX + 0x4]
007d24f4  MOV ECX,dword ptr [EBP + -0x1c]
007d24f7  MOV EDX,dword ptr [ECX]
007d24f9  MOV dword ptr [EAX],EDX
007d24fb  MOV EAX,dword ptr [EBP + -0x1c]
007d24fe  CMP dword ptr [EAX],0x0
007d2501  JZ 0x007d2513
007d2503  MOV ECX,dword ptr [EBP + -0x1c]
007d2506  MOV EDX,dword ptr [ECX]
007d2508  MOV EAX,dword ptr [EBP + -0x1c]
007d250b  MOV ECX,dword ptr [EAX + 0x4]
007d250e  MOV dword ptr [EDX + 0x4],ECX
007d2511  JMP 0x007d251e
007d2513  MOV EDX,dword ptr [EBP + -0x1c]
007d2516  MOV EAX,dword ptr [EDX + 0x4]
007d2519  MOV [0x009c530c],EAX
007d251e  PUSH 0x2
007d2520  MOV ECX,dword ptr [EBP + -0x1c]
007d2523  PUSH ECX
007d2524  CALL 0x007c7290
007d2529  ADD ESP,0x8
007d252c  JMP 0x007d2540
007d252e  MOV dword ptr [EBP + -0x20],0xffffffff
007d2535  CALL 0x007cb270
007d253a  MOV dword ptr [EAX],0x16
007d2540  JMP 0x007d263c
007d2545  CMP dword ptr [EBP + -0x1c],0x0
007d2549  JZ 0x007d25bd
007d254b  MOV EDX,dword ptr [EBP + -0x1c]
007d254e  MOV EAX,dword ptr [EDX + 0x8]
007d2551  ADD EAX,0x1
007d2554  MOV ECX,dword ptr [EBP + -0x1c]
007d2557  MOV dword ptr [ECX + 0x8],EAX
007d255a  MOV EDX,dword ptr [EBP + -0x1c]
007d255d  MOV EAX,dword ptr [EDX + 0x8]
007d2560  MOV dword ptr [EBP + -0x20],EAX
007d2563  MOV ECX,dword ptr [EBP + -0x1c]
007d2566  CMP ECX,dword ptr [0x009c530c]
007d256c  JZ 0x007d25bb
007d256e  MOV EDX,dword ptr [EBP + -0x1c]
007d2571  CMP dword ptr [EDX + 0x4],0x0
007d2575  JZ 0x007d2584
007d2577  MOV EAX,dword ptr [EBP + -0x1c]
007d257a  MOV ECX,dword ptr [EAX + 0x4]
007d257d  MOV EDX,dword ptr [EBP + -0x1c]
007d2580  MOV EAX,dword ptr [EDX]
007d2582  MOV dword ptr [ECX],EAX
007d2584  MOV ECX,dword ptr [EBP + -0x1c]
007d2587  MOV EDX,dword ptr [ECX]
007d2589  MOV EAX,dword ptr [EBP + -0x1c]
007d258c  MOV ECX,dword ptr [EAX + 0x4]
007d258f  MOV dword ptr [EDX + 0x4],ECX
007d2592  MOV EDX,dword ptr [EBP + -0x1c]
007d2595  MOV dword ptr [EDX],0x0
007d259b  MOV EAX,dword ptr [EBP + -0x1c]
007d259e  MOV ECX,dword ptr [0x009c530c]
007d25a4  MOV dword ptr [EAX + 0x4],ECX
007d25a7  MOV EDX,dword ptr [0x009c530c]
007d25ad  MOV EAX,dword ptr [EBP + -0x1c]
007d25b0  MOV dword ptr [EDX],EAX
007d25b2  MOV ECX,dword ptr [EBP + -0x1c]
007d25b5  MOV dword ptr [0x009c530c],ECX
007d25bb  JMP 0x007d263c
007d25bd  PUSH 0x125
007d25c2  PUSH 0x8bccf4
007d25c7  PUSH 0x2
007d25c9  PUSH 0x10
007d25cb  CALL 0x007c6700
007d25d0  ADD ESP,0x10
007d25d3  MOV dword ptr [EBP + -0x1c],EAX
007d25d6  CMP dword ptr [EBP + -0x1c],0x0
007d25da  JNZ 0x007d25f0
007d25dc  MOV dword ptr [EBP + -0x20],0xffffffff
007d25e3  CALL 0x007cb270
007d25e8  MOV dword ptr [EAX],0xc
007d25ee  JMP 0x007d263c
007d25f0  MOV EDX,dword ptr [EBP + -0x1c]
007d25f3  MOV dword ptr [EDX],0x0
007d25f9  MOV EAX,dword ptr [EBP + -0x1c]
007d25fc  MOV ECX,dword ptr [0x009c530c]
007d2602  MOV dword ptr [EAX + 0x4],ECX
007d2605  CMP dword ptr [0x009c530c],0x0
007d260c  JZ 0x007d2619
007d260e  MOV EDX,dword ptr [0x009c530c]
007d2614  MOV EAX,dword ptr [EBP + -0x1c]
007d2617  MOV dword ptr [EDX],EAX
007d2619  MOV ECX,dword ptr [EBP + -0x1c]
007d261c  MOV dword ptr [ECX + 0x8],0x1
007d2623  MOV dword ptr [EBP + -0x20],0x1
007d262a  MOV EDX,dword ptr [EBP + -0x1c]
007d262d  MOV EAX,dword ptr [EBP + 0xc]
007d2630  MOV dword ptr [EDX + 0xc],EAX
007d2633  MOV ECX,dword ptr [EBP + -0x1c]
007d2636  MOV dword ptr [0x009c530c],ECX
007d263c  MOV dword ptr [EBP + -0x4],0xffffffff
007d2643  CALL 0x007d264a
007d2648  JMP 0x007d2655
