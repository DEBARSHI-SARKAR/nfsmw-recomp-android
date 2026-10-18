/* speed.exe 004dda30 FUN_004dda30; analysis pseudocode, not buildable source.
 * calls 004bf270 FUN_004bf270
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004dda30(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cc56;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DWooshPos_008efbb0,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DWooshPos_008efbb0,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004bf270();
    *puVar1 = &PTR_FUN_00898588;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

