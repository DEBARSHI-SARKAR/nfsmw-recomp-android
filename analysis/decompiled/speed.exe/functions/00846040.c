/* speed.exe 00846040 FUN_00846040; analysis pseudocode, not buildable source.
 * calls 007c5f80 _tolower
 */

byte * FUN_00846040(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *local_4;
  
  local_4 = (byte *)0x0;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    return (byte *)0x0;
  }
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar4 = _tolower((uint)*param_2);
    bVar3 = *param_1;
    if (bVar3 != 0) {
      do {
        iVar5 = _tolower((uint)bVar3);
        pbVar7 = param_1;
        if (iVar5 == iVar4) {
          if (param_2[1] != 0) {
            pbVar2 = param_2;
            do {
              pbVar8 = pbVar2 + 1;
              if (pbVar8[(int)param_1 - (int)param_2] == 0) goto LAB_008460e8;
              iVar5 = _tolower((uint)pbVar8[(int)param_1 - (int)param_2]);
              iVar6 = _tolower((uint)*pbVar8);
              if (iVar5 != iVar6) goto LAB_008460e8;
              pbVar1 = pbVar2 + 2;
              pbVar2 = pbVar8;
            } while (*pbVar1 != 0);
          }
          pbVar7 = &DAT_00890978;
          local_4 = param_1;
        }
LAB_008460e8:
        bVar3 = pbVar7[1];
        param_1 = pbVar7 + 1;
        if (bVar3 == 0) {
          return local_4;
        }
      } while( true );
    }
  }
  return (byte *)0x0;
}

