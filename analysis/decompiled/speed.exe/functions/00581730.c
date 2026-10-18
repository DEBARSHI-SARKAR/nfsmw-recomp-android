/* speed.exe 00581730 FUN_00581730; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 */

undefined4 __fastcall FUN_00581730(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  FUN_0051e1a0(*(undefined4 *)(param_1 + 4),0,0);
  uVar1 = *(undefined4 *)(local_c + 0x4c);
  FUN_0045a430();
  return uVar1;
}

