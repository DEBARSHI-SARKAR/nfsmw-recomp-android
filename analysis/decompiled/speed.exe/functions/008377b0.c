/* speed.exe 008377b0 FUN_008377b0; analysis pseudocode, not buildable source.
 * calls 0083e3e0 FUN_0083e3e0
 * calls 0083e440 FUN_0083e440
 * calls 00847b60 FUN_00847b60
 * calls 0083e480 FUN_0083e480
 */

undefined4 FUN_008377b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    FUN_0083e3e0(uVar2,param_1,0,*(undefined4 *)(param_1 + 0x40));
    uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8),1);
    FUN_0083e440(uVar2);
    uVar2 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    FUN_0083e480(uVar2);
  }
  return 0;
}

