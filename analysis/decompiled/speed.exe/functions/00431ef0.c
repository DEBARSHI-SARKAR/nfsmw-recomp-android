/* speed.exe 00431ef0 FUN_00431ef0; analysis pseudocode, not buildable source.
 * calls 00415080 FUN_00415080
 * calls 0042f570 FUN_0042f570
 * calls 00408730 FUN_00408730
 * calls 0042ac90 FUN_0042ac90
 * calls 00408810 FUN_00408810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00431ef0(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float fStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  piVar1 = (int *)(param_1 + 0x4c);
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  iVar4 = (**(code **)(*piVar3 + 0x38))();
  piVar3 = (int *)(**(code **)(*piVar1 + 8))();
  cVar2 = (**(code **)(*piVar3 + 0xc4))();
  if (cVar2 == '\0') {
    if (iVar4 == 2) {
      piVar3 = (int *)(**(code **)(*piVar1 + 4))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
      (**(code **)(*piVar3 + 0x34))(auStack_c);
      piVar3 = (int *)(**(code **)(*piVar1 + 4))();
      piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
      iVar4 = (**(code **)(*piVar3 + 0x20))();
      uStack_14 = *(undefined4 *)(iVar4 + 8);
      fStack_18 = *(float *)(iVar4 + 4) + _DAT_00890d44;
      piVar3 = (int *)(**(code **)(*piVar1 + 8))();
      cVar2 = (**(code **)(*piVar3 + 0x68))(&stack0xffffffe4,auStack_10);
      if (cVar2 == '\0') {
        piVar3 = (int *)(**(code **)(*piVar1 + 8))();
        (**(code **)(*piVar3 + 0x68))(&stack0xffffffdc,&fStack_18);
      }
      (**(code **)(*piVar1 + 0x9c))();
    }
  }
  else if (iVar4 != 2) {
    (**(code **)(*piVar1 + 0x98))();
  }
  FUN_0042ac90(param_2);
  *(float *)(param_1 + 0xb0) = param_2 + *(float *)(param_1 + 0xb0);
  FUN_00408730(param_2);
  if (*(char *)(*(int *)(param_1 + 0xa0) + 0x2c) != '\0') {
    uVar5 = (**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    cVar2 = FUN_00408810(uVar5,*(int *)(param_1 + 0xa0) + 0x10);
    *(char *)(param_1 + 0xa6) = '\x01' - (cVar2 != '\0');
  }
  FUN_00415080();
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 8))(param_2);
  }
  FUN_0042f570();
  return;
}

