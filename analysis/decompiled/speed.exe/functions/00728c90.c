/* speed.exe 00728c90 FUN_00728c90; analysis pseudocode, not buildable source.
 */

int FUN_00728c90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_009aa478;
  if ((undefined4 **)DAT_009aa478 != &DAT_009aa478) {
    do {
      iVar2 = 0;
      if (0 < (int)puVar3[7]) {
        iVar1 = puVar3[6];
        do {
          if ((*(int *)(iVar1 + 0x28) != 0) && (*(int *)(*(int *)(iVar1 + 0x28) + 8) == param_1)) {
            return iVar1;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < (int)puVar3[7]);
      }
      puVar3 = (undefined4 *)*puVar3;
    } while ((undefined4 **)puVar3 != &DAT_009aa478);
  }
  return 0;
}

