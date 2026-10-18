/* speed.exe 006126a0 FUN_006126a0; analysis pseudocode, not buildable source.
 * calls 0060e9d0 FUN_0060e9d0
 * calls 00606d50 FUN_00606d50
 * calls 00613880 FUN_00613880
 * calls 0060e7d0 FUN_0060e7d0
 * calls 00606980 FUN_00606980
 */

void FUN_006126a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 1;
  uVar1 = *(ushort *)(param_1 + 0x2e);
  if (199 < uVar1) {
    if (uVar1 == 200) {
      FUN_00613880(param_1,"C stack overflow");
    }
    else if (0xe0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,5);
    }
  }
  iVar2 = FUN_0060e7d0(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_0060e9d0(param_1);
  }
  FUN_00606d50(param_1,param_3,iVar2);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + -1;
  return;
}

