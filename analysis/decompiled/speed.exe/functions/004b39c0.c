/* speed.exe 004b39c0 FUN_004b39c0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_004b39c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086b4ee;
  local_c = ExceptionList;
  if ((DAT_00913c28 & 1) == 0) {
    DAT_00913c28 = DAT_00913c28 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_00913c24 = FUN_005cc240("MNotifyVehicleDestroyed");
    *param_1 = DAT_00913c24;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_00913c24;
  return param_1;
}

