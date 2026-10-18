/* speed.exe 006703b0 FUN_006703b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006703b0(int param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  if (DAT_009885c8 == 0) {
    (**(code **)(*(int *)(param_1 + 0xac) + 0xa0))(7);
  }
  if (*(int **)(param_1 + 0xe8) == (int *)0x0) {
LAB_00670400:
    bVar1 = false;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0xe8) + 8))();
    if (*(float *)(iVar3 + 0x18) <= _DAT_00890968) goto LAB_00670400;
    bVar1 = true;
  }
  cVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x24))();
  if (cVar2 == '\0') {
    if (bVar1) {
      *(float *)(param_1 + 0x150) = param_2 + *(float *)(param_1 + 0x150);
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    if (_DAT_008933d4 < *(float *)(param_1 + 0x150)) {
LAB_00670482:
      (**(code **)(*(int *)(param_1 + 0xac) + 0xa0))(0x38);
      goto LAB_00670456;
    }
  }
  else if (bVar1) goto LAB_00670482;
  (**(code **)(*(int *)(param_1 + 0xac) + 0xa4))(0x38);
LAB_00670456:
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x14))();
    if (cVar2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0xac) + 0xa0))(0xc0);
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0xac) + 0xa4))(0xc0);
  return;
}

