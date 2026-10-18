/* speed.exe 004625f0 FUN_004625f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004625f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_00894264;
  iVar1 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

