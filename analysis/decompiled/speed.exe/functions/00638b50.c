/* speed.exe 00638b50 FUN_00638b50; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00404c70 FUN_00404c70
 * calls 00654af0 FUN_00654af0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638b50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 **ppuStack_3c;
  undefined1 *puStack_30;
  undefined4 *local_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6d70;
  ppuStack_3c = (undefined1 **)param_1[2];
  local_4 = 0;
  if (ppuStack_3c != (undefined1 **)0x0) {
    local_2c = param_1;
    iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8);
    if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 4), piVar1 != (int *)0x0)) {
      ppuStack_3c = (undefined1 **)0xe16b3a09;
      (**(code **)(*piVar1 + 0x78))();
      iVar2 = (**(code **)(*piVar1 + 4))();
      if (iVar2 == 1) {
        ppuStack_3c = &puStack_30;
        FUN_00404c70();
        puStack_28 = puStack_30;
        uStack_24 = 0;
        uStack_20 = 0x1c;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 1;
        ppuStack_3c = (undefined1 **)0x638c19;
        uStack_1c = (**(code **)(*piVar1 + 0x70))();
        puStack_30 = (undefined1 *)&ppuStack_3c;
        ppuStack_3c = (undefined1 **)FUN_005cc240("AIAction");
        FUN_00654af0();
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

