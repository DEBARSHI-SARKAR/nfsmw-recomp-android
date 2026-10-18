/* speed.exe 00721fc0 FUN_00721fc0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00721fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  uVar2 = FUN_007c4b80();
  uVar3 = FUN_007c4b80();
  uVar4 = FUN_007c4b80();
  uVar1 = *param_2;
  param_1[1] = (float)extraout_ST1;
  param_1[2] = (float)extraout_ST0;
  *(undefined1 *)(param_1 + 3) = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0xd) = uVar3;
  *(undefined1 *)((int)param_1 + 0xe) = uVar4;
  return;
}

