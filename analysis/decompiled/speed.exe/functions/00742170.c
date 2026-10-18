/* speed.exe 00742170 FUN_00742170; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 006eeb40 FUN_006eeb40
 * calls 00786940 FUN_00786940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00742170(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880b63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40(param_2);
  *param_1 = &PTR_FUN_008b4b7c;
  local_4 = 0;
  param_1[6] = 0;
  FUN_00786940(0);
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  puVar1 = param_1 + 4;
  *DAT_009b2a14 = puVar1;
  puVar6 = puVar1;
  param_1[5] = DAT_009b2a14;
  DAT_009b2a14 = puVar6;
  *puVar1 = &DAT_009b2a10;
  iVar2 = *(int *)(param_2 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007869c0(*(undefined4 *)(iVar2 + 8));
  param_1[7] = *(undefined4 *)(iVar2 + 0x10);
  param_1[6] = *(undefined4 *)(iVar2 + 4);
  iVar3 = *(int *)(iVar2 + 0xc);
  param_1[0xd] = *(undefined4 *)(iVar2 + 0x14);
  fVar4 = (float)(int)*(short *)(iVar3 + 0x18) * _DAT_00890d60;
  fVar5 = (float)(int)*(short *)(iVar3 + 0x1a) * _DAT_00890d60;
  param_1[0x10] = -((float)(int)*(short *)(iVar3 + 0x1c) * _DAT_00890d60);
  param_1[0x11] = fVar4;
  param_1[0x12] = -fVar5;
  ExceptionList = local_c;
  return param_1;
}

