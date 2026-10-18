/* speed.exe 004f8500 FUN_004f8500; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 * calls 004f67e0 FUN_004f67e0
 */

undefined4 FUN_004f8500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086db76;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x6c,PTR_s_CARSFX_TrafficHorn_008efc30,1);
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_004ac040(0x6c,PTR_s_CARSFX_TrafficHorn_008efc30,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (iVar1 != 0) {
    uVar2 = FUN_004f67e0(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

