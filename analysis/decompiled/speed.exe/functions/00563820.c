/* speed.exe 00563820 FUN_00563820; analysis pseudocode, not buildable source.
 * calls 007f3c95 FUN_007f3c95
 * calls 00527370 FUN_00527370
 * calls 00525220 FUN_00525220
 * calls 005b8550 FUN_005b8550
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00516be0 FUN_00516be0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 005110d0 FUN_005110d0
 * calls 005a8cb0 FUN_005a8cb0
 * calls 00660100 FUN_00660100
 * calls 00460f20 FUN_00460f20
 * calls 006cbe20 FUN_006cbe20
 * calls 005a8c50 FUN_005a8c50
 * calls 005a5540 FUN_005a5540
 * calls 00469120 FUN_00469120
 * calls 00572ff0 FUN_00572ff0
 * calls 00560dc0 FUN_00560dc0
 * calls 00460c50 FUN_00460c50
 * calls 00544a90 FUN_00544a90
 * calls 0056dba0 FUN_0056dba0
 * calls 005929d0 FUN_005929d0
 * calls 00516af0 FUN_00516af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00563820(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0x911c0a4c) {
    if (param_2 == 0x911c0a4b) {
      _DAT_0091cbd8 = param_4;
      FUN_005a8c50();
      *(undefined4 *)(param_1 + 0xe8) = 0x911c0a4b;
      return;
    }
    if (param_2 < 0x72619779) {
      if (param_2 == 0x72619778) {
        _DAT_0091cbd8 = param_4;
        FUN_005a8cb0();
        *(undefined4 *)(param_1 + 0xe8) = 0x72619778;
        return;
      }
      if (param_2 == 0x35f8620b) {
        if (*(int *)(param_1 + 0x34) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x34) + -4;
        }
        FUN_005929d0(iVar4);
        FUN_005110d0();
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
        if (*(char *)(DAT_0091cb20 + 0x18) != '\0') {
          FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd,0x1a294dad);
          *(undefined4 *)(param_1 + 0xe8) = 0x35f8620b;
          return;
        }
      }
      else if (param_2 == 0x406415e3) {
        _DAT_0091cbd8 = param_4;
        cVar2 = FUN_00469120();
        if (cVar2 == '\0') {
          uVar5 = *(undefined4 *)(DAT_0091cb20 + 0x50);
          uVar3 = FUN_00572ff0(param_4);
          FUN_0056dba0(uVar5,uVar3);
        }
        iVar4 = DAT_0091cb20;
        *(undefined4 *)(DAT_0091cb20 + 0x38) = 0;
        *(undefined1 *)(iVar4 + 0x14) = 0;
        *(undefined4 *)(iVar4 + 0x40) = 10;
        *(undefined2 *)(iVar4 + 0x48) = 0;
        iVar4 = FUN_0064c9b0();
        if (iVar4 == 0) {
          FUN_007f3c95(0);
        }
        iVar4 = FUN_0064c9b0();
        if (iVar4 != 0) {
          uVar5 = FUN_00660100(8,9);
          FUN_00560dc0(uVar5);
          *(undefined4 *)(param_1 + 0xe8) = 0x406415e3;
          return;
        }
      }
    }
    else if (param_2 == 0x911ab364) {
      FUN_00516be0(0x8867412d,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff)
      ;
      _DAT_0091cbd8 = param_4;
      *(undefined4 *)(param_1 + 0xe8) = 0x911ab364;
      return;
    }
  }
  else {
    if (param_2 == 0x9803f6e2) {
      FUN_005a5540();
      *(undefined4 *)(param_1 + 0xe8) = 0x9803f6e2;
      return;
    }
    if (param_2 == 0xc98356ba) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        *(undefined4 *)(param_1 + 0xe0) = 1;
        iVar4 = *(int *)(DAT_0091cb20 + 0xcc);
        for (puVar1 = *(undefined4 **)(iVar4 + 0x7c); puVar1 != (undefined4 *)(iVar4 + 0x7c);
            puVar1 = (undefined4 *)*puVar1) {
          uVar5 = FUN_006cbe20();
          iVar6 = FUN_00460c50(uVar5);
          iVar6 = iVar6 + 8 + (int)puVar1;
          iVar7 = FUN_00460c50(iVar6);
          if ((iVar7 < 8) && (iVar7 = FUN_00460f20(iVar6,0x20), iVar7 == 0)) {
            FUN_00544a90(iVar6,puVar1 + 10,puVar1[0x13],puVar1[0x12]);
          }
        }
        iVar4 = FUN_00516af0("MC_List.fng");
        if (((iVar4 != 0) && (iVar4 = FUN_005b8550(0x47ff4e7c), iVar4 != 0)) &&
           (iVar4 = FUN_005b1360(0x13c37b), iVar4 != 0)) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
    else if ((param_2 == 0xeb29392a) && (*(int *)(param_1 + 0xe8) == 0x406415e3)) {
      FUN_00527370(*(undefined4 *)(param_1 + 0x10),0x406415e3);
      *(undefined4 *)(param_1 + 0xe8) = 0xeb29392a;
      return;
    }
  }
  *(uint *)(param_1 + 0xe8) = param_2;
  return;
}

