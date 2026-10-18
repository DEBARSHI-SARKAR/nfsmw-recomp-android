/* speed.exe 0083f840 FUN_0083f840; analysis pseudocode, not buildable source.
 * calls 0084bba0 FUN_0084bba0
 */

int FUN_0083f840(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0xe;
  if (uVar1 != *param_2) {
    return (uint)uVar1 - (uint)*param_2;
  }
  if (uVar1 == 2) {
    uVar3 = 6;
  }
  iVar2 = FUN_0084bba0(param_1 + 1,param_2 + 1,uVar3);
  return iVar2;
}

