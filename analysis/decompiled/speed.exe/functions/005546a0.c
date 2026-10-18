/* speed.exe 005546a0 FUN_005546a0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 00586290 FUN_00586290
 * calls 0054a910 FUN_0054a910
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_005546a0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_0089c9ec;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar1 = *param_3;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x10] = iVar1;
  local_4 = 0;
  *(bool *)(DAT_0091cf90 + 0x16c) = iVar1 == 2;
  uVar2 = param_1[4];
  uVar3 = FUN_0056bc10(0xde5ff65f);
  FUN_005252d0(uVar2,0x1ab2b613,uVar3);
  FUN_0054a910();
  ExceptionList = local_c;
  return param_1;
}

