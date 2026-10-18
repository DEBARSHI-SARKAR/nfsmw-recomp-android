/* speed.exe 0050cae0 FUN_0050cae0; analysis pseudocode, not buildable source.
 * calls 005047f0 FUN_005047f0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 0050b720 FUN_0050b720
 * calls 005048f0 FUN_005048f0
 */

undefined4 * __fastcall FUN_0050cae0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e17e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (param_1 + 0x43,8,0x42,(_func_void_void_ptr *)&LAB_00507f90,FUN_00507e60);
  local_4 = 0;
  iVar1 = FUN_005047f0();
  param_1[0xd9] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xd9];
  *(undefined4 *)param_1[0xd9] = param_1[0xd9];
  *(undefined4 *)(param_1[0xd9] + 8) = param_1[0xd9];
  param_1[0xda] = 0;
  local_4._0_1_ = 1;
  iVar1 = FUN_005048f0();
  param_1[0xdc] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0xdc] + 4) = param_1[0xdc];
  *(undefined4 *)param_1[0xdc] = param_1[0xdc];
  *(undefined4 *)(param_1[0xdc] + 8) = param_1[0xdc];
  param_1[0xdd] = 0;
  puVar2 = param_1 + 0xde;
  *puVar2 = puVar2;
  param_1[0xdf] = puVar2;
  puVar2 = param_1 + 0xe0;
  *puVar2 = puVar2;
  param_1[0xe1] = puVar2;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe3] = 0;
  FUN_0050b720(400);
  *param_1 = 0;
  puVar2 = param_1;
  for (iVar1 = 0x42; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

