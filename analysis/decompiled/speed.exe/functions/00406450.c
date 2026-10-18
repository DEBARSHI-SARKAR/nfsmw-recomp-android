/* speed.exe 00406450 FUN_00406450; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00406450(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0xac))();
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa0))();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_2 + 0xac))();
    iVar3 = (**(code **)(*piVar2 + 0xa4))();
    if (iVar3 != 0) {
      piVar2 = (int *)(**(code **)(*param_2 + 0xac))();
      piVar2 = (int *)(**(code **)(*piVar2 + 0xa4))();
      (**(code **)(*piVar2 + 0xc))(param_2);
    }
  }
  else {
    (**(code **)(*piVar2 + 0x7c))(param_2);
  }
  piVar2 = (int *)(**(code **)(*param_2 + 0x44))();
  bVar4 = *piVar2 == DAT_0092c4f4;
  (**(code **)(*piVar1 + 0x8c))();
  if (bVar4) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    return;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
  return;
}

