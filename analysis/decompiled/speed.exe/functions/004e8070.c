/* speed.exe 004e8070 FUN_004e8070; analysis pseudocode, not buildable source.
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004e6b40 FUN_004e6b40
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 004b21b0 FUN_004b21b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_004e8070(int param_1,int param_2,char param_3,float param_4)

{
  float *pfVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int local_2c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cfe0;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x580);
  if ((((iVar4 == param_2) && (_DAT_00890968 < _DAT_00914358)) && (iVar4 != 0x5aefc6a8)) &&
     (iVar4 != -0x57f0f1f8)) {
    return 0;
  }
  if (((iVar4 != 0) && (DAT_00914354 != '\0')) &&
     ((pfVar1 = *(float **)(param_1 + 0x584), pfVar1 != (float *)0x0 &&
      ((param_3 != '\0' && (iVar4 = 0, 0 < DAT_008ef998)))))) {
    do {
      if (ABS((float)(&DAT_009144b0)[iVar4 * 2] - pfVar1[2]) *
          ABS((float)(&DAT_009144b0)[iVar4 * 2] - pfVar1[2]) +
          ABS((float)(&DAT_009144b4)[iVar4 * 2] + *pfVar1) *
          ABS((float)(&DAT_009144b4)[iVar4 * 2] + *pfVar1) < param_4) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_008ef998);
  }
  if (DAT_0091e000 == 0) {
    return 0;
  }
  if ((*(int *)(DAT_0091e000 + 0x1968) != 0) && (*(char *)(DAT_0091e000 + 0x198a) == '\0')) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar4 = FUN_006ff2d0(0);
  if ((*(int *)(iVar4 + 0x84) != 5) && (cVar2 = FUN_004b21b0(), cVar2 != '\0')) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_004e6b40(param_2,0,0);
  cVar2 = *(char *)(local_2c + 0xc);
  local_4 = 0;
  if (*(int *)(param_1 + 0x580) != 0) {
    if (param_3 != '\0') {
      pcVar3 = (char *)FUN_00454810(0xb34fc11d,0);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_006269b0(1);
      }
      if (*pcVar3 == '\0') goto LAB_004e8207;
    }
    FUN_004e6b40(*(undefined4 *)(param_1 + 0x580),0,0);
    local_4 = local_4 & 0xffffff00;
    if (cVar2 < *(char *)(local_18 + 0xc)) {
      FUN_0045a430();
LAB_004e8207:
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 0;
    }
    FUN_0045a430();
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 1;
}

