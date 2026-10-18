/* speed.exe 0079f450 FUN_0079f450; analysis pseudocode, not buildable source.
 * calls 007939a0 FUN_007939a0
 * calls 0079f090 FUN_0079f090
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0079b890 FUN_0079b890
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007983d0 FUN_007983d0
 * calls 0079c410 FUN_0079c410
 * calls 0079e100 FUN_0079e100
 * calls 00790df0 FUN_00790df0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00793460 FUN_00793460
 * calls 00793b50 FUN_00793b50
 * calls 0078e7d0 FUN_0078e7d0
 * calls 00794f80 FUN_00794f80
 * calls 004655f0 FUN_004655f0
 * calls 00844b00 FUN_00844b00
 * calls 0078c730 FUN_0078c730
 * calls 00795060 FUN_00795060
 * calls 0079ca30 FUN_0079ca30
 * calls 0079bac0 FUN_0079bac0
 * calls 00796d30 FUN_00796d30
 * calls 00799f50 FUN_00799f50
 * calls 0079a6d0 FUN_0079a6d0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079f450(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  FUN_0079f090();
  FUN_0079e100();
  FUN_0079bac0();
  FUN_0079b890();
  iVar1 = FUN_0079ca30();
  FUN_0079c410();
  puVar5 = (undefined4 *)(iVar1 + 8);
  for (iVar4 = 0x19d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  piVar2 = (int *)FUN_0079a6d0();
  iVar1 = FUN_00794f80();
  if ((*(int *)(iVar1 + 0x38) != 0) && (*piVar2 != 0)) {
    iVar1 = FUN_00794f80(0,*piVar2);
    FUN_00844b00(*(undefined4 *)(iVar1 + 0x38));
    *piVar2 = 0;
  }
  piVar2[1] = 0;
  piVar2[2] = 0;
  *(undefined1 *)(piVar2 + 3) = 0;
  FUN_0079a9e0();
  FUN_007983d0();
  FUN_00799f50();
  FUN_00795060();
  iVar1 = FUN_00796d30();
  FUN_00793b50();
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x228) = 0;
  FUN_0078e7d0();
  FUN_0078e7d0();
  *(undefined1 *)(iVar1 + 0x22c) = 0;
  FUN_004655f0(*(undefined4 *)(iVar1 + 0x230));
  *(undefined4 *)(iVar1 + 0x230) = 0;
  puVar3 = (undefined1 *)FUN_007939a0();
  *puVar3 = 0;
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    FUN_0078c730();
    FUN_00790df0();
  }
  FUN_00794f80();
  FUN_00793460();
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}

