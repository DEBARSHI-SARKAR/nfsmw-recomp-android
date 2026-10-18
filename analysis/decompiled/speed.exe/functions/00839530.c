/* speed.exe 00839530 FUN_00839530; analysis pseudocode, not buildable source.
 * calls 00838e70 FUN_00838e70
 * calls 00848200 FUN_00848200
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00839530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if (((iVar1 != 0) && (*(int **)(iVar1 + 0x100) != (int *)0x0)) &&
       ((*(uint *)(**(int **)(iVar1 + 0x100) + 0xf8) & 0x2000000) != 0)) {
      return 0xfffffffe;
    }
  }
  uVar2 = FUN_00838e70(param_1,param_2,0x200,0,param_3,param_4);
  return uVar2;
}

