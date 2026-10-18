/* speed.exe 0047cc50 FUN_0047cc50; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004797f0 FUN_004797f0
 * calls 004519d0 FUN_004519d0
 */

void FUN_0047cc50(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  piVar3 = DAT_00911300;
  if (DAT_00911300 != DAT_00911300 + DAT_00911308) {
    do {
      iVar1 = *piVar3;
      pcVar5 = "CDActionDrive";
      *(undefined4 *)(iVar1 + 0x2b8) = 0;
      *(undefined4 *)(iVar1 + 0x2b4) = 0;
      *(undefined1 *)(iVar1 + 700) = 0;
      *(undefined4 *)(iVar1 + 0x2c0) = 0;
      uVar4 = FUN_004522f0("CDActionDrive");
      uVar2 = FUN_004519d0("CDActionDrive",pcVar5,uVar4);
      FUN_004797f0(uVar4,uVar2,"CDActionDrive");
      if (*(int **)(iVar1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x20) + 8))();
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != DAT_00911300 + DAT_00911308);
  }
  return;
}

