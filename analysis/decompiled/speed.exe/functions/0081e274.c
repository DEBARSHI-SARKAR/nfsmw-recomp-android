/* speed.exe 0081e274 FUN_0081e274; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0081f39d FUN_0081f39d
 * calls 0081e228 FUN_0081e228
 */

undefined4 FUN_0081e274(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_009c2188 != '\0') {
    puVar1 = (undefined4 *)(&DAT_009c1f44)[param_1];
    FUN_0081f39d(*puVar1);
    FUN_0081e228();
    iVar2 = 0;
    *puVar1 = 0xffffffff;
    if (*(char *)((int)puVar1 + 0x62) != '\0') {
      piVar3 = puVar1 + 0x19;
      do {
        if (*piVar3 != 0) {
          FUN_0081eae9(*piVar3);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < (int)(uint)*(byte *)((int)puVar1 + 0x62));
    }
    return 0;
  }
  return 0xfffffff6;
}

