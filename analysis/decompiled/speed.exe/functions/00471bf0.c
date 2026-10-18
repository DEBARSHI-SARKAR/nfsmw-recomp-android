/* speed.exe 00471bf0 FUN_00471bf0; analysis pseudocode, not buildable source.
 * calls 005fbe70 FUN_005fbe70
 * calls 00469ec0 FUN_00469ec0
 * calls 00469e30 FUN_00469e30
 * calls 005e3060 FUN_005e3060
 * calls 00471a70 FUN_00471a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471bf0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (((((DAT_008ee348 < 1) && (cVar1 = FUN_00469e30(), cVar1 != '\0')) && (DAT_009885c8 == 0)) &&
      ((*(int *)(DAT_0091e000 + 0x1968) == 0 ||
       ((cVar1 = FUN_005fbe70(), cVar1 == '\0' &&
        (fVar5 = (float10)FUN_005e3060(), (float10)_DAT_0089096c <= fVar5)))))) &&
     ((iVar2 = (**(code **)(*param_1 + 0x30))(), iVar2 != 1 &&
      (piVar3 = (int *)(**(code **)(*param_1 + 4))(), piVar3 != (int *)0x0)))) {
    uVar4 = (**(code **)(*piVar3 + 0x70))();
    iVar2 = FUN_00471a70(uVar4);
    if ((iVar2 != 0) && (DAT_00911055 == '\0')) {
      FUN_00469ec0();
      return;
    }
  }
  return;
}

