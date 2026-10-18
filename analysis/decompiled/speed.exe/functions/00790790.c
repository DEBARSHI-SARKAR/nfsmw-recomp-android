/* speed.exe 00790790 FUN_00790790; analysis pseudocode, not buildable source.
 * calls 0078be70 FUN_0078be70
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 */

bool FUN_00790790(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0078be70(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0083a670(iVar1 + 0x1c,&DAT_008b6cb4,0);
    iVar1 = FUN_0083abc0(uVar2);
    return iVar1 != 0;
  }
  return false;
}

