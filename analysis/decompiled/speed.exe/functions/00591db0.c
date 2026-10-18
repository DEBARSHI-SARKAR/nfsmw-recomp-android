/* speed.exe 00591db0 FUN_00591db0; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 * calls 00650350 FUN_00650350
 * calls 00465a70 FUN_00465a70
 */

undefined4 FUN_00591db0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00585820(param_1);
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x18);
    if (*piVar1 == 0x30203) {
      return *(undefined4 *)(iVar2 + 0x14);
    }
    if (*piVar1 == 0x30210) {
      uVar3 = FUN_00465a70(piVar1[5],0);
      *(undefined4 *)(iVar2 + 0x14) = uVar3;
      FUN_00650350(piVar1 + 3,uVar3);
      return *(undefined4 *)(iVar2 + 0x14);
    }
  }
  return 0;
}

