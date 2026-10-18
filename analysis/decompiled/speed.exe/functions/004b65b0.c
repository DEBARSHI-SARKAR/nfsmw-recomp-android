/* speed.exe 004b65b0 FUN_004b65b0; analysis pseudocode, not buildable source.
 * calls 008298d0 FUN_008298d0
 */

void FUN_004b65b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = (int *)FUN_008298d0(*(undefined4 *)((&DAT_009121d8)[*param_1] + 0x24));
  param_1 = *(int **)(*(int *)(DAT_009120e4 + 0x18) + 0x10);
  (**(code **)(*piVar2 + 0x90))(&param_1);
  *(undefined1 *)(piVar1 + 1) = 0;
  return;
}

