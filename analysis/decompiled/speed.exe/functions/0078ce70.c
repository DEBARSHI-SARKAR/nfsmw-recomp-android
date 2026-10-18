/* speed.exe 0078ce70 FUN_0078ce70; analysis pseudocode, not buildable source.
 * calls 00838260 FUN_00838260
 */

undefined4 __fastcall FUN_0078ce70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    uVar1 = FUN_00838260(*(int *)(param_1 + 0xf8));
    return uVar1;
  }
  return 0;
}

