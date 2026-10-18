/* speed.exe 005d4e80 FUN_005d4e80; analysis pseudocode, not buildable source.
 */

void FUN_005d4e80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      piVar1 = (int *)*param_1;
      *piVar1 = *piVar1 + 1;
      *param_3 = piVar1;
    }
    param_3 = param_3 + 1;
  }
  return;
}

