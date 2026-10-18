/* speed.exe 00844d40 FUN_00844d40; analysis pseudocode, not buildable source.
 * calls 00853080 FUN_00853080
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 * calls 00853070 FUN_00853070
 * calls 00846110 FUN_00846110
 */

int FUN_00844d40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1834);
  if ((param_2 < 0) || (0x1c < param_2)) {
    return 0;
  }
  if ((iVar4 != 0) && (iVar1 = *(int *)(iVar4 + param_2 * 0x14), iVar1 != 0)) {
    if (param_2 != 0) {
      iVar4 = FUN_00852e60(iVar1,param_3);
      return iVar4;
    }
    FUN_00853070(iVar1);
    iVar2 = FUN_00853080(iVar1,0);
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = FUN_0083e2e0(*(undefined4 *)(iVar4 + 4),iVar2);
      iVar3 = FUN_00846110(iVar3 + 0x20,param_3);
      if (iVar3 == 0) break;
      iVar2 = FUN_00853080(iVar1,0);
    }
    return iVar2;
  }
  return 0;
}

