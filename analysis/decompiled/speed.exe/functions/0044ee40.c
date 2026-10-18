/* speed.exe 0044ee40 FUN_0044ee40; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_0044ee40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    piVar1 = *(int **)(param_1 + 0x44);
    while (piVar1 != (int *)(param_1 + 0x44)) {
      piVar1 = *(int **)(param_1 + 0x48);
      piVar2 = (int *)piVar1[1];
      iVar3 = *piVar1;
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      DAT_0090da94 = DAT_0090da94 + -1;
      FUN_00463ca0(DAT_0090db60,piVar1);
      piVar1 = *(int **)(param_1 + 0x44);
    }
  }
  return;
}

