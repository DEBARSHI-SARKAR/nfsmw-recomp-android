/* speed.exe 006cb1e0 FUN_006cb1e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006cb1e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_008faf20 != 0) {
    puVar2 = &DAT_008faf20;
    iVar1 = DAT_008faf20;
    do {
      if ((iVar1 == param_1) && (puVar2[1] == param_2)) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      iVar1 = puVar2[3];
      puVar2 = puVar2 + 3;
    } while (iVar1 != 0);
  }
  return 0;
}

