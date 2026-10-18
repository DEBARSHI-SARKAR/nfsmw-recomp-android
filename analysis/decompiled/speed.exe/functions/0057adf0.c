/* speed.exe 0057adf0 FUN_0057adf0; analysis pseudocode, not buildable source.
 * calls 005251e0 FUN_005251e0
 * calls 00573140 FUN_00573140
 */

void __thiscall FUN_0057adf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00573140(&DAT_008a0dac,param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_005251e0(*(undefined4 *)(param_1 + 0x14),uVar1);
  return;
}

