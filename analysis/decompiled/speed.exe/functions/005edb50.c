/* speed.exe 005edb50 FUN_005edb50; analysis pseudocode, not buildable source.
 * calls 00454640 FUN_00454640
 * calls 005ec420 FUN_005ec420
 * calls 005eda20 FUN_005eda20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005edb50(undefined4 param_1)

{
  undefined4 uVar1;
  int local_4;
  
  uVar1 = param_1;
  param_1 = FUN_00454640(param_1);
  FUN_005ec420(&local_4,&param_1);
  if (*(int *)(local_4 + 0x14) == -0x40800000) {
    FUN_005eda20(uVar1,0x3f800000);
    return;
  }
  FUN_005eda20(uVar1,*(float *)(local_4 + 0x14) + _DAT_0089096c);
  return;
}

