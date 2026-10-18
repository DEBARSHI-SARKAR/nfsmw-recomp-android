/* speed.exe 0056ac20 FUN_0056ac20; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 00516c90 FUN_00516c90
 * calls 00515ef0 FUN_00515ef0
 * calls 00514d10 FUN_00514d10
 * calls 005258b0 FUN_005258b0
 */

void __thiscall FUN_0056ac20(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != DAT_00925b14) {
    if (param_2 == 0xc407210) {
      if (*(int *)(param_3 + 0x10) == -0x47583934) {
        FUN_005258b0(1);
        FUN_00516c50(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x38),0xff);
        FUN_00516c50(*(undefined4 *)(param_1 + 0x44),"PC_menubar.fng",0xff);
        FUN_00516c90(0x7f6c5142,*(undefined4 *)(param_1 + 0x38),0);
      }
    }
    else if (param_2 == 0x35f8620b) {
      iVar1 = FUN_00515ef0(*(undefined4 *)(param_1 + 0x10));
      if (param_3 == iVar1) {
        FUN_00514d10(param_3,0x249db7b7,1);
        return;
      }
    }
    else if (param_2 == -0x6ee54c9c) {
      FUN_005258b0(1);
      FUN_00516c50(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x38),0xff);
      FUN_00516c90(0x7f6c5142,*(undefined4 *)(param_1 + 0x38),0);
      return;
    }
  }
  return;
}

