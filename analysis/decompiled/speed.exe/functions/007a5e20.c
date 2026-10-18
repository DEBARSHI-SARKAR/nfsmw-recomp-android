/* speed.exe 007a5e20 FUN_007a5e20; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_007a5e20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x7ab5521a;
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == '\0') {
    uVar1 = 0x163c76;
  }
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),uVar1,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x30),uVar1,1);
  FUN_00514d10(*(undefined4 *)(param_1 + 0x50),uVar1,1);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00514c70(*(int *)(param_1 + 0x24));
    FUN_00514d10(*(undefined4 *)(param_1 + 0x24),0x7ab5521a,1);
  }
  return;
}

