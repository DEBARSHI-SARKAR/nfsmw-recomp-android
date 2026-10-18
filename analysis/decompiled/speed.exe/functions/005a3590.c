/* speed.exe 005a3590 FUN_005a3590; analysis pseudocode, not buildable source.
 * calls 00600ab0 FUN_00600ab0
 * calls 005996b0 FUN_005996b0
 * calls 005dce60 FUN_005dce60
 * calls 005dce50 FUN_005dce50
 * calls 00748170 FUN_00748170
 * calls 00739a70 FUN_00739a70
 * calls 005e9b80 FUN_005e9b80
 * calls 005e39e0 FUN_005e39e0
 * calls 005fb710 FUN_005fb710
 * calls 005e9a90 FUN_005e9a90
 * calls 005e9a70 FUN_005e9a70
 * calls 00603440 FUN_00603440
 * calls 00733bd0 FUN_00733bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3590(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_680 [784];
  undefined1 local_370 [876];
  
  uVar2 = FUN_005fb710(*(undefined4 *)(DAT_0091cf90 + 0x18c));
  iVar4 = DAT_0091cf90;
  DAT_00904ffc = 1;
  DAT_00904fb8 = 2000;
  _DAT_00904fbc = (uint)*(byte *)(DAT_0091cf90 + 0x191);
  _DAT_00904fc0 = 1;
  _DAT_00904fc4 = 0x3f000000;
  _DAT_00904fcc = 0;
  _DAT_00904fd0 = 0;
  if (*(int *)(DAT_0091cf90 + 0x168) == 1) {
    DAT_00904fd8 = (uint)*(byte *)(DAT_0091cf90 + 400);
  }
  else {
    DAT_00904fd8 = 1;
  }
  DAT_00904fdc = 1;
  DAT_00904fe0 = 0;
  DAT_00904fee = 1;
  _DAT_00905014 = 0;
  _DAT_0090500c = 0;
  DAT_00904fec = 1;
  DAT_00905008 = -(uint)(*(char *)(DAT_0091cf90 + 0x192) != '\0') & 9;
  DAT_00904fed = 2;
  _DAT_0090501c = 0x3f800000;
  _DAT_00905020 = 0x3f800000;
  _DAT_00905030 = 0;
  iVar3 = 0;
  do {
    (&DAT_00905000)[iVar3] = (int)*(char *)(iVar4 + 0xc + iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < DAT_00904fdc);
  iVar4 = 0;
  if (0 < DAT_00904fdc) {
    do {
      FUN_00739a70(0xffffffff,0,0,0);
      FUN_005996b0(iVar4,local_680);
      FUN_00748170(iVar4,1,local_680,"Free Roamer",0xfffffffe,0,(int)(char)(&DAT_00904fec)[iVar4]);
      FUN_00733bd0(local_370);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00904fdc);
  }
  uVar2 = FUN_00603440(uVar2);
  FUN_005dce60(0);
  FUN_005e9b80(0);
  FUN_005e9a90(0);
  if (*(int *)(DAT_0091cf90 + 0x168) == 1) {
    uVar1 = *(undefined1 *)(DAT_0091cf90 + 400);
  }
  else {
    uVar1 = 1;
  }
  FUN_005e9a70(uVar1);
  FUN_005dce50(*(char *)(DAT_0091cf90 + 0x191) != '\0');
  FUN_00600ab0(uVar2,1);
  FUN_005e39e0(uVar2);
  return;
}

