/* speed.exe 0079f050 FUN_0079f050; analysis pseudocode, not buildable source.
 * calls 007983d0 FUN_007983d0
 * calls 00840530 FUN_00840530
 * calls 00794f80 FUN_00794f80
 */

undefined4 __fastcall FUN_0079f050(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) != 0) {
    iVar1 = FUN_00794f80(1,FUN_0079e6e0,param_1);
    iVar1 = FUN_00840530(*(undefined4 *)(iVar1 + 0x38));
    if (-1 < iVar1) {
      return 0;
    }
    FUN_007983d0();
  }
  return 0xffffffff;
}

