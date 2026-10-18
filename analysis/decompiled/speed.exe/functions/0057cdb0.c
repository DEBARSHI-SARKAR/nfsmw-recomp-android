/* speed.exe 0057cdb0 FUN_0057cdb0; analysis pseudocode, not buildable source.
 * calls 005793f0 FUN_005793f0
 */

void __thiscall FUN_0057cdb0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 ^ *(uint *)(param_1 + 0x1c);
  uVar2 = param_2 ^ *(uint *)(param_1 + 0x18);
  if ((*(int *)(param_1 + 0x2c0) != 0) && ((uVar2 & 0x8000000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2c4) != 0) && ((uVar2 & 2) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2c8) != 0) && ((uVar2 & 2) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2cc) != 0) && ((uVar2 & 0x20000000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2dc) != 0) && ((uVar2 & 0x20000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2e0) != 0) && ((uVar2 & 0x40) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2e4) != 0) && ((uVar2 & 0x800) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2e8) != 0) && ((uVar2 & 0x40000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2d8) != 0) && ((uVar2 & 0x4000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 800) != 0) && ((uVar2 & 0x10000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x324) != 0) && ((uVar2 & 0x200) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x328) != 0) && ((uVar2 & 0x400000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2f8) != 0) && ((uVar2 & 0x4000000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2fc) != 0) && (((uVar2 & 8) != 0 || ((uVar2 & 0x10) != 0)))) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x300) != 0) && ((uVar2 & 0x100000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x304) != 0) && ((uVar1 & 4) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x308) != 0) && ((uVar2 & 0x800000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x30c) != 0) && ((uVar2 & 0x2000000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2d0) != 0) && ((uVar2 & 0x1000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2d4) != 0) && ((uVar2 & 0x1000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x310) != 0) && ((uVar2 & 0x20) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2ec) != 0) && ((uVar2 & 4) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x2f0) != 0) && ((uVar2 & 0x1000000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x31c) != 0) && ((uVar2 & 0x200000) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x318) != 0) && ((uVar2 & 0x400) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  if ((*(int *)(param_1 + 0x32c) != 0) && ((uVar1 & 2) != 0)) {
    FUN_005793f0(param_2,param_3);
  }
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x1c) = param_3;
  return;
}

