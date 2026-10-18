/* speed.exe 0043f1a0 FUN_0043f1a0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 004393f0 FUN_004393f0
 * calls 0043f120 FUN_0043f120
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0043f1a0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008695a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043f120();
  *param_1 = &PTR_FUN_00892f0c;
  local_4 = 0;
  iVar4 = (**(code **)(*param_3 + 8))();
  if (*(int *)(iVar4 + 0x1c) != 0) {
    piVar5 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar5 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar5 + 0x10))();
      if (iVar4 != 0) {
        puVar6 = (undefined4 *)FUN_00454810(0x67a15750,0);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)FUN_006269b0(4);
        }
        param_1[8] = *puVar6;
        puVar6 = (undefined4 *)FUN_00454810(0x858b1097,0);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)FUN_006269b0(4);
        }
        param_1[9] = *puVar6;
        goto LAB_0043f258;
      }
    }
  }
  param_1[8] = 0x3f000000;
  param_1[9] = 0x40000000;
LAB_0043f258:
  fVar1 = _DAT_0089107c - (float)param_1[8] * _DAT_00890634;
  fVar2 = fVar1 * _DAT_00890968;
  fVar3 = _DAT_00890d3c - (float)param_1[8] * _DAT_00890da4;
  uStack_10 = FUN_005cc240("AIGoalRam");
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0x41600000;
  uStack_14 = 1;
  fStack_20 = fVar2;
  fStack_1c = fVar2;
  fStack_18 = fVar3;
  FUN_004393f0(&uStack_2c);
  fVar3 = fVar1 * _DAT_008918cc;
  uStack_10 = FUN_005cc240("AIGoalRam");
  uStack_2c = 0xc0600000;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_14 = 2;
  fStack_20 = fVar3;
  fStack_1c = fVar2;
  fStack_18 = fVar2;
  FUN_004393f0(&uStack_2c);
  fVar3 = fVar1 * _DAT_008908e8;
  uStack_10 = FUN_005cc240("AIGoalRam");
  uStack_2c = 0x40600000;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_14 = 2;
  fStack_20 = fVar3;
  fStack_1c = fVar2;
  fStack_18 = fVar2;
  FUN_004393f0(&uStack_2c);
  fVar1 = fVar1 * _DAT_008918c8;
  uStack_10 = FUN_005cc240("AIGoalRam");
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0xc0f00000;
  uStack_14 = 4;
  fStack_20 = fVar2;
  fStack_1c = fVar2;
  fStack_18 = fVar1;
  FUN_004393f0(&uStack_2c);
  param_1[1] = 4;
  param_1[2] = 2;
  *(undefined1 *)(param_1 + 3) = 1;
  ExceptionList = pvStack_c;
  return param_1;
}

