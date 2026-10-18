/* speed.exe 005a3400 FUN_005a3400; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 00573140 FUN_00573140
 * calls 00508b10 FUN_00508b10
 */

undefined4 * __thiscall FUN_005a3400(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0f70;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xc] = 0x7fffffff;
  iVar1 = *(int *)(iVar1 + 8);
  local_4 = 0;
  if ((iVar1 < 1) || (0x1a < iVar1)) {
    ppuVar2 = &PTR_s_TIP_HIDING_SPOTS_008f3e78;
  }
  else {
    ppuVar2 = &PTR_s_TIP_STRIKEOUT_008f3d78 + iVar1 * 4;
  }
  param_1[0xd] = ppuVar2;
  DAT_008f3f38 = ~(byte)((uint)ppuVar2[3] >> 10) & 1;
  DAT_0091cf58 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    param_2 = FUN_00573140(*(undefined4 *)param_1[0xd]);
    param_1[0xb] = param_2;
    FUN_00508b10(&param_2,1,&LAB_00597c80,0,0);
  }
  ExceptionList = local_c;
  return param_1;
}

