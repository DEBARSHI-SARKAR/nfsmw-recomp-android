/* speed.exe 00633d90 FUN_00633d90; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00633d90(int *param_1)

{
  int iVar1;
  
  if (0 < *param_1) {
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (param_1[3] + -1 < iVar1 + 1) {
      param_1[2] = 0;
    }
    *param_1 = *param_1 + -1;
  }
  return;
}

