/* speed.exe 0054aba0 FUN_0054aba0; analysis pseudocode, not buildable source.
 * calls 00537560 FUN_00537560
 * calls 0059b790 FUN_0059b790
 * calls 00586760 FUN_00586760
 * calls 0054ab00 FUN_0054ab00
 * calls 00516be0 FUN_00516be0
 * calls 00586cf0 FUN_00586cf0
 */

void __thiscall FUN_0054aba0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_8;
  int local_4;
  
  iVar4 = 0;
  do {
    local_8 = &DAT_008f3a30 + iVar4 * 3;
    iVar3 = 1;
    local_4 = 3;
    do {
      if (*local_8 == *(int *)(param_2 + 0x10)) {
        if (iVar4 == 0) {
          FUN_00516be0(0xc519bfc4,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        }
        else {
          iVar2 = FUN_00586cf0(*(undefined4 *)(param_1 + 0x58));
          if (iVar4 != iVar2) {
            cVar1 = FUN_0059b790(iVar4);
            if (cVar1 != '\0') {
              if (*(int *)(param_1 + 0x58) != 0) {
                FUN_00586760(0x249db7b7);
              }
              FUN_0054ab00();
            }
          }
        }
        if (iVar3 != *(int *)(param_1 + 0x264)) {
          *(int *)(param_1 + 0x264) = iVar3;
          FUN_00537560();
        }
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return;
}

