/* speed.exe 005ad5b0 FUN_005ad5b0; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 */

undefined4 __fastcall FUN_005ad5b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = FUN_005ad440();
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x30);
}

