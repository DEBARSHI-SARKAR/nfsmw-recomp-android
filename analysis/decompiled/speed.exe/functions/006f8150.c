/* speed.exe 006f8150 FUN_006f8150; analysis pseudocode, not buildable source.
 * calls 006f7fe0 FUN_006f7fe0
 * calls 005d59f0 FUN_005d59f0
 */

void FUN_006f8150(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00402830);
  FUN_006f7fe0(param_1,*(undefined4 *)(iVar1 + 8));
  return;
}

