/* speed.exe 00735ae0 FUN_00735ae0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 __thiscall FUN_00735ae0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 != 0) {
      iVar1 = FUN_00460d20(*piVar2 + 0x1156,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(param_1 + 8 + iVar3 * 4);
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  return 0;
}

