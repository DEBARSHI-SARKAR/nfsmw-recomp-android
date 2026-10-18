/* speed.exe 006eeb70 FUN_006eeb70; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006eeb70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(param_1 + -0xc);
  uVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0xc))();
  param_3[0x14] = uVar2;
  param_3[0x15] = *(undefined4 *)(param_1 + -4);
  (**(code **)(*piVar1 + 0x3c))(auStack_40);
  *param_3 = uStack_14;
  param_3[1] = uStack_10;
  param_3[2] = uStack_c;
  param_3[3] = uStack_8;
  param_3[4] = uStack_24;
  param_3[5] = uStack_20;
  param_3[6] = uStack_1c;
  param_3[7] = uStack_18;
  (**(code **)(*piVar1 + 0x34))(param_3 + 8);
  (**(code **)(*piVar1 + 0x38))(param_3 + 0xc);
  if (*(int *)(param_1 + 0x1c) != 0) {
    param_3[0x12] = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
  }
  return 1;
}

