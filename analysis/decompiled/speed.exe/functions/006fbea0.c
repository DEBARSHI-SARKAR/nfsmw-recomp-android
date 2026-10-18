/* speed.exe 006fbea0 FUN_006fbea0; analysis pseudocode, not buildable source.
 * calls 006fbda0 FUN_006fbda0
 * calls 005d59f0 FUN_005d59f0
 */

void FUN_006fbea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005d59f0(&LAB_00402830);
  FUN_006fbda0(param_1,*(undefined4 *)(iVar1 + 8),param_3);
  return;
}

