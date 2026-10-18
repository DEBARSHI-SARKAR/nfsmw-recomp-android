/* speed.exe 004c40c0 FUN_004c40c0; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 0081b9a6 FUN_0081b9a6
 * calls 0081b94b FUN_0081b94b
 * calls 0081b7ae FUN_0081b7ae
 * calls 0081d785 FUN_0081d785
 * calls 00464a50 FUN_00464a50
 * calls 0081b662 FUN_0081b662
 * calls 0081b546 FUN_0081b546
 * calls 0081b341 FUN_0081b341
 * calls 00830f8c FUN_00830f8c
 * calls 008319cb FUN_008319cb
 * calls 00464080 FUN_00464080
 * calls 0081d73e FUN_0081d73e
 * calls 0081b3c8 FUN_0081b3c8
 * calls 00465a70 FUN_00465a70
 * calls 0081b611 FUN_0081b611
 * calls 0081b269 FUN_0081b269
 * calls 004ba6f0 FUN_004ba6f0
 */

undefined4 __fastcall FUN_004c40c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_5;
  undefined1 local_4 [4];
  
  if (DAT_008f86f8 == 0) {
    DAT_008f8704 = 0;
    DAT_008f8700 = 0;
    DAT_008f86fc = 0;
  }
  else {
    local_5 = 0;
    iVar1 = FUN_0081b3c8(1,&local_5);
    if (-1 < iVar1) {
      DAT_00911f58 = FUN_004662e0(DAT_00911f5c,0x100,"AUD:Csis SlotPools",DAT_008ee558);
      FUN_00830f8c(&PTR_PTR_008eeb04);
      FUN_008319cb();
      FUN_0081d785();
      FUN_0081d73e();
      FUN_0081b269(0x20);
      *(undefined4 *)(param_1 + 0xc) = 0x64000;
      iVar1 = FUN_00464080(DAT_008ee558);
      if (iVar1 < 0x64000) {
        FUN_00464a50(DAT_008ee558,0,0x7fffffff);
        uVar2 = FUN_00465a70(0x64000,0x1000);
      }
      else {
        uVar2 = FUN_00465a70(0x64000,(DAT_008ee558 & 0xf) + 0x1000);
      }
      *(undefined4 *)(param_1 + 4) = uVar2;
      FUN_0081b546(0,DAT_008ee648);
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = 1;
      FUN_004ba6f0(1);
      if ((DAT_00982c00 == 0) || (DAT_008ee650 = 0xac44, DAT_00982c00 == 1)) {
        DAT_008ee650 = 0x5622;
      }
      if (DAT_009120b4 != 0) {
        DAT_008ee650 = DAT_009120b4;
      }
      FUN_0081b662(0,local_4);
      FUN_0081b611(0,0x40);
      FUN_0081b662(0,local_4);
      FUN_0081b341(DAT_008ee64c);
      FUN_0081b546(0,DAT_008ee650);
      FUN_0081b94b(0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
      FUN_0081b9a6(0,0x3f800000);
      FUN_0081b7ae(0x90600);
      return 1;
    }
  }
  return 0;
}

