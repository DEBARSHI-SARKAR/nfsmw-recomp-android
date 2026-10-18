/* speed.exe 0078ef80 FUN_0078ef80; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0078ef80(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_009b4254;
  do {
    if (*piVar2 == -1) {
      (&DAT_009b4254)[iVar1 * 7] = param_1;
      DAT_009b4230 = DAT_009b4230 + 1;
      return &DAT_009b4250 + iVar1 * 7;
    }
    piVar2 = piVar2 + 7;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x9b42a8);
  return (undefined4 *)0x0;
}

