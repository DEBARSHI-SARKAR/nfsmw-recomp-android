/* speed.exe 00663d30 FUN_00663d30; analysis pseudocode, not buildable source.
 * calls 0045c030 FUN_0045c030
 * calls 00660950 FUN_00660950
 * calls 006e79f0 thunk_FUN_007605b0
 * calls 00634370 FUN_00634370
 * calls 0078c730 FUN_0078c730
 * calls 007358a0 FUN_007358a0
 * calls 00642e60 FUN_00642e60
 * calls 0045ce40 FUN_0045ce40
 * calls 006626b0 FUN_006626b0
 * calls 00667650 FUN_00667650
 * calls 007358b0 FUN_007358b0
 * calls 00661490 FUN_00661490
 * calls 0075aad0 FUN_0075aad0
 * calls 00645ec0 FUN_00645ec0
 * calls 0072e0c0 FUN_0072e0c0
 * calls 00735620 FUN_00735620
 * calls 0064b770 FUN_0064b770
 * calls 0065c6d0 FUN_0065c6d0
 * calls 0064a680 FUN_0064a680
 * calls 004d0610 FUN_004d0610
 * calls 006df8e0 FUN_006df8e0
 * calls 00661280 FUN_00661280
 * calls 006596a0 FUN_006596a0
 * calls 006c6e90 FUN_006c6e90
 * calls 00724290 FUN_00724290
 * calls 007ec59c FUN_007ec59c
 * calls 006cbaf0 FUN_006cbaf0
 * calls 0064a7c0 FUN_0064a7c0
 * calls 006540b0 FUN_006540b0
 * calls 00768cc0 FUN_00768cc0
 * calls 00516e10 FUN_00516e10
 * calls 0064b380 FUN_0064b380
 * calls 00730370 FUN_00730370
 * calls 0078b2f0 FUN_0078b2f0
 * calls 00633ef0 FUN_00633ef0
 * calls 006ddc50 FUN_006ddc50
 * calls 006ed430 FUN_006ed430
 * calls 004fd320 FUN_004fd320
 * calls 005642c0 FUN_005642c0
 * calls 006e8d10 FUN_006e8d10
 * calls 0078c640 FUN_0078c640
 * calls 006c7330 FUN_006c7330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00663d30(int param_1)

{
  char cVar1;
  float10 fVar2;
  
  FUN_0045ce40();
  FUN_00667650();
  FUN_00661280((float)param_1 * _DAT_00890980 * _DAT_00890d60);
  FUN_007ec59c();
  FUN_00634370();
  FUN_00645ec0();
  cVar1 = FUN_0078b2f0();
  if (((cVar1 != '\0') || ((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0)) ||
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    cVar1 = FUN_00735620();
    if ((cVar1 != '\0') && (DAT_009b0fa0 == 5)) {
      FUN_007358a0();
    }
    FUN_0078c730();
    FUN_0078c640();
  }
  fVar2 = (float10)FUN_00642e60(DAT_00925854);
  cVar1 = FUN_00735620();
  if ((cVar1 != '\0') && (DAT_009b0fa0 == 5)) {
    FUN_007358b0();
  }
  FUN_0045c030();
  fVar2 = (float10)FUN_0064a680((float)fVar2);
  if (DAT_008f8318 != 0) {
    DAT_00925970 = (float)fVar2;
    DAT_008f8318 = 0;
  }
  FUN_006c6e90();
  _DAT_009257f0 = DAT_00925954;
  FUN_00660950();
  FUN_006596a0();
  FUN_0072e0c0();
  cVar1 = FUN_006e8d10();
  if (cVar1 != '\0') {
    FUN_0075aad0();
  }
  FUN_006cbaf0();
  FUN_00724290();
  FUN_00516e10();
  FUN_005642c0();
  FUN_00633ef0();
  if (DAT_00911fa8 != 0) {
    FUN_004d0610(DAT_009259bc);
  }
  FUN_006626b0();
  FUN_006ddc50();
  FUN_006c7330();
  thunk_FUN_007605b0();
  FUN_00730370();
  FUN_0064b770();
  cVar1 = FUN_00735620();
  if (cVar1 == '\0') {
    FUN_00768cc0();
  }
  if (DAT_00925854 == '\0') {
    FUN_0064a7c0();
  }
  FUN_006ed430();
  FUN_00661490();
  FUN_006540b0();
  FUN_004fd320();
  FUN_0064b380();
  FUN_0065c6d0();
  FUN_006df8e0();
  return;
}

