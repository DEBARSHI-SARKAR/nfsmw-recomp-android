/* speed.exe 004b6360 FUN_004b6360; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 004ae340 FUN_004ae340
 * calls 005cc240 FUN_005cc240
 * calls 00405da0 FUN_00405da0
 * calls 004b6310 FUN_004b6310
 */

void FUN_004b6360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_004b6310(param_1,param_2);
  if (iVar1 != -1) {
    uVar2 = FUN_005cc240("PartUpdate");
    iVar3 = FUN_004ae340(iVar1);
    *(undefined4 *)(iVar3 + 4) = uVar2;
    FUN_0065faf0();
  }
  uVar2 = FUN_005cc240("PartUpdate");
  iVar1 = FUN_00405da0(0,0,0,iVar1);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  FUN_0065faf0();
  if (((DAT_009121d8 != 0) && (param_1 == *(int *)(DAT_009121d8 + 0x28))) &&
     ((*(byte *)(DAT_009121d8 + 8) & 4) != 0)) {
    *(undefined4 *)(DAT_009121d8 + 0x34) = param_2;
  }
  if (((DAT_009121dc != 0) && (param_1 == *(int *)(DAT_009121dc + 0x28))) &&
     ((*(byte *)(DAT_009121dc + 8) & 4) != 0)) {
    *(undefined4 *)(DAT_009121dc + 0x34) = param_2;
  }
  if (((DAT_009121e0 != 0) && (param_1 == *(int *)(DAT_009121e0 + 0x28))) &&
     ((*(byte *)(DAT_009121e0 + 8) & 4) != 0)) {
    *(undefined4 *)(DAT_009121e0 + 0x34) = param_2;
  }
  if (((DAT_009121e4 != 0) && (param_1 == *(int *)(DAT_009121e4 + 0x28))) &&
     ((*(byte *)(DAT_009121e4 + 8) & 4) != 0)) {
    *(undefined4 *)(DAT_009121e4 + 0x34) = param_2;
  }
  return;
}

