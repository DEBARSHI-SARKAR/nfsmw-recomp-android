/* speed.exe 0078ea20 FUN_0078ea20; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000011 GetTickCount
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0078ea20(void)

{
  float fVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  DVar2 = GetTickCount();
  iVar5 = DVar2 - _DAT_009b40d8;
  iVar4 = 0;
  do {
    if (_DAT_00890968 < (float)(&DAT_00905de8)[iVar4]) {
      iVar3 = iVar5 - (&DAT_009b40a0)[iVar4];
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + _DAT_00891214;
      }
      if (_DAT_0089096c / (float)(&DAT_00905de8)[iVar4] < fVar1 * _DAT_00890d60 !=
          (_DAT_0089096c / (float)(&DAT_00905de8)[iVar4] == fVar1 * _DAT_00890d60)) {
        if ((iVar4 != 0) && (uVar6 == 0)) {
          return 0;
        }
        (&DAT_009b40a0)[iVar4] = iVar5;
        uVar6 = uVar6 | 1 << ((byte)iVar4 & 0x1f);
      }
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return uVar6;
    }
  } while( true );
}

