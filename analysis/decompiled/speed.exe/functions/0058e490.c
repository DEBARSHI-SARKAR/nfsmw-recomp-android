/* speed.exe 0058e490 FUN_0058e490; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 */

undefined4 * __thiscall FUN_0058e490(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008725b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_008a0f0c;
  param_1[0xe] = 0xffffffff;
  uVar1 = FUN_005251a0(param_1[4],0x14564fb9);
  param_1[0xb] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

