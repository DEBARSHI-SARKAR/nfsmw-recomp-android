/* speed.exe 0045cd30 FUN_0045cd30; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004b IsBadReadPtr
 */

bool FUN_0045cd30(void *param_1,int param_2)

{
  BOOL BVar1;
  
  if (((uint)param_1 & param_2 - 1U) != 0) {
    return false;
  }
  BVar1 = IsBadReadPtr(param_1,1);
  return BVar1 == 0;
}

