/* speed.exe 00502d10 FUN_00502d10; analysis pseudocode, not buildable source.
 * calls 00461980 FUN_00461980
 */

void __fastcall FUN_00502d10(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  FUN_00461980(param_1[2]);
  FUN_00461980(param_1[3]);
  return;
}

