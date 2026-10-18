/* speed.exe 007fdc4c FUN_007fdc4c; analysis pseudocode, not buildable source.
 */

void FUN_007fdc4c(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int *param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_5 != 0) {
    do {
      uVar3 = 0;
      if (param_6 != 0) {
        do {
          piVar1 = param_1 + param_4;
          iVar2 = *param_1;
          param_1 = param_1 + 1;
          *(char *)(uVar3 + param_2) = (char)(*piVar1 * param_7[1] + 0x40 + iVar2 * *param_7 >> 7);
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_6);
      }
      param_2 = param_2 + param_6;
      param_1 = param_1 + (param_3 - param_6);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

