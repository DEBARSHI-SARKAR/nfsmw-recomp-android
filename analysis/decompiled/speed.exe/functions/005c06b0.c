/* speed.exe 005c06b0 FUN_005c06b0; analysis pseudocode, not buildable source.
 * calls 005bf190 FUN_005bf190
 * calls 005b9470 FUN_005b9470
 */

undefined4 * __thiscall FUN_005c06b0(undefined4 *param_1,byte param_2)

{
  FUN_005bf190();
  if ((param_2 & 1) != 0) {
    (**(code **)*param_1)(0);
    FUN_005b9470(param_1);
  }
  return param_1;
}

