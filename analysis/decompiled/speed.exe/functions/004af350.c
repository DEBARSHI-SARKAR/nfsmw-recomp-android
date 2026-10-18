/* speed.exe 004af350 FUN_004af350; analysis pseudocode, not buildable source.
 */

void FUN_004af350(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00912374;
  iVar1 = DAT_0091236c;
  if (DAT_00912374 != 0) {
    *(undefined1 *)(DAT_00912374 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x60) = DAT_00925ae8;
    return;
  }
  *(undefined1 *)(DAT_0091236c + 0x38) = 1;
  *(undefined4 *)(iVar1 + 0x60) = DAT_00925ae8;
  return;
}

