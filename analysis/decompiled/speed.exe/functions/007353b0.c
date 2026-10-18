/* speed.exe 007353b0 FUN_007353b0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0078b700 FUN_0078b700
 * calls 00460c50 FUN_00460c50
 * calls 0083b210 FUN_0083b210
 * calls 00794f80 FUN_00794f80
 * calls 00461af0 FUN_00461af0
 * calls 00462060 FUN_00462060
 * calls 004641b0 FUN_004641b0
 * calls 00464b40 FUN_00464b40
 * calls 0083a670 FUN_0083a670
 * calls 00461f40 FUN_00461f40
 * calls 00464bd0 FUN_00464bd0
 * calls 00460f80 FUN_00460f80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007353b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  undefined1 local_65c [128];
  undefined1 local_5dc [1488];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880876;
  local_c = ExceptionList;
  if (DAT_009b4174 != 0) {
    ExceptionList = &local_c;
    FUN_00794f80();
    iVar2 = FUN_0078b700();
    if (iVar2 != 0) {
      uVar3 = FUN_0083a670(iVar2,"RESPONSE_GRAPH",local_65c,0x80,&DAT_00890978);
      FUN_0083b210(uVar3);
      FUN_004647c0(local_5dc,"%s: %s","GRAPH",local_65c);
      FUN_004641b0("GRAPH_SCRIPT",local_5dc,0);
      local_4 = 0;
      iVar4 = FUN_00461f40();
      if (iVar4 != 0) {
        pfVar5 = (float *)&DAT_009032b0;
        do {
          cVar1 = FUN_00462060();
          if (cVar1 == '\0') break;
          fVar7 = (float10)FUN_00464bd0();
          *pfVar5 = (float)fVar7;
          pfVar5 = pfVar5 + 1;
        } while ((int)pfVar5 < 0x9032f0);
      }
      uVar3 = FUN_0083a670(iVar2,"MIN_CHEAT_THRESHOLD",local_65c,0x80,&DAT_008b471c);
      FUN_0083b210(uVar3);
      _DAT_009032a8 = FUN_00460f80(local_65c);
      FUN_004647c0(local_5dc,"RESPONSE_REMAP%d",param_1);
      uVar3 = FUN_0083a670(iVar2,local_5dc,local_65c,0x80,&DAT_00890978);
      FUN_0083b210(uVar3);
      iVar2 = FUN_00460c50(local_65c);
      if (0 < iVar2) {
        FUN_004647c0(local_5dc,"%s: %s","REMAP",local_65c);
        FUN_004641b0("REMAP_SCRIPT",local_5dc,0);
        local_4 = CONCAT31(local_4._1_3_,1);
        iVar2 = FUN_00461f40();
        if (iVar2 != 0) {
          pfVar5 = (float *)&DAT_00905de8;
          do {
            cVar1 = FUN_00462060();
            if (cVar1 == '\0') break;
            iVar2 = FUN_00464b40();
            pfVar6 = pfVar5 + 1;
            *pfVar5 = (float)iVar2;
            pfVar5 = pfVar6;
          } while ((int)pfVar6 < 0x905df8);
        }
        local_4 = local_4 & 0xffffff00;
        FUN_00461af0();
      }
      local_4 = 0xffffffff;
      FUN_00461af0();
    }
  }
  ExceptionList = local_c;
  return;
}

