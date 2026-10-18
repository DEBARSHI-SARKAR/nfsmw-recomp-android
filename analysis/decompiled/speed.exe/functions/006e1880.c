/* speed.exe 006e1880 FUN_006e1880; analysis pseudocode, not buildable source.
 * calls 004fd070 FUN_004fd070
 * calls 007ecbbe FUN_007ecbbe
 * calls 007ecc44 FUN_007ecc44
 * calls 006ddd90 FUN_006ddd90
 * calls 007e9320 FUN_007e9320
 * calls 007f996a FUN_007f996a
 * calls 007e9b30 FUN_007e9b30
 * calls 007eada0 FUN_007eada0
 * calls 007eb150 FUN_007eb150
 */

void FUN_006e1880(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_3c;
  
  *param_1 = (int)&DAT_00983e40;
  DAT_00982d1c = param_1;
  if (DAT_00982d18 == 0) {
    iVar3 = FUN_007e9320();
    uVar1 = *(undefined4 *)(iVar3 + 0x18);
    iVar3 = FUN_007e9320();
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    FUN_007e9b30();
    local_bc = 2;
    local_ac = FUN_007eb150(0x20);
    local_bc = local_bc | 0x80;
    local_98 = 0;
    local_3c = 0x40;
    local_a8 = uVar1;
    local_a4 = uVar2;
    DAT_00982d18 = FUN_007eada0(local_c0,0x400);
    FUN_007f996a();
  }
  if (*(int *)(DAT_00982d18 + 8) == 0) {
    local_c4 = 0;
  }
  else {
    local_c4 = *(int *)(DAT_00982d18 + 8) + DAT_00982d18;
  }
  iVar3 = FUN_007e9320();
  uVar1 = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_007e9320();
  FUN_004fd070("MovieTexture",local_c4,uVar1,*(undefined4 *)(iVar3 + 0x1c),0x20,0,0,0,0,0);
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x14) = 0x15;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  FUN_007ecbbe();
  FUN_007ecc44();
  FUN_006ddd90();
  return;
}

