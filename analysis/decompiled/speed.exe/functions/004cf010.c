/* speed.exe 004cf010 FUN_004cf010; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 00454810 FUN_00454810
 * calls 004cefb0 FUN_004cefb0
 * calls 004ce960 FUN_004ce960
 */

void FUN_004cf010(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)FUN_00454810(0x9849f8df,1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],4,4);
  puVar2 = (undefined4 *)FUN_00454810(0x7e6ba5c8,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,5);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,3);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0x663aaf3,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  uVar3 = puVar2[2];
  uVar7 = puVar2[3];
  FUN_004cefb0(*puVar2,puVar2[1],uVar3,uVar7,5,4);
  uVar9 = 4;
  uVar8 = 5;
  pcVar6 = "SIREN_MB.abk";
  uVar5 = FUN_004522f0("SIREN_MB.abk");
  uVar3 = FUN_004519d0("SIREN_MB.abk",pcVar6,uVar5,uVar3,uVar7,uVar8,uVar9);
  FUN_004cefb0(uVar5,uVar3,"SIREN_MB.abk");
  puVar2 = (undefined4 *)FUN_00454810(0xeb1fd1bf,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xeb1fd1bf,2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xeb1fd1bf,1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,2);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0x916aa05d,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],5,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,6);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],1,4);
  puVar2 = (undefined4 *)FUN_00454810(0xe48df448,7);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0x10);
  }
  FUN_004cefb0(*puVar2,puVar2[1],puVar2[2],puVar2[3],1,4);
  ppuVar4 = &PTR_s_City_Dense_fx_008efcc0;
  do {
    puVar1 = *ppuVar4;
    uVar5 = FUN_004522f0(puVar1);
    uVar3 = FUN_004519d0(puVar1);
    FUN_004522f0(&DAT_00890978);
    FUN_004519d0(&DAT_00890978);
    local_8 = 0;
    local_4 = 0;
    local_10 = 0xc;
    local_28[0] = 5;
    local_18 = uVar3;
    local_14 = puVar1;
    local_20 = uVar5;
    FUN_004ce960(local_28,0xffffffff);
    ppuVar4 = ppuVar4 + 1;
  } while ((int)ppuVar4 < 0x8efcf0);
  return;
}

