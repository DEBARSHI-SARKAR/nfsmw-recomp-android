/* speed.exe 0075f4f0 FUN_0075f4f0; analysis pseudocode, not buildable source.
 * calls 0075f200 FUN_0075f200
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0075f4f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8 + param_2 * 4) != 0) {
    FUN_007c4b80();
    iVar1 = FUN_007c4b80();
    if (1 < iVar1) {
      FUN_0075f200(param_3,param_4);
    }
  }
  return;
}

