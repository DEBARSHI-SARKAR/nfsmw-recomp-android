/* speed.exe 0065f860 FUN_0065f860; analysis pseudocode, not buildable source.
 * calls 007ec59c FUN_007ec59c
 * calls 007ec298 FUN_007ec298
 * calls 0065ad80 FUN_0065ad80
 * calls 00465a70 FUN_00465a70
 * calls 00463ca0 FUN_00463ca0
 * calls 0065e930 FUN_0065e930
 * calls 0065f680 FUN_0065f680
 * calls 0065e760 FUN_0065e760
 */

undefined4 FUN_0065f860(undefined4 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0065f680(param_1,1,1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(iVar1 + 0xc) & ((int)*(uint *)(iVar1 + 0xc) < 0) - 1;
  }
  uVar2 = (int)param_3 >> 6 & 0x1ffc;
  if ((uVar2 == 0) || (uVar2 == 0x10)) {
    param_3 = param_3 | 0x2000;
  }
  uVar3 = FUN_00465a70(*(uint *)(iVar1 + 0xc) & ((int)*(uint *)(iVar1 + 0xc) < 0) - 1,param_3);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (-1 < (int)uVar2) {
    FUN_0065e760(uVar3,((int)uVar2 < 0) - 1 & uVar2,0,0);
  }
  while( true ) {
    if (DAT_00925928 != 0) {
      FUN_007ec59c();
      FUN_0065e930();
    }
    if (*(int *)(iVar1 + 0x20) == 0) break;
    FUN_007ec298(8);
  }
  if (0 < *(int *)(iVar1 + 0x20)) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    return uVar3;
  }
  FUN_0065ad80();
  FUN_00463ca0(DAT_00925914,iVar1);
  return uVar3;
}

