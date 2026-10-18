/* speed.exe 00784fc0 FUN_00784fc0; analysis pseudocode, not buildable source.
 * calls 0045e240 FUN_0045e240
 * calls 00784ec0 FUN_00784ec0
 * calls 006eeb40 FUN_006eeb40
 */

undefined4 * __thiscall FUN_00784fc0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40(param_2);
  *param_1 = &PTR_FUN_008b5d84;
  param_1[6] = 0;
  local_4 = 0;
  puVar1 = param_1 + 4;
  *DAT_009b3a70 = puVar1;
  puVar3 = puVar1;
  param_1[5] = DAT_009b3a70;
  DAT_009b3a70 = puVar3;
  *puVar1 = &DAT_009b3a6c;
  iVar2 = *(int *)(param_2 + 4);
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  param_1[6] = uVar4;
  uVar4 = FUN_00784ec0(uVar4);
  param_1[7] = uVar4;
  FUN_0045e240(uVar4,iVar2 + 4);
  ExceptionList = local_c;
  return param_1;
}

