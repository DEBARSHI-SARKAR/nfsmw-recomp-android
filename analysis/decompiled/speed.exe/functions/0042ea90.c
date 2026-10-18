/* speed.exe 0042ea90 FUN_0042ea90; analysis pseudocode, not buildable source.
 * calls 00426610 FUN_00426610
 * calls 0041eed0 FUN_0041eed0
 * calls 005d59f0 FUN_005d59f0
 * calls 00426960 FUN_00426960
 * calls 00410e70 FUN_00410e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042ea90(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  piVar2 = (int *)FUN_00426610(DAT_0092c52c,1);
  if ((*(char *)(DAT_0091e00c + 0x2b4) == '\0') && (*(char *)(DAT_0091e00c + 0x111) == '\0')) {
    local_1c = _DAT_008eb1ac - _DAT_008905f8;
  }
  else {
    local_1c = 80.0;
  }
  if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_00410e70(DAT_0092c52c), piVar2 == (int *)0x0))
  {
    return 0;
  }
  cVar1 = FUN_0041eed0(param_2,local_c,local_18,local_1c);
  if (cVar1 == '\0') {
    iVar4 = (**(code **)(*param_2 + 8))();
    if (iVar4 != 0) {
      FUN_00426960(param_2);
    }
    return 0;
  }
  (**(code **)(*piVar2 + 0x80))();
  piVar3 = (int *)(**(code **)(*piVar2 + 0xac))();
  (**(code **)(*piVar3 + 0x5c))(local_c,local_18);
  (**(code **)(*piVar3 + 0x88))();
  piVar3 = (int *)FUN_005d59f0(&LAB_004038e0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x78))();
  }
  (**(code **)(*param_2 + 0x78))(piVar2);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  return 1;
}

