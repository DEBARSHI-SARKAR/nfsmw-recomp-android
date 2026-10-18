/* speed.exe 0082c400 FUN_0082c400; analysis pseudocode, not buildable source.
 * calls 0082efb0 FUN_0082efb0
 */

int FUN_0082c400(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  iVar1 = *(int *)(DAT_009c2964 + 0xc0 + param_1 * 4);
  local_8 = 0;
  if (DAT_009c2980 < *(uint *)(iVar1 + 8)) {
    return 0;
  }
  uVar4 = *(uint *)(iVar1 + 0x10) & 0xff;
  if (uVar4 < *(byte *)(iVar1 + 0xf)) {
    iVar3 = iVar1 + 0x14 + uVar4 * 0xc;
    do {
      if ((-1 < (char)((uint)*(undefined4 *)(iVar3 + 4) >> 8)) &&
         (iVar2 = FUN_0082efb0(iVar1,iVar3), iVar2 == 0)) {
        return local_8;
      }
      local_8 = local_8 + 1;
      *(char *)(iVar1 + 0x10) = *(char *)(iVar1 + 0x10) + '\x01';
      *(uint *)(iVar1 + 8) = DAT_009c2980;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < *(byte *)(iVar1 + 0xf));
  }
  return local_8;
}

