/* speed.exe 00423010 FUN_00423010; analysis pseudocode, not buildable source.
 * calls 00422480 FUN_00422480
 * calls 005d59f0 FUN_005d59f0
 * calls 0077bba0 FUN_0077bba0
 * calls 005cc240 FUN_005cc240
 * calls 00788f30 FUN_00788f30
 * calls 00770060 FUN_00770060
 * calls 00776600 FUN_00776600
 */

void __thiscall FUN_00423010(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(undefined4 **)(param_1 + -0x70c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + -0x70c))(1);
    *(undefined4 *)(param_1 + -0x70c) = 0;
  }
  *(undefined4 *)(param_1 + -0x700) = DAT_0091ddbc;
  piVar1 = (int *)(param_1 + -0x778);
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + -0x778) + 8))();
  (**(code **)(*piVar2 + 0x2c))(param_2);
  FUN_005cc240("AIGoalRacer");
  FUN_00422480(&stack0x00000000);
  piVar2 = (int *)FUN_005d59f0(&LAB_00403f80);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(0);
  }
  piVar2 = (int *)FUN_005d59f0(&LAB_004039e0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(0,0);
    (**(code **)(*piVar2 + 0xc))(1);
  }
  iVar3 = (**(code **)(*piVar1 + 0x48))();
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x80) = (param_2 != 1) - 1 & 2;
    *(bool *)(iVar3 + 0x51) = DAT_009b3829 != '\0';
    FUN_00770060();
    *(undefined4 *)(iVar3 + 0x78) = 2;
    (**(code **)(*piVar1 + 0x50))(2);
    if (*(char *)(iVar3 + 0x50) != '\0') {
      iVar3 = (**(code **)(*piVar1 + 100))();
      if (*(char *)(iVar3 + 0x2c) != '\0') {
        FUN_00788f30(iVar3 + 0x10,iVar3 + 0x20,0);
      }
      if (param_2 == 1) {
        iVar3 = (**(code **)(**(int **)(param_1 + -0x6f4) + 0xa4))();
        uVar4 = 0x41f00000;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + -0x6f4) + 0xa4))();
        uVar4 = 0x42700000;
      }
      FUN_0077bba0(uVar4,iVar3 + 0x20,0);
      FUN_00776600(0);
    }
  }
  return;
}

