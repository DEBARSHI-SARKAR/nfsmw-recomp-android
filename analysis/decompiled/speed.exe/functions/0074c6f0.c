/* speed.exe 0074c6f0 FUN_0074c6f0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_0074c6f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar1 = (int *)*param_1;
    *param_1 = *piVar1;
    if ((int *)param_1[1] == piVar1) {
      param_1[1] = (int)param_1;
    }
    FUN_00463ca0(DAT_009b0950,piVar1);
    piVar1 = (int *)*param_1;
  }
  return;
}

