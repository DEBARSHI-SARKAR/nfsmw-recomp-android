/* speed.exe 00633dc0 FUN_00633dc0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00633dc0(int *param_1,int *param_2)

{
  if (0 < *param_1) {
    *param_2 = (int)(param_1 + param_1[2] * 3 + 4);
    return;
  }
  *param_2 = 0;
  return;
}

