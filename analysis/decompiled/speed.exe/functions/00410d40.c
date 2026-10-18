/* speed.exe 00410d40 FUN_00410d40; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00410d40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x44);
  if ((piVar1 != (int *)(param_1 + 0x44)) && (piVar1 != (int *)0x0)) {
    return (int)(piVar1 + -1);
  }
  return 0;
}

