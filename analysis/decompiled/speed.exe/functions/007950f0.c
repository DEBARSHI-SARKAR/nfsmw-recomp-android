/* speed.exe 007950f0 FUN_007950f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00794f80 FUN_00794f80
 * calls 0083e390 FUN_0083e390
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_007950f0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = FUN_0083e390(param_3[iVar1 + -4]);
  if (param_3[iVar1 + 0x26] == iVar2) {
    *(undefined1 *)(iVar1 + 0x83 + (int)param_3) = 1;
    iVar2 = FUN_00794f80();
    iVar1 = *(int *)(iVar2 + 0x40);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) != 0x736e6170)) {
      if ((undefined4 *)*param_3 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00795176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)*param_3)();
        return;
      }
    }
    else {
      if (*(code **)(iVar1 + 0x18) != (code *)0x0) {
        (**(code **)(iVar1 + 0x18))(param_2,*(undefined4 *)(iVar1 + 0x1c));
      }
      iVar1 = *(int *)(iVar2 + 0x40);
      if (iVar1 != 0) {
        FUN_0078fbc0();
        thunk_FUN_007c7250(iVar1);
      }
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
  }
  return;
}

