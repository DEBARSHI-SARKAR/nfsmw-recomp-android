/* speed.exe 004e6c00 FUN_004e6c00; analysis pseudocode, not buildable source.
 * calls 004bf270 FUN_004bf270
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004e6c00(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cf56;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DVoiceActorPos_008efbe0,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DVoiceActorPos_008efbe0,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004bf270();
    *puVar1 = &PTR_FUN_008987c8;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

