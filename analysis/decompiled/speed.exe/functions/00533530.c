/* speed.exe 00533530 FUN_00533530; analysis pseudocode, not buildable source.
 * calls 00520260 FUN_00520260
 * calls 00525940 FUN_00525940
 */

void __thiscall FUN_00533530(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00520260(param_3);
  *(int *)(param_1 + 0x158) = iVar1;
  FUN_00525940(*(undefined4 *)(iVar1 + 8),0,0,0);
  return;
}

