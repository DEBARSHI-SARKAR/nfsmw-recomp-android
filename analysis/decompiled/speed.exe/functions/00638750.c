/* speed.exe 00638750 FUN_00638750; analysis pseudocode, not buildable source.
 * calls 007668a0 FUN_007668a0
 * calls 005c5e80 FUN_005c5e80
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638750(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6c88;
  local_4 = 0;
  if ((((param_1[2] == 0) || (param_1[5] == 0)) ||
      (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[5]), iVar1 == 0))
     || (*(int **)(iVar1 + 4) == (int *)0x0)) goto LAB_00638835;
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 4) + 0x54))();
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x24))();
  fVar4 = (float10)FUN_005c5e80(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3);
  if (param_1[4] != 0) {
    if (fVar4 < (float10)(float)param_1[3]) {
      FUN_007668a0(param_1[5]);
      goto LAB_00638835;
    }
    if (param_1[4] != 0) goto LAB_00638835;
  }
  if ((float10)(float)param_1[3] < fVar4) {
    FUN_007668a0(param_1[5]);
  }
LAB_00638835:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

