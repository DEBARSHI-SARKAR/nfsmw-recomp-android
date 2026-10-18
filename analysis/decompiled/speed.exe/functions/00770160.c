/* speed.exe 00770160 FUN_00770160; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 __thiscall FUN_00770160(int *param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_007c4b80();
  iVar2 = FUN_007c4b80();
  iVar3 = FUN_007c4b80();
  iVar4 = 1 << (param_3 & 0x1f);
  iVar1 = ((param_1[1] - iVar2) + iVar4 | (param_1[2] - iVar3) + iVar4 | (*param_1 - iVar1) + iVar4)
          >> (param_3 + 1 & 0x1f);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}

