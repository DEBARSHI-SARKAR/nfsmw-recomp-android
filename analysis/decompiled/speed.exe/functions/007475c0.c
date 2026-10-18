/* speed.exe 007475c0 FUN_007475c0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 0073a040 FUN_0073a040
 * calls 006eeb40 FUN_006eeb40
 * calls 00786940 FUN_00786940
 */

undefined4 * __thiscall FUN_007475c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880cc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006eeb40();
  local_4 = 0;
  *param_1 = &PTR_FUN_008b4be0;
  FUN_00786940();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  puVar1 = param_1 + 4;
  *DAT_009b27e8 = puVar1;
  puVar3 = puVar1;
  param_1[5] = DAT_009b27e8;
  DAT_009b27e8 = puVar3;
  *puVar1 = &DAT_009b27e4;
  iVar2 = *(int *)(param_2 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007869c0();
  param_1[10] = *(undefined4 *)(iVar2 + 4);
  uVar4 = FUN_0073a040();
  param_1[0xb] = uVar4;
  param_1[0xc] = *(undefined4 *)(iVar2 + 0x10);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

