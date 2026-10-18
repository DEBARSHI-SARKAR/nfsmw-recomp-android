/* speed.exe 00434fe0 FUN_00434fe0; analysis pseudocode, not buildable source.
 * calls 0056f7a0 FUN_0056f7a0
 * calls 0056ecf0 FUN_0056ecf0
 * calls 005d59f0 FUN_005d59f0
 * calls 0056dbe0 FUN_0056dbe0
 * calls 00433570 FUN_00433570
 * calls 005d5a50 FUN_005d5a50
 * calls 0056f120 FUN_0056f120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00434fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00868a51;
  pvStack_c = ExceptionList;
  puVar1 = param_1 + 499;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00892ad0;
  param_1[2] = &PTR_LAB_00892ac8;
  param_1[0x13] = &PTR_LAB_008929f0;
  param_1[0x15] = &PTR_LAB_008929e8;
  param_1[0x1d6] = &PTR_LAB_00892988;
  param_1[0x1d8] = &PTR_LAB_0089297c;
  param_1[0x1db] = &PTR_LAB_00892974;
  param_1[0x1f1] = &PTR_LAB_00892964;
  *puVar1 = &PTR_LAB_0089293c;
  local_4 = 1;
  piVar3 = (int *)FUN_005d59f0(&LAB_004037e0);
  if (piVar3 != (int *)0x0) {
    fVar5 = (float10)(**(code **)(*piVar3 + 4))();
    fStack_14 = (float)fVar5;
    if ((float10)_DAT_00890da4 < fVar5) {
      fStack_14 = 5.0;
    }
    FUN_0056dbe0(0xb);
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
      puVar2 = (undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
      if ((((puVar2 != (undefined4 *)0x0) && (*(int *)(DAT_0091cf90 + 0x10) != -0x414)) &&
          (iVar4 = FUN_0056ecf0(*puVar2), iVar4 != 0)) &&
         (iVar4 = FUN_0056f120(*(undefined1 *)(iVar4 + 0x11)), iVar4 != 0)) {
        FUN_0056f7a0(fStack_14);
      }
    }
  }
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_00433570();
  ExceptionList = pvStack_c;
  return;
}

