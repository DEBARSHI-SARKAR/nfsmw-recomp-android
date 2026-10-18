/* speed.exe 007ec567 FUN_007ec567; analysis pseudocode, not buildable source.
 */

void FUN_007ec567(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_009baf78;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 5;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x9bb0b8);
  if ((iVar1 < 0x10) && ((&DAT_009baf78)[iVar1 * 5] == param_1)) {
    (&DAT_009baf78)[iVar1 * 5] = 0;
  }
  return;
}

