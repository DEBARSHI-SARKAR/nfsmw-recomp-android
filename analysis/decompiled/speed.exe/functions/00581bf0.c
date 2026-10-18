/* speed.exe 00581bf0 FUN_00581bf0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004e4ea0 FUN_004e4ea0
 */

undefined4 __fastcall FUN_00581bf0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  FUN_004e4ea0(*(undefined4 *)(param_1 + 8),0,0);
  uVar1 = *(undefined4 *)(local_c + 0x24);
  FUN_0045a430();
  return uVar1;
}

