/* speed.exe 00492540 FUN_00492540; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_00492540(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  if ((param_1[2] != 0) && (uVar4 = 0, param_1[1] != 0)) {
    do {
      iVar2 = *(int *)(param_1[2] + uVar4 * 4);
      if (iVar2 != 0) {
        pcVar3 = (char *)(iVar2 + 4);
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        (*(code *)PTR_FUN_008ee4d4)(iVar2,pcVar3 + (5 - (iVar2 + 5)));
      }
      *(undefined4 *)(param_1[2] + uVar4 * 4) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  iVar2 = param_1[4];
  *param_1 = 0;
  while (iVar2 != 0) {
    iVar2 = param_1[4];
    param_1[4] = *(undefined4 *)(iVar2 + 8);
    (*(code *)PTR_FUN_008ee4d4)(iVar2,0xc);
    iVar2 = param_1[4];
  }
  param_1[4] = 0;
  return;
}

