/* speed.exe 00624f50 FUN_00624f50; analysis pseudocode, not buildable source.
 * calls 00516b90 FUN_00516b90
 * calls 005258b0 FUN_005258b0
 * calls 005257f0 FUN_005257f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00624f50(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008774b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a74ac;
  param_1[2] = param_2;
  local_4 = 0;
  _DAT_00982d28 = 1;
  cVar1 = FUN_00516b90(PTR_s_loading_boot_fng_008f7ee8);
  if (cVar1 != '\0') {
    FUN_005258b0(1);
  }
  cVar1 = FUN_00516b90("Marketing1.fng");
  if (cVar1 == '\0') {
    FUN_005257f0("Marketing1.fng",param_1[2],0,0);
  }
  ExceptionList = local_c;
  return param_1;
}

