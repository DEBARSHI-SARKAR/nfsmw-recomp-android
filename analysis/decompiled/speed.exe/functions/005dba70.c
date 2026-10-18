/* speed.exe 005dba70 FUN_005dba70; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_005dba70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874e1e;
  local_c = ExceptionList;
  if ((DAT_0091e05c & 1) == 0) {
    DAT_0091e05c = DAT_0091e05c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091e058 = FUN_005cc240("MNotifyRaceTimeExpired");
    *param_1 = DAT_0091e058;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091e058;
  return param_1;
}

