/* speed.exe 004f9bd0 FUN_004f9bd0; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 * calls 004f67e0 FUN_004f67e0
 */

undefined4 * FUN_004f9bd0(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086dcf6;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x6c,PTR_s_CARSFX_TruckHorn_008efc40,1);
  }
  else {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)FUN_004ac040(0x6c,PTR_s_CARSFX_TruckHorn_008efc40,0);
  }
  local_4 = (uint)(param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004f67e0();
    *puVar1 = &PTR_FUN_00899b20;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

