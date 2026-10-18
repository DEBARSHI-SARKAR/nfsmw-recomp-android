/* speed.exe 0046b920 FUN_0046b920; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0046b920(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x90) = *param_2;
  *(undefined4 *)(param_1 + 0x94) = param_2[1];
  *(undefined4 *)(param_1 + 0x98) = param_2[2];
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  uVar1 = param_5[2];
  uVar2 = *param_5;
  *(undefined4 *)(param_1 + 0xb4) = param_5[1];
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  return;
}

