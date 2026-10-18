/* speed.exe 00530240 FUN_00530240; analysis pseudocode, not buildable source.
 * calls 005119d0 FUN_005119d0
 * calls 00508b10 FUN_00508b10
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_00530240(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00503360(param_1 + 0x20,*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_005119d0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    FUN_00508b10(param_1 + 0x20,uVar1,&LAB_0052edb0,param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

