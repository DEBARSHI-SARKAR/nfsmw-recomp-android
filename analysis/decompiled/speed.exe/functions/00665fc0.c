/* speed.exe 00665fc0 FUN_00665fc0; analysis pseudocode, not buildable source.
 * calls 00466370 FUN_00466370
 * calls 0045cdd0 FUN_0045cdd0
 * calls 00667440 FUN_00667440
 * calls 00445c10 FUN_00445c10
 * calls 006484e0 FUN_006484e0
 * calls 007ed243 FUN_007ed243
 * calls 00516d70 FUN_00516d70
 * calls 006bd830 FUN_006bd830
 * calls 00603a40 FUN_00603a40
 * calls 004cc3a0 FUN_004cc3a0
 * calls 00664670 FUN_00664670
 * calls 0064ce60 FUN_0064ce60
 * calls 00725700 FUN_00725700
 * calls 00662b30 FUN_00662b30
 * calls 00735360 FUN_00735360
 * calls 004662d0 FUN_004662d0
 * calls 006bcc80 FUN_006bcc80
 * calls 0054ea80 FUN_0054ea80
 * calls 006274a0 FUN_006274a0
 * calls 00661cc0 FUN_00661cc0
 * calls 00741ed0 FUN_00741ed0
 * calls 00466200 FUN_00466200
 * calls 00660910 FUN_00660910
 * calls 00683eb0 FUN_00683eb0
 * calls 007ed62f FUN_007ed62f
 * calls 0073eb20 FUN_0073eb20
 * calls 0065fa00 FUN_0065fa00
 * calls 0066b690 FUN_0066b690
 * calls 006cba50 FUN_006cba50
 * calls 00627970 FUN_00627970
 * calls 00633ec0 FUN_00633ec0
 * calls 00591d50 FUN_00591d50
 * calls 005009d0 FUN_005009d0
 * calls 004ff0a0 FUN_004ff0a0
 * calls 00634370 FUN_00634370
 * calls 0045ce40 FUN_0045ce40
 * calls 00661430 FUN_00661430
 * calls 007708f0 FUN_007708f0
 * calls 005fa430 FUN_005fa430
 * calls 0047f310 FUN_0047f310
 * calls 00667640 FUN_00667640
 * calls 005abad0 FUN_005abad0
 * calls 005ef5b0 FUN_005ef5b0
 * calls 006cb400 FUN_006cb400
 * calls 0063cd00 thunk_FUN_0063cbf0
 * calls 00664780 FUN_00664780
 * calls 006657c0 FUN_006657c0
 * calls 0045e2f0 FUN_0045e2f0
 * calls 006cb3f0 FUN_006cb3f0
 * calls 007376c0 FUN_007376c0
 * calls 005de2c0 FUN_005de2c0
 * calls 00460a40 FUN_00460a40
 * calls 00737990 FUN_00737990
 * calls 0075f560 FUN_0075f560
 * calls 006cbb40 FUN_006cbb40
 * calls 0065d970 FUN_0065d970
 * calls 0073a350 FUN_0073a350
 * calls 0064aba0 FUN_0064aba0
 * calls 0065f7a0 FUN_0065f7a0
 * calls 00739600 FUN_00739600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00665fc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_0091dd84 = &DAT_0064a650;
  FUN_00460a40(7);
  FUN_00460a40(8);
  FUN_00466200(0x1000);
  FUN_0045cdd0(0x476a6000);
  _DAT_009257fc = FUN_0045ce40();
  FUN_004662d0(0x8000);
  FUN_006cb400(param_1,param_2);
  FUN_00667640();
  FUN_0045e2f0();
  FUN_006cbb40();
  iVar1 = FUN_0065f7a0("NFS\\ZDIR.BIN");
  if (iVar1 != 0) {
    iVar1 = FUN_00661cc0("NFS\\ZDIR.BIN","NFS\\ZZDATA");
    if (iVar1 != 0) {
      FUN_007ed62f(iVar1);
      FUN_007ed243("discu:",1);
      FUN_0065fa00();
    }
  }
  FUN_006bcc80(param_1,param_2);
  FUN_00466370(0x1800);
  FUN_00667440();
  FUN_00660910();
  FUN_00661430();
  FUN_0064ce60();
  FUN_00725700();
  FUN_006bd830();
  FUN_005009d0();
  FUN_006cb3f0();
  FUN_004ff0a0();
  FUN_0064aba0();
  FUN_004cc3a0();
  FUN_00591d50();
  FUN_00662b30();
  FUN_0054ea80();
  FUN_00664780();
  FUN_005abad0();
  FUN_00735360(param_1,param_2);
  FUN_00634370();
  thunk_FUN_0063cbf0();
  FUN_00516d70();
  uVar2 = 1;
  FUN_00634370(1);
  FUN_00627970(uVar2);
  FUN_00633ec0();
  FUN_006657c0();
  FUN_006484e0(0x3c888889);
  FUN_007708f0();
  FUN_006274a0(0);
  FUN_00664670();
  FUN_005fa430("GLOBAL\\GAMEPLAY.BIN");
  FUN_00603a40();
  FUN_005ef5b0();
  FUN_005de2c0();
  FUN_0066b690();
  FUN_007376c0();
  FUN_00737990();
  FUN_0073a350();
  FUN_0073eb20();
  FUN_0075f560();
  FUN_00741ed0();
  FUN_0065d970();
  FUN_00683eb0();
  FUN_00445c10();
  FUN_00739600();
  FUN_0047f310();
  FUN_006cba50(0);
  DAT_00925c38 = DAT_00925c38 + 1;
  return;
}

