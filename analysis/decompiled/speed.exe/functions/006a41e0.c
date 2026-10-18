/* speed.exe 006a41e0 FUN_006a41e0; analysis pseudocode, not buildable source.
 * calls 00677480 FUN_00677480
 * calls 005cc240 FUN_005cc240
 * calls 005d59f0 FUN_005d59f0
 * calls 006ee9b0 FUN_006ee9b0
 * calls 006e8e90 FUN_006e8e90
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_006a41e0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c953;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(iVar3 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar3;
  FUN_005d7930(&LAB_00620250,puVar1);
  *puVar1 = &PTR_FUN_008ab000;
  *param_1 = &PTR_FUN_008aba2c;
  param_1[2] = &PTR_LAB_008aba24;
  *puVar1 = &PTR_LAB_008aba10;
  param_1[0x15] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 4;
  param_2 = FUN_005cc240("Physics");
  uVar2 = FUN_006ee9b0(&param_2,0x3f800000,0,1);
  param_1[0x3d] = uVar2;
  FUN_006e8e90(uVar2,"ResetCar");
  uVar2 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x3a] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00404040);
  param_1[0x3b] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_004039e0);
  param_1[0x3c] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

