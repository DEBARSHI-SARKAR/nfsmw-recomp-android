/* speed.exe 006809a0 FUN_006809a0; analysis pseudocode, not buildable source.
 * calls 00674a50 FUN_00674a50
 */

int __fastcall FUN_006809a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00674a50();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

