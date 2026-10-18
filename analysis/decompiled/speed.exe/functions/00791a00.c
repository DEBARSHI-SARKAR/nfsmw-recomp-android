/* speed.exe 00791a00 FUN_00791a00; analysis pseudocode, not buildable source.
 * calls 0078e090 FUN_0078e090
 */

undefined4 __fastcall FUN_00791a00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x730);
  if (*(char *)(param_1 + 0x740) == '\0') {
    FUN_0078e090();
  }
  *(undefined4 *)(param_1 + 0x730) = 10;
  return uVar1;
}

