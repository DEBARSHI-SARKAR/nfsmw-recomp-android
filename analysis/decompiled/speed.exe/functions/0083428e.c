/* speed.exe 0083428e FUN_0083428e; analysis pseudocode, not buildable source.
 * calls 00831c0c FUN_00831c0c
 */

undefined4 __thiscall FUN_0083428e(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *local_8;
  
  uVar5 = (uint)(*(byte *)(param_1 + 8) >> 4);
  if (uVar5 != 0) {
    bVar1 = *(byte *)(in_EAX + 2);
    iVar3 = FUN_00831c0c(param_1);
    iVar4 = 0;
    if (uVar5 != 0) {
      local_8 = (byte *)(iVar3 + 1);
      do {
        uVar2 = *(uint *)(((bVar1 >> 2) + 3 & 0xfffffffc) + 8 + in_EAX + iVar4 * 4);
        if ((uVar2 != 0) && ((*(uint *)(param_2 + (uint)*local_8 * 4) & uVar2) == 0)) {
          return 0;
        }
        local_8 = local_8 + 3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar5);
    }
  }
  return 1;
}

