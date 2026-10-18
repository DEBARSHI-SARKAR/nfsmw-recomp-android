/* speed.exe 005c06e0 FUN_005c06e0; analysis pseudocode, not buildable source.
 * calls 005be440 FUN_005be440
 * calls 005b94d0 FUN_005b94d0
 */

undefined4 * __thiscall FUN_005c06e0(undefined4 *param_1,byte param_2)

{
  FUN_005be440();
  if ((param_2 & 1) != 0) {
    (**(code **)*param_1)(0);
    FUN_005b94d0(param_1);
  }
  return param_1;
}

