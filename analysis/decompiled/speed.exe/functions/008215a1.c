/* speed.exe 008215a1 FUN_008215a1; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 */

void FUN_008215a1(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_009c2308 != 0) {
    FUN_0081eae9(DAT_009c22f4);
    iVar3 = 0;
    if (0 < DAT_0090bd18) {
      do {
        puVar2 = *(undefined4 **)(DAT_009c22fc + iVar3 * 4);
        while (puVar2 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)*puVar2;
          FUN_0081eae9(puVar2);
          puVar2 = puVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_0090bd18);
    }
    FUN_0081eae9(DAT_009c22fc);
    DAT_009c2308 = 0;
  }
  return;
}

