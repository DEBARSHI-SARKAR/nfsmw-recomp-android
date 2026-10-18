/* speed.exe 00619180 FUN_00619180; analysis pseudocode, not buildable source.
 * calls 00615920 FUN_00615920
 * calls 00614f40 FUN_00614f40
 */

void FUN_00619180(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 local_60 [4];
  undefined *local_5c;
  char *local_58;
  int local_4;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x28)) {
    local_4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28)) / 0x18;
  }
  FUN_00614f40(param_1,&DAT_008a4270,local_60);
  iVar1 = 7;
  bVar3 = true;
  pcVar2 = "method";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *local_58 == *pcVar2;
    local_58 = local_58 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      FUN_00615920(param_1,"calling `%s\' on bad self (%s)",local_5c,param_3);
      return;
    }
  }
  if (local_5c == (undefined *)0x0) {
    local_5c = &DAT_008a3ed4;
  }
  FUN_00615920(param_1,"bad argument #%d to `%s\' (%s)",param_2,local_5c,param_3);
  return;
}

