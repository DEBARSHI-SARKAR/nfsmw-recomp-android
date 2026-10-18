/* speed.exe 007bdb60 FUN_007bdb60; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 007aed20 FUN_007aed20
 * calls 007b7dd0 FUN_007b7dd0
 * calls 005816b0 FUN_005816b0
 * calls 00515bb0 FUN_00515bb0
 * calls 00747ac0 FUN_00747ac0
 */

void __fastcall FUN_007bdb60(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_005251a0(param_1[4],0x91c4a50,0x5bc);
  FUN_00515bb0(uVar2);
  uVar2 = FUN_005251a0(param_1[4],0x2d145be3,0x682);
  FUN_00515bb0(uVar2);
  param_1[0x57] = -0x1e980838;
  iVar3 = FUN_005816b0();
  iVar3 = iVar3 * 0xd0 + DAT_009b09d8;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)*(char *)(iVar3 + 0x5d);
  }
  param_1[0x6f] = iVar3;
  param_1[0x70] = iVar3;
  iVar3 = FUN_005816b0();
  iVar3 = iVar3 * 0xd0 + DAT_009b09d8;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)*(char *)(iVar3 + 0x5e);
  }
  param_1[0x71] = iVar3;
  iVar3 = FUN_007aed20(0x42);
  if (DAT_00905e38 == -1) {
    if (iVar3 != 0) {
      cVar1 = FUN_00747ac0(0xeb0101e2,0);
      param_1[0x6f] = (int)cVar1;
    }
  }
  else {
    param_1[0x6f] = DAT_00905e38;
    DAT_00905e38 = -1;
  }
  FUN_007b7dd0(0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x007bdc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

