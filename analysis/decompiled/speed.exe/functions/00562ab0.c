/* speed.exe 00562ab0 FUN_00562ab0; analysis pseudocode, not buildable source.
 * calls 00518c50 FUN_00518c50
 * calls 00526800 FUN_00526800
 * calls 005184d0 FUN_005184d0
 * calls 00560940 FUN_00560940
 */

void __thiscall FUN_00562ab0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_005184d0(param_2);
  if ((cVar1 != '\0') && (*(char *)(DAT_0091cf90 + 3) != '\0')) {
    if (((byte)DAT_0091cbac & 0xf0) != 0xb0) {
      FUN_00518c50();
      DAT_0091cbac = 0;
    }
    if (*(char *)(param_1 + 0x24) != '\0') {
      FUN_00560940();
      return;
    }
    *(undefined1 *)(param_1 + 0x1e) = 1;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *DAT_0091cae0 = 1;
    FUN_00526800();
  }
  return;
}

