/* speed.exe 0046e2d0 FUN_0046e2d0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall FUN_0046e2d0(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00460bf0(param_2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_00460ca0(param_1 + 100,param_3,0xd);
  *(undefined1 *)(param_1 + 0x71) = 0;
  DAT_008f9b28 = *param_3 == '\0';
  return;
}

