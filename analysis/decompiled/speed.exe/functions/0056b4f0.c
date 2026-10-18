/* speed.exe 0056b4f0 FUN_0056b4f0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

undefined4 * FUN_0056b4f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087152e;
  local_c = ExceptionList;
  if ((DAT_0091dca0 & 1) == 0) {
    DAT_0091dca0 = DAT_0091dca0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0091dc9c = FUN_005cc240("MNotifyMovieFinished");
    *param_1 = DAT_0091dc9c;
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = DAT_0091dc9c;
  return param_1;
}

