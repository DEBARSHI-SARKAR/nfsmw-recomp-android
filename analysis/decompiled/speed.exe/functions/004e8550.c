/* speed.exe 004e8550 FUN_004e8550; analysis pseudocode, not buildable source.
 * calls 004c60d0 FUN_004c60d0
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004e8550(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d066;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DTrailerPos_00897f37_1_008efdf8,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x5c,PTR_s_SFXCTL_3DTrailerPos_00897f37_1_008efdf8,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c60d0();
    *puVar1 = &PTR_FUN_00898b50;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

