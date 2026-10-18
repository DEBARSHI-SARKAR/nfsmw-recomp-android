/* speed.exe 0080123c FUN_0080123c; analysis pseudocode, not buildable source.
 */

void FUN_0080123c(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[3];
  uVar1 = ((param_1[1] - 1) * param_3 >> 8) + 1;
  uVar4 = *param_1;
  while (uVar1 < 0x80) {
    uVar1 = uVar1 << 1;
    if ((int)uVar4 < 0) {
      uVar2 = param_1[4];
      while ((uVar2 = uVar2 - 1, -1 < (int)uVar2 && (*(char *)(param_1[5] + uVar2) == -1))) {
        *(char *)(param_1[5] + uVar2) = '\0';
      }
      *(char *)(uVar2 + param_1[5]) = *(char *)(uVar2 + param_1[5]) + '\x01';
    }
    uVar4 = uVar4 << 1;
    uVar3 = uVar3 + 1;
    if (uVar3 == 0) {
      *(char *)(param_1[5] + param_1[4]) = (char)(uVar4 >> 0x18);
      param_1[4] = param_1[4] + 1;
      uVar3 = 0xfffffff8;
      uVar4 = uVar4 & 0xffffff;
    }
  }
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[1] = uVar1;
  return;
}

