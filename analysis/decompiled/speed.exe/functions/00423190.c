/* speed.exe 00423190 FUN_00423190; analysis pseudocode, not buildable source.
 * calls 00422480 FUN_00422480
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423190(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  float fStack_10;
  float fStack_c;
  
  if (*(undefined4 **)(param_1 + -0x684) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + -0x684))(1);
    *(undefined4 *)(param_1 + -0x684) = 0;
  }
  *(undefined4 *)(param_1 + -0x678) = DAT_0091ddbc;
  fStack_10 = (float)FUN_005cc240("AIGoalTraffic");
  FUN_00422480(&fStack_10);
  piVar1 = (int *)FUN_005d59f0(&LAB_00405000);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_00403f90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)FUN_005d59f0(&LAB_004039e0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(0,0);
    (**(code **)(*piVar1 + 0xc))(1);
  }
  piVar5 = (int *)(param_1 + -0x6f0);
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + -0x6f0) + 8))();
  (**(code **)(*piVar1 + 0x94))(param_2);
  (**(code **)(*piVar5 + 0x38))(param_2);
  iVar2 = (**(code **)(*piVar5 + 0x48))();
  iVar3 = (**(code **)(*piVar5 + 100))();
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x2c) == '\0')) {
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x50) != '\0')) {
      (**(code **)(*piVar5 + 0x3c))(iVar2 + 0x98);
      (**(code **)(*piVar5 + 0x2c))(3);
      return;
    }
    piVar1 = (int *)(**(code **)(*piVar5 + 8))();
    (**(code **)(*piVar1 + 0xb8))(&stack0xffffffec);
    puVar4 = &stack0xffffffec;
    fStack_10 = fStack_10 * _DAT_00890bf8;
    fStack_c = fStack_c * _DAT_00890bf8;
  }
  else {
    puVar4 = (undefined1 *)(iVar3 + 0x10);
  }
  (**(code **)(*piVar5 + 0x3c))(puVar4);
  (**(code **)(*piVar5 + 0x2c))(3);
  return;
}

