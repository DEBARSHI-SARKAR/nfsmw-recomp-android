/* speed.exe 00728ce0 FUN_00728ce0; analysis pseudocode, not buildable source.
 */

int FUN_00728ce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_009aa478;
  if ((undefined4 **)DAT_009aa478 != &DAT_009aa478) {
    do {
      iVar3 = 0;
      if (0 < (int)puVar4[9]) {
        iVar2 = puVar4[8];
        do {
          iVar1 = *(int *)(puVar4[6] + *(short *)(iVar2 + 0x3e) * 0x48 + 0x28);
          if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == param_1)) {
            return iVar2;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x40;
        } while (iVar3 < (int)puVar4[9]);
      }
      puVar4 = (undefined4 *)*puVar4;
    } while ((undefined4 **)puVar4 != &DAT_009aa478);
  }
  return 0;
}

