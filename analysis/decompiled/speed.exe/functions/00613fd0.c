/* speed.exe 00613fd0 FUN_00613fd0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 007c4b80 FUN_007c4b80
 * calls 00607d80 FUN_00607d80
 */

uint FUN_00613fd0(undefined4 param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  if (*in_EAX == 0) {
    return 0xffffffff;
  }
  if ((((*in_EAX == 3) && (iVar1 = FUN_007c4b80(), (float)in_EAX[1] == (float)iVar1)) && (0 < iVar1)
      ) && ((((iVar1 - 1U & 0xff000000) == 0 && (-1 < iVar1)) &&
            (iVar1 <= *(int *)(unaff_EDI + 0x1c))))) {
    return iVar1 - 1U;
  }
  puVar2 = (undefined4 *)FUN_00607d80();
  if (puVar2 == &DAT_008a3c5c) {
    FUN_00613880(param_1,"invalid key for `next\'");
  }
  return (uint)((int)puVar2 + (-8 - *(int *)(unaff_EDI + 0x10))) / 0x14 + *(int *)(unaff_EDI + 0x1c)
  ;
}

