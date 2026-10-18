/* speed.exe 006b1a20 FUN_006b1a20; analysis pseudocode, not buildable source.
 * calls 00677480 FUN_00677480
 * calls 005d59f0 FUN_005d59f0
 * calls 006a5800 FUN_006a5800
 * calls 005d7930 FUN_005d7930
 * calls 006a5440 FUN_006a5440
 */

undefined4 * __thiscall FUN_006b1a20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087d15e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00677480(param_2,0);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4) + 0x10;
  }
  puVar1 = param_1 + 0x13;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x14] = iVar3;
  FUN_005d7930(&LAB_00404040,puVar1);
  *puVar1 = &PTR_FUN_008aaf88;
  *puVar1 = &PTR_LAB_008abea8;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008abe7c;
  param_1[2] = &PTR_LAB_008abe74;
  uVar2 = FUN_006a5800(param_1[0xd],0);
  FUN_006a5440(uVar2);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_005d59f0(&LAB_004039c0);
  param_1[0x15] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00403f90);
  param_1[0x16] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00404020);
  param_1[0x17] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00404010);
  param_1[0x18] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_0068a830);
  param_1[0x19] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_00604250);
  param_1[0x1a] = uVar2;
  uVar2 = FUN_005d59f0(&LAB_0068cc70);
  param_1[0x1b] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

