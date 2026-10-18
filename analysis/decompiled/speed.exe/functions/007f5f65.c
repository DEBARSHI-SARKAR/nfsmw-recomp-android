/* speed.exe 007f5f65 FUN_007f5f65; analysis pseudocode, not buildable source.
 */

void FUN_007f5f65(byte *param_1,ushort *param_2)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  ushort uVar6;
  
  if (*param_1 != 0) {
    iVar5 = -2 - (int)param_1;
    do {
      uVar6 = 0;
      if ((*param_1 == 0x5c) && (param_1[1] == 0x78)) {
        pbVar4 = param_1 + 2;
        do {
          bVar1 = *pbVar4;
          if (bVar1 == 0) break;
          if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
            if (((char)bVar1 < 'a') || ('f' < (char)bVar1)) goto LAB_007f5fca;
            sVar3 = bVar1 - 0x57;
          }
          else {
            sVar3 = bVar1 - 0x30;
          }
          uVar6 = uVar6 * 0x10 + sVar3;
          pbVar4 = pbVar4 + 1;
        } while ((int)(pbVar4 + iVar5) < 4);
        *param_2 = uVar6;
        param_1 = param_1 + 6;
        iVar2 = -6;
      }
      else {
LAB_007f5fca:
        *param_2 = (ushort)*param_1;
        param_1 = param_1 + 1;
        iVar2 = -1;
      }
      iVar5 = iVar5 + iVar2;
      param_2 = param_2 + 1;
    } while (*param_1 != 0);
  }
  *param_2 = 0;
  return;
}

