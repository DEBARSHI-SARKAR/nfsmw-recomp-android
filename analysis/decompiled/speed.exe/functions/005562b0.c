/* speed.exe 005562b0 FUN_005562b0; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 00586ca0 FUN_00586ca0
 * calls 00524920 FUN_00524920
 * calls 005a5540 FUN_005a5540
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0054e890 FUN_0054e890
 * calls 005b8400 FUN_005b8400
 * calls 00460d20 FUN_00460d20
 * calls 00516be0 FUN_00516be0
 * calls 005b8550 FUN_005b8550
 * calls 00524850 FUN_00524850
 * calls 005af1c0 FUN_005af1c0
 * calls 005a8c50 FUN_005a8c50
 * calls 005a8cb0 FUN_005a8cb0
 * calls 005258b0 FUN_005258b0
 * calls 00586760 FUN_00586760
 * calls 005110d0 FUN_005110d0
 */

void __thiscall FUN_005562b0(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  if ((*(char *)(param_1 + 0x14c) == '\0') &&
     (iVar2 = FUN_00460d20(param_1 + 0x13c,DAT_0091ca80 + 0x2a), iVar2 != 0)) {
    FUN_00516be0(0x911ab364,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    *(undefined1 *)(param_1 + 0x14c) = 1;
  }
  if (param_2 < 0x911ab365) {
    if (param_2 == 0x911ab364) {
      FUN_005258b0(1);
      if ((((PTR_s_OL_GameRoom_fng_008f32b0 != (undefined *)0x0) &&
           (iVar2 = FUN_00516af0(PTR_s_OL_GameRoom_fng_008f32b0), iVar2 != 0)) &&
          (iVar2 = FUN_005b8550(0x5d974277), iVar2 != 0)) &&
         (iVar2 = FUN_005b1360(0x1ca7c0), iVar2 != 0)) {
        FUN_005b8400(iVar2,0);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
LAB_00556426:
      FUN_00516be0(0x53409360,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
      return;
    }
    if ((param_2 == 0xc407210) || (param_2 == 0x406415e3)) {
      if (*(char *)(param_1 + 0x14c) == '\0') {
        if (*(int *)(param_1 + 0x50) != 0) {
          FUN_00516be0(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18),
                       PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
        }
        FUN_005258b0(1);
        FUN_00524920(PTR_s_OL_GameRoom_fng_008f32b0,0x5d974277,0x1ca7c0,1);
        goto LAB_00556426;
      }
    }
    else if ((param_2 == 0x72619778) && (*(char *)(param_1 + 0x14c) == '\0')) {
      FUN_005a8cb0();
      FUN_005110d0();
      return;
    }
  }
  else if (param_2 == 0x911c0a4b) {
    if ((*(char *)(param_1 + 0x14c) == '\0') && (FUN_005a8c50(), *(int *)(param_1 + 0x58) != 0)) {
      FUN_00586760(0x249db7b7);
    }
  }
  else if (param_2 == 0x9803f6e2) {
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_b = 0;
    local_7 = 0;
    local_3 = 0;
    local_1 = 0;
    local_20 = 0;
    FUN_005a5540();
    uVar3 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
    FUN_00515e20(&local_20,0x20,"Host_High_Light_%d",uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_005af1c0(&local_20);
    uVar3 = FUN_00524850(uVar3,uVar4);
    cVar1 = FUN_0054e890(uVar3);
    if (cVar1 != '\0') {
      FUN_00516be0(0xc407210,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      return;
    }
  }
  return;
}

