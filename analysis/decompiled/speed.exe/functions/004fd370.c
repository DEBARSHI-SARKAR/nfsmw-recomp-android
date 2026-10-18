/* speed.exe 004fd370 FUN_004fd370; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  DAT_00916054 = (int *)0x0;
  if ((param_1 != 0) && (piVar1 = DAT_0091604c, iVar3 = DAT_00916050, 0 < DAT_00916050)) {
    do {
      if (piVar1[1] == param_1) {
        piVar2 = piVar1;
        DAT_00916054 = piVar1;
      }
      iVar3 = iVar3 + -1;
      piVar1 = piVar1 + 0x44;
    } while (iVar3 != 0);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 2) {
        _DAT_009175a0 = piVar2[8];
        _DAT_009175a4 = piVar2[9];
        _DAT_009175a8 = piVar2[10];
      }
      else {
        DAT_00916054 = (int *)0x0;
        _DAT_009175a0 = 0;
        _DAT_009175a4 = 0;
        _DAT_009175a8 = 0;
      }
      FUN_0045f490(&DAT_008f2404,&DAT_009175a0);
      _DAT_008f2410 = 0;
      return;
    }
  }
  _DAT_009175a0 = 0;
  _DAT_009175a4 = 0;
  _DAT_009175a8 = 0;
  return;
}

