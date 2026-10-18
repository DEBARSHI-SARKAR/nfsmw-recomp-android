/* speed.exe 00633880 FUN_00633880; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633880(uint *param_1,undefined4 param_2)

{
  do {
    if (DAT_008a569c == *param_1) {
      (*_DAT_008f66d8)(param_1,param_2);
      return;
    }
  } while (DAT_008a569c < *param_1 == 0xffffffff);
  return;
}

