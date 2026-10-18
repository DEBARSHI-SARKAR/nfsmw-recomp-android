/* speed.exe 00834a70 FUN_00834a70; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00834a70(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 local_c;
  int local_8;
  
  iVar4 = 0;
  uVar2 = (uint)(*(byte *)(unaff_ESI + 2) >> 2);
  local_c = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = unaff_ESI + (uint)*(byte *)(unaff_ESI + 8 + iVar4) * 4;
      if (*(byte *)(iVar1 + 2) == param_1) {
        return 1;
      }
      local_8 = 0;
      if (0 < *(char *)(iVar1 + 4)) {
        pbVar3 = (byte *)(iVar1 + 0xc);
        do {
          if (*pbVar3 == param_1) {
            local_c = 1;
            break;
          }
          local_8 = local_8 + 1;
          pbVar3 = pbVar3 + 8;
        } while (local_8 < *(char *)(iVar1 + 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return local_c;
}

