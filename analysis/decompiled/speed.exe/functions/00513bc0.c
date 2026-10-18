/* speed.exe 00513bc0 FUN_00513bc0; analysis pseudocode, not buildable source.
 * calls 008371e0 FUN_008371e0
 * calls 00837290 FUN_00837290
 * calls 00837580 FUN_00837580
 * calls 008371c0 FUN_008371c0
 * calls 00837240 FUN_00837240
 * calls 008372d0 FUN_008372d0
 * calls 008372f0 FUN_008372f0
 * calls 00837530 FUN_00837530
 * calls 00838160 FUN_00838160
 * calls 008371a0 FUN_008371a0
 * calls 008373b0 FUN_008373b0
 * calls 00837340 FUN_00837340
 * calls 008372b0 FUN_008372b0
 * calls 008373a0 FUN_008373a0
 * calls 00837200 FUN_00837200
 * calls 00837220 FUN_00837220
 * calls 007903d0 FUN_007903d0
 * calls 00837b70 FUN_00837b70
 * calls 00837260 FUN_00837260
 * calls 00460d20 FUN_00460d20
 * calls 00837380 FUN_00837380
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00837190 FUN_00837190
 * calls 00460c70 FUN_00460c70
 * calls 00790370 FUN_00790370
 * calls 00837360 FUN_00837360
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00837270 FUN_00837270
 */

void FUN_00513bc0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 local_288 [4];
  undefined4 local_278;
  uint local_274;
  int local_270;
  int local_26c;
  int local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_234;
  int local_230;
  undefined1 local_22c [32];
  undefined1 local_20c [256];
  undefined1 local_10c [264];
  
  puVar8 = local_288;
  for (iVar6 = 0x9f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (param_2 != 0) {
    local_230 = param_2;
    uVar1 = FUN_00837190(param_2);
    FUN_00460c70(local_22c,uVar1);
    local_238 = FUN_00837b70(param_2);
    local_288[3] = FUN_008373a0(param_2);
    local_278 = FUN_008373b0(param_2);
    uVar2 = FUN_00837220(param_2,0x40);
    uVar3 = FUN_008371c0(param_2);
    uVar4 = FUN_008371e0(param_2);
    local_274 = FUN_00838160(param_2);
    local_274 = uVar2 | uVar3 | uVar4 | local_274;
    local_258 = FUN_008371a0(param_2);
    local_270 = FUN_00837240(param_2);
    local_26c = FUN_008371c0(param_2);
    local_268 = FUN_008371e0(param_2);
    if ((local_270 != 0) && ((local_26c != 0 || (local_268 != 0)))) {
      local_26c = 0;
      local_268 = 0;
    }
    local_234 = FUN_00837200(param_2);
    local_260 = FUN_00837260(param_2);
    local_25c = FUN_00837270(param_2);
    local_254 = FUN_00837290(param_2);
    local_250 = FUN_008372b0(param_2);
    local_24c = FUN_008372d0(param_2);
    local_248 = FUN_00837380(param_2);
    local_244 = FUN_00837360(param_2);
    FUN_008372f0(param_2,local_20c);
    FUN_00837340(param_2,local_10c,0x100);
    local_240 = FUN_00837530(param_2);
    uStack_23c = FUN_00837580(param_2);
    iVar7 = 0;
    FUN_0079a9e0();
    iVar6 = FUN_0045d3a0(0);
    if (0 < iVar6) {
      do {
        iVar6 = iVar7;
        FUN_0079a9e0(iVar7);
        iVar6 = FUN_00790370(iVar6);
        if ((iVar6 != 0) && (iVar5 = FUN_00460d20(iVar6 + 0xc,local_22c), iVar5 == 0)) {
          local_288[1] = 1;
          local_288[0] = *(undefined4 *)(iVar6 + 8);
          break;
        }
        iVar7 = iVar7 + 1;
        FUN_0079a9e0();
        iVar6 = FUN_0045d3a0(0);
      } while (iVar7 < iVar6);
    }
    puVar9 = local_22c;
    FUN_0079a9e0(puVar9);
    iVar6 = FUN_007903d0(puVar9);
    if (iVar6 != 0) {
      local_288[2] = 1;
    }
  }
  puVar8 = local_288;
  for (iVar6 = 0x9f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = *puVar8;
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

