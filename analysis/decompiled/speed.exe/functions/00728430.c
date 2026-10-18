/* speed.exe 00728430 FUN_00728430; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045dd10 FUN_0045dd10
 * calls 0045f3c0 FUN_0045f3c0
 * calls 007247e0 FUN_007247e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00728430(int param_1,float *param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0;
  }
  pfVar2 = param_2 + 3;
  if ((param_3 != '\0') ||
     (_DAT_0089096c <= SQRT(param_2[3] * param_2[3] + param_2[4] * param_2[4]))) {
    local_18 = *pfVar2;
    local_14 = param_2[4];
    local_20 = local_18 + *param_2;
    local_1c = local_14 + param_2[1];
    FUN_007247e0(&local_20,0x4479c000);
    if (param_3 != '\0') {
      pfVar2 = param_2 + 5;
    }
    FUN_0045f3c0(&local_10,pfVar2);
    local_18 = *(float *)(param_1 + 0x28) - local_20;
    local_14 = *(float *)(param_1 + 0x2c) - local_1c;
    FUN_0045f3c0(&local_8,&local_18);
    local_18 = local_8;
    local_14 = local_4;
    FUN_0045dd10(local_8 * local_10 + local_c * local_4);
    iVar1 = FUN_007c4b80();
    if (0 < iVar1) {
      if (2 < iVar1) {
        iVar1 = 2;
      }
      return iVar1;
    }
  }
  return 0;
}

