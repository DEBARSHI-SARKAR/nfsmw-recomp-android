/* speed.exe 00533460 FUN_00533460; analysis pseudocode, not buildable source.
 * calls 007a0f50 FUN_007a0f50
 * calls 00525a70 FUN_00525a70
 * calls 00525940 FUN_00525940
 * calls 00460d20 FUN_00460d20
 */

void FUN_00533460(int param_1)

{
  int iVar1;
  
  FUN_007a0f50();
  if (DAT_0091ca68 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091ca68)(1);
  }
  DAT_0091ca68 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (*DAT_0091cadc != -0xd8) {
      for (iVar1 = *(int *)(*DAT_0091cadc + 0xe4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          iVar1 = FUN_00460d20(*(undefined4 *)(iVar1 + 0xc),param_1);
          if (iVar1 != 0) {
            FUN_00525a70(param_1);
          }
          break;
        }
      }
    }
    FUN_00525940("MainMenu.fng",0,0xff,0);
  }
  return;
}

