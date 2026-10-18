/* speed.exe 007f7363 FUN_007f7363; analysis pseudocode, not buildable source.
 */

void FUN_007f7363(ushort *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  ushort uVar6;
  
  if (*param_2 != 0) {
    iVar5 = -2 - (int)param_2;
    do {
      uVar6 = 0;
      if ((*param_2 == 0x5c) && (param_2[1] == 0x78)) {
        pbVar4 = param_2 + 2;
        do {
          bVar1 = *pbVar4;
          if (bVar1 == 0) break;
          if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
            if (((char)bVar1 < 'a') || ('f' < (char)bVar1)) goto LAB_007f73c8;
            sVar3 = bVar1 - 0x57;
          }
          else {
            sVar3 = bVar1 - 0x30;
          }
          uVar6 = uVar6 * 0x10 + sVar3;
          pbVar4 = pbVar4 + 1;
        } while ((int)(pbVar4 + iVar5) < 4);
        *param_1 = uVar6;
        param_2 = param_2 + 6;
        iVar2 = -6;
      }
      else {
LAB_007f73c8:
        *param_1 = (ushort)*param_2;
        param_2 = param_2 + 1;
        iVar2 = -1;
      }
      iVar5 = iVar5 + iVar2;
      param_1 = param_1 + 1;
    } while (*param_2 != 0);
  }
  *param_1 = 0;
  return;
}

