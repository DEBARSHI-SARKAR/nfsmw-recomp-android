/* speed.exe 00525b20 FUN_00525b20; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00525b20(char param_1)

{
  int iVar1;
  
  if (*DAT_0091cae0 == '\0') {
    iVar1 = 0;
    do {
      if (DAT_0091cae0[iVar1 + 2] != '\0') {
        if (((param_1 != '\0') && (DAT_009885c8 == 0)) && (DAT_0091cb10 == 0)) {
          return 1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  return CONCAT31((int3)((uint)DAT_0091cae4 >> 8),DAT_0091cae4 != 0);
}

