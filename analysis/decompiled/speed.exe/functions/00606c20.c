/* speed.exe 00606c20 FUN_00606c20; analysis pseudocode, not buildable source.
 * calls 00606b60 FUN_00606b60
 */

void FUN_00606c20(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_60 [5];
  undefined4 local_4c;
  int local_4;
  
  pcVar1 = *(code **)(param_1 + 0x3c);
  if ((pcVar1 != (code *)0x0) && (*(char *)(param_1 + 0x31) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    local_60[0] = param_2;
    local_4c = param_3;
    if (param_2 == 4) {
      local_4 = 0;
    }
    else {
      local_4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28)) / 0x18;
    }
    if (*(int *)(param_1 + 0x18) - iVar3 < 0xa1) {
      FUN_00606b60(param_1,0x14);
    }
    *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 8) + 0xa0;
    *(undefined1 *)(param_1 + 0x31) = 0;
    (*pcVar1)(param_1,local_60);
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x1c) + (iVar4 - iVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x1c) + (iVar3 - iVar2);
  }
  return;
}

