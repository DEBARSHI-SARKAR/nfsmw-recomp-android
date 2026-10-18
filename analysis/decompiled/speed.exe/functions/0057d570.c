/* speed.exe 0057d570 FUN_0057d570; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00515bb0 FUN_00515bb0
 * calls 005251a0 FUN_005251a0
 * calls 00460d20 FUN_00460d20
 * calls 00524a10 FUN_00524a10
 * calls 005252d0 FUN_005252d0
 */

void __thiscall FUN_0057d570(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if (((param_2 < 2) || (param_1[4] == 0)) ||
     (iVar2 = FUN_00460d20(param_1[4],&DAT_00890978), iVar2 == 0)) {
    cVar1 = FUN_00524a10(param_1[5],0x8a41f5b9,0x16a259);
    if (cVar1 == '\0') {
      FUN_00524920(param_1[5],0x8a41f5b9,0x16a259,1);
    }
  }
  else {
    cVar1 = FUN_00524a10(param_1[5],0x8a41f5b9,0x5079c8f8);
    if (cVar1 == '\0') {
      FUN_00524920(param_1[5],0x8a41f5b9,0x5079c8f8,1);
    }
    uVar3 = FUN_005251a0(param_1[5],0x5bc,0x5bc);
    FUN_00515bb0(uVar3);
    uVar3 = FUN_005251a0(param_1[5],0x682,0x682);
    FUN_00515bb0(uVar3);
    FUN_005252d0(param_1[5],0xeb43ccb0,&DAT_008941f8,param_1[4]);
  }
  if (param_1[1] == 0) goto LAB_0057d66a;
  piVar5 = (int *)(param_1[1] + -4);
  while( true ) {
    piVar4 = param_1;
    if (param_1 == (int *)0xfffffffc) {
      piVar4 = (int *)0x0;
    }
    if (piVar5 == piVar4) break;
    (**(code **)(*piVar5 + 0xc))();
    if (piVar5[1] == 0) {
LAB_0057d66a:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(piVar5[1] + -4);
    }
  }
  return;
}

