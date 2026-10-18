/* speed.exe 008011b7 FUN_008011b7; analysis pseudocode, not buildable source.
 */

void FUN_008011b7(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[3];
  iVar1 = ((param_1[1] - 1) * param_3 >> 8) + 1;
  uVar5 = param_1[1] - iVar1;
  uVar3 = *param_1 + iVar1;
  while (uVar5 < 0x80) {
    uVar5 = uVar5 << 1;
    if ((int)uVar3 < 0) {
      uVar2 = param_1[4];
      while ((uVar2 = uVar2 - 1, -1 < (int)uVar2 && (*(char *)(param_1[5] + uVar2) == -1))) {
        *(char *)(param_1[5] + uVar2) = '\0';
      }
      *(char *)(uVar2 + param_1[5]) = *(char *)(uVar2 + param_1[5]) + '\x01';
    }
    uVar3 = uVar3 << 1;
    uVar4 = uVar4 + 1;
    if (uVar4 == 0) {
      *(char *)(param_1[5] + param_1[4]) = (char)(uVar3 >> 0x18);
      param_1[4] = param_1[4] + 1;
      uVar4 = 0xfffffff8;
      uVar3 = uVar3 & 0xffffff;
    }
  }
  param_1[1] = uVar5;
  param_1[3] = uVar4;
  *param_1 = uVar3;
  return;
}

