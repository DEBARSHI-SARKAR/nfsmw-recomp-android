/* speed.exe 0064e940 FUN_0064e940; analysis pseudocode, not buildable source.
 * calls 0064e940 FUN_0064e940
 */

void FUN_0064e940(int param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (0x10 < param_4) {
    FUN_0064e940(param_1,param_2,param_3 >> 0x10,param_4 - 0x10);
    param_4 = 0x10;
  }
  uVar1 = *(int *)(param_1 + 0x2da8) + param_4;
  *(uint *)(param_1 + 0x2da8) = uVar1;
  *(int *)(param_1 + 0x2dac) =
       *(int *)(param_1 + 0x2dac) +
       ((*(uint *)(param_1 + 0x2d64 + param_4 * 4) & param_3) << (0x18U - (char)uVar1 & 0x1f));
  while (7 < uVar1) {
    *(undefined1 *)(param_2[1] + *param_2) = *(undefined1 *)(param_1 + 0x2dae);
    param_2[1] = param_2[1] + 1;
    *(int *)(param_1 + 0x2da8) = *(int *)(param_1 + 0x2da8) + -8;
    *(int *)(param_1 + 0x2dac) = *(int *)(param_1 + 0x2dac) << 8;
    *(int *)(param_1 + 0x2de4) = *(int *)(param_1 + 0x2de4) + 1;
    uVar1 = *(uint *)(param_1 + 0x2da8);
  }
  return;
}

