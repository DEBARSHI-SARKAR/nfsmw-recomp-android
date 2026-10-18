/* speed.exe 005d54a0 FUN_005d54a0; analysis pseudocode, not buildable source.
 */

void FUN_005d54a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      piVar1 = (int *)*param_3;
      *piVar1 = *piVar1 + 1;
      *param_1 = piVar1;
    }
    param_1 = param_1 + 1;
  }
  return;
}

