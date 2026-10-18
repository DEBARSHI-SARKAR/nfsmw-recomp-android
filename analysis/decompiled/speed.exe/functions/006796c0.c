/* speed.exe 006796c0 FUN_006796c0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 004546a0 FUN_004546a0
 * calls 0066c9a0 FUN_0066c9a0
 */

undefined4 FUN_006796c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0066c9a0(param_1);
  if (cVar2 != '\0') {
    iVar3 = FUN_00452430();
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      iVar3 = FUN_004546a0();
    }
    for (puVar1 = (undefined4 *)*DAT_0092c4e8; puVar1 != DAT_0092c4e8;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[0xb] == iVar3) {
        *param_2 = puVar1[8];
        param_2[1] = puVar1[9];
        param_2[2] = puVar1[10];
        return 1;
      }
    }
  }
  return 0;
}

