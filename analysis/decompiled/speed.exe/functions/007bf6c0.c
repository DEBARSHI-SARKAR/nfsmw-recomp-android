/* speed.exe 007bf6c0 FUN_007bf6c0; analysis pseudocode, not buildable source.
 * calls 00593920 FUN_00593920
 * calls 0056dbe0 FUN_0056dbe0
 * calls 007ba7c0 FUN_007ba7c0
 * calls 005fb710 FUN_005fb710
 */

undefined4 * __thiscall FUN_007bf6c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_008b7fac;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_0056dbe0(*(undefined4 *)(DAT_0091cf90 + 0x18));
  uVar2 = FUN_005fb710(*puVar1);
  param_1[0x4a] = uVar2;
  param_1[0x43] = 9;
  FUN_007ba7c0();
  ExceptionList = local_c;
  return param_1;
}

