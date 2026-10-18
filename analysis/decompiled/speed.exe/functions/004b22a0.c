/* speed.exe 004b22a0 FUN_004b22a0; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081cdc6 FUN_0081cdc6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b22a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0081cdc6(*(undefined4 *)(param_1 + 0x14),0xffffffff,(float)param_2 * _DAT_00896aec);
  FUN_0081bcd9();
  return uVar1;
}

