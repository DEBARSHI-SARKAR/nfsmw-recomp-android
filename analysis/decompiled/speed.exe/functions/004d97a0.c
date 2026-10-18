/* speed.exe 004d97a0 FUN_004d97a0; analysis pseudocode, not buildable source.
 * calls 004c60d0 FUN_004c60d0
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004d97a0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c9c6;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x70,PTR_s_SFXCTL_3DRearPos_008efa18,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x70,PTR_s_SFXCTL_3DRearPos_008efa18,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c60d0();
    *puVar1 = &PTR_FUN_008985d0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

