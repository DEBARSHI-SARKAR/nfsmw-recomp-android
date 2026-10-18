/* speed.exe 00848c80 FUN_00848c80; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 00851aa0 FUN_00851aa0
 * calls 00847850 FUN_00847850
 */

undefined4 FUN_00848c80(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x44495343,0,&DAT_00890978,0xffffffff);
  FUN_00851aa0(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x10) == 5) {
    *(undefined4 *)(param_1 + 0x10) = 6;
    if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
      uStack_14 = 6;
      uStack_18 = 0x636f6e6e;
      uStack_10 = 0;
      uStack_4 = 0;
      (**(code **)(param_1 + 0x8e8))(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x8e4));
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
      uStack_18 = 0x636f6e6e;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 0;
      (**(code **)(param_1 + 0x8e8))(param_1,&uStack_18,*(undefined4 *)(param_1 + 0x8e4));
    }
  }
  FUN_00847850(param_1);
  if (*(int *)(param_1 + 0x1a8) == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  return 0;
}

