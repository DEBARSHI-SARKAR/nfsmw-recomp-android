/* speed.exe 004f09c0 FUN_004f09c0; analysis pseudocode, not buildable source.
 * calls 00831a2a FUN_00831a2a
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004b2210 FUN_004b2210
 * calls 004e6b40 FUN_004e6b40
 * calls 006269b0 FUN_006269b0
 * calls 0083196b FUN_0083196b
 * calls 0045a430 FUN_0045a430
 * calls 006ffdd0 FUN_006ffdd0
 * calls 00454810 FUN_00454810
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004f09c0(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  float10 fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float *local_2c;
  void *pvStack_28;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086d328;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  FUN_004e6b40(param_6,0,0);
  local_14 = 0;
  piVar1 = (int *)FUN_006ff2d0(0);
  *(float *)(param_1 + 0x554) = -param_2;
  *(undefined4 *)(param_1 + 0x580) = param_6;
  *(float *)(param_1 + 0x550) = param_4;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  *(float *)(param_1 + 0x558) = param_3;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  local_3c = param_3;
  local_38 = param_4;
  local_40 = (param_2 - DAT_008a2fb4) * (param_2 - DAT_008a2fb4) +
             (param_3 - DAT_008a2fb8) * (param_3 - DAT_008a2fb8) +
             (param_4 - DAT_008a2fbc) * (param_4 - DAT_008a2fbc);
  fVar4 = (float10)FUN_005c5e80(local_40);
  if ((float10)_DAT_0089096c <= fVar4) {
    *(undefined1 *)(param_1 + 0x588) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  local_3c = local_2c[1];
  local_40 = *local_2c;
  iVar2 = FUN_00831a2a(&DAT_00914a54,&local_40);
  if (iVar2 < 0) {
    FUN_0083196b(&PTR_s_SoundFX_Select_008f0368);
    FUN_00831a2a(&DAT_00914a54,&local_40);
  }
  FUN_006ffdd0();
  FUN_004b2210();
  *(float *)(param_1 + 0x544) = local_2c[2];
  puVar3 = (undefined1 *)FUN_00454810(0xc4e7f7c2,0);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)FUN_006269b0(1);
  }
  *(undefined1 *)(param_1 + 0x548) = *puVar3;
  DAT_00914354 = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  (**(code **)(*piVar1 + 0x28))(5,FUN_004e8260,0);
  uStack_20 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_28;
  return;
}

