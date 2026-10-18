/* speed.exe 0073a920 FUN_0073a920; analysis pseudocode, not buildable source.
 * calls 004640f0 FUN_004640f0
 * calls 00465a70 FUN_00465a70
 * calls 00464080 FUN_00464080
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0073a920(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_20;
  int local_1c;
  char *local_14 [5];
  
  local_1c = 0;
  local_20 = 0;
  if (0 < DAT_009ae40c) {
    do {
      if (7 < local_20) break;
      iVar1 = DAT_009ae40c - local_1c;
      uVar7 = 0xffffffff;
      iVar6 = 0;
      local_14[0] = "Main Pool";
      local_14[1] = "Track Streaming";
      local_14[2] = "Audio Memory Pool";
      local_14[3] = "Speech Cache Memory Pool";
      local_14[4] = "FEngMemoryPool";
      iVar5 = 0;
      do {
        uVar2 = FUN_004640f0(local_14[iVar5]);
        if ((-1 < (int)uVar2) && (iVar3 = FUN_00464080(uVar2), iVar6 < iVar3)) {
          iVar6 = iVar3;
          uVar7 = uVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      if (iVar6 == 0) break;
      if (iVar1 < iVar6) {
        iVar6 = iVar1;
      }
      (&DAT_009ae3cc)[local_20] = iVar6;
      uVar4 = FUN_00465a70(iVar6,uVar7 & 0xf);
      (&DAT_009ae3ec)[local_20] = uVar4;
      local_1c = local_1c + iVar6;
      local_20 = local_20 + 1;
    } while (local_1c < DAT_009ae40c);
  }
  _DAT_009ae3c8 = local_20;
  return local_1c == DAT_009ae40c;
}

