/* speed.exe 0042ab80 FUN_0042ab80; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 00422480 FUN_00422480
 * calls 004238b0 FUN_004238b0
 * calls 00408810 FUN_00408810
 * calls 005cc240 FUN_005cc240
 */

void __thiscall FUN_0042ab80(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_retaddr;
  
  piVar5 = param_1 + -0x1c3;
  piVar2 = (int *)(**(code **)(param_1[-0x1c3] + 8))();
  (**(code **)(*piVar2 + 0xa0))(0x7000);
  if (unaff_retaddr == 0) {
    if (param_2 == 0) goto LAB_0042abed;
    (**(code **)(*piVar5 + 100))(param_2);
  }
  else {
    iVar3 = (**(code **)(*piVar5 + 100))();
    if ((unaff_retaddr == iVar3) || (*(char *)(unaff_retaddr + 0x2c) == '\0')) goto LAB_0042abed;
    param_2 = *(int *)(unaff_retaddr + 0x1c);
    if (param_2 == 0) {
      FUN_004238b0(unaff_retaddr + 0x10);
      goto LAB_0042abed;
    }
  }
  FUN_00423860(param_2);
LAB_0042abed:
  if (*(char *)(param_1[-0x1ae] + 0x2c) != '\0') {
    uVar4 = (**(code **)(*(int *)param_1[-0x1a2] + 4))();
    cVar1 = FUN_00408810(uVar4,param_1[-0x1ae] + 0x10);
    *(char *)((int)param_1 + -0x6b2) = '\x01' - (cVar1 != '\0');
  }
  (**(code **)(*param_1 + 0x10))(1);
  piVar5 = (int *)(**(code **)(*piVar5 + 8))();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x44))();
  if (*piVar5 != DAT_0092c4f4) {
    FUN_005cc240("AIGoalPursuit");
    FUN_00422480(&stack0xfffffffc);
    return;
  }
  FUN_005cc240("AIGoalHeliPursuit");
  FUN_00422480(&stack0xfffffffc);
  return;
}

