/* speed.exe 00788890 FUN_00788890; analysis pseudocode, not buildable source.
 * calls 007652f0 FUN_007652f0
 * calls 0076e220 FUN_0076e220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 005fcae0 FUN_005fcae0
 * calls 007862d0 FUN_007862d0
 * calls 005fb340 FUN_005fb340
 */

void FUN_00788890(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char local_2a4;
  short local_266;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008823fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007652f0();
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
    FUN_0077b9e0();
    local_4 = 0;
    iVar2 = FUN_005fcae0();
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = FUN_005fb340(iVar4);
        if ((iVar3 != 0) &&
           (FUN_007862d0(iVar3 + 0x28,iVar3 + 0x34,1,0x3f800000), local_2a4 != '\0')) {
          *(char *)(DAT_009b38c8 + *(short *)(local_266 * 0x16 + 6 + DAT_009b38c0) * 8 + 4) =
               (char)iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    uVar5 = 0;
    if (DAT_009b3874 != 0) {
      iVar4 = 0;
      iVar2 = DAT_009b38c0;
      do {
        iVar3 = (int)*(short *)(iVar4 + 6 + iVar2);
        if ((iVar3 != -1) && (*(char *)(DAT_009b38c8 + 4 + iVar3 * 8) != -1)) {
          pbVar1 = (byte *)(iVar4 + 10 + iVar2);
          *pbVar1 = *pbVar1 | 0x80;
          iVar2 = DAT_009b38c0;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x16;
      } while (uVar5 < DAT_009b3874);
    }
    local_4 = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = local_c;
  return;
}

