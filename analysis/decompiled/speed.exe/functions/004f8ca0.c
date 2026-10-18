/* speed.exe 004f8ca0 FUN_004f8ca0; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 * calls 004f72a0 FUN_004f72a0
 */

undefined4 FUN_004f8ca0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086dbe6;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x5a0,PTR_s_SFXObj_MomentStrm_008efd98,1);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x5a0,PTR_s_SFXObj_MomentStrm_008efd98,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (iVar1 != 0) {
    uVar2 = FUN_004f72a0(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

