/* speed.exe 007a34f0 FUN_007a34f0; analysis pseudocode, not buildable source.
 * calls 00581760 FUN_00581760
 * calls 00524a10 FUN_00524a10
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00524920 FUN_00524920
 * calls 00503400 FUN_00503400
 * calls 00515b90 FUN_00515b90
 * calls 005251a0 FUN_005251a0
 * calls 00576f10 FUN_00576f10
 * calls 00573140 FUN_00573140
 * calls 00524850 FUN_00524850
 * calls 007c4b80 FUN_007c4b80
 * calls 00525220 FUN_00525220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a34f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    return;
  }
  if ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) != 0) {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
    FUN_00525220(*(undefined4 *)(param_1 + 0x14),0xb94139f4,0x2b65a216);
    FUN_00524920(*(undefined4 *)(param_1 + 0x14),0x64f3a49c,0x16a259,1);
  }
  else {
    iVar2 = FUN_00503400(*(undefined4 *)(param_1 + 0x10),0,0);
    if (iVar2 != 0) {
      FUN_00524920(*(undefined4 *)(param_1 + 0x14),0xbc7b91f,0x6ebbfb68,1);
      FUN_00524920(*(undefined4 *)(param_1 + 0x14),0x64f3a49c,0x5079c8f8,1);
      uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x14),0xce18427d,
                           *(undefined4 *)(param_1 + 0x10));
      FUN_00515b90(uVar3);
      uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x14),0x5b8f2a45,
                           *(undefined4 *)(param_1 + 0x10));
      FUN_00515b90(uVar3);
    }
    FUN_00581760();
    iVar2 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4);
    iVar4 = FUN_00576f10(0x15,0);
    if ((*(char *)(*(int *)(param_1 + 4) + 4) == '\x04') && (iVar5 = FUN_007c4b80(), iVar5 <= iVar2)
       ) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x14),0xb94139f4,0x281dee8a);
    }
    else if (iVar4 < 1) {
      FUN_00525220(*(undefined4 *)(param_1 + 0x14),0xb94139f4,0x2b65a216);
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + 0x14),0xb94139f4,0xf9c73cc2);
    }
  }
  if (*(char *)(*(int *)(param_1 + 4) + 3) < '\0') {
    cVar1 = *(char *)(*(int *)(param_1 + 4) + 4);
    if ((cVar1 != '\x04') && (cVar1 == '\0')) {
      FUN_00524920(*(undefined4 *)(param_1 + 0x14),0xbc7b91f,0x16a259,1);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x14),0x75721326);
      FUN_00514c70(uVar3);
      FUN_00525220(*(undefined4 *)(param_1 + 0x14),0xb94139f4,0x2b65a216);
      return;
    }
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x14),0x75721326);
    FUN_00514c70(uVar3);
    return;
  }
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x14),0x75721326);
  FUN_00514cc0(uVar3);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 2);
  uVar3 = 0x16a259;
  uVar7 = 1;
  uVar6 = 0x16a259;
  if (cVar1 == '\x04') {
    uVar7 = 2;
    uVar6 = 0x16a259;
  }
  else {
    if (cVar1 != '\x05') goto LAB_007a36ce;
    uVar7 = 3;
    uVar6 = 0x1ca7c0;
  }
  uVar3 = 0x1ca7c0;
LAB_007a36ce:
  FUN_00524920(*(undefined4 *)(param_1 + 0x14),0x5bc78037,uVar3,1);
  FUN_00524920(*(undefined4 *)(param_1 + 0x14),0x48095518,uVar6,1);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = FUN_00573140("POS%d",uVar7,1);
  FUN_00524920(uVar3,0xf9a5ce86,uVar6);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = FUN_00573140("POS%d",uVar7,1);
  FUN_00524920(uVar3,0xebf0016e,uVar6);
  if (*(int *)(param_1 + 0xc) == 1) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = FUN_00573140("IMPOUND_STATE_%d",(int)*(char *)(*(int *)(param_1 + 4) + 3),0x5a8e4ebe,1);
    FUN_00524920(uVar3,uVar6);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar2 = 1;
  if (*(char *)(*(int *)(param_1 + 4) + 2) != '\0') {
    do {
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (*(char *)(*(int *)(param_1 + 4) + 3) < iVar2) {
        uVar6 = 0x16a259;
LAB_007a37c2:
        uVar6 = FUN_00573140("IMPOUND_STATE_%d",iVar2,uVar6,1);
        FUN_00524920(uVar3,uVar6);
      }
      else {
        uVar6 = FUN_00573140("IMPOUND_STATE_%d",iVar2,0x5a8e4ebe);
        cVar1 = FUN_00524a10(uVar3,uVar6);
        if (cVar1 == '\0') {
          uVar3 = *(undefined4 *)(param_1 + 0x14);
          uVar6 = 0x1ca7c0;
          goto LAB_007a37c2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)(uint)*(byte *)(*(int *)(param_1 + 4) + 2));
  }
  return;
}

