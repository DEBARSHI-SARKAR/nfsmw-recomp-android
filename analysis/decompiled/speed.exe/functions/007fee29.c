/* speed.exe 007fee29 FUN_007fee29; analysis pseudocode, not buildable source.
 */

void FUN_007fee29(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  (*DAT_009c6acc)(param_2,param_4,param_6,param_8);
  uVar2 = param_9 / 5;
  while (uVar2 = uVar2 - 1, param_9 = param_6, local_8 = param_2, uVar2 != 0) {
    local_c = 2;
    do {
      local_8 = local_8 + param_3;
      param_9 = param_9 + param_7;
      (*DAT_009c6acc)(local_8,param_4,param_9,param_8);
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar1 = param_7 * 5 + param_6;
    param_2 = param_3 * 3 + param_2;
    (*DAT_009c6acc)(param_2,param_4,iVar1,param_8);
    (*DAT_009c6ac4)(param_6,param_7,param_8);
    param_6 = iVar1;
  }
  local_10 = 2;
  do {
    local_8 = local_8 + param_3;
    param_9 = param_9 + param_7;
    (*DAT_009c6acc)(local_8,param_4,param_9,param_8);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  (*DAT_009c6aac)(param_6,param_7,param_8);
  return;
}

