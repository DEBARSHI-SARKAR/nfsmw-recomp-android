/* speed.exe 00666fe0 FUN_00666fe0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00666fe0(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *param_1 = (int)&LAB_00666f90;
  param_1[2] = (int)"LoadingRegion";
  param_1[1] = 0;
  return;
}

