/* speed.exe 004db1c0 FUN_004db1c0; analysis pseudocode, not buildable source.
 * calls 004bf270 FUN_004bf270
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004db1c0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ca96;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DLeftWindPos_008efaa0,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DLeftWindPos_008efaa0,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004bf270();
    *puVar1 = &PTR_FUN_008984f8;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

