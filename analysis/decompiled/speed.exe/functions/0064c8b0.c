/* speed.exe 0064c8b0 FUN_0064c8b0; analysis pseudocode, not buildable source.
 */

int FUN_0064c8b0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      if (DAT_009258e4 <= DAT_009258e8) {
        return iVar5;
      }
      bVar2 = *(byte *)(DAT_009258ec + DAT_009258e8);
      uVar4 = (uint)(bVar2 >> 4);
      uVar7 = 0;
      if (uVar4 != 0) {
        pbVar6 = (byte *)(DAT_009258ec + DAT_009258e8) + uVar4;
        uVar3 = uVar4;
        do {
          uVar7 = uVar7 << 8 | (uint)*pbVar6;
          pbVar6 = pbVar6 + -1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      DAT_009258e8 = DAT_009258e8 + 1 + uVar4;
      if (((bVar2 & 0xf) == param_3) && (uVar4 != 0)) {
        bVar2 = 0;
        do {
          bVar1 = bVar2 & 0x1f;
          iVar5 = iVar5 + 1;
          bVar2 = bVar2 + 8;
          uVar4 = uVar4 - 1;
          *(char *)(param_1 + -1 + iVar5) = (char)(uVar7 >> bVar1);
        } while (uVar4 != 0);
      }
    } while (iVar5 < param_2);
  }
  return iVar5;
}

