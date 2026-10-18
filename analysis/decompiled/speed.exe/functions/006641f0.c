/* speed.exe 006641f0 FUN_006641f0; analysis pseudocode, not buildable source.
 * calls 006631e0 FUN_006631e0
 * calls 00663fc0 FUN_00663fc0
 * calls 0065ec00 FUN_0065ec00
 * calls 00454830 FUN_00454830
 */

void FUN_006641f0(undefined4 param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = FUN_00454830(param_1);
  FUN_0065ec00(&local_4,&local_8);
  if (local_4 != DAT_009259c4) {
    FUN_006631e0(&local_4,local_4);
  }
  FUN_00663fc0(param_1);
  return;
}

