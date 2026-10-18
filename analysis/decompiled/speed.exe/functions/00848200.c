/* speed.exe 00848200 FUN_00848200; analysis pseudocode, not buildable source.
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 */

undefined4 FUN_00848200(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x8c8) != 0) && (param_2 != 0)) {
    iVar1 = FUN_00852e60(*(int *)(param_1 + 0x8c8),param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar1);
      return uVar2;
    }
  }
  return 0;
}

