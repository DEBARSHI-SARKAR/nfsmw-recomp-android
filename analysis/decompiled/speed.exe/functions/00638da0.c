/* speed.exe 00638da0 FUN_00638da0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00404c70 FUN_00404c70
 * calls 00654af0 FUN_00654af0
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00638da0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puStack_48;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 *local_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6e14;
  puStack_48 = (undefined4 *)param_1[2];
  local_4 = 0;
  if (puStack_48 != (undefined4 *)0x0) {
    local_30 = param_1;
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      puStack_48 = (undefined4 *)0x638e0b;
      iStack_34 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))();
      if ((iStack_34 != 0) &&
         (piVar4 = (int *)**(int **)(iStack_34 + 4), piVar4 != *(int **)(iStack_34 + 4))) {
        do {
          puStack_48 = (undefined4 *)&LAB_004040e0;
          piVar2 = (int *)FUN_005d59f0();
          if (piVar2 != (int *)0x0) {
            puStack_48 = (undefined4 *)0x638e41;
            piVar3 = (int *)(**(code **)(*piVar2 + 0x44))();
            if (*piVar3 == DAT_0092c4f0) {
              puStack_48 = &uStack_38;
              FUN_00404c70();
              uStack_28 = uStack_38;
              uStack_24 = 0;
              uStack_20 = 0x1c;
              uStack_1c = 0;
              uStack_18 = 0;
              uStack_14 = 0;
              uStack_10 = 1;
              puStack_48 = (undefined4 *)0x638e8f;
              piVar2 = (int *)(**(code **)(*piVar2 + 4))();
              puStack_48 = (undefined4 *)0x638e96;
              uStack_1c = (**(code **)(*piVar2 + 0x70))();
              puStack_2c = (undefined1 *)&puStack_48;
              puStack_48 = (undefined4 *)FUN_005cc240("AIAction");
              FUN_00654af0();
            }
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(iStack_34 + 4));
        *local_30 = &PTR_LAB_008a66f8;
        ExceptionList = local_c;
        return;
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

