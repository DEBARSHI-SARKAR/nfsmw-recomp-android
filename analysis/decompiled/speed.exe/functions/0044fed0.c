/* speed.exe 0044fed0 FUN_0044fed0; analysis pseudocode, not buildable source.
 * calls 0044e710 FUN_0044e710
 */

undefined4 __fastcall FUN_0044fed0(int *param_1)

{
  if (param_1[7] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1[10]);
    FUN_0044e710();
  }
  else if (param_1[7] != 1) {
    return 1;
  }
  param_1[7] = 2;
  return 1;
}

