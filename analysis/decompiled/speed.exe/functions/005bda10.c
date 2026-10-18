/* speed.exe 005bda10 FUN_005bda10; analysis pseudocode, not buildable source.
 * calls 005b9410 FUN_005b9410
 * calls 005ad560 FUN_005ad560
 */

undefined4 * __thiscall FUN_005bda10(undefined4 *param_1,byte param_2)

{
  FUN_005ad560();
  if ((param_2 & 1) != 0) {
    (**(code **)*param_1)(0);
    FUN_005b9410(param_1);
  }
  return param_1;
}

