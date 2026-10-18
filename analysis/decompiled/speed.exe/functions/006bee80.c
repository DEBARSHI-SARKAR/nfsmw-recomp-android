/* speed.exe 006bee80 FUN_006bee80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006bee80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  param_2[3] = 0x3f800000;
  param_2[2] = uVar2;
  return;
}

