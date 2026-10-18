/* speed.exe 0070a380 FUN_0070a380; analysis pseudocode, not buildable source.
 * calls 00708390 FUN_00708390
 * calls 004bac70 FUN_004bac70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070a380(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  
  iVar2 = DAT_00993cc8;
  if (param_1[3] == 0) {
    piVar4 = *(int **)(DAT_00993cc8 + 0xdc);
    if (((((_DAT_00894ed8 <= *(float *)(DAT_00993cc8 + 0x108)) && (piVar4 != (int *)0x0)) &&
         (iVar1 = param_1[4], iVar1 != 2)) && ((iVar1 != 0 && (iVar1 != 4)))) &&
       ((iVar1 != 3 && ((iVar1 != 5 && (iVar1 != 1)))))) {
      (**(code **)(*piVar4 + 0x88))();
    }
    if ((((*(int *)(iVar2 + 0x104) < (int)*(char *)(*(int *)(iVar2 + 0x184) + 0xb0)) &&
         (*(float *)(iVar2 + 0x140) < *(float *)(*(int *)(iVar2 + 0x184) + 0x94))) &&
        (piVar4 != (int *)0x0)) && ((param_1[4] != 1 && (param_1[4] != 5)))) {
      (**(code **)(*piVar4 + 0x8c))();
    }
    if (((*(int *)(*(int *)(iVar2 + 0x184) + 0x88) <= *(int *)(iVar2 + 0x150)) && (param_1[4] != 1))
       && ((param_1[4] != 5 && (piVar4 = (int *)FUN_00708390(1,1), piVar4 != (int *)0x0)))) {
      (**(code **)(*piVar4 + 0xc4))();
    }
    param_1[3] = param_1[3] + 1;
    return;
  }
  if (DAT_00992230 != 0) {
    if ((*(uint *)(DAT_00992230 + 0x28) >> 3 & 1) != 0) {
      return;
    }
    cVar3 = FUN_004bac70();
    if (cVar3 == '\0') {
      return;
    }
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0xc))(0xffffffff);
    param_1[3] = 0;
    param_1[5] = 0;
  }
  return;
}

