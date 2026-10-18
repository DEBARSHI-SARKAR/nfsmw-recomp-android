/* speed.exe 007feb1e FUN_007feb1e; analysis pseudocode, not buildable source.
 */

void FUN_007feb1e(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  (*DAT_009c6a78)(param_2,param_4,param_6,param_8);
  uVar1 = param_9 / 5;
  while (uVar1 = uVar1 - 1, uVar1 != 0) {
    local_c = 3;
    param_9 = param_6;
    local_8 = param_2;
    do {
      local_8 = param_3 + local_8;
      param_9 = param_9 + param_7;
      (*DAT_009c6a78)(local_8,param_4,param_9,param_8);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar2 = param_7 * 5 + param_6;
    param_2 = param_2 + param_3 * 4;
    (*DAT_009c6a78)(param_2,param_4,iVar2,param_8);
    (*DAT_009c6a98)(param_6,param_7,param_8);
    param_6 = iVar2;
  }
  local_10 = 3;
  iVar2 = param_6;
  param_9 = param_2;
  do {
    param_9 = param_9 + param_3;
    iVar2 = iVar2 + param_7;
    (*DAT_009c6a78)(param_9,param_4,iVar2,param_8);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  (*DAT_009c6a94)(param_6,param_7,param_8);
  return;
}

