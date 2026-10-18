/* speed.exe 00447770 FUN_00447770; analysis pseudocode, not buildable source.
 */

void FUN_00447770(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0090dba4;
  while ((piVar1[2] < 0 || (*piVar1 != param_1))) {
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
    if (0x90dca3 < (int)piVar1) {
      return;
    }
  }
  (&DAT_0090dba8)[iVar2 * 4] = 0;
  return;
}

