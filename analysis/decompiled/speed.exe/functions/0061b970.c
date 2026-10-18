/* speed.exe 0061b970 FUN_0061b970; analysis pseudocode, not buildable source.
 * calls 00618e90 FUN_00618e90
 * calls 006337a0 FUN_006337a0
 * calls 005cc240 FUN_005cc240
 * calls 0060bf90 FUN_0060bf90
 * calls 00614c50 FUN_00614c50
 */

undefined4 FUN_0061b970(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = *(int *)(param_1 + 8);
  piVar1 = (int *)(iVar5 + -8);
  if ((piVar1 != (int *)0x0) && (((*piVar1 == 4 || (*piVar1 == 3)) && (piVar1 != (int *)0x0)))) {
    if (*piVar1 == 4) {
      pcVar6 = (char *)(*(int *)(iVar5 + -4) + 0x10);
    }
    else {
      iVar3 = FUN_00614c50(param_1,piVar1);
      if (iVar3 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)(*(int *)(iVar5 + -4) + 0x10);
      }
    }
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == 'E')) {
      uVar4 = FUN_005cc240(pcVar6);
      iVar5 = FUN_006337a0(uVar4);
      if (iVar5 != 0) {
        FUN_00618e90(param_1,iVar5,0);
        puVar2 = *(undefined4 **)(param_1 + 8);
        *puVar2 = puVar2[-4];
        puVar2[1] = puVar2[-3];
        iVar5 = *(int *)(param_1 + 8);
        *(undefined4 **)(param_1 + 8) = (undefined4 *)(iVar5 + 8);
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar5 + -8);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + -4);
        iVar5 = *(int *)(param_1 + 8);
        *(int *)(param_1 + 8) = iVar5 + 8;
        FUN_0060bf90(param_1,param_1 + 0x40,iVar5 + -8,iVar5);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
        return 1;
      }
    }
  }
  **(undefined4 **)(param_1 + 8) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return 1;
}

