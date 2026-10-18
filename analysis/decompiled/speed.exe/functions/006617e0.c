/* speed.exe 006617e0 FUN_006617e0; analysis pseudocode, not buildable source.
 * calls 00747950 FUN_00747950
 * calls 006e7220 FUN_006e7220
 * calls 007ec298 FUN_007ec298
 * calls 006fabb0 FUN_006fabb0
 * calls 0072c660 FUN_0072c660
 * calls 0075bde0 FUN_0075bde0
 * calls 006c39d0 FUN_006c39d0
 * calls 004b9080 FUN_004b9080
 * calls 005258b0 FUN_005258b0
 * calls 007612c0 FUN_007612c0
 * calls 007c7250 FUN_007c7250
 * calls 00735620 FUN_00735620
 * calls 004b15a0 FUN_004b15a0
 * calls 004d0a40 FUN_004d0a40
 * calls 00465a50 FUN_00465a50
 * calls 004af1e0 FUN_004af1e0
 * calls 00652fb0 FUN_00652fb0
 * calls 0065e930 FUN_0065e930
 * calls 006e79e0 thunk_FUN_00736b30
 * calls 00768b90 FUN_00768b90
 * calls 006c0c70 FUN_006c0c70
 * calls 007ec59c FUN_007ec59c
 * calls 00722b30 FUN_00722b30
 * calls 00516a20 FUN_00516a20
 * calls 0074d2c0 FUN_0074d2c0
 * calls 006dfaf0 FUN_006dfaf0
 * calls 006cb2a0 FUN_006cb2a0
 * calls 00516e10 FUN_00516e10
 * calls 0044fb40 FUN_0044fb40
 * calls 005642c0 FUN_005642c0
 * calls 00660100 FUN_00660100
 * calls 00652eb0 FUN_00652eb0
 * calls 00757710 FUN_00757710
 * calls 004fd490 FUN_004fd490
 * calls 0073de50 FUN_0073de50
 * calls 004af190 FUN_004af190
 * calls 0065fe90 FUN_0065fe90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006617e0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  DAT_00925e90 = 7;
  FUN_004af1e0(0,8);
  FUN_004b9080(0,0,"TrackLoader::Unload");
  FUN_005258b0(0);
  FUN_00516a20();
  _DAT_00925884 = 0;
  _DAT_00925888 = 0;
  FUN_004af190();
  FUN_0044fb40(1,0);
  FUN_00747950();
  FUN_00747950();
  puVar2 = (undefined4 *)FUN_006dfaf0();
  FUN_0073de50();
  *puVar2 = 2;
  FUN_006c39d0();
  cVar1 = FUN_00735620();
  if (cVar1 != '\0') {
    FUN_007612c0(1);
  }
  FUN_006fabb0();
  FUN_004b15a0();
  thunk_FUN_00736b30();
  iVar4 = DAT_009b0858;
  if (DAT_009b0858 != 0) {
    FUN_0074d2c0();
    FUN_007c7250(iVar4);
  }
  DAT_009b0858 = 0;
  FUN_0075bde0();
  FUN_00516e10();
  FUN_005642c0();
  FUN_006e7220();
  FUN_006cb2a0();
  FUN_00757710();
  FUN_004fd490();
  FUN_006c0c70();
  FUN_00722b30();
  puVar2 = &DAT_009a9f80;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0072c660();
  FUN_004d0a40();
  FUN_00768b90();
  FUN_00465a50();
  while( true ) {
    if (DAT_00925928 != 0) {
      FUN_007ec59c();
      FUN_0065e930();
    }
    if (DAT_00925928 == 0) break;
    FUN_007ec298(8);
  }
  DAT_00926064 = 0;
  uVar3 = DAT_008ec4e0;
  if (DAT_009258d4 != 0) {
    uVar3 = FUN_00660100(0x20,10);
  }
  if (DAT_009258d8 != 0) {
    FUN_0065fe90(uVar3,0x20,10);
  }
  DAT_008ec4e0 = uVar3;
  if ((DAT_00904fc8 == '\0') && (DAT_00904fc9 == '\0')) {
    FUN_00652eb0();
    FUN_00652fb0();
  }
  _DAT_00982d28 = 0;
  return;
}

