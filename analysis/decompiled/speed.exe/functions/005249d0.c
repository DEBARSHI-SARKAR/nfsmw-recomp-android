/* speed.exe 005249d0 FUN_005249d0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b1360 FUN_005b1360
 * calls 00516af0 FUN_00516af0
 */

undefined4 FUN_005249d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00516af0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_005b1360(param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

