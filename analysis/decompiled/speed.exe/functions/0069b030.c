/* speed.exe 0069b030 FUN_0069b030; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0069b030(int param_1)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  
  iVar4 = (**(code **)(**(int **)(param_1 + 0x138) + 0x58))();
  if ((iVar4 == 1) && (cVar3 = (**(code **)(*(int *)(param_1 + 0x50) + 0x40))(), cVar3 == '\0')) {
    pfVar5 = (float *)(**(code **)(*(int *)(param_1 + 0x48) + 0x24))();
    fVar2 = pfVar5[2] * pfVar5[2] + pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5;
    if (_DAT_00890e98 <= fVar2) {
      if (_DAT_008911a0 <= fVar2) goto LAB_0069b0aa;
      bVar1 = *(byte *)(param_1 + 0x15c) & 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x15c) & 3;
    }
    if (bVar1 != 0) {
      return false;
    }
  }
LAB_0069b0aa:
  piVar6 = (int *)(**(code **)(*(int *)(param_1 + 0x48) + 4))();
  cVar3 = (**(code **)(*piVar6 + 0x24))();
  if (cVar3 != '\0') {
    return true;
  }
  if ((((*(byte *)(**(int **)(param_1 + 0x78) + 0x1c) >> 6 & 1) != 0) &&
      (*(char *)(*(int *)(param_1 + 0x84) + 0xfe) == '\0')) &&
     (cVar3 = (**(code **)(*(int *)(param_1 + 0x50) + 0x34))(), cVar3 == '\0')) {
    return *(int *)(param_1 + 0x11c) != 0;
  }
  return false;
}

