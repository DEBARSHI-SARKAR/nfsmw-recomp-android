/* speed.exe 00559e40 FUN_00559e40; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0054fb00 FUN_0054fb00
 */

void FUN_00559e40(int param_1)

{
  undefined4 *puVar1;
  
  FUN_0054fb00(param_1,*(undefined4 *)(param_1 + 0x800),param_1 + 0x804,param_1 + 0x904,
               param_1 + 0xa04);
  puVar1 = (undefined4 *)(DAT_0091cb20 + 0x30);
  if (*(int *)(DAT_0091cb20 + 0x30) != 0) {
    thunk_FUN_007c7250(*(int *)(DAT_0091cb20 + 0x30));
    *puVar1 = 0;
  }
  return;
}

