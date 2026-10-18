/* speed.exe 00830eab FUN_00830eab; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00830eab(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (DAT_009c29d8 != (int *)0x0) {
      (**(code **)(*DAT_009c29d8 + 8))();
      return;
    }
    (**(code **)(*DAT_009c29d4 + 4))(param_1,0);
  }
  return;
}

