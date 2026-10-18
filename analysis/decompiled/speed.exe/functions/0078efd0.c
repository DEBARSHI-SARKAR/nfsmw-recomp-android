/* speed.exe 0078efd0 FUN_0078efd0; analysis pseudocode, not buildable source.
 */

void FUN_0078efd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = &DAT_009b4254;
  do {
    if (*piVar3 == param_1) {
      iVar2 = iVar1 * 0x1c;
      (&DAT_009b4254)[iVar1 * 7] = 0xffffffff;
      (&DAT_009b4250)[iVar1 * 7] = 0xffffffff;
      *(undefined2 *)(&DAT_009b4258 + iVar2) = 0;
      (&DAT_009b4260)[iVar1 * 7] = 0;
      *(undefined4 *)(&DAT_009b4264 + iVar2) = 0;
      *(undefined4 *)(&DAT_009b4268 + iVar2) = 0xbf800000;
      DAT_009b4230 = DAT_009b4230 + -1;
      return;
    }
    piVar3 = piVar3 + 7;
    iVar1 = iVar1 + 1;
  } while ((int)piVar3 < 0x9b42a8);
  return;
}

