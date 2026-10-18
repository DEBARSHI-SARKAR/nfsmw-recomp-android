/* speed.exe 0081cd74 FUN_0081cd74; analysis pseudocode, not buildable source.
 * calls 00821c48 FUN_00821c48
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_0081cd74(undefined4 param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffff8;
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  FUN_0081bccb();
  iVar1 = FUN_00821c48(param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = (int)param_2;
    uVar2 = 0;
  }
  FUN_0081bcd9();
  return uVar2;
}

