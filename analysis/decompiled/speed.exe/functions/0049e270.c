/* speed.exe 0049e270 FUN_0049e270; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_0049e270(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + -1;
  if ((*param_1 != 0) && (iVar1 + -1 < 1)) {
    (*(code *)PTR_FUN_008ee4d4)(*param_1,param_1[1]);
    *param_1 = 0;
  }
  return;
}

