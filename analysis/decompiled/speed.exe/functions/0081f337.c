/* speed.exe 0081f337 FUN_0081f337; analysis pseudocode, not buildable source.
 * calls 00823e2d FUN_00823e2d
 * calls 00823e53 FUN_00823e53
 * calls 00823c3e FUN_00823c3e
 * calls 008225bd FUN_008225bd
 */

undefined4 FUN_0081f337(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  FUN_008225bd(param_3);
  iVar1 = FUN_00823e53(param_1);
  if (iVar1 < 0) {
    return 0xfffffff8;
  }
  iVar1 = *(int *)(DAT_009c21f8 + param_1 * 8);
  if ((param_2 < 0) || ((int)(uint)*(ushort *)(iVar1 + 6) <= param_2)) {
    uVar2 = 0xfffffff8;
  }
  else {
    uVar2 = FUN_00823e2d(iVar1,param_2,param_1,param_2,param_3);
    uVar2 = FUN_00823c3e(iVar1,uVar2);
  }
  return uVar2;
}

