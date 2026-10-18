/* speed.exe 004fb940 FUN_004fb940; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004fb940(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  *param_2 = uVar5;
  param_2[2] = uVar1;
  param_2[3] = 0x3f800000;
  *param_3 = uVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = 0x3f800000;
  return;
}

