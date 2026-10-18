/* speed.exe 00611440 FUN_00611440; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 0060dae0 FUN_0060dae0
 * calls 006045b0 FUN_006045b0
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 00600210 FUN_00600210
 * calls 005ff2e0 FUN_005ff2e0
 * calls 00654af0 FUN_00654af0
 */

void FUN_00611440(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  FUN_0060dae0();
  piVar2 = (int *)FUN_005dbed0();
  FUN_00600210();
  if ((*piVar2 != 0) &&
     (iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8), iVar3 != 0)) {
    piVar2 = *(int **)(iVar3 + 4);
    if (piVar2 != (int *)0x0) {
      FUN_006045b0(piVar2[2]);
      FUN_00654af0();
      cVar1 = (**(code **)(*piVar2 + 0x24))();
      if ((cVar1 == '\0') && (piVar2 = (int *)FUN_005d59f0(), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x84))();
      }
    }
    FUN_005ff2e0(3);
    return;
  }
  FUN_005ff2e0(3);
  return;
}

