/* speed.exe 0064b320 FUN_0064b320; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_0064b320(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar1 = *param_1;
  local_8 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 1;
    param_1 = param_1 + 2;
    local_4 = iVar1;
    do {
      if (*param_1 == 0) {
        iVar3 = param_1[1];
        if (iVar4 != iVar1) {
          piVar2 = param_1 + 4;
          iVar5 = iVar4;
          do {
            if (piVar2[-1] < 1) break;
            iVar3 = iVar3 + *piVar2;
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 3;
          } while (iVar5 != iVar1);
        }
        local_8 = local_8 + iVar3;
      }
      param_1 = param_1 + 3;
      iVar4 = iVar4 + 1;
      local_4 = local_4 + -1;
      iVar3 = local_8;
    } while (local_4 != 0);
  }
  return iVar3;
}

