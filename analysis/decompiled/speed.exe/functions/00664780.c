/* speed.exe 00664780 FUN_00664780; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 006e7220 FUN_006e7220
 * calls 0045c030 FUN_0045c030
 * calls 0065fd30 FUN_0065fd30
 * calls 00461970 FUN_00461970
 * calls 006626b0 FUN_006626b0
 * calls 0057e850 FUN_0057e850
 * calls 0056b820 FUN_0056b820
 * calls 007517c0 FUN_007517c0
 * calls 00503380 FUN_00503380
 * calls 00501820 FUN_00501820
 * calls 0065f860 FUN_0065f860
 * calls 004fb000 FUN_004fb000
 * calls 006627a0 FUN_006627a0
 * calls 00507dc0 FUN_00507dc0
 * calls 0072d9c0 FUN_0072d9c0
 * calls 00664430 FUN_00664430
 * calls 006dfaf0 FUN_006dfaf0
 * calls 0045cd20 __break
 * calls 0075c550 FUN_0075c550
 * calls 0065f740 FUN_0065f740
 * calls 006616f0 FUN_006616f0
 * calls 00661c80 FUN_00661c80
 * calls 00461980 FUN_00461980
 * calls 00465a70 FUN_00465a70
 * calls 004d1cc0 FUN_004d1cc0
 * calls 004655f0 FUN_004655f0
 * calls 00503400 FUN_00503400
 * calls 00508b10 FUN_00508b10
 * calls 00660100 FUN_00660100
 * calls 00507700 FUN_00507700
 * calls 00660ee0 FUN_00660ee0
 * calls 0073de50 FUN_0073de50
 * calls 0065fe90 FUN_0065fe90
 * calls 0065f7a0 FUN_0065f7a0
 */

void FUN_00664780(void)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined **local_8;
  undefined1 local_4 [4];
  
  uVar4 = FUN_0065f740("Global\\GlobalMemoryFile.bin");
  piVar5 = (int *)FUN_00465a70(uVar4,0x1040);
  FUN_00660ee0(piVar5,"Global\\GlobalMemoryFile.bin",0,uVar4,&LAB_0065d540,piVar5,0);
  DAT_009258b4 = piVar5;
  FUN_006627a0(piVar5);
  FUN_0056b820();
  uVar4 = FUN_0065f860("GLOBAL\\ATTRIBUTES.BIN",&local_8,0x1040);
  DAT_009258a4 = FUN_00664430(uVar4,&DAT_008a9094,0,0);
  FUN_004655f0(uVar4);
  iVar6 = FUN_0065fd30("GLOBAL\\GLOBALB.LZC",1,9,0,0);
  FUN_006616f0(0,0);
  FUN_00461980(*(undefined4 *)(iVar6 + 0x1c));
  uVar4 = FUN_00461970("GLOBAL\\GLOBALB.BUN");
  *(undefined4 *)(iVar6 + 0x1c) = uVar4;
  FUN_0065fd30(PTR_s_CARS_BRAKES_GEOMETRY_BIN_008f7ec4,6,0,0,0);
  FUN_006616f0(0,0);
  FUN_0065fd30(PTR_s_CARS_BRAKES_TEXTURES_BIN_008f7ec8,6,0,0,0);
  FUN_006616f0(0,0);
  while( true ) {
    FUN_006626b0();
    if ((DAT_00925858 == 0) && (DAT_0092585c == 0)) break;
    FUN_007ec298(8);
  }
  FUN_00507dc0(PTR_s_GLOBAL_DYNTEX_BIN_008f7ed4,0,0,0);
  FUN_00503380(PTR_s_GLOBAL_DYNTEX_BIN_008f7ed4);
  FUN_0057e850();
  cVar3 = FUN_004fb000();
  if (cVar3 == '\0') {
    pcVar9 = "GLOBAL\\THINSCREEN_GLOBAL.BUN";
  }
  else {
    pcVar9 = "GLOBAL\\WIDESCREEN_GLOBAL.BUN";
  }
  FUN_0065fd30(pcVar9,1,0,0,0);
  FUN_006616f0(0,0);
  iVar6 = FUN_00503400(0xab0e817d,0,0);
  if (iVar6 == 0) {
    local_8 = (undefined **)0xab0e817d;
    FUN_00508b10(&local_8,1,0,0,0);
  }
  while( true ) {
    FUN_006626b0();
    if ((DAT_00925858 == 0) && (DAT_0092585c == 0)) break;
    FUN_007ec298(8);
  }
  puVar7 = (undefined4 *)FUN_006dfaf0();
  FUN_0073de50();
  *puVar7 = 2;
  FUN_006e7220();
  FUN_00507dc0(PTR_s_CARS_TEXTURES_BIN_008f7ecc,0,0,0);
  FUN_00507dc0(PTR_s_CARS_WHEELS_TEXTURES_BIN_008f7ed0,0,0,0);
  FUN_00507700(PTR_s_CARS_WHEELS_GEOMETRY_BIN_008f7eac,0,0,0);
  FUN_00507700(PTR_s_CARS_SPOILER_GEOMETRY_BIN_008f7eb0,0,0,0);
  FUN_00507700(PTR_s_CARS_SPOILER_CARRERA_GEOMETRY_BI_008f7eb4,0,0,0);
  FUN_00507700(PTR_s_CARS_SPOILER_HATCH_GEOMETRY_BIN_008f7eb8,0,0,0);
  FUN_00507700(PTR_s_CARS_SPOILER_PORSCHES_GEOMETRY_B_008f7ebc,0,0,0);
  FUN_00507700(PTR_s_CARS_ROOF_GEOMETRY_BIN_008f7ec0,0,0,0);
  FUN_00503380(0);
  FUN_00501820(0);
  while( true ) {
    FUN_006626b0();
    if ((DAT_00925858 == 0) && (DAT_0092585c == 0)) break;
    FUN_007ec298(8);
  }
  FUN_007517c0();
  iVar8 = DAT_008f7ef0 * 0x400;
  iVar6 = 0x7ef4000;
  if (DAT_00926060 != 0) {
    iVar8 = iVar8 + -0x40000;
    iVar6 = 0x7eb4000;
  }
  FUN_0072d9c0(iVar6 + iVar8);
  DAT_00915fac = 7;
  FUN_0075c550(iVar8);
  FUN_004d1cc0();
  FUN_00661c80();
  piVar5 = DAT_009258b4;
  if (DAT_009258b4 != (int *)0x0) {
    iVar6 = *DAT_009258b4;
    piVar1 = (int *)DAT_009258b4[1];
    *piVar1 = iVar6;
    *(int **)(iVar6 + 4) = piVar1;
    FUN_004655f0(piVar5);
  }
  DAT_009258b4 = (int *)0x0;
  iVar6 = FUN_0065f7a0("TRACKS/L2RA_Sunset.BUN");
  if (DAT_009258d8 == 0) {
    if (DAT_009258d4 != 0) {
      iVar8 = FUN_00660100(8,1);
      if ((iVar8 != 0) != (iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
        __break();
      }
    }
  }
  else {
    FUN_0065fe90(iVar6 != 0,8,1);
  }
  if (DAT_009258a8 == 0) {
    uVar4 = FUN_0065f860("GLOBAL\\FE_ATTRIB.BIN",local_4,0x1000);
    DAT_009258b0 = 1;
    local_8 = &PTR_LAB_008a8998;
    FUN_0045c030();
    puVar2 = PTR_PTR_008f7ea8;
    PTR_PTR_008f7ea8 = (undefined *)&local_8;
    DAT_009258a8 = FUN_00664430(uVar4,"frontend",&DAT_009258ac,0x40);
    if (puVar2 != (undefined *)0x0) {
      FUN_0045c030();
      PTR_PTR_008f7ea8 = puVar2;
    }
    FUN_004655f0(uVar4);
  }
  return;
}

