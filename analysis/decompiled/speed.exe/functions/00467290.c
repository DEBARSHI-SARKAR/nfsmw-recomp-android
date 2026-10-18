/* speed.exe 00467290 FUN_00467290; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00467290(undefined4 param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_007c4b80(param_1);
  uVar1 = FUN_007c4b80();
  uVar3 = uVar1 << 0xd ^ uVar1;
  uVar2 = uVar1 + 1 ^ (uVar1 + 1) * 0x2000;
  return ((float10)_DAT_0089096c -
         (float10)((uVar2 * uVar2 * 0x3d73 + 0xc0ae5) * uVar2 + 0xd208dd0d & 0x7fffffff) *
         (float10)_DAT_00894968) * ((float10)param_2 - (float10)(int)uVar1) +
         ((float10)_DAT_0089096c - ((float10)param_2 - (float10)(int)uVar1)) *
         ((float10)_DAT_0089096c -
         (float10)((uVar3 * uVar3 * 0x3d73 + 0xc0ae5) * uVar3 + 0xd208dd0d & 0x7fffffff) *
         (float10)_DAT_00894968);
}

