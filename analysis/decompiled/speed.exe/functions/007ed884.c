/* speed.exe 007ed884 FUN_007ed884; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ecc6d FUN_007ecc6d
 * calls 007ed010 FUN_007ed010
 * calls 007ee477 FUN_007ee477
 */

void __fastcall FUN_007ed884(int param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar2 = FUN_007ed010(*(undefined4 *)(param_1 + 0xc));
  FUN_007ec1bd();
  local_8 = 0;
  iVar1 = *(int *)(iVar2 + 0x10);
  while ((iVar1 != 0 &&
         (((uint)*(byte *)(iVar1 + 0x12) << 0x18 | *(uint *)(iVar1 + 0xc) & 0xffff00) <=
          ((uint)*(byte *)(param_1 + 0x12) << 0x18 | *(uint *)(param_1 + 0xc) & 0xffff00)))) {
    local_8 = iVar1;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8) + -8;
    }
  }
  FUN_007ee477(local_8,param_1);
  FUN_007ec1c8();
  FUN_007ecc6d(iVar2 + 0x44);
  return;
}

