/* speed.exe 004543c0 FUN_004543c0; analysis pseudocode, not buildable source.
 * calls 004542c0 FUN_004542c0
 */

undefined4 __fastcall FUN_004543c0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_004542c0(*param_1,param_1 + 2);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

