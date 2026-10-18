/* speed.exe 004e2460 FUN_004e2460; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004e2460(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = param_1[0xe];
  piVar4 = (int *)(*(int *)(iVar1 + 8) + iVar1);
  iVar5 = 0;
  puVar3 = param_1;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      if (*piVar4 != -1) {
        uVar2 = (*DAT_0091440c)(iVar5);
        *puVar3 = uVar2;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1[0xe] + 4));
  }
  return;
}

