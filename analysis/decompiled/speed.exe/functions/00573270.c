/* speed.exe 00573270 FUN_00573270; analysis pseudocode, not buildable source.
 * calls 00515520 FUN_00515520
 * calls 005b2d80 FUN_005b2d80
 * calls 00515830 FUN_00515830
 */

void __thiscall FUN_00573270(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [16];
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_00515520(param_2,param_1 + 0x24,param_1 + 0x28);
    FUN_00515830(local_10,param_2);
    uVar1 = FUN_005b2d80();
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  return;
}

