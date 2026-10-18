/* speed.exe 0079acc0 FUN_0079acc0; analysis pseudocode, not buildable source.
 * calls 00837190 FUN_00837190
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00837270 FUN_00837270
 * calls 00572e80 FUN_00572e80
 * calls 008376d0 FUN_008376d0
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0078cbf0 FUN_0078cbf0
 * calls 004ae8f0 FUN_004ae8f0
 * calls 00838260 FUN_00838260
 * calls 008371a0 FUN_008371a0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00839770 FUN_00839770
 * calls 00837240 FUN_00837240
 * calls 00798270 FUN_00798270
 * calls 008371c0 FUN_008371c0
 * calls 00837690 FUN_00837690
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0079acc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  uint local_4;
  
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00838260(*(int *)(param_1 + 0xf8));
  }
  iVar8 = 0;
  local_4 = local_4 & 0xffffff00;
  if (0 < iVar3) {
    do {
      if (((((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) &&
           (iVar4 = FUN_008376d0(*(int *)(param_1 + 0xf8),iVar8), iVar4 != 0)) &&
          ((iVar5 = FUN_00837240(iVar4), iVar5 == 0 && (iVar5 = FUN_008371c0(iVar4), iVar5 != 0))))
         && (iVar5 = FUN_008371a0(iVar4), iVar5 == 0)) {
        local_4 = CONCAT31(local_4._1_3_,1);
        uVar6 = FUN_00837190(iVar4,1);
        FUN_00839770(*(undefined4 *)(param_1 + 0xf8),uVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  local_8 = 0;
  do {
    iVar3 = FUN_0079a9e0();
    FUN_007ec1bd();
    InterlockedIncrement(&DAT_009b4438);
    puVar1 = (undefined4 *)(iVar3 + 8);
    puVar2 = (undefined4 *)*puVar1;
    for (iVar3 = 0; (puVar2 != puVar1 && (iVar3 != local_8)); iVar3 = iVar3 + 1) {
      puVar2 = (undefined4 *)*puVar2;
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    uVar7 = (puVar2 == puVar1) - 1 & (uint)puVar2;
    if (uVar7 == 0) break;
    iVar3 = uVar7 + 0xc;
    iVar8 = FUN_00837690(*(undefined4 *)(param_1 + 0xf8),iVar3);
    if ((iVar8 != 0) && (iVar8 = FUN_00837270(iVar8), iVar8 == 0)) {
      FUN_0078cbf0(iVar3);
      FUN_0079a9e0(iVar3);
      FUN_00798270(iVar3);
    }
    local_8 = local_8 + 1;
  } while (local_8 < 10);
  if ((char)local_4 != '\0') {
    FUN_004ae8f0(0x56);
  }
  FUN_00572e80(3,local_4);
  DAT_0091ca90 = 1;
  return;
}

