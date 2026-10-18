/* speed.exe 004f7940 FUN_004f7940; analysis pseudocode, not buildable source.
 * calls 004f5360 FUN_004f5360
 * calls 004ac040 FUN_004ac040
 */

undefined4 FUN_004f7940(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086dab6;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x38,PTR_s_SFX_Common_008efa44,1);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x38,PTR_s_SFX_Common_008efa44,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (iVar1 != 0) {
    uVar2 = FUN_004f5360(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

