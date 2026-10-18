/* speed.exe 007fb060 FUN_007fb060; analysis pseudocode, not buildable source.
 * calls 007fab21 FUN_007fab21
 */

void FUN_007fb060(undefined2 *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_009c1238 == 0) {
    FUN_007fab21();
  }
  DAT_009c1840 = param_1 + 2;
  DAT_009c0a30 = CONCAT22(*param_1,param_1[1]);
  DAT_009bfe28 = 0x20;
  DAT_009c123c = param_2;
  DAT_009c0230 = ((uint)((longlong)DAT_0090a0cc * 0x80000) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_0090a0cc * 0x80000) >> 0x20) * 0x10000;
  iVar3 = 0;
  do {
    lVar1 = (longlong)(*(int *)((int)&DAT_008c374c + iVar3) * param_3 * 0x2000) *
            (longlong)*(int *)((int)&DAT_0090a0d0 + iVar3);
    uVar2 = (uint)lVar1;
    *(uint *)((int)&DAT_009c0234 + iVar3) =
         (uVar2 >> 0x10) + (int)((ulonglong)lVar1 >> 0x20) * 0x10000 +
         (uint)((uVar2 >> 0xf & 1) != 0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0xfc);
  return;
}

