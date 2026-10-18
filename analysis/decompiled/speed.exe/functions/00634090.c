/* speed.exe 00634090 FUN_00634090; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 */

void __thiscall FUN_00634090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_009203a4 != 0) {
    do {
      if ((&DAT_0091e148)[uVar1] == param_1) goto LAB_006340b1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_009203a4);
  }
  uVar1 = 0xffffffff;
LAB_006340b1:
  FUN_00645bc0(DAT_0092040c,uVar1,param_2,param_3,param_4);
  return;
}

