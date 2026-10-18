/* speed.exe 00645ce0 FUN_00645ce0; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 */

void __fastcall FUN_00645ce0(int *param_1)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    if (DAT_009203a4 != 0) {
      do {
        if ((int *)(&DAT_0091e148)[uVar1] == param_1) goto LAB_00645d05;
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_009203a4);
    }
    uVar1 = 0xffffffff;
LAB_00645d05:
    FUN_00645bc0(DAT_00920428,uVar1,param_1[6],1,0);
    *param_1 = 0;
  }
  return;
}

