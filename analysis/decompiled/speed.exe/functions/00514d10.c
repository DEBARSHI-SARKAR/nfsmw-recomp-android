/* speed.exe 00514d10 FUN_00514d10; analysis pseudocode, not buildable source.
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 */

void FUN_00514d10(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = FUN_005b1360(param_2), iVar1 != 0)) &&
     (FUN_005b8400(iVar1,0), param_3 != '\0')) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

