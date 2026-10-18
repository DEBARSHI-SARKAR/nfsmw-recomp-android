/* speed.exe 00726fe0 FUN_00726fe0; analysis pseudocode, not buildable source.
 * calls 00726f60 FUN_00726f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00726fe0(int param_1,int param_2,undefined4 *param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  local_1c = param_3[1];
  local_20 = *param_3;
  iVar1 = 0;
  local_18 = 99999.0;
  if (0 < param_2) {
    while (fVar2 = (float10)FUN_00726f60(&local_20,0,0,0), fVar2 < (float10)local_18) {
      *(float *)(param_1 + iVar1 * 4) = (float)fVar2;
      iVar1 = iVar1 + 1;
      local_18 = (float)((fVar2 - (float10)_DAT_0089096c) - (float10)param_4);
      if (param_2 <= iVar1) {
        return iVar1;
      }
    }
  }
  return iVar1;
}

