/* speed.exe 004fc990 FUN_004fc990; analysis pseudocode, not buildable source.
 */

void FUN_004fc990(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1 << ((char)param_2 - 2U & 0x1f);
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  *(undefined4 *)(param_1 + 0x80) = *param_7;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  param_1 = param_1 + param_2 * 0x1c;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}

