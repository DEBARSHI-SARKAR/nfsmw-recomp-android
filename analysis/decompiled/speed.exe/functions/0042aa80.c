/* speed.exe 0042aa80 FUN_0042aa80; analysis pseudocode, not buildable source.
 * calls 00408730 FUN_00408730
 * calls 004097c0 FUN_004097c0
 * calls 004293d0 FUN_004293d0
 * calls 00408810 FUN_00408810
 */

void __thiscall FUN_0042aa80(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(param_1 + 0x4c);
  (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  piVar3 = (int *)(**(code **)(*piVar1 + 8))();
  iVar4 = (**(code **)(*piVar3 + 0x38))();
  cVar2 = FUN_004097c0();
  if (cVar2 == '\0') {
    if (iVar4 == 2) {
      (**(code **)(*piVar1 + 0x9c))();
    }
  }
  else if (iVar4 != 2) {
    (**(code **)(*piVar1 + 0x98))();
  }
  FUN_004293d0(param_2);
  *(float *)(param_1 + 0xb0) = param_2 + *(float *)(param_1 + 0xb0);
  FUN_00408730(param_2);
  if (*(char *)(*(int *)(param_1 + 0xa0) + 0x2c) != '\0') {
    uVar5 = (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    cVar2 = FUN_00408810(uVar5,*(int *)(param_1 + 0xa0) + 0x10);
    *(char *)(param_1 + 0xa6) = '\x01' - (cVar2 != '\0');
  }
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 8))(param_2);
  }
  return;
}

