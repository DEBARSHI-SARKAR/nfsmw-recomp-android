/* speed.exe 006a46f0 FUN_006a46f0; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 0076e220 FUN_0076e220
 * calls 0040fe20 FUN_0040fe20
 * calls 005d59f0 FUN_005d59f0
 * calls 00789870 FUN_00789870
 * calls 0077ba80 FUN_0077ba80
 * calls 00722980 FUN_00722980
 * calls 007862d0 FUN_007862d0
 * calls 00401b50 FUN_00401b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006a46f0(float *param_1)

{
  float *pfVar1;
  int iVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  char local_2b0;
  undefined1 local_2af;
  undefined1 local_2ac;
  undefined4 local_288;
  undefined4 local_280;
  byte local_274;
  short local_272;
  float local_268;
  float local_264;
  float local_260;
  undefined1 local_244 [560];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0087c9cb;
  local_14 = ExceptionList;
  iVar8 = 0;
  ExceptionList = &local_14;
  iVar7 = FUN_005d59f0(&LAB_00403700);
  if (iVar7 != 0) {
    FUN_0077b9e0();
    local_c = 0;
    local_288 = 2;
    local_280 = 5;
    if (((DAT_0091e000 == 0) || (*(char *)(DAT_0091e000 + 0x198a) == '\0')) ||
       (local_2af = 1, DAT_009b3829 == '\0')) {
      local_2af = 0;
    }
    pfVar1 = param_1 + 4;
    local_30c = *pfVar1;
    local_308 = param_1[5];
    local_304 = param_1[6];
    local_2ac = 1;
    FUN_007862d0(param_1,&local_30c,0,0x3f800000);
    FUN_0077ba80();
    iVar7 = DAT_009aa9c4;
    if (local_2b0 != '\0') {
      fVar4 = local_264 - param_1[1];
      fVar5 = _DAT_00891078;
      if ((_DAT_00891078 < fVar4) && (fVar5 = fVar4, _DAT_008aac74 < fVar4)) {
        fVar5 = _DAT_008aac74;
      }
      if (fVar4 == fVar5) {
        local_310 = -*param_1;
        local_314 = param_1[2];
        local_318 = -local_268;
        local_31c = local_260;
        if (0 < DAT_009aa9c4) {
          iVar9 = 0;
          do {
            iVar2 = iVar9 + DAT_009aa9c8;
            if ((*(char *)(iVar2 + 0x10) != '\0') &&
               (cVar6 = FUN_00722980(iVar2,iVar2 + 8,&local_314,&local_31c), cVar6 != '\0'))
            goto LAB_006a4988;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 0x18;
          } while (iVar8 < iVar7);
        }
        cVar6 = FUN_00789870(&local_268,&local_320,0);
        if (cVar6 != '\0') {
          local_320 = param_1[1] - local_320;
          if (local_320 < _DAT_00890968) {
            local_320 = -local_320;
          }
          if (local_320 < _DAT_008aae84) {
            *param_1 = local_268;
            param_1[1] = local_264;
            param_1[2] = local_260;
            FUN_0040fe20(local_244,pfVar1);
            iVar7 = local_272 * 0x16 + DAT_009b38c0;
            if (((iVar7 != 0) && (sVar3 = *(short *)(iVar7 + 10), sVar3 < 0)) &&
               (local_274 != ((byte)sVar3 >> 2 & 1))) {
              FUN_00401b50(pfVar1);
            }
            local_c = 0xffffffff;
            FUN_0076e220();
            ExceptionList = local_14;
            return 1;
          }
        }
      }
    }
LAB_006a4988:
    local_c = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = local_14;
  return 0;
}

