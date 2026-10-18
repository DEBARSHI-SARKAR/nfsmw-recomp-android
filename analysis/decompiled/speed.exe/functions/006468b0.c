/* speed.exe 006468b0 FUN_006468b0; analysis pseudocode, not buildable source.
 * calls 00645bc0 FUN_00645bc0
 * calls 00644350 FUN_00644350
 */

void __thiscall FUN_006468b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00644350(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
  }
  uVar1 = 0;
  if (DAT_009203a4 != 0) {
    do {
      if ((&DAT_0091e148)[uVar1] == param_1) goto LAB_006468e6;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_009203a4);
  }
  uVar1 = 0xffffffff;
LAB_006468e6:
  FUN_00645bc0(DAT_00920414,uVar1,param_2,param_3,param_4);
  return;
}

