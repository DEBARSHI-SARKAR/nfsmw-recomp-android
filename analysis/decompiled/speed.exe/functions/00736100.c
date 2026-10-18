/* speed.exe 00736100 FUN_00736100; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00736100(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 6) {
    return *param_1 == 0;
  }
  iVar1 = *(int *)(param_1[1] + 0x1144);
  if (((((iVar1 == 4) || (iVar1 == 6)) || (iVar1 == 0)) || (iVar1 == 5)) &&
     ((*(int *)(param_1[1] + 0x1144) != 6 &&
      (((param_1[0x1e] == 0 || (param_1[0x1e] == 0x7fffffff)) ||
       ((float)(DAT_00925ae8 - param_1[0x1e]) * _DAT_00890984 <= _DAT_008959e4)))))) {
    return false;
  }
  return true;
}

