/* speed.exe 007ed02f FUN_007ed02f; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

uint FUN_007ed02f(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_007ec1bd();
  iVar3 = DAT_009bb13c;
  iVar2 = *(int *)(DAT_009bb13c + 0x50);
  iVar1 = iVar2 + 1;
  *(int *)(DAT_009bb13c + 0x50) = iVar1;
  if (iVar1 == 0x10000) {
    *(undefined4 *)(iVar3 + 0x50) = 1;
  }
  FUN_007ec1c8();
  return (param_1 - *(int *)(DAT_009bb13c + 0x98)) / 0x84 | iVar2 << 8;
}

