/* speed.exe 006d8310 FUN_006d8310; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int __thiscall FUN_006d8310(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(param_1 + 0x2248 + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    FUN_006ca3d0("ERROR: trying to read a wheel on channel %d that doesn\'t have a handle\n",param_2
                );
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 100))(piVar1);
  if (iVar2 < 0) {
    piVar1 = *(int **)(param_1 + 0x2248 + param_2 * 4);
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x2248 + param_2 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x58))(piVar1,0x10);
      if (iVar2 < 0) {
LAB_006d836d:
        FUN_006ca3d0("ERROR: ReadChannel %d: failed to set actuators to ON\n");
        *(undefined4 *)(param_1 + 0x2478 + param_2 * 4) = 0;
        return iVar2;
      }
      *(undefined4 *)(param_1 + 0x2478 + param_2 * 4) = 1;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x2478 + param_2 * 4) == 0) &&
       (*(int *)(param_1 + 0x2250 + param_2 * 4) != 0)) {
      piVar1 = *(int **)(param_1 + 0x2248 + param_2 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x58))(piVar1,0x10);
      if (iVar2 < 0) goto LAB_006d836d;
      *(undefined4 *)(param_1 + 0x2478 + param_2 * 4) = 1;
    }
    puVar3 = (undefined4 *)(param_2 * 0x110 + param_1);
    puVar4 = puVar3;
    puVar5 = puVar3 + 0x896;
    for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar1 = *(int **)(param_1 + 0x2248 + param_2 * 4);
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x110,puVar3);
    if (iVar2 < 0) {
      FUN_006ca3d0("ERROR: could not retrieve positional information for wheel on channel %d\n",
                   param_2);
      if (iVar2 == -0x7ff8ffe2) {
        FUN_006ca3d0("Wheel got unplugged on channel %d!\n",param_2);
        *(undefined4 *)(param_1 + 0x2248 + param_2 * 4) = 0;
      }
      return iVar2;
    }
  }
  return 0;
}

