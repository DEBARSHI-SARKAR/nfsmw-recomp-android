/* speed.exe 006bf540 FUN_006bf540; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_006bf540(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00460bf0(&PTR_LAB_008ae888,0,0);
  DAT_00982b48 = FUN_00503400(uVar1);
  uVar1 = FUN_00460bf0("RVM_MASK",0,0);
  DAT_00982b4c = FUN_00503400(uVar1);
  uVar1 = FUN_00460bf0("WHITE16X16_NOALPHA",0,0);
  DAT_00982b50 = FUN_00503400(uVar1);
  return;
}

