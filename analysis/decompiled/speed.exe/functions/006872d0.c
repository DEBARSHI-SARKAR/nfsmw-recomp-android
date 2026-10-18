/* speed.exe 006872d0 FUN_006872d0; analysis pseudocode, not buildable source.
 * calls 0067e930 FUN_0067e930
 * calls 005cc240 FUN_005cc240
 * calls 00686790 FUN_00686790
 * calls 006686d0 FUN_006686d0
 * calls 00684bb0 FUN_00684bb0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006872d0(undefined4 *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ba66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_38 = param_1;
  FUN_00686790("explosion");
  local_4 = 0;
  FUN_0067e930();
  param_1[0x2b] = &PTR_LAB_008aa7d4;
  *param_1 = &PTR_FUN_008aa7c0;
  param_1[2] = &PTR_LAB_008aa7b8;
  param_1[0xb] = &PTR_LAB_008aa728;
  param_1[0xe] = &PTR_LAB_008aa70c;
  param_1[0x10] = &PTR_LAB_008aa6f0;
  param_1[0x2d] = *(undefined4 *)((int)param_2 + 0x14);
  param_1[0x2e] = *(undefined4 *)((int)param_2 + 0x18);
  param_1[0x2f] = *(undefined4 *)((int)param_2 + 0x20);
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((int)param_2 + 0x24);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)((int)param_2 + 0x25);
  param_1[0x35] = *(undefined4 *)((int)param_2 + 0x28);
  param_2 = *(float *)((int)param_2 + 0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_2 <= _DAT_00890dc4) {
    param_2 = 0.01;
  }
  local_40 = FUN_005cc240();
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  local_3c = DAT_0092c5e0;
  FUN_006686d0();
  local_20 = &DAT_008a2fb4;
  local_1c = &DAT_008a2fb4;
  local_14 = param_2;
  local_30 = 0xa6b47fac;
  local_2c = local_34;
  local_18 = &DAT_008a3028;
  local_10 = 0x3f800000;
  local_24 = uVar3;
  FUN_00684bb0(&local_3c,&local_40);
  if (((param_1[0x2f] != 0) && (iVar2 = FUN_005d51f0(), iVar2 != 0)) &&
     (piVar1 = *(int **)(iVar2 + 4), piVar1 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar1 + 0x14))();
    param_1[0x32] = uVar3;
    fVar4 = (float10)(**(code **)(*piVar1 + 0x18))();
    param_1[0x33] = (float)fVar4;
  }
  ExceptionList = local_c;
  return param_1;
}

