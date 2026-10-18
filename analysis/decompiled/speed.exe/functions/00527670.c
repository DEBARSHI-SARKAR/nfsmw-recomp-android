/* speed.exe 00527670 FUN_00527670; analysis pseudocode, not buildable source.
 * calls 00460d60 FUN_00460d60
 * calls 00460c70 FUN_00460c70
 * calls 00460c50 FUN_00460c50
 */

int __thiscall FUN_00527670(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  undefined1 local_20 [32];
  
  local_24 = 0;
  FUN_00460c70(local_20,param_2);
  iVar1 = FUN_00460c50(local_20);
  piVar3 = *(int **)(param_1 + 0x7c);
  local_20[iVar1] = 0x20;
  local_20[iVar1 + 1] = 0;
  if (piVar3 != (int *)(param_1 + 0x7c)) {
    do {
      iVar2 = FUN_00460d60(piVar3 + 2,local_20,iVar1 + 1);
      if (iVar2 == 0) {
        *param_3 = (int)(piVar3 + 2);
        param_3 = param_3 + 1;
        local_24 = local_24 + 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)(param_1 + 0x7c));
    return local_24;
  }
  return 0;
}

